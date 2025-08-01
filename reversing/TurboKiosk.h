/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'TurboKiosk'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct UIHeap;
struct UIEngineArg;
struct UIPageManager;
struct UIAnimation;
struct GroupAnimator;
struct al::ByamlNodeArray;

/* 1 */
struct __va_list_tag
{
  unsigned __int8 gpr;
  unsigned __int8 fpr;
  char *overflow_arg_area;
  char *reg_save_area;
};

/* 2 */
typedef __va_list_tag va_list[1];

/* 3 */
struct _c;

/* 5 */
struct ui::UILoaderEx;

/* 6 */
struct object::ObjectEngineCollection;

/* 7 */
struct _Q2_3enl12SimpleIDInfo;

/* 8 */
struct _f;

/* 9 */
struct _PQ2_5audio15AudSoundObjBase;

/* 10 */
struct object::MuLapPathAccessor;

/* 11 */
struct _Q2_6object8MuMapObj;

/* 12 */
struct _Ui;

/* 13 */
struct object::MapObjDirector;

/* 14 */
struct _Q2_6object10MapObjBase;

/* 15 */
struct _Q2_3net18ENetworkTaskResult;

/* 16 */
struct _Sc;

/* 17 */
struct _Us;

/* 18 */
struct object::DriverModelResource;

/* 19 */
struct object::DriverSEResource;

/* 20 */
struct object::BodyModelResource;

/* 21 */
struct object::TireResource;

/* 22 */
struct object::ArmModelResource;

/* 23 */
struct object::WingModelResource;

/* 24 */
struct sys::EngineHolder;

/* 25 */
struct _XCiL_2_64;

/* 26 */
struct _w;

/* 27 */
struct _XCiL_2_32;

/* 28 */
struct _i;

/* 29 */
struct nw::g3d::fnd::GfxBlendCtrl;

/* 30 */
struct FFLiResourceManager;

/* 31 */
struct FFLiResourceCache;

/* 32 */
struct sead::ControllerMgr;

/* 33 */
struct sead::AudioSystemCafe::MultiThreadParam;

/* 34 */
struct agl::utl::IParameterList;

/* 35 */
struct agl::ShaderProgram;

/* 36 */
struct agl::ResShaderProgram;

/* 37 */
struct agl::ResBinaryShaderProgram;

/* 38 */
struct agl::env::EnvObjSet::Ref;

/* 39 */
struct gsys::ModelSceneShadow::ProjectionShadowInfo;

/* 40 */
struct _Q2_4gsys10ModelScene;

/* 41 */
struct gsys::ModelShader;

/* 42 */
struct gsys::SystemTask;

/* 43 */
struct gsys::G3dResMaterialEx;

/* 44 */
struct _fXCiL_2_27;

/* 45 */
struct _Q2_4gsys15MaterialAnmType;

/* 46 */
struct gsys::ModelAnimation;

/* 47 */
struct gsys::G3dResShapeEx;

/* 48 */
struct gsys::ShaderContext;

/* 49 */
struct nw::eft::RenderContext;

/* 50 */
struct nn::ngc::RegexMatch;

/* 51 */
struct _Q2_3enl12EventRequest;

/* 52 */
struct _Q3_2nn3nex10StationURL;

/* 53 */
struct _PQ3_2nn3nex19TransportBufferInfo;

/* 54 */
struct nn::nex::StationManager;

/* 55 */
struct nn::nex::DuplicatedObject;

/* 56 */
struct nn::nex::DOSelections;

/* 57 */
struct nn::pia::inet::NatProbe;

/* 58 */
struct nn::pia::session::ProcessUpdateSessionJob;

/* 59 */
struct nn::pia::session::Session;

/* 60 */
struct nn::pia::transport::PacketAnalysisData;

/* 61 */
struct nn::pia::transport::StationManager;

/* 62 */
struct nn::pia::transport::StationProtocolReliable;

/* 63 */
struct _Q3_2nw2ut8HeapBaseXClL_1_0;

/* 64 */
struct _UcUi;

/* 65 */
struct _Q2_3sys12ResourceHash;

/* 66 */
struct _Q2_6object8Recorder;

/* 67 */
struct _Uc;

/* 68 */
struct FFLiResourceLoader;

/* 69 */
struct agl::lyr::Renderer;

/* 70 */
struct _Q2_3enl19IContentTransporter;

/* 71 */
struct nn::pia::transport::RttProtocol;

/* 72 */
struct _fXCiL_2_10;

/* 73 */
struct _Q2_4gsys15SkeletalAnmType;

/* 74 */
struct sys::ContentsManager;

/* 75 */
struct sys::FlagAccessor;

/* 76 */
struct nw::font::Font;

/* 77 */
struct _Q3_2nn3ngc13RegexNfaState;

