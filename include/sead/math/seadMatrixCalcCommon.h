#ifndef SEAD_MATRIXCALCCOMMON_H_
#define SEAD_MATRIXCALCCOMMON_H_

#include <math/seadVector.h>

namespace sead {

template <typename T>
class Matrix22CalcCommon
{
public:
    typedef typename Policies<T>::Mtx22Base Base;

public:
    static void makeIdentity(Base& o);
    static void makeZero(Base& o);

    static void copy(Base& o, const Base& n);
    static void inverse(Base& o, const Base& n);
    static void inverseTranspose(Base& o, const Base& n);
    static void multiply(Base& o, const Base& a, const Base& b);
    static void transpose(Base& o);
    static void transposeTo(Base& o, const Base& n);
};

template <typename T>
class Matrix33CalcCommon
{
public:
    typedef typename Policies<T>::Mtx33Base Base;
    typedef typename Policies<T>::Mtx34Base Mtx34;

    typedef typename Policies<T>::QuatBase Quat;
    typedef typename Policies<T>::Vec3Base Vec3;

public:
    static void makeIdentity(Base& o);
    static void makeZero(Base& o);

    static void copy(Base& o, const Base& n);
    static void copy(Base& o, const Mtx34& n);
    static void inverse(Base& o, const Base& n);
    static void inverseTranspose(Base& o, const Base& n);
    static void multiply(Base& o, const Base& a, const Base& b);
    static void multiply(Base& o, const Mtx34& a, const Base& b);
    static void multiply(Base& o, const Base& a, const Mtx34& b);
    static void transpose(Base& o);
    static void transposeTo(Base& o, const Base& n);

    static void makeQ(Base& o, const Quat& q);
    static void makeR(Base& o, const Vec3& r);
    static void makeRIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void makeRzxyIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void makeS(Base& o, const Vec3& s);
    static void makeSR(Base& o, const Vec3& s, const Vec3& r);
    static void makeSRIdx(Base& o, const Vec3& s, const Vector3<u32>& r);
    static void makeSRzxyIdx(Base& o, const Vec3& s, const Vector3<u32>& r);
    static void toQuat(Quat& q, const Base& n);
};

template <typename T>
class Matrix34CalcCommon
{
public:
    typedef typename Policies<T>::Mtx34Base Base;
    typedef typename Policies<T>::Mtx33Base Mtx33;
    typedef typename Policies<T>::Mtx44Base Mtx44;

    typedef typename Policies<T>::QuatBase Quat;
    typedef typename Policies<T>::Vec3Base Vec3;
    typedef typename Policies<T>::Vec4Base Vec4;

public:
    static void makeIdentity(Base& o);
    static void makeZero(Base& o);

    static void copy(Base& o, const Base& n);
    static void copy(Base& o, const Mtx33& n, const Vec3& t);
    static void copy(Base& o, const Mtx44& n);
    static void inverse(Base& o, const Base& n);
    static void inverse33(Base& o, const Base& n);
    static void inverseTranspose(Base& o, const Base& n);
    static void multiply(Base& o, const Base& a, const Base& b);
    static void multiply(Base& o, const Mtx33& a, const Base& b);
    static void multiply(Base& o, const Base& a, const Mtx33& b);
    static void transpose(Base& o);
    static void transposeTo(Base& o, const Base& n);

    static void makeQ(Base& o, const Quat& q);
    static void makeR(Base& o, const Vec3& r);
    static void makeRIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void makeRT(Base& o, const Vec3& r, const Vec3& t);
    static void makeRTIdx(Base& o, const Vector3<u32>& r, const Vec3& t);
    static void makeRzxyIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void makeRzxyTIdx(Base& o, const Vector3<u32>& r, const Vec3& t);
    static void makeS(Base& o, const Vec3& s);
    static void makeSR(Base& o, const Vec3& s, const Vec3& r);
    static void makeSRIdx(Base& o, const Vec3& s, const Vector3<u32>& r);
    static void makeSRT(Base& o, const Vec3& s, const Vec3& r, const Vec3& t);
    static void makeSRTIdx(Base& o, const Vec3& s, const Vector3<u32>& r, const Vec3& t);
    static void makeSRzxyIdx(Base& o, const Vec3& s, const Vector3<u32>& r);
    static void makeSRzxyTIdx(Base& o, const Vec3& s, const Vector3<u32>& r, const Vec3& t);
    static void makeST(Base& o, const Vec3& s, const Vec3& t);
    static void makeT(Base& o, const Vec3& t);
    static void toQuat(Quat& q, const Base& n);

    static void getBase(Vec3& v, const Base& n, s32 axis);
    static void getRow(Vec4& v, const Base& n, s32 row);
    static void getTranslation(Vec3& v, const Base& n);

    static void scaleAllElements(Base& n, T s);
    static void scaleBases(Base& n, T sx, T sy, T sz);
    static void setBase(Base& n, s32 axis, const Vec3& v);
    static void setRow(Base& n, const Vec4& v, s32 row);
    static void setTranslation(Base& n, const Vec3& v);
};

template <typename T>
class Matrix44CalcCommon
{
public:
    typedef typename Policies<T>::Mtx44Base Base;
    typedef typename Policies<T>::Mtx33Base Mtx33;
    typedef typename Policies<T>::Mtx34Base Mtx34;

    typedef typename Policies<T>::QuatBase Quat;
    typedef typename Policies<T>::Vec3Base Vec3;
    typedef typename Policies<T>::Vec4Base Vec4;

public:
    static void makeIdentity(Base& o);
    static void makeZero(Base& o);

    static void copy(Base& o, const Base& n);
    static void copy(Base& o, const Mtx33& n, const Vec3& t, const Vec4& v);
    static void copy(Base& o, const Mtx34& n, const Vec4& v);
    static void inverse(Base& o, const Base& n);
    static void inverseTranspose(Base& o, const Base& n);
    static void multiply(Base& o, const Base& a, const Base& b);
    static void multiply(Base& o, const Mtx34& a, const Base& b);
    static void multiply(Base& o, const Base& a, const Mtx34& b);
    static void transpose(Base& o);
    static void transposeTo(Base& o, const Base& n);

    static void makeQ(Base& o, const Quat& q);
    static void makeR(Base& o, const Vec3& r);
    static void makeRIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void makeRzxyIdx(Base& o, u32 xr, u32 yr, u32 zr);
    static void toQuat(Quat& q, const Base& n);

    static void getCol(Vec4& v, const Base& n, s32 axis);
    static void getRow(Vec4& v, const Base& n, s32 row);

    static void scaleAllElements(Base& n, T s);
    static void scaleBases(Base& n, T sx, T sy, T sz, T sw);
    static void setCol(Base& n, s32 axis, const Vec4& v);
    static void setRow(Base& n, const Vec4& v, s32 row);
};

}  // namespace sead

#ifdef __cplusplus

#include <math/seadMatrixCalcCommon.hpp>

#endif // __cplusplus

#endif // SEAD_MATRIXCALCCOMMON_H_