/* 78 */
struct _Q3_2nn3ngc13RegexDfaState;

/* 79 */
struct _PQ3_2nn3nex6Packet;

/* 80 */
struct _b;

/* 81 */
struct mii::MiiDirector;

/* 82 */
struct _Q3_2nn3ngc10RegexToken;

/* 83 */
struct _UiXCiL_3_100;

/* 84 */
struct _XCiL_3_256;

/* 85 */
struct _UcXCiL_6_153644;

/* 86 */
struct ui::UICourseTex;

/* 87 */
struct object::MapObjParameter;

/* 88 */
struct _Z1ZZ2ZZ3Z;

/* 89 */
struct _Q3_2nn3nex30MatchmakeSessionSearchCriteria;

/* 90 */
struct agl::pfx::ColorCorrection;

/* 91 */
struct nn::nex::Scheduler;

/* 92 */
struct _Uss;

/* 93 */
struct _UiUi;

/* 94 */
struct _Q3_2nn3nex4DataQ3_2nn3nex6String;

/* 95 */
struct _Q3_2nn3nex14ConnectionData;

/* 96 */
struct _Q3_2nn3nex20SimplePlayingSession;

/* 97 */
struct _Q3_2nn3nex18SimpleSearchObject;

/* 98 */
struct _Q3_2nn3nex6String;

/* 99 */
struct _Q3_2nn3nex29DataStoreFileServerObjectInfo;

/* 100 */
struct _Q3_2nn3nex22CompetitionRankingInfo;

/* 101 */
struct _Q3_2nn3nex8DOHandle;

/* 102 */
struct _Q3_2nn3nex7Station;

/* 103 */
struct _Q3_2nn3nex16DuplicatedObject;

/* 104 */
struct agl::sdw::StaticDepthShadow;

/* 105 */
struct agl::sdw::ShadowMap;

/* 106 */
struct agl::sdw::DepthShadow;

/* 107 */
struct object::KartMenuController;

/* 108 */
struct enl::Framework;

/* 109 */
typedef int BOOL;

/* 110 */
struct sead::PtrArray
{
  int mPtrNum;
  void **mPtrs;
};

/* 111 */
struct sead::PtrArrayImpl
{
  int mPtrNum;
  int mPtrNumMax;
  void **mPtrs;
};

/* 112 */
struct sead::ListImpl
{
  void *mPrev;
  void *mNext;
  int mCount;
};

/* 113 */
struct PTMF
{
  int vtable;
  int instance;
  __int16 field_8;
  __int16 field_A;
  int funcPtr;
};

/* 114 */
struct ui::StateInfo
{
  _DWORD field_00;
  _DWORD state;
  _DWORD field_08;
  _DWORD field_0C;
  PTMF func;
  char field_20;
  char field_21;
  char field_22;
  char field_23;
};

/* 115 */
struct WeirdList
{
  bool hasLayout;
  char unk[3];
  sead::PtrArrayImpl array;
};

/* 116 */
struct UnkStruct2
{
  _DWORD field_00;
  _DWORD field_04;
};

/* 117 */
struct LoaderStruct1
{
  int field_00;
  int field_04;
  int field_08;
  int field_0C;
  int field_10;
};

/* 118 */
struct __attribute__((aligned(4))) UILoader
{
  UIHeap *heap;
  int dependentGroups[5];
  int numDependentGroups;
  LoaderStruct1 s1;
  LoaderStruct1 s2;
  sead::ListImpl list1;
  sead::ListImpl list2;
  int field_5C;
  int field_60;
  int resourceAccessor;
  int vtable;
};

/* 119 */
struct UIHeap
{
  int heap;
  UILoader *loader;
  int smallestLytId;
  int highestLytId;
  char adjustHeap;
  char initializePending;
  char field_12;
  char field_13;
  int drawer;
  int layoutList;
  char isInitialized;
  char field_1D;
  char field_1E;
  char field_1F;
  int groupId;
  int vtable;
};

/* 120 */
struct UIPage
{
  _DWORD field_00;
  int PageID;
  UIHeap *heap;
  UILoader *loader;
  char field_10;
  char field_11;
  char field_12;
  char field_13;
  _DWORD field_14;
  char field_18;
  char field_19;
  char field_1A;
  char field_1B;
  WeirdList list1;
  WeirdList list2;
  _DWORD field_3C;
  sead::PtrArray animators;
  _DWORD field_48;
  ui::StateInfo state;
  char field_70;
  char field_71;
  char field_72;
  char field_73;
  _DWORD field_74;
  _DWORD field_78;
  _DWORD field_7C;
  _DWORD field_80;
  _DWORD field_84;
  UnkStruct2 struct2;
  _DWORD field_90;
  sead::PtrArrayImpl array;
  _DWORD field_A0;
  _DWORD field_A4;
  _DWORD field_A8;
  _DWORD field_AC;
  _DWORD field_B0;
  _DWORD field_B4;
  _DWORD field_B8;
  _DWORD field_BC;
  char field_C0;
  char field_C1;
  char field_C2;
  char field_C3;
  int vtable;
};

/* 121 */
struct ui::UILoader;

/* 122 */
struct sead::MessageSetBase;

/* 123 */
struct NewLinkedList
{
  _DWORD size;
  void *mPrev;
  void *mNext;
};

/* 125 */
struct MultiArcResourceAccessor
{
  int vtable;
  NewLinkedList array1;
  NewLinkedList array2;
  NewLinkedList array3;
};

/* 126 */
struct UIResourceAccessor
{
  MultiArcResourceAccessor mArcRA;
  UILoader *loader;
};

/* 127 */
struct sead::SafeStringBase
{
  const char *mStr;
  int mVtable;
};

/* 128 */
struct sead::HeapMgr;

/* 129 */
struct ui::UITagProcessor;

/* 130 */
struct ui::Control_RaceLapCoin;

/* 131 */
struct ui::Control_RaceRank;

/* 132 */
struct ui::Control_RaceTelop;

/* 133 */
struct ui::Control_RaceBackAlarm;

/* 134 */
struct ui::Control_RaceBattleScore;

/* 135 */
struct ui::Control_RaceTimer;

/* 136 */
struct ui::Control_RaceBattleTimer;

/* 137 */
struct ui::Control_Fader;

/* 138 */
struct __attribute__((aligned(4))) UIEngine
{
  UIEngineArg *args;
  int UIGraphics;
  int screenmanager;
  int UIHeapManager;
  UIPageManager *pageManager;
  int uiplayermanager;
  int fontTagProcessor;
  int sysHeap;
  int rootHeap;
  int obj0xBC;
  char field_28;
  char field_29;
  char field_2A;
  char field_2B;
  int field_2C;
  int field_30;
  int field_34;
  int field_38;
  int field_3C;
  int field_40;
  int field_44;
  int field_48;
  int field_4C;
  int field_50;
  int UICursorSelector;
  sead::PtrArrayImpl array;
  int arrayBuf[16];
  int vtable;
};

/* 140 */
struct __attribute__((aligned(4))) UIEngineArg
{
  int field00;
  int field04;
  int field08;
  int field0C;
  int field10;
  int field14;
  int field18;
  const char *shader_lyt_path;
  const char *shader_font_path;
  int field24;
};

/* 141 */
struct FixedArray
{
  int mLen;
  void *mPtr;
};

/* 143 */
struct __attribute__((aligned(4))) WeirdStructPageMgr
{
  bool isInitialized;
  bool unk1;
  bool unk2;
  bool unk3;
  sead::PtrArrayImpl array;
};

/* 142 */
struct __attribute__((aligned(4))) UIPageManager
{
  FixedArray layouts;
  WeirdStructPageMgr array0;
  sead::PtrArrayImpl unk1;
  int currentFocusedPage;
  int field28;
  int field2C;
  int field30;
  int field34;
  char field38;
  char field39;
  char field3A;
  char field3B;
};

/* 139 */
struct ui::UIEngine;

/* 144 */
struct ui::UICursor;

/* 145 */
struct ui::Page_Lyt_CharaParts;

/* 146 */
struct ui::Page_TitleTop;

/* 147 */
struct ui::Flow_Go;

/* 148 */
struct ui::Page_Trial_TitleTop;

/* 149 */
struct ui::Page_Trial_TitleSelect;

/* 150 */
struct ui::Page_Trial_CharaS;

/* 151 */
struct ui::Page_Trial_CharaM;

/* 152 */
struct ui::Page_Trial_PartsS;

/* 153 */
struct ui::Page_Trial_PartsM;

/* 154 */
struct ui::Page_Trial_Course;

/* 155 */
struct ui::Flow_CrossFade;

/* 156 */
struct ui::Page_RaceStart;

/* 157 */
struct ui::Flow_Close;

/* 158 */
struct ui::Page_Trial_RaceStart;

/* 159 */
struct ui::Heap_Boot;

/* 160 */
struct ui::Heap_Menu;

/* 161 */
struct ui::Heap_MenuSub;

/* 162 */
struct ui::Heap_Race;

/* 163 */
struct ui::Heap_Award;

/* 164 */
struct ui::Heap_Credit;

/* 165 */
struct ui::Heap_Theater;

/* 166 */
struct object::RecorderDirector;

/* 167 */
struct object::ItemObjBase;

/* 168 */
struct object::MapObjItemBox;

/* 169 */
struct object::ItemObjStarDirector;

/* 170 */
struct nw::lyt::Pane;

/* 171 */
struct nw::lyt::internal::PaneBase;

/* 172 */
struct ui::UIPage;

/* 173 */
struct ui::Flow_Open;

/* 174 */
struct ui::UIControl;

/* 175 */
struct UIFlow
{
  int field_0;
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int vtable;
};

/* 176 */
struct __cppobj Flow_Open : UIFlow
{
  char field_1C[76];
  int field_68;
};

/* 177 */
struct ui::Control_CourseButton;

/* 178 */
struct sead::TickSpan;

/* 179 */
struct ui::Control_OnOffButton;

/* 180 */
struct ui::Control_MenuButton;

/* 181 */
struct ui::Control_PostButton;

/* 182 */
struct sys::EngineBase;

/* 183 */
struct sys::SystemEngine;

/* 184 */
struct ui::Control_RuleList;

/* 185 */
struct agl::DrawContextMgr;

/* 186 */
struct ui::UILayout;

/* 187 */
struct ui::Control_Credit;

/* 188 */
struct ui::Flow_Scene;

/* 189 */
struct ui::Input_Key;

/* 190 */
struct ui::Input_Timer;

/* 191 */
struct ui::UIFlow;

/* 192 */
struct ui::UISceneFlow;

/* 193 */
struct object::RecorderKey;

/* 194 */
struct object::KartVehicleBody;

/* 195 */
struct object::KartVehicle;

/* 196 */
struct object::ItemOwnerProxy;

/* 197 */
struct object::RecorderBool;

/* 198 */
struct nw::lyt::TextBox;

/* 199 */
struct ui::Flow_Reset;

/* 200 */
struct ui::Page_Credit;

/* 201 */
struct ui::Heap_Common;

/* 202 */
struct ui::UIPartsTex;

/* 203 */
struct ui::UICharaTex;

/* 204 */
struct ui::UIStampTex;

/* 205 */
struct ui::Page_Trial_Reset;

/* 206 */
struct ui::Page_Fader;

/* 207 */
struct ui::Page_FaderPause;

/* 208 */
struct ui::Page_FaderPlayer;

/* 209 */
struct ui::Page_Cursor;

/* 210 */
struct ui::Page_MenuUnder;

/* 211 */
struct ui::Page_Lyt_RuleList;

/* 212 */
struct ui::Flow_In;

/* 213 */
struct ui::Control_Button;

/* 214 */
struct sead::Heap;

/* 215 */
typedef int uint32_t;

/* 216 */
struct __attribute__((aligned(4))) UIControl
{
  int field_00;
  int field_04;
  UILoader *loader;
  UIControl *parentControl;
  int flags;
  int field_14;
  int field_18;
  int animatorCount;
  int animators;
  int field_24;
  sead::PtrArrayImpl array;
  int field_34;
  int field_38;
  int field_3C;
  int field_40;
  int field_44;
  int field_48;
  int field_4C;
  nw::lyt::Pane *pane;
  void *vtbl;
};

/* 218 */
struct __cppobj Control_Button : UIControl
{
  int field_58;
  int field_5C;
  int field_60;
  int vtable;
  int field_68;
  int field_6C;
  int field_70;
  int field_74;
  int field_78;
  int field_7C;
  int field_80;
  int field_84;
  int field_88;
  int field_8C;
  int field_90;
  int field_94;
  int field_98;
  int field_9C;
  int field_A0;
  int field_A4;
  int field_A8;
  int field_AC;
  int field_B0;
  int field_B4;
  int field_B8;
  int field_BC;
  int field_C0;
  int field_C4;
  int field_C8;
  int field_CC;
  int field_D0;
  int field_D4;
  int field_D8;
  int field_DC;
  int field_E0;
  int field_E4;
  int field_E8;
  int field_EC;
  int field_F0;
};

/* 217 */
struct __cppobj __attribute__((aligned(4))) Control_CourseButton : Control_Button
{
  int courseId;
  int classicNameTextPane;
  int courseNameTextPane;
  int courseMoviePane;
  int coursePictPane;
  char boolean;
  char field_109;
  char field_10A;
  char field_10B;
};

/* 219 */
struct ui::Input_Touch;

/* 220 */
struct sead::IDisposer;

/* 221 */
struct ui::UIThread;

/* 222 */
struct ui::UISearchRule;

/* 223 */
struct ui::Rule_Team;

/* 224 */
struct ui::Rule_Item;

/* 225 */
struct ui::Rule_Class;

/* 226 */
struct ui::Rule_COM;

/* 227 */
struct ui::Rule_Body;

/* 228 */
struct ui::Rule_Course;

/* 229 */
struct ui::Rule_NumRace;

/* 230 */
struct ui::Rule_Time;

/* 231 */
struct ui::Rule_NumBattle;

/* 232 */
struct ui::Rule_CompeMode;

/* 233 */
struct ui::Rule_CompeController;

/* 234 */
struct ui::Rule_CompeGroup;

/* 235 */
struct ui::Rule_CompeArea;

/* 236 */
struct ui::Rule_CompeVR;

/* 237 */
struct ui::Rule_CompeTerm;

/* 238 */
struct ui::Rule_CompeWeek;

/* 239 */
struct ui::Rule_CompeNumRace;

/* 240 */
struct ui::Rule_CompePublic;

/* 241 */
struct ui::Rule_PlayerPriority;

/* 242 */
struct ui::Rule_EventPriority;

/* 243 */
struct ui::Rule_TimeLength;

/* 244 */
struct ui::Page_TitleRace;

/* 245 */
struct ui::Page_WatchRace;

/* 246 */
struct ui::Page_RacePause;

/* 247 */
struct ui::Page_PostOlive;

/* 248 */
struct ui::Page_RaceNext;

/* 249 */
struct ui::Page_RaceRemake;

/* 250 */
struct ui::UIRule;

/* 251 */
struct GX2TextureDescription
{
  const void *textureImage;
  _DWORD width;
  _DWORD height;
  _DWORD format;
  _DWORD tileMode;
  _DWORD swizzlePattern;
  _DWORD componentSelector;
};

/* 252 */
struct ui::Control_RaceStart;

/* 253 */
struct object::ObjectEngine;

/* 254 */
struct nw::lyt::Window;

/* 255 */
struct nw::lyt::Picture;

/* 256 */
struct ui::Control_MiiLRButton;

/* 257 */
struct ui::Control_RacePauseController;

/* 258 */
struct ui::CursorLink_CourseMatrix;

/* 259 */
struct ui::Control_CharaList;

/* 260 */
struct ui::Control_Cursor;

/* 261 */
struct ui::UICursorLink;

/* 262 */
struct sead::Color4f;

/* 263 */
struct __attribute__((aligned(4))) UIAnimator
{
  UIControl *control;
  int field_04;
  int buffer_count;
  UIAnimation *buffer_ptr;
};

/* 264 */
struct __attribute__((aligned(4))) UIAnimation
{
  GroupAnimator *groupAnimator;
  float field_04;
  int field_08;
};

/* 293 */
struct __attribute__((aligned(4))) AnimTransform
{
  int field_00;
  int field_04;
  int field_08;
  float frame;
  char field_10;
  int vtable;
};

/* 294 */
struct __cppobj AnimTransformBasic : AnimTransform
{
  int field_18;
  int field_1C;
  __int16 field_20;
  __int16 field_22;
};

/* 295 */
struct __cppobj __attribute__((aligned(4))) Animator : AnimTransformBasic
{
  float field_24;
  int field_28;
  int field_2C;
};

/* 296 */
struct __cppobj GroupAnimator : Animator
{
  int field_30;
};

/* 265 */
struct nw::lyt::MultiArcResourceAccessor;

/* 266 */
struct nw::lyt::ResourceAccessor;

/* 267 */
struct ui::UIResourceAccessor;

/* 268 */
struct nw::lyt::GroupAnimator;

/* 269 */
struct sead::Graphics;

/* 270 */
struct sead::FileDeviceMgr;

/* 271 */
struct net::CurlInitializer;

/* 272 */
struct gsys::LockedCacheMgr;

/* 273 */
struct gsys::ModelMgr;

/* 274 */
struct gsys::LogMgr;

/* 275 */
struct agl::utl::DynamicTextureAllocator;

/* 276 */
struct agl::fctr::GPUStressChecker;

/* 277 */
struct agl::lyr::DrawMethod;

/* 278 */
struct gsys::ApplicationPackage;

/* 279 */
struct gsys::ModelSharedResource;

/* 280 */
struct gsys::ModelResourceMgr;

/* 281 */
struct gsys::ParticleMgr;

/* 282 */
struct gsys::ProcessMeter;

/* 283 */
struct agl::utl::ScreenShotMgr;

/* 284 */
struct agl::detail::RootNode;

/* 285 */
struct agl::CacheDebug;

/* 286 */
struct gsys::ResourceEditor;

/* 287 */
struct nn::swkbd;

/* 288 */
struct sys;

/* 289 */
struct nw::lyt::Animator;

/* 290 */
struct nw::lyt::AnimTransformBasic;

/* 291 */
struct nw::lyt::AnimTransform;

/* 292 */
struct nw::lyt::Layout;

/* 297 */
struct net::NetworkTransporter_Menu;

/* 298 */
struct net::NetworkTransporter_AllPlayerInfo;

/* 299 */
struct enl::EventSynchronizer;

/* 302 */
struct __attribute__((aligned(4))) NetworkData_MenuData
{
  int stationId;
  char field_04;
  char field_05;
  __int16 unk0;
  char field_08;
  char field_09;
  __int16 unk1;
};

/* 300 */
struct __attribute__((aligned(4))) NetworkData_Menu
{
  NetworkData_MenuData array[12];
  int field_90;
  char field_94;
  char field_95;
  int field_98;
};

/* 301 */
struct enl::UniqueID
{
  int stationId;
  char unk0;
  char unk1;
};

/* 303 */
struct audio::AudSubEngineCollection;

/* 304 */
struct sead::ResourceMgr;

/* 305 */
struct nn::pia::common::Log;

/* 306 */
struct enl::P2PManager;

/* 307 */
struct enl::PiaP2PManager;

/* 308 */
struct nn::pia::inet::NexNetworkFactory;

/* 309 */
struct enl::CafePiaFramework::SingletonDisposer_;

/* 310 */
struct enl::CafePiaFramework;

/* 311 */
struct enl::PiaFramework;

/* 312 */
struct nn::pia::common::StationAddress;

/* 313 */
struct net::NetworkEngine;

/* 314 */
struct object::ItemObjBananaDirector;

/* 315 */
struct object::ItemObjBanana;

/* 316 */
struct object::KartSusKit;

/* 317 */
struct nn::pia::inet::SocketOutputStream;

/* 318 */
struct nn::nex::PseudoSingleton;

/* 319 */
struct nn::pia::inet::SocketInputStream;

/* 320 */
struct nn::pia::common::String;

/* 321 */
struct nn::pia::transport::Transport;

/* 322 */
struct nn::nex::JobProcessJoinRequest;

/* 323 */
struct nn::pia::transport::IdentificationInfoTable;

/* 324 */
struct __N_17_transport_All_cpp_2cb34fdd;

/* 325 */
struct nn::nex::NgsFacade;

/* 326 */
struct nn::nex::_DDL_AuthenticationInfo;

/* 327 */
struct nn::nex::TicketGrantingProtocolClient;

/* 328 */
struct nn::nex::CriticalSection;

/* 329 */
struct util::Time;

/* 330 */
struct util::WeekTime;

/* 331 */
struct util::Date;

/* 332 */
struct nn::nex::Station;

/* 333 */
struct nn::nex::Session;

/* 334 */
struct nn::nex::InetAddress;

/* 335 */
struct enl::Result;

/* 336 */
struct sead::BinaryStreamFormat;

/* 337 */
struct enl::TransportManager;

/* 338 */
struct nn::nex::RankingProtocolClient;

/* 339 */
struct nn::nex::DataStoreConstants;

/* 340 */
struct util::Math;

/* 341 */
struct ui::Control_RaceInvokeOnce;

/* 342 */
struct ui::Control_RaceResult;

/* 343 */
struct ui::Control_RaceTAResult;

/* 344 */
struct ui::Page_RaceTAResult;

/* 345 */
struct ui::Control_RaceLapTimer;

/* 346 */
struct ui::Page_Race;

/* 347 */
struct sead::CalculateTask;

/* 348 */
struct enl::PiaTransportManager;

/* 349 */
struct net::NetworkTransporter_PlayerInfo;

/* 350 */
struct sys::SeadCafeRemoteController;

/* 351 */
struct sys::SeadCafeDRCController;

/* 352 */
struct ui::UIPlayerEx;

/* 353 */
struct UIInput
{
  int field_00;
  int field_04;
  int field_08;
  int field_0C;
  int field_10;
  int field_14;
  int field_18;
  int field_1C;
  int field_20;
  int field_24;
  void *vtable;
};

/* 354 */
struct ui::Page_TitleSelect;

/* 355 */
struct ui::Page_Login;

/* 356 */
struct ui::Control_Dialog;

/* 357 */
struct ui::Control_LoadDialog;

/* 358 */
struct ui::Control_Caption;

/* 359 */
struct ui::Control_StampDialog;

/* 360 */
struct ui::Control_ControllerDialog;

/* 361 */
struct ui::CursorLink_Dialog;

/* 362 */
struct ui::Control_DialogButton;

/* 363 */
struct ui::Page_PartsBase;

/* 364 */
struct ui::CursorLink_Parts;

/* 365 */
struct object::ItemObjKouraG;

/* 366 */
struct object::ItemDirector;

/* 367 */
struct sys::WorkerMgr;

/* 368 */
struct mush::MushManager;

/* 369 */
struct sead::CalendarTime;

/* 370 */
struct sys::SaveDataManager;

/* 371 */
struct sead::FileDeviceMgr::SingletonDisposer_;

/* 372 */
struct sead::FileDevice;

/* 373 */
struct sead::MainFileDevice;

/* 374 */
struct __N_22_SystemAccelHistory_cpp_6c1434e5;

/* 375 */
struct sead::ThreadMgr;

/* 376 */
struct sead::Thread;

/* 377 */
struct sys::GameController;

/* 378 */
struct sys::UIController;

/* 379 */
struct sys::ControllerManager;

/* 380 */
struct sead::CafeVPadDevice;

/* 381 */
struct ui::CursorLink_Pause;

/* 382 */
struct enl::SystemTransport;

/* 387 */
struct sead::StreamSrc
{
  void *vtable;
};

/* 383 */
struct __cppobj sead::RamStreamSrc : sead::StreamSrc
{
  void *mPtr;
  int mSize;
  int unk;
};

/* 384 */
struct sead::Stream
{
  void *mFormat;
  void *streamSrc;
  int mEndian;
  void *vtable;
};

/* 385 */
struct sead::Endian;

/* 386 */
struct sead::TextStreamFormat;

/* 388 */
struct __cppobj sead::RamWriteStream : sead::Stream
{
  sead::RamStreamSrc streamSrcWrite;
};

/* 389 */
struct __cppobj sead::RamReadStream : sead::Stream
{
  sead::RamStreamSrc streamSrcRead;
};

/* 390 */
struct ui::Page_PartsM;

/* 391 */
struct enl::NexWifiMatchingManager;

/* 392 */
struct enl::StationNotificationEventHandler;

/* 393 */
struct nn::nex::Protocol;

/* 394 */
struct nn::nex::SystemComponent;

/* 395 */
struct nn::nex::RefCountedObject;

/* 396 */
struct nn::nex::BackEndServices;

/* 397 */
struct enl::IDManager__tm__36_Q2_3enl10IDInfoBaseQ2_3enl8PeerInfo;

/* 398 */
struct enl::NetworkInfoManager;

/* 399 */
struct enl::PiaNetworkInfoManager;

/* 400 */
struct sead::CriticalSection;

/* 401 */
struct enl::PeerManager;

/* 402 */
struct enl::PeerManagerCommon__tm__36_Q2_3enl8PeerInfoQ2_3enl10IDInfoBase;

/* 403 */
struct enl::PiaPeerManager;

/* 404 */
struct nn::nex::RootTransport;

/* 405 */
struct nn::nex::Core;

/* 406 */
struct enl::CafePiaMemoryManager;

/* 407 */
struct enl::CafeNexMemoryManager;

/* 408 */
struct enl::CafeMemoryManager;

/* 409 */
struct enl::NexMemoryManager;

/* 410 */
struct sys::CommonModuleManager;

/* 411 */
struct sys::CommonModuleManager::ErreulaModule;

/* 412 */
struct sys::CommonModuleManager::ErrorViewerModule;

/* 413 */
struct sys::CommonModuleManager::DiscErrorModule;

/* 414 */
struct sys::CommonModuleManager::HomeNixModule;

/* 415 */
struct dash::Actor;

/* 416 */
struct __attribute__((aligned(4))) ui::LoadArg
{
  sead::SafeStringBase mFilepath;
  int mId;
  int mAlignement;
  int mOutSize;
  int field_14;
  char field_18;
  int vtable;
};

/* 417 */
struct sys::Archive;

/* 418 */
struct object::KartVehicleControl;

/* 419 */
struct object::KartVehicleMove;

/* 420 */
struct object::KartInfoProxy;

/* 421 */
struct object::KartUnitHolder;

/* 422 */
struct render::EffectSystem;

/* 423 */
struct render::EffectManager;

/* 424 */
struct object::MapObjBoxBase;

/* 425 */
struct object::IMapObjBounce;

/* 426 */
struct object::MuAccessorBase__tm__24_Q2_6object11MuKartPoint;

/* 427 */
struct object::MuAccessorBase__tm__20_Q2_6object8MuMapObj;

/* 428 */
struct object::MuAccessorBase__tm__18_Q2_6object6MuArea;

/* 429 */
struct object::MuAccessorBase__tm__23_Q2_6object10MuClipArea;

/* 430 */
struct object::MuAccessorBase__tm__25_Q2_6object12MuEffectArea;

/* 431 */
struct object::MuAccessorBase__tm__27_Q2_6object14MuReplayCamera;

/* 432 */
struct object::MuAccessorBase__tm__26_Q2_6object13MuIntroCamera;

/* 433 */
struct object::MuAccessorBase__tm__25_Q2_6object12MuCommonPath;

/* 434 */
struct object::MuAccessorBase__tm__21_Q2_6object9MuObjPath;

/* 435 */
struct object::MuAccessorBase__tm__24_Q2_6object11MuGlidePath;

/* 436 */
struct object::MuGlidePathAccessor;

/* 437 */
struct object::MuAccessorBase__tm__26_Q2_6object13MuGravityPath;

/* 438 */
struct object::MuAccessorBase__tm__26_Q2_6object13MuGCameraPath;

/* 439 */
struct object::MuAccessorBase__tm__24_Q2_6object11MuJugemPath;

/* 440 */
struct object::MuAccessorBase__tm__23_Q2_6object10MuPullPath;

/* 441 */
struct object::MuAccessorBase__tm__25_Q2_6object12MuSoundPoint;

/* 442 */
struct object::MapObjBCCannon;

/* 443 */
struct object::MapObjMovingItemBox;

/* 444 */
struct object::MapObjItemBoxManager;

/* 445 */
struct object::MapObjBase;

/* 446 */
struct object::GravityBox;

/* 447 */
struct __attribute__((aligned(4))) al::ByamlIter
{
  char *mFiledata;
  al::ByamlNodeArray *mRootNode;
};

/* 448 */
struct al::ByamlNodeBase
{
  unsigned __int8 mValue;
};

/* 450 */
struct __cppobj al::ByamlNodeArray : al::ByamlNodeBase
{
  unsigned __int32 mNumEntries : 24;
  al::ByamlNodeBase mEntries[];
};

/* 449 */
struct __cppobj al::ByamlNodeValue : al::ByamlNodeBase
{
  unsigned int mData;
};

/* 451 */
union $82004B73001A50BA86C2B7F5A585B2D2
{
  unsigned int mValue;
  unsigned int mOffset;
};

/* 452 */
struct al::ByamlDictionaryEnt
{
  unsigned __int32 mNameOffset : 24;
  unsigned __int8 mNodeType;
  unsigned int mValueOrOffset;
};

/* 453 */
struct __cppobj al::ByamlNodeDictionary : al::ByamlNodeBase
{
  unsigned __int32 mNumEntries : 24;
  al::ByamlDictionaryEnt mEntries[];
};

/* 454 */
struct __cppobj al::ByamlNodeStringTable : al::ByamlNodeBase
{
  unsigned __int32 mCount : 24;
  unsigned int mOffsets[];
};

/* 455 */
struct __cppobj al::ByamlNodePathTable : al::ByamlNodeBase
{
  unsigned __int32 mCount : 24;
  unsigned int mOffsets[];
};

/* 456 */
struct sead::Vector3
{
  float x;
  float y;
  float z;
};

/* 457 */
struct al::ByamlPathTableEnt
{
  sead::Vector3 mPosition;
  sead::Vector3 mNormal;
  float unk;
};

/* 458 */
struct sead::ArchiveFileDevice;

/* 459 */
struct sead::ExpHeap;

/* 460 */
struct __N_17_AudProxySound_cpp_bfdec4de;

/* 461 */
struct audio::AudProxySoundResource;

/* 462 */
struct collision;

/* 463 */
struct nn::nex::qList
{
  _DWORD dword0;
  _DWORD dword4;
  _DWORD dword8;
  _DWORD dwordC;
};

/* 464 */
struct sead::SZSDecompressor;

/* 465 */
struct render::RenderEngineCollection;

/* 466 */
struct __N_22_chat_VoiceProtocol_cpp_bf22a0fe;

/* 467 */
struct net::NetworkThread_VoiceChat;

/* 468 */
struct ui::Page_Boot;

/* 469 */
struct object::RaceDirector;

/* 470 */
struct object::StopwatchImpl;

/* 471 */
struct object::RaceKartChecker;

/* 472 */
struct sead::FixedSizeJQ;

/* 473 */
struct object::ItemObjDirectorBase;

/* 474 */
struct nn::nex::StreamManager;

/* 475 */
struct nn::nex::Stream;

/* 476 */
struct nn::nex::PRUDPEndPoint;

/* 477 */
struct nn::nex::PRUDPStream;

/* 478 */
struct nn::nex::RTT;

/* 479 */
struct nn::nex::_DDL_MatchmakeSession;

/* 480 */
struct sead::BitStreamFormat;

/* 481 */
struct net::PromoBossTask;

/* 482 */
struct NsslHandleManager;

/* 483 */
struct nn::nex::Buffer;

/* 484 */
struct nn::nex::CurlHttpConnection;

/* 485 */
struct timeval
{
  int tv_sec;
  int tv_usec;
};

/* 486 */
struct nn::nex;

/* 487 */
struct net::CompetitionInfo;

/* 488 */
struct sys::PlayerInfo
{
  uint32_t field_00;
  uint32_t field_04;
  uint32_t field_08;
  float vr_rate;
  float br_rate;
  unsigned __int8 accountData[96];
  unsigned __int8 field_74;
  unsigned __int8 field_75;
  uint32_t field_78;
  uint32_t field_7C;
  uint32_t field_80;
  unsigned __int8 openFlagData[63];
  unsigned __int8 padding;
  unsigned __int8 field_C4[16];
  unsigned __int8 field_D4[42];
};

