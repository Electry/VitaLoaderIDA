typedef int ptrdiff_t;
typedef unsigned int size_t;
typedef unsigned int wchar_t;
typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;
typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;
typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;
typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;
typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
typedef int int_fast8_t;
typedef unsigned int uint_fast8_t;
typedef int int_fast16_t;
typedef unsigned int uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int int_fast64_t;
typedef long long unsigned int uint_fast64_t;
typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
typedef int8_t SceChar8;
typedef uint8_t SceUChar8;
typedef int8_t SceInt8;
typedef uint8_t SceUInt8;
typedef int16_t SceShort16;
typedef uint16_t SceUShort16;
typedef int16_t SceInt16;
typedef uint16_t SceUInt16;
typedef int32_t SceInt32;
typedef uint32_t SceUInt32;
typedef int32_t SceInt;
typedef uint32_t SceUInt;
typedef int64_t SceInt64;
typedef uint64_t SceUInt64;
typedef int64_t SceLong64;
typedef uint64_t SceULong64;
typedef unsigned int SceSize;
typedef int SceSSize;
typedef int SceBool;
typedef float SceFloat;
typedef float SceFloat32;
typedef double SceDouble;
typedef double SceDouble64;
typedef signed char SceSByte;
typedef signed char SceSByte8;
typedef unsigned char SceByte;
typedef unsigned char SceByte8;
typedef uint16_t SceWChar16;
typedef uint32_t SceWChar32;
typedef void SceVoid;
typedef void *ScePVoid;
typedef int SceIntPtr;
typedef unsigned int SceUIntPtr;
typedef SceUIntPtr SceUIntVAddr;
typedef struct SceIVector2 {
    SceInt x;
    SceInt y;
} SceIVector2;
typedef struct SceFVector2 {
    SceFloat x;
    SceFloat y;
} SceFVector2;
typedef struct SceIVector3 {
    SceInt x;
    SceInt y;
    SceInt z;
} SceIVector3;
typedef struct SceFVector3 {
    SceFloat x;
    SceFloat y;
    SceFloat z;
} SceFVector3;
typedef struct SceIVector4 {
    SceInt x;
    SceInt y;
    SceInt z;
    SceInt w;
} SceIVector4;
typedef struct SceUVector4 {
    SceUInt x;
    SceUInt y;
    SceUInt z;
    SceUInt w;
} SceUVector4;
typedef struct SceFVector4 {
    SceFloat x;
    SceFloat y;
    SceFloat z;
    SceFloat w;
} SceFVector4;
typedef struct SceIMatrix2 {
    SceIVector2 x;
    SceIVector2 y;
} SceIMatrix2;
typedef struct SceFMatrix2 {
    SceFVector2 x;
    SceFVector2 y;
} SceFMatrix2;
typedef struct SceIMatrix3 {
    SceIVector3 x;
    SceIVector3 y;
    SceIVector3 z;
} SceIMatrix3;
typedef struct SceFMatrix3 {
    SceFVector3 x;
    SceFVector3 y;
    SceFVector3 z;
} SceFMatrix3;
typedef struct SceIMatrix4 {
    SceIVector4 x;
    SceIVector4 y;
    SceIVector4 z;
    SceIVector4 w;
} SceIMatrix4;
typedef struct SceUMatrix4 {
    SceUVector4 x;
    SceUVector4 y;
    SceUVector4 z;
    SceUVector4 w;
} SceUMatrix4;
typedef struct SceFMatrix4 {
    SceFVector4 x;
    SceFVector4 y;
    SceFVector4 z;
    SceFVector4 w;
} SceFMatrix4;
typedef struct SceFQuaternion {
    SceFloat x;
    SceFloat y;
    SceFloat z;
    SceFloat w;
} SceFQuaternion;
typedef struct SceFColor {
    SceFloat r;
    SceFloat g;
    SceFloat b;
    SceFloat a;
} SceFColor;
typedef struct SceFPlane {
    SceFloat a;
    SceFloat b;
    SceFloat c;
    SceFloat d;
} SceFPlane;
typedef union SceUnion32 {
    unsigned int ui;
    int i;
    unsigned short us[2];
    short s[2];
    unsigned char uc[4];
    char c[4];
    float f;
    void *p;
} SceUnion32;
typedef union SceUnion64 {
    SceULong64 ull;
    SceLong64 ll;
    unsigned int ui[2];
    int i[2];
    unsigned short us[4];
    short s[4];
    unsigned char uc[8];
    char c[8];
    float f[2];
    SceFVector2 fv;
    SceIVector2 iv;
} SceUnion64;
typedef union SceUnion128 {
    SceULong64 ull[2];
    SceLong64 ll[2];
    unsigned int ui[4];
    int i[4];
    unsigned short us[8];
    short s[8];
    unsigned char uc[16];
    char c[16];
    float f[4];
    SceFVector4 fv;
    SceFQuaternion fq;
    SceFPlane fp;
    SceFColor fc;
    SceIVector4 iv;
} SceUnion128;
typedef struct SceDateTime {
    unsigned short year;
    unsigned short month;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned int microsecond;
} SceDateTime;
typedef int SceMode;
typedef SceInt64 SceOff;
typedef int SceUID;
typedef int ScePID;
typedef char* SceName;
typedef enum SceAppUtilSaveDataRemoveMode {
 SCE_APPUTIL_SAVEDATA_DATA_REMOVE_MODE_DEFAULT = 0,
 SCE_APPUTIL_SAVEDATA_DATA_REMOVE_MODE_NO_SLOT = 1
} SceAppUtilSaveDataDataRemoveMode;
typedef enum SceAppUtilSaveDataSaveMode {
 SCE_APPUTIL_SAVEDATA_DATA_SAVE_MODE_FILE = 0,
 SCE_APPUTIL_SAVEDATA_DATA_SAVE_MODE_DIRECTORY = 2
} SceAppUtilSaveDataDataSaveMode;
typedef enum SceAppUtilErrorCode {
 SCE_APPUTIL_ERROR_PARAMETER = 0x80100600,
 SCE_APPUTIL_ERROR_NOT_INITIALIZED = 0x80100601,
 SCE_APPUTIL_ERROR_NO_MEMORY = 0x80100602,
 SCE_APPUTIL_ERROR_BUSY = 0x80100603,
 SCE_APPUTIL_ERROR_NOT_MOUNTED = 0x80100604,
 SCE_APPUTIL_ERROR_NO_PERMISSION = 0x80100605,
 SCE_APPUTIL_ERROR_PASSCODE_MISMATCH = 0x80100606,
 SCE_APPUTIL_ERROR_APPEVENT_PARSE_INVALID_DATA = 0x80100620,
 SCE_APPUTIL_ERROR_SAVEDATA_SLOT_EXISTS = 0x80100640,
 SCE_APPUTIL_ERROR_SAVEDATA_SLOT_NOT_FOUND = 0x80100641,
 SCE_APPUTIL_ERROR_SAVEDATA_NO_SPACE_QUOTA = 0x80100642,
 SCE_APPUTIL_ERROR_SAVEDATA_NO_SPACE_FS = 0x80100643,
 SCE_APPUTIL_ERROR_DRM_NO_ENTITLEMENT = 0x80100660,
 SCE_APPUTIL_ERROR_PHOTO_DEVICE_NOT_FOUND = 0x80100680,
 SCE_APPUTIL_ERROR_MUSIC_DEVICE_NOT_FOUND = 0x80100685,
 SCE_APPUTIL_ERROR_MOUNT_LIMIT_OVER = 0x80100686,
 SCE_APPUTIL_ERROR_STACKSIZE_TOO_SHORT = 0x801006A0
} SceAppUtilErrorCode;
typedef unsigned int SceAppUtilBootAttribute;
typedef unsigned int SceAppUtilAppEventType;
typedef unsigned int SceAppUtilSaveDataSlotId;
typedef unsigned int SceAppUtilSaveDataSlotStatus;
typedef unsigned int SceAppUtilAppParamId;
typedef unsigned int SceAppUtilBgdlStatusType;
typedef struct SceAppUtilBgdlStatus {
 SceAppUtilBgdlStatusType type;
 SceUInt32 addcontNumReady;
 SceUInt32 addcontNumNotReady;
 SceUInt32 licenseReady;
 SceChar8 reserved[28];
} SceAppUtilBgdlStatus;
typedef struct SceAppUtilInitParam {
 SceSize workBufSize;
 uint8_t reserved[60];
} SceAppUtilInitParam;
typedef struct SceAppUtilBootParam {
 SceAppUtilBootAttribute attr;
 unsigned int appVersion;
 uint8_t reserved[32];
} SceAppUtilBootParam;
typedef struct SceAppUtilSaveDataMountPoint {
 uint8_t data[16];
} SceAppUtilSaveDataMountPoint;
typedef struct SceAppUtilAppEventParam {
 SceAppUtilAppEventType type;
 uint8_t dat[1024];
} SceAppUtilAppEventParam;
typedef struct SceAppUtilMountPoint {
 int8_t data[16];
} SceAppUtilMountPoint;
typedef struct SceAppUtilSaveDataSlotEmptyParam {
 SceWChar16 *title;
 char *iconPath;
 void *iconBuf;
 SceSize iconBufSize;
 uint8_t reserved[32];
} SceAppUtilSaveDataSlotEmptyParam;
typedef struct SceAppUtilSaveDataSlot {
 SceAppUtilSaveDataSlotId id;
 SceAppUtilSaveDataSlotStatus status;
 int userParam;
 SceAppUtilSaveDataSlotEmptyParam *emptyParam;
} SceAppUtilSaveDataSlot;
typedef struct SceAppUtilSaveDataSlotParam {
 SceAppUtilSaveDataSlotStatus status;
 SceWChar16 title[32];
 SceWChar16 subTitle[64];
 SceWChar16 detail[256];
 char iconPath[64];
 int userParam;
 SceSize sizeKB;
 SceDateTime modifiedTime;
 uint8_t reserved[48];
} SceAppUtilSaveDataSlotParam;
typedef struct SceAppUtilSaveDataSaveItem {
 const char *dataPath;
 const void *buf;
 uint32_t pad;
 SceOff offset;
 int mode;
 uint8_t reserved[36];
} SceAppUtilSaveDataSaveItem;
typedef struct SceAppUtilSaveDataFile {
 const char *filePath;
 void *buf;
 SceSize bufSize;
 SceOff offset;
 unsigned int mode;
 unsigned int progDelta;
 uint8_t reserved[32];
} SceAppUtilSaveDataFile;
typedef struct SceAppUtilSaveDataFileSlot {
 unsigned int id;
 SceAppUtilSaveDataSlotParam *slotParam;
 uint8_t reserved[32];
} SceAppUtilSaveDataFileSlot;
typedef struct SceAppUtilSaveDataRemoveItem {
 const char *dataPath;
 int mode;
 uint8_t reserved[36];
} SceAppUtilSaveDataRemoveItem;
typedef struct SceAppUtilStoreBrowseParam {
 unsigned int type;
 const char *id;
} SceAppUtilStoreBrowseParam;
typedef struct SceAppUtilWebBrowserParam {
 const char *str;
 SceSize strlen;
 unsigned int launchMode;
 unsigned int reserved;
} SceAppUtilWebBrowserParam;
typedef enum SceAppMgrErrorCode {
 SCE_APPMGR_ERROR_BUSY = 0x80802000,
 SCE_APPMGR_ERROR_STATE = 0x80802013,
 SCE_APPMGR_ERROR_NULL_POINTER = 0x80802016,
 SCE_APPMGR_ERROR_INVALID = 0x8080201A,
 SCE_APPMGR_ERROR_TOO_LONG_ARGV = 0x8080201D,
 SCE_APPMGR_ERROR_INVALID_SELF_PATH = 0x8080201E,
 SCE_APPMGR_ERROR_BGM_PORT_BUSY = 0x80803000
} SceAppMgrErrorCode;
typedef enum SceAppMgrSystemEventType {
 SCE_APPMGR_SYSTEMEVENT_ON_RESUME = 0x10000003,
 SCE_APPMGR_SYSTEMEVENT_ON_STORE_PURCHASE = 0x10000004,
 SCE_APPMGR_SYSTEMEVENT_ON_NP_MESSAGE_ARRIVED = 0x10000005,
 SCE_APPMGR_SYSTEMEVENT_ON_STORE_REDEMPTION = 0x10000006
} SceAppMgrSystemEventType;
typedef enum SceAppMgrInfoBarVisibility {
 SCE_APPMGR_INFOBAR_VISIBILITY_INVISIBLE = 0,
 SCE_APPMGR_INFOBAR_VISIBILITY_VISIBLE = 1
} SceAppMgrInfoBarVisibility;
typedef enum SceAppMgrInfoBarColor {
 SCE_APPMGR_INFOBAR_COLOR_BLACK = 0,
 SCE_APPMGR_INFOBAR_COLOR_WHITE = 1
} SceAppMgrInfoBarColor;
typedef enum SceAppMgrInfoBarTransparency {
 SCE_APPMGR_INFOBAR_TRANSPARENCY_OPAQUE = 0,
 SCE_APPMGR_INFOBAR_TRANSPARENCY_TRANSLUCENT = 1
} SceAppMgrInfoBarTransparency;
typedef struct SceAppMgrSystemEvent {
 int systemEvent;
 uint8_t reserved[60];
} SceAppMgrSystemEvent;
typedef struct SceAppMgrSaveDataData {
 int size;
 unsigned int slotId;
 SceAppUtilSaveDataSlotParam* slotParam;
 uint8_t reserved[32];
 SceAppUtilSaveDataFile* files;
 int fileNum;
 SceAppUtilSaveDataMountPoint mountPoint;
 unsigned int* requiredSizeKB;
} SceAppMgrSaveDataData;
typedef struct SceAppMgrSaveDataDataDelete {
 int size;
 unsigned int slotId;
 SceAppUtilSaveDataSlotParam* slotParam;
 uint8_t reserved[32];
 SceAppUtilSaveDataFile* files;
 int fileNum;
 SceAppUtilSaveDataMountPoint mountPoint;
} SceAppMgrSaveDataDataDelete;
typedef struct SceAppMgrSaveDataSlot {
 int size;
 unsigned int slotId;
 SceAppUtilSaveDataSlotParam slotParam;
 uint8_t reserved[116];
 SceAppUtilSaveDataMountPoint mountPoint;
} SceAppMgrSaveDataSlot;
typedef struct SceAppMgrSaveDataSlotDelete {
 int size;
 unsigned int slotId;
 SceAppUtilSaveDataMountPoint mountPoint;
} SceAppMgrSaveDataSlotDelete;
typedef struct SceAppMgrAppState {
 SceUInt32 systemEventNum;
 SceUInt32 appEventNum;
 SceBool isSystemUiOverlaid;
 SceUInt8 reserved[116];
} SceAppMgrAppState;
typedef struct SceAppMgrExecOptParam SceAppMgrExecOptParam;
typedef struct SceAppMgrLaunchAppOptParam SceAppMgrLaunchAppOptParam;
typedef struct sceAppMgrLoadExecOptParam {
 int reserved[64];
} sceAppMgrLoadExecOptParam;
typedef enum SceAudiodecErrorCode {
 SCE_AUDIODEC_ERROR_API_FAIL = 0x807F0000,
 SCE_AUDIODEC_ERROR_INVALID_TYPE = 0x807F0001,
 SCE_AUDIODEC_ERROR_INVALID_INIT_PARAM = 0x807F0002,
 SCE_AUDIODEC_ERROR_ALREADY_INITIALIZED = 0x807F0003,
 SCE_AUDIODEC_ERROR_OUT_OF_MEMORY = 0x807F0004,
 SCE_AUDIODEC_ERROR_NOT_INITIALIZED = 0x807F0005,
 SCE_AUDIODEC_ERROR_A_HANDLE_IN_USE = 0x807F0006,
 SCE_AUDIODEC_ERROR_ALL_HANDLES_IN_USE = 0x807F0007,
 SCE_AUDIODEC_ERROR_INVALID_PTR = 0x807F0008,
 SCE_AUDIODEC_ERROR_INVALID_HANDLE = 0x807F0009,
 SCE_AUDIODEC_ERROR_NOT_HANDLE_IN_USE = 0x807F000A,
 SCE_AUDIODEC_ERROR_CH_SHORTAGE = 0x807F000B,
 SCE_AUDIODEC_ERROR_INVALID_WORD_LENGTH = 0x807F000C,
 SCE_AUDIODEC_ERROR_INVALID_SIZE = 0x807F000D,
 SCE_AUDIODEC_ERROR_UNSUPPORTED = 0x807F000E,
 SCE_AUDIODEC_ERROR_INVALID_NFRAMES = 0x807F000F,
 SCE_AUDIODEC_ERROR_INVALID_NSTREAMS = 0x807F0010,
 SCE_AUDIODEC_ERROR_DIFFERENT_TYPES = 0x807F0011,
 SCE_AUDIODEC_ERROR_SAME_HANDLES = 0x807F0012,
 SCE_AUDIODEC_ERROR_BUSY = 0x807F0013,
 SCE_AUDIODEC_AT9_ERROR_INVALID_CONFIG = 0x807F2000,
 SCE_AUDIODEC_MP3_ERROR_INVALID_CH = 0x807F2800,
 SCE_AUDIODEC_MP3_ERROR_INVALID_MPEG_VERSION = 0x807F2801,
 SCE_AUDIODEC_AAC_ERROR_INVALID_CH = 0x807F3000,
 SCE_AUDIODEC_CELP_ERROR_INVALID_CONFIG = 0x807F3800
} SceAudiodecErrorCode;
typedef enum SceAudiodecType {
 SCE_AUDIODEC_TYPE_AT9 = 0x1003U,
 SCE_AUDIODEC_TYPE_MP3 = 0x1004U,
 SCE_AUDIODEC_TYPE_AAC = 0x1005U,
 SCE_AUDIODEC_TYPE_CELP = 0x1006U
} SceAudiodecType;
typedef enum SceAudiodecMpegVersion {
 SCE_AUDIODEC_MP3_MPEG_VERSION_2_5 = 0,
 SCE_AUDIODEC_MP3_MPEG_VERSION_RESERVED = 1,
 SCE_AUDIODEC_MP3_MPEG_VERSION_2 = 2,
 SCE_AUDIODEC_MP3_MPEG_VERSION_1 = 3
} SceAudiodecMpegVersion;
typedef enum SceAudiodecCelpBitrate {
 SCE_AUDIODEC_CELP_BIT_RATE_3850BPS = 3850,
 SCE_AUDIODEC_CELP_BIT_RATE_4650BPS = 4650,
 SCE_AUDIODEC_CELP_BIT_RATE_5700BPS = 5700,
 SCE_AUDIODEC_CELP_BIT_RATE_6600BPS = 6600,
 SCE_AUDIODEC_CELP_BIT_RATE_7300BPS = 7300,
 SCE_AUDIODEC_CELP_BIT_RATE_8700BPS = 8700,
 SCE_AUDIODEC_CELP_BIT_RATE_9900BPS = 9900,
 SCE_AUDIODEC_CELP_BIT_RATE_10700BPS = 10700,
 SCE_AUDIODEC_CELP_BIT_RATE_11800BPS = 11800,
 SCE_AUDIODEC_CELP_BIT_RATE_12200BPS = 12200
} SceAudiodecCelpBitrate;
typedef struct SceAudiodecInitStreamParam {
 SceUInt32 size;
 SceUInt32 totalStreams;
} SceAudiodecInitStreamParam;
typedef struct SceAudiodecInitChParam {
 SceUInt32 size;
 SceUInt32 totalCh;
} SceAudiodecInitChParam;
typedef union SceAudiodecInitParam {
 SceUInt32 size;
 SceAudiodecInitChParam at9;
 SceAudiodecInitStreamParam mp3;
 SceAudiodecInitStreamParam aac;
 SceAudiodecInitStreamParam celp;
} SceAudiodecInitParam;
typedef struct SceAudiodecInfoAt9 {
 SceUInt32 size;
 SceUInt8 configData[4];
 SceUInt32 ch;
 SceUInt32 bitRate;
 SceUInt32 samplingRate;
 SceUInt32 superFrameSize;
 SceUInt32 framesInSuperFrame;
} SceAudiodecInfoAt9;
typedef struct SceAudiodecInfoMp3 {
 SceUInt32 size;
 SceUInt32 ch;
 SceUInt32 version;
} SceAudiodecInfoMp3;
typedef struct SceAudiodecInfoAac {
 SceUInt32 size;
 SceUInt32 isAdts;
 SceUInt32 ch;
 SceUInt32 samplingRate;
 SceUInt32 isSbr;
} SceAudiodecInfoAac;
typedef struct SceAudiodecInfoCelp {
 SceUInt32 size;
 SceUInt32 excitationMode;
 SceUInt32 samplingRate;
 SceUInt32 bitRate;
 SceUInt32 lostCount;
} SceAudiodecInfoCelp;
typedef union SceAudiodecInfo {
 SceUInt32 size;
 SceAudiodecInfoAt9 at9;
 SceAudiodecInfoMp3 mp3;
 SceAudiodecInfoAac aac;
 SceAudiodecInfoCelp celp;
} SceAudiodecInfo;
typedef struct SceAudiodecCtrl {
 SceUInt32 size;
 SceInt32 handle;
 SceUInt8 *pEs;
 SceUInt32 inputEsSize;
 SceUInt32 maxEsSize;
 void *pPcm;
 SceUInt32 outputPcmSize;
 SceUInt32 maxPcmSize;
 SceUInt32 wordLength;
 SceAudiodecInfo *pInfo;
} SceAudiodecCtrl;
typedef enum SceAtracErrorCode {
 SCE_ATRAC_ERROR_INVALID_POINTER = 0x80630000,
 SCE_ATRAC_ERROR_INVALID_SIZE = 0x80630001,
 SCE_ATRAC_ERROR_INVALID_WORD_LENGTH = 0x80630002,
 SCE_ATRAC_ERROR_INVALID_TYPE = 0x80630003,
 SCE_ATRAC_ERROR_INVALID_TOTAL_CH = 0x80630004,
 SCE_ATRAC_ERROR_INVALID_ALIGNMENT = 0x80630005,
 SCE_ATRAC_ERROR_ALREADY_CREATED = 0x80630006,
 SCE_ATRAC_ERROR_NOT_CREATED = 0x80630007,
 SCE_ATRAC_ERROR_SHORTAGE_OF_CH = 0x80630008,
 SCE_ATRAC_ERROR_UNSUPPORTED_DATA = 0x80630009,
 SCE_ATRAC_ERROR_INVALID_DATA = 0x8063000A,
 SCE_ATRAC_ERROR_READ_SIZE_IS_TOO_SMALL = 0x8063000B,
 SCE_ATRAC_ERROR_INVALID_HANDLE = 0x8063000C,
 SCE_ATRAC_ERROR_READ_SIZE_OVER_BUFFER = 0x8063000D,
 SCE_ATRAC_ERROR_MAIN_BUFFER_SIZE_IS_TOO_SMALL = 0x8063000E,
 SCE_ATRAC_ERROR_SUB_BUFFER_SIZE_IS_TOO_SMALL = 0x8063000F,
 SCE_ATRAC_ERROR_DATA_SHORTAGE_IN_BUFFER = 0x80630010,
 SCE_ATRAC_ERROR_ALL_DATA_WAS_DECODED = 0x80630011,
 SCE_ATRAC_ERROR_INVALID_MAX_OUTPUT_SAMPLES = 0x80630012,
 SCE_ATRAC_ERROR_ADDED_DATA_IS_TOO_BIG = 0x80630013,
 SCE_ATRAC_ERROR_NEED_SUB_BUFFER = 0x80630014,
 SCE_ATRAC_ERROR_INVALID_SAMPLE = 0x80630015,
 SCE_ATRAC_ERROR_NO_NEED_SUB_BUFFER = 0x80630016,
 SCE_ATRAC_ERROR_INVALID_LOOP_STATUS = 0x80630017,
 SCE_ATRAC_ERROR_REMAIN_VALID_HANDLE = 0x80630018,
 SCE_ATRAC_ERROR_INVALID_LOOP_NUM = 0x80630030
} SceAtracErrorCode;
typedef enum SceAtracDecoderStatus {
 SCE_ATRAC_DECODER_STATUS_ALL_DATA_WAS_DECODED = 0x00000001,
 SCE_ATRAC_DECODER_STATUS_ALL_DATA_IS_ON_MEMORY = 0x00000002,
 SCE_ATRAC_DECODER_STATUS_NONLOOP_PART_IS_ON_MEMORY = 0x00000004,
 SCE_ATRAC_DECODER_STATUS_LOOP_PART_IS_ON_MEMORY = 0x00000008
} SceAtracDecoderStatus;
typedef enum SceAtracLoopStatus {
 SCE_ATRAC_LOOP_STATUS_NON_RESETABLE_PART = 0x00000000,
 SCE_ATRAC_LOOP_STATUS_RESETABLE_PART = 0x00000001
} SceAtracLoopStatus;
typedef struct {
 SceUInt32 size;
 SceUInt32 wordLength;
 SceUInt32 totalCh;
} SceAtracDecoderGroup;
typedef struct {
 SceUInt32 size;
 SceUInt32 atracType;
 SceUInt32 channel;
 SceUInt32 samplingRate;
 SceInt32 endSample;
 SceInt32 loopStartSample;
 SceInt32 loopEndSample;
 SceUInt32 bitRate;
 SceUInt32 fixedEncBlockSize;
 SceUInt32 fixedEncBlockSample;
 SceUInt32 frameSample;
 SceUInt32 loopBlockOffset;
 SceUInt32 loopBlockSize;
} SceAtracContentInfo;
typedef struct {
 SceUInt32 size;
 SceUChar8 *pWritePosition;
 SceUInt32 readPosition;
 SceUInt32 writableSize;
} SceAtracStreamInfo;
typedef enum SceAudioencErrorCode {
 SCE_AUDIOENC_ERROR_API_FAIL = 0x80860000,
 SCE_AUDIOENC_ERROR_INVALID_TYPE = 0x80860001,
 SCE_AUDIOENC_ERROR_INVALID_INIT_PARAM = 0x80860002,
 SCE_AUDIOENC_ERROR_ALREADY_INITIALIZED = 0x80860003,
 SCE_AUDIOENC_ERROR_OUT_OF_MEMORY = 0x80860004,
 SCE_AUDIOENC_ERROR_NOT_INITIALIZED = 0x80860005,
 SCE_AUDIOENC_ERROR_A_HANDLE_IN_USE = 0x80860006,
 SCE_AUDIOENC_ERROR_ALL_HANDLES_IN_USE = 0x80860007,
 SCE_AUDIOENC_ERROR_INVALID_PTR = 0x80860008,
 SCE_AUDIOENC_ERROR_INVALID_HANDLE = 0x80860009,
 SCE_AUDIOENC_ERROR_NOT_HANDLE_IN_USE = 0x8086000A,
 SCE_AUDIOENC_ERROR_CH_SHORTAGE = 0x8086000B,
 SCE_AUDIOENC_ERROR_INVALID_WORD_LENGTH = 0x8086000C,
 SCE_AUDIOENC_ERROR_INVALID_SIZE = 0x8086000D,
 SCE_AUDIOENC_ERROR_INVALID_ALIGNMENT = 0x8086000E,
 SCE_AUDIOENC_ERROR_UNSUPPORTED = 0x8086000F
} SceAudioencErrorCode;
typedef enum SceAudioencCelpErrorCode {
 SCE_AUDIOENC_CELP_ERROR_INVALID_CONFIG = 0x80861001
} SceAudioencCelpErrorCode;
typedef enum SceAudioencCelpBitrate {
 SCE_AUDIOENC_CELP_BIT_RATE_3850BPS = 3850,
 SCE_AUDIOENC_CELP_BIT_RATE_4650BPS = 4650,
 SCE_AUDIOENC_CELP_BIT_RATE_5700BPS = 5700,
 SCE_AUDIOENC_CELP_BIT_RATE_6600BPS = 6600,
 SCE_AUDIOENC_CELP_BIT_RATE_7300BPS = 7300,
 SCE_AUDIOENC_CELP_BIT_RATE_8700BPS = 8700,
 SCE_AUDIOENC_CELP_BIT_RATE_9900BPS = 9900,
 SCE_AUDIOENC_CELP_BIT_RATE_10700BPS = 10700,
 SCE_AUDIOENC_CELP_BIT_RATE_11800BPS = 11800,
 SCE_AUDIOENC_CELP_BIT_RATE_12200BPS = 12200
} SceAudioencCelpBitrate;
typedef struct SceAudioencInitStreamParam {
 SceSize size;
 unsigned int totalStreams;
} SceAudioencInitStreamParam;
typedef struct SceAudioencInfoCelp {
 SceSize size;
 unsigned int excitationMode;
 unsigned int samplingRate;
 unsigned int bitRate;
} SceAudioencInfoCelp;
typedef struct SceAudioencOptInfoCelp {
 SceSize size;
 uint8_t header[32];
 SceSize headerSize;
 unsigned int encoderVersion;
} SceAudioencOptInfoCelp;
typedef union SceAudioencInitParam {
 SceSize size;
 SceAudioencInitStreamParam celp;
} SceAudioencInitParam;
typedef union SceAudioencInfo {
 SceSize size;
 SceAudioencInfoCelp celp;
} SceAudioencInfo;
typedef union SceAudioencOptInfo {
 SceSize size;
 SceAudioencOptInfoCelp celp;
} SceAudioencOptInfo;
typedef struct SceAudioencCtrl {
 SceSize size;
 int handle;
 void *pInputPcm;
 SceSize inputPcmSize;
 SceSize maxPcmSize;
 void *pOutputEs;
 SceSize outputEsSize;
 SceSize maxEsSize;
 SceSize wordLength;
 SceAudioencInfo *pInfo;
 SceAudioencOptInfo *pOptInfo;
} SceAudioencCtrl;
typedef enum SceAudioInErrorCode {
 SCE_AUDIO_IN_ERROR_FATAL = 0x80260100,
 SCE_AUDIO_IN_ERROR_INVALID_PORT = 0x80260101,
 SCE_AUDIO_IN_ERROR_INVALID_SIZE = 0x80260102,
 SCE_AUDIO_IN_ERROR_INVALID_SAMPLE_FREQ = 0x80260103,
 SCE_AUDIO_IN_ERROR_INVALID_PORT_TYPE = 0x80260104,
 SCE_AUDIO_IN_ERROR_INVALID_POINTER = 0x80260105,
 SCE_AUDIO_IN_ERROR_INVALID_PORT_PARAM = 0x80260106,
 SCE_AUDIO_IN_ERROR_PORT_FULL = 0x80260107,
 SCE_AUDIO_IN_ERROR_OUT_OF_MEMORY = 0x80260108,
 SCE_AUDIO_IN_ERROR_NOT_OPENED = 0x80260109,
 SCE_AUDIO_IN_ERROR_BUSY = 0x8026010A,
 SCE_AUDIO_IN_ERROR_INVALID_PARAMETER = 0x8026010B
} SceAudioInErrorCode;
typedef enum SceAudioInPortType {
 SCE_AUDIO_IN_PORT_TYPE_VOICE = 0,
 SCE_AUDIO_IN_PORT_TYPE_RAW = 2
} SceAudioInPortType;
typedef enum SceAudioInParam {
 SCE_AUDIO_IN_PARAM_FORMAT_S16_MONO = 0,
 SCE_AUDIO_IN_GETSTATUS_MUTE = 1
} SceAudioInParam;
typedef enum SceAudioOutErrorCode {
 SCE_AUDIO_OUT_ERROR_NOT_OPENED = 0x80260001,
 SCE_AUDIO_OUT_ERROR_BUSY = 0x80260002,
 SCE_AUDIO_OUT_ERROR_INVALID_PORT = 0x80260003,
 SCE_AUDIO_OUT_ERROR_INVALID_POINTER = 0x80260004,
 SCE_AUDIO_OUT_ERROR_PORT_FULL = 0x80260005,
 SCE_AUDIO_OUT_ERROR_INVALID_SIZE = 0x80260006,
 SCE_AUDIO_OUT_ERROR_INVALID_FORMAT = 0x80260007,
 SCE_AUDIO_OUT_ERROR_INVALID_SAMPLE_FREQ = 0x80260008,
 SCE_AUDIO_OUT_ERROR_INVALID_VOLUME = 0x80260009,
 SCE_AUDIO_OUT_ERROR_INVALID_PORT_TYPE = 0x8026000A,
 SCE_AUDIO_OUT_ERROR_INVALID_FX_TYPE = 0x8026000B,
 SCE_AUDIO_OUT_ERROR_INVALID_CONF_TYPE = 0x8026000C,
 SCE_AUDIO_OUT_ERROR_OUT_OF_MEMORY = 0x8026000D
} SceAudioOutErrorCode;
typedef enum SceAudioOutParam {
 SCE_AUDIO_OUT_PARAM_FORMAT_S16_MONO = 0,
 SCE_AUDIO_OUT_PARAM_FORMAT_S16_STEREO = 1
} SceAudioOutParam;
typedef enum SceAudioOutPortType {
 SCE_AUDIO_OUT_PORT_TYPE_MAIN = 0,
 SCE_AUDIO_OUT_PORT_TYPE_BGM = 1,
 SCE_AUDIO_OUT_PORT_TYPE_VOICE = 2
} SceAudioOutPortType;
typedef enum SceAudioOutMode {
 SCE_AUDIO_OUT_MODE_MONO = 0,
 SCE_AUDIO_OUT_MODE_STEREO = 1
} SceAudioOutMode;
typedef enum SceAudioOutChannelFlag {
 SCE_AUDIO_VOLUME_FLAG_L_CH = 1,
 SCE_AUDIO_VOLUME_FLAG_R_CH = 2
} SceAudioOutChannelFlag ;
typedef enum SceAudioOutConfigType {
 SCE_AUDIO_OUT_CONFIG_TYPE_LEN = 0,
 SCE_AUDIO_OUT_CONFIG_TYPE_FREQ = 1,
 SCE_AUDIO_OUT_CONFIG_TYPE_MODE = 2
} SceAudioOutConfigType;
typedef enum SceAudioOutAlcMode {
 SCE_AUDIO_ALC_OFF = 0,
 SCE_AUDIO_ALC_MODE1 = 1,
 SCE_AUDIO_ALC_MODE_MAX = 2
} SceAudioOutAlcMode;
typedef enum SceCameraErrorCode {
 SCE_CAMERA_ERROR_PARAM = 0x802E0000,
 SCE_CAMERA_ERROR_ALREADY_INIT = 0x802E0001,
 SCE_CAMERA_ERROR_NOT_INIT = 0x802E0002,
 SCE_CAMERA_ERROR_ALREADY_OPEN = 0x802E0003,
 SCE_CAMERA_ERROR_NOT_OPEN = 0x802E0004,
 SCE_CAMERA_ERROR_ALREADY_START = 0x802E0005,
 SCE_CAMERA_ERROR_NOT_START = 0x802E0006,
 SCE_CAMERA_ERROR_FORMAT_UNKNOWN = 0x802E0007,
 SCE_CAMERA_ERROR_RESOLUTION_UNKNOWN = 0x802E0008,
 SCE_CAMERA_ERROR_BAD_FRAMERATE = 0x802E0009,
 SCE_CAMERA_ERROR_TIMEOUT = 0x802E000A,
 SCE_CAMERA_ERROR_EXCLUSIVE = 0x802E000B,
 SCE_CAMERA_ERROR_ATTRIBUTE_UNKNOWN = 0x802E000C,
 SCE_CAMERA_ERROR_MAX_PROCESS = 0x802E000D,
 SCE_CAMERA_ERROR_NOT_ACTIVE = 0x802E000E,
 SCE_CAMERA_ERROR_ALREADY_READ = 0x802E000F,
 SCE_CAMERA_ERROR_NOT_MOUNTED = 0x802E0010,
 SCE_CAMERA_ERROR_DATA_RANGE_UNKNOWN = 0x802E0011,
 SCE_CAMERA_ERROR_OTHER_ALREADY_START = 0x802E0012,
 SCE_CAMERA_ERROR_FATAL = 0x802E00FF
} SceCameraErrorCode;
typedef enum SceCameraDevice {
 SCE_CAMERA_DEVICE_FRONT = 0,
 SCE_CAMERA_DEVICE_BACK = 1
} SceCameraDevice;
typedef enum SceCameraPriority {
 SCE_CAMERA_PRIORITY_SHARE = 0,
 SCE_CAMERA_PRIORITY_EXCLUSIVE = 1
} SceCameraPriority;
typedef enum SceCameraFormat {
 SCE_CAMERA_FORMAT_INVALID = 0,
 SCE_CAMERA_FORMAT_YUV422_PLANE = 1,
 SCE_CAMERA_FORMAT_YUV422_PACKED = 2,
 SCE_CAMERA_FORMAT_YUV420_PLANE = 3,
 SCE_CAMERA_FORMAT_ARGB = 4,
 SCE_CAMERA_FORMAT_ABGR = 5,
 SCE_CAMERA_FORMAT_RAW8 = 6
} SceCameraFormat;
typedef enum SceCameraResolution {
 SCE_CAMERA_RESOLUTION_0_0 = 0,
 SCE_CAMERA_RESOLUTION_640_480 = 1,
 SCE_CAMERA_RESOLUTION_320_240 = 2,
 SCE_CAMERA_RESOLUTION_160_120 = 3,
 SCE_CAMERA_RESOLUTION_352_288 = 4,
 SCE_CAMERA_RESOLUTION_176_144 = 5,
 SCE_CAMERA_RESOLUTION_480_272 = 6,
 SCE_CAMERA_RESOLUTION_640_360 = 8
} SceCameraResolution;
typedef enum SceCameraFrameRate {
 SCE_CAMERA_FRAMERATE_3_FPS = 3,
 SCE_CAMERA_FRAMERATE_5_FPS = 5,
 SCE_CAMERA_FRAMERATE_7_FPS = 7,
 SCE_CAMERA_FRAMERATE_10_FPS = 10,
 SCE_CAMERA_FRAMERATE_15_FPS = 15,
 SCE_CAMERA_FRAMERATE_20_FPS = 20,
 SCE_CAMERA_FRAMERATE_30_FPS = 30,
 SCE_CAMERA_FRAMERATE_60_FPS = 60,
 SCE_CAMERA_FRAMERATE_120_FPS = 120
} SceCameraFrameRate;
typedef enum SceCameraExposureCompensation {
 SCE_CAMERA_EV_NEGATIVE_20 = -20,
 SCE_CAMERA_EV_NEGATIVE_17 = -17,
 SCE_CAMERA_EV_NEGATIVE_15 = -15,
 SCE_CAMERA_EV_NEGATIVE_13 = -13,
 SCE_CAMERA_EV_NEGATIVE_10 = -10,
 SCE_CAMERA_EV_NEGATIVE_7 = -7,
 SCE_CAMERA_EV_NEGATIVE_5 = -5,
 SCE_CAMERA_EV_NEGATIVE_3 = -3,
 SCE_CAMERA_EV_POSITIVE_0 = 0,
 SCE_CAMERA_EV_POSITIVE_3 = 3,
 SCE_CAMERA_EV_POSITIVE_5 = 5,
 SCE_CAMERA_EV_POSITIVE_7 = 7,
 SCE_CAMERA_EV_POSITIVE_10 = 10,
 SCE_CAMERA_EV_POSITIVE_13 = 13,
 SCE_CAMERA_EV_POSITIVE_15 = 15,
 SCE_CAMERA_EV_POSITIVE_17 = 17,
 SCE_CAMERA_EV_POSITIVE_20 = 20
} SceCameraExposureCompensation;
typedef enum SceCameraEffect {
 SCE_CAMERA_EFFECT_NORMAL = 0,
 SCE_CAMERA_EFFECT_NEGATIVE = 1,
 SCE_CAMERA_EFFECT_BLACKWHITE = 2,
 SCE_CAMERA_EFFECT_SEPIA = 3,
 SCE_CAMERA_EFFECT_BLUE = 4,
 SCE_CAMERA_EFFECT_RED = 5,
 SCE_CAMERA_EFFECT_GREEN = 6
} SceCameraEffect;
typedef enum SceCameraReverse {
 SCE_CAMERA_REVERSE_OFF = 0,
 SCE_CAMERA_REVERSE_MIRROR = 1,
 SCE_CAMERA_REVERSE_FLIP = 2,
 SCE_CAMERA_REVERSE_MIRROR_FLIP = (SCE_CAMERA_REVERSE_MIRROR | SCE_CAMERA_REVERSE_FLIP)
} SceCameraReverse;
typedef enum SceCameraSaturation {
 SCE_CAMERA_SATURATION_0 = 0,
 SCE_CAMERA_SATURATION_5 = 5,
 SCE_CAMERA_SATURATION_10 = 10,
 SCE_CAMERA_SATURATION_20 = 20,
 SCE_CAMERA_SATURATION_30 = 30,
 SCE_CAMERA_SATURATION_40 = 40
} SceCameraSaturation;
typedef enum SceCameraSharpness {
 SCE_CAMERA_SHARPNESS_100 = 1,
 SCE_CAMERA_SHARPNESS_200 = 2,
 SCE_CAMERA_SHARPNESS_300 = 3,
 SCE_CAMERA_SHARPNESS_400 = 4
} SceCameraSharpness;
typedef enum SceCameraAntiFlicker {
 SCE_CAMERA_ANTIFLICKER_AUTO = 1,
 SCE_CAMERA_ANTIFLICKER_50HZ = 2,
 SCE_CAMERA_ANTIFLICKER_60HZ = 3
} SceCameraAntiFlicker;
typedef enum SceCameraISO {
 SCE_CAMERA_ISO_AUTO = 1,
 SCE_CAMERA_ISO_100 = 100,
 SCE_CAMERA_ISO_200 = 200,
 SCE_CAMERA_ISO_400 = 400
} SceCameraISO;
typedef enum SceCameraGain {
 SCE_CAMERA_GAIN_AUTO = 0,
 SCE_CAMERA_GAIN_1 = 1,
 SCE_CAMERA_GAIN_2 = 2,
 SCE_CAMERA_GAIN_3 = 3,
 SCE_CAMERA_GAIN_4 = 4,
 SCE_CAMERA_GAIN_5 = 5,
 SCE_CAMERA_GAIN_6 = 6,
 SCE_CAMERA_GAIN_7 = 7,
 SCE_CAMERA_GAIN_8 = 8,
 SCE_CAMERA_GAIN_9 = 9,
 SCE_CAMERA_GAIN_10 = 10,
 SCE_CAMERA_GAIN_11 = 11,
 SCE_CAMERA_GAIN_12 = 12,
 SCE_CAMERA_GAIN_13 = 13,
 SCE_CAMERA_GAIN_14 = 14,
 SCE_CAMERA_GAIN_15 = 15,
 SCE_CAMERA_GAIN_16 = 16
} SceCameraGain;
typedef enum SceCameraWhiteBalance {
 SCE_CAMERA_WB_AUTO = 0,
 SCE_CAMERA_WB_DAY = 1,
 SCE_CAMERA_WB_CWF = 2,
 SCE_CAMERA_WB_SLSA = 4
} SceCameraWhiteBalance;
typedef enum SceCameraBacklight {
 SCE_CAMERA_BACKLIGHT_OFF = 0,
 SCE_CAMERA_BACKLIGHT_ON = 1
} SceCameraBacklight;
typedef enum SceCameraNightmode {
 SCE_CAMERA_NIGHTMODE_OFF = 0,
 SCE_CAMERA_NIGHTMODE_LESS10 = 1,
 SCE_CAMERA_NIGHTMODE_LESS100 = 2,
 SCE_CAMERA_NIGHTMODE_OVER100 = 3
} SceCameraNightmode;
typedef struct SceCameraInfo {
 SceSize size;
 uint16_t priority;
 uint16_t format;
 uint16_t resolution;
 uint16_t framerate;
 uint16_t width;
 uint16_t height;
 uint16_t range;
 uint16_t pad;
 SceSize sizeIBase;
 SceSize sizeUBase;
 SceSize sizeVBase;
 void *pIBase;
 void *pUBase;
 void *pVBase;
 uint16_t pitch;
 uint16_t buffer;
} SceCameraInfo;
typedef struct SceCameraRead {
 SceSize size;
 int mode;
 int pad;
 int status;
 uint64_t frame;
 uint64_t timestamp;
 SceSize sizeIBase;
 SceSize sizeUBase;
 SceSize sizeVBase;
 void *pIBase;
 void *pUBase;
 void *pVBase;
} SceCameraRead;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef long _off_t;
typedef short __dev_t;
typedef unsigned short __uid_t;
typedef unsigned short __gid_t;
typedef long long _off64_t;
typedef long _fpos_t;
typedef signed int _ssize_t;
typedef unsigned int wint_t;
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;
typedef _LOCK_RECURSIVE_T _flock_t;
typedef void *_iconv_t;
typedef unsigned long __ULong;
typedef struct __sFILE __FILE;
typedef enum SceSystemParamId {
 SCE_SYSTEM_PARAM_ID_LANG = 1,
 SCE_SYSTEM_PARAM_ID_ENTER_BUTTON,
 SCE_SYSTEM_PARAM_ID_USERNAME,
 SCE_SYSTEM_PARAM_ID_DATE_FORMAT,
 SCE_SYSTEM_PARAM_ID_TIME_FORMAT,
 SCE_SYSTEM_PARAM_ID_TIME_ZONE,
 SCE_SYSTEM_PARAM_ID_DAYLIGHT_SAVINGS,
 SCE_SYSTEM_PARAM_ID_MAX_VALUE = 0xFFFFFFFF
} SceSystemParamId;
typedef enum SceSystemParamLang {
 SCE_SYSTEM_PARAM_LANG_JAPANESE,
 SCE_SYSTEM_PARAM_LANG_ENGLISH_US,
 SCE_SYSTEM_PARAM_LANG_FRENCH,
 SCE_SYSTEM_PARAM_LANG_SPANISH,
 SCE_SYSTEM_PARAM_LANG_GERMAN,
 SCE_SYSTEM_PARAM_LANG_ITALIAN,
 SCE_SYSTEM_PARAM_LANG_DUTCH,
 SCE_SYSTEM_PARAM_LANG_PORTUGUESE_PT,
 SCE_SYSTEM_PARAM_LANG_RUSSIAN,
 SCE_SYSTEM_PARAM_LANG_KOREAN,
 SCE_SYSTEM_PARAM_LANG_CHINESE_T,
 SCE_SYSTEM_PARAM_LANG_CHINESE_S,
 SCE_SYSTEM_PARAM_LANG_FINNISH,
 SCE_SYSTEM_PARAM_LANG_SWEDISH,
 SCE_SYSTEM_PARAM_LANG_DANISH,
 SCE_SYSTEM_PARAM_LANG_NORWEGIAN,
 SCE_SYSTEM_PARAM_LANG_POLISH,
 SCE_SYSTEM_PARAM_LANG_PORTUGUESE_BR,
 SCE_SYSTEM_PARAM_LANG_ENGLISH_GB,
 SCE_SYSTEM_PARAM_LANG_TURKISH,
 SCE_SYSTEM_PARAM_LANG_MAX_VALUE = 0xFFFFFFFF
} SceSystemParamLang;
typedef enum SceSystemParamEnterButtonAssign {
 SCE_SYSTEM_PARAM_ENTER_BUTTON_CIRCLE,
 SCE_SYSTEM_PARAM_ENTER_BUTTON_CROSS,
 SCE_SYSTEM_PARAM_ENTER_BUTTON_MAX_VALUE = 0xFFFFFFFF
} SceSystemParamEnterButtonAssign;
typedef enum SceSystemParamDateFormat {
 SCE_SYSTEM_PARAM_DATE_FORMAT_YYYYMMDD,
 SCE_SYSTEM_PARAM_DATE_FORMAT_DDMMYYYY,
 SCE_SYSTEM_PARAM_DATE_FORMAT_MMDDYYYY
} SceSystemParamDateFormat;
typedef enum SceSystemParamTimeFormat {
 SCE_SYSTEM_PARAM_TIME_FORMAT_12HR,
 SCE_SYSTEM_PARAM_TIME_FORMAT_24HR
} SceSystemParamTimeFormat;
typedef enum SceGxmErrorCode {
 SCE_GXM_ERROR_UNINITIALIZED = 0x805B0000,
 SCE_GXM_ERROR_ALREADY_INITIALIZED = 0x805B0001,
 SCE_GXM_ERROR_OUT_OF_MEMORY = 0x805B0002,
 SCE_GXM_ERROR_INVALID_VALUE = 0x805B0003,
 SCE_GXM_ERROR_INVALID_POINTER = 0x805B0004,
 SCE_GXM_ERROR_INVALID_ALIGNMENT = 0x805B0005,
 SCE_GXM_ERROR_NOT_WITHIN_SCENE = 0x805B0006,
 SCE_GXM_ERROR_WITHIN_SCENE = 0x805B0007,
 SCE_GXM_ERROR_NULL_PROGRAM = 0x805B0008,
 SCE_GXM_ERROR_UNSUPPORTED = 0x805B0009,
 SCE_GXM_ERROR_PATCHER_INTERNAL = 0x805B000A,
 SCE_GXM_ERROR_RESERVE_FAILED = 0x805B000B,
 SCE_GXM_ERROR_PROGRAM_IN_USE = 0x805B000C,
 SCE_GXM_ERROR_INVALID_INDEX_COUNT = 0x805B000D,
 SCE_GXM_ERROR_INVALID_POLYGON_MODE = 0x805B000E,
 SCE_GXM_ERROR_INVALID_SAMPLER_RESULT_TYPE_PRECISION = 0x805B000F,
 SCE_GXM_ERROR_INVALID_SAMPLER_RESULT_TYPE_COMPONENT_COUNT = 0x805B0010,
 SCE_GXM_ERROR_UNIFORM_BUFFER_NOT_RESERVED = 0x805B0011,
 SCE_GXM_ERROR_INVALID_AUXILIARY_SURFACE = 0x805B0013,
 SCE_GXM_ERROR_INVALID_PRECOMPUTED_DRAW = 0x805B0014,
 SCE_GXM_ERROR_INVALID_PRECOMPUTED_VERTEX_STATE = 0x805B0015,
 SCE_GXM_ERROR_INVALID_PRECOMPUTED_FRAGMENT_STATE = 0x805B0016,
 SCE_GXM_ERROR_DRIVER = 0x805B0017
} SceGxmErrorCode;
typedef void (SceGxmDisplayQueueCallback)(const void *callbackData);
typedef struct SceGxmInitializeParams {
 unsigned int flags;
 unsigned int displayQueueMaxPendingCount;
 SceGxmDisplayQueueCallback *displayQueueCallback;
 unsigned int displayQueueCallbackDataSize;
 SceSize parameterBufferSize;
} SceGxmInitializeParams;
typedef enum SceGxmMemoryAttribFlags {
 SCE_GXM_MEMORY_ATTRIB_READ = 1,
 SCE_GXM_MEMORY_ATTRIB_WRITE = 2,
 SCE_GXM_MEMORY_ATTRIB_RW = (SCE_GXM_MEMORY_ATTRIB_READ | SCE_GXM_MEMORY_ATTRIB_WRITE)
} SceGxmMemoryAttribFlags;
typedef enum SceGxmAttributeFormat {
 SCE_GXM_ATTRIBUTE_FORMAT_U8,
 SCE_GXM_ATTRIBUTE_FORMAT_S8,
 SCE_GXM_ATTRIBUTE_FORMAT_U16,
 SCE_GXM_ATTRIBUTE_FORMAT_S16,
 SCE_GXM_ATTRIBUTE_FORMAT_U8N,
 SCE_GXM_ATTRIBUTE_FORMAT_S8N,
 SCE_GXM_ATTRIBUTE_FORMAT_U16N,
 SCE_GXM_ATTRIBUTE_FORMAT_S16N,
 SCE_GXM_ATTRIBUTE_FORMAT_F16,
 SCE_GXM_ATTRIBUTE_FORMAT_F32,
 SCE_GXM_ATTRIBUTE_FORMAT_UNTYPED
} SceGxmAttributeFormat;
typedef enum SceGxmDepthStencilFormat {
 SCE_GXM_DEPTH_STENCIL_FORMAT_DF32 = 0x00044000u,
 SCE_GXM_DEPTH_STENCIL_FORMAT_S8 = 0x00022000u,
 SCE_GXM_DEPTH_STENCIL_FORMAT_DF32_S8 = 0x00066000u,
 SCE_GXM_DEPTH_STENCIL_FORMAT_DF32M = 0x000CC000U,
 SCE_GXM_DEPTH_STENCIL_FORMAT_DF32M_S8 = 0x000EE000U,
 SCE_GXM_DEPTH_STENCIL_FORMAT_S8D24 = 0x01266000u,
 SCE_GXM_DEPTH_STENCIL_FORMAT_D16 = 0x02444000u
} SceGxmDepthStencilFormat;
typedef enum SceGxmPrimitiveType {
 SCE_GXM_PRIMITIVE_TRIANGLES = 0x00000000u,
 SCE_GXM_PRIMITIVE_LINES = 0x04000000u,
 SCE_GXM_PRIMITIVE_POINTS = 0x08000000u,
 SCE_GXM_PRIMITIVE_TRIANGLE_STRIP = 0x0C000000u,
 SCE_GXM_PRIMITIVE_TRIANGLE_FAN = 0x10000000u,
 SCE_GXM_PRIMITIVE_TRIANGLE_EDGES = 0x14000000u
} SceGxmPrimitiveType;
typedef enum SceGxmEdgeEnableFlags {
 SCE_GXM_EDGE_ENABLE_01 = 0x00000100u,
 SCE_GXM_EDGE_ENABLE_12 = 0x00000200u,
 SCE_GXM_EDGE_ENABLE_20 = 0x00000400u
} SceGxmEdgeEnableFlags;
typedef enum SceGxmRegionClipMode {
 SCE_GXM_REGION_CLIP_NONE = 0x00000000u,
 SCE_GXM_REGION_CLIP_ALL = 0x40000000u,
 SCE_GXM_REGION_CLIP_OUTSIDE = 0x80000000u,
 SCE_GXM_REGION_CLIP_INSIDE = 0xC0000000u
} SceGxmRegionClipMode;
typedef enum SceGxmDepthFunc {
 SCE_GXM_DEPTH_FUNC_NEVER = 0x00000000u,
 SCE_GXM_DEPTH_FUNC_LESS = 0x00400000u,
 SCE_GXM_DEPTH_FUNC_EQUAL = 0x00800000u,
 SCE_GXM_DEPTH_FUNC_LESS_EQUAL = 0x00C00000u,
 SCE_GXM_DEPTH_FUNC_GREATER = 0x01000000u,
 SCE_GXM_DEPTH_FUNC_NOT_EQUAL = 0x01400000u,
 SCE_GXM_DEPTH_FUNC_GREATER_EQUAL = 0x01800000u,
 SCE_GXM_DEPTH_FUNC_ALWAYS = 0x01C00000u
} SceGxmDepthFunc;
typedef enum SceGxmStencilFunc {
 SCE_GXM_STENCIL_FUNC_NEVER = 0x00000000u,
 SCE_GXM_STENCIL_FUNC_LESS = 0x02000000u,
 SCE_GXM_STENCIL_FUNC_EQUAL = 0x04000000u,
 SCE_GXM_STENCIL_FUNC_LESS_EQUAL = 0x06000000u,
 SCE_GXM_STENCIL_FUNC_GREATER = 0x08000000u,
 SCE_GXM_STENCIL_FUNC_NOT_EQUAL = 0x0A000000u,
 SCE_GXM_STENCIL_FUNC_GREATER_EQUAL = 0x0C000000u,
 SCE_GXM_STENCIL_FUNC_ALWAYS = 0x0E000000u
} SceGxmStencilFunc;
typedef enum SceGxmStencilOp {
 SCE_GXM_STENCIL_OP_KEEP = 0x00000000u,
 SCE_GXM_STENCIL_OP_ZERO = 0x00000001u,
 SCE_GXM_STENCIL_OP_REPLACE = 0x00000002u,
 SCE_GXM_STENCIL_OP_INCR = 0x00000003u,
 SCE_GXM_STENCIL_OP_DECR = 0x00000004u,
 SCE_GXM_STENCIL_OP_INVERT = 0x00000005u,
 SCE_GXM_STENCIL_OP_INCR_WRAP = 0x00000006u,
 SCE_GXM_STENCIL_OP_DECR_WRAP = 0x00000007u
} SceGxmStencilOp;
typedef enum SceGxmCullMode {
 SCE_GXM_CULL_NONE = 0x00000000u,
 SCE_GXM_CULL_CW = 0x00000001u,
 SCE_GXM_CULL_CCW = 0x00000002u
} SceGxmCullMode;
typedef enum SceGxmPassType {
 SCE_GXM_PASS_TYPE_OPAQUE = 0x00000000u,
 SCE_GXM_PASS_TYPE_TRANSLUCENT = 0x02000000u,
 SCE_GXM_PASS_TYPE_DISCARD = 0x04000000u,
 SCE_GXM_PASS_TYPE_MASK_UPDATE = 0x06000000u,
 SCE_GXM_PASS_TYPE_DEPTH_REPLACE = 0x0A000000u
} SceGxmPassType;
typedef enum SceGxmPolygonMode {
 SCE_GXM_POLYGON_MODE_TRIANGLE_FILL = 0x00000000u,
 SCE_GXM_POLYGON_MODE_LINE = 0x00008000u,
 SCE_GXM_POLYGON_MODE_POINT_10UV = 0x00010000u,
 SCE_GXM_POLYGON_MODE_POINT = 0x00018000u,
 SCE_GXM_POLYGON_MODE_POINT_01UV = 0x00020000u,
 SCE_GXM_POLYGON_MODE_TRIANGLE_LINE = 0x00028000u,
 SCE_GXM_POLYGON_MODE_TRIANGLE_POINT = 0x00030000u
} SceGxmPolygonMode;
typedef enum SceGxmColorSwizzle4Mode {
 SCE_GXM_COLOR_SWIZZLE4_ABGR = 0x00000000u,
 SCE_GXM_COLOR_SWIZZLE4_ARGB = 0x00100000u,
 SCE_GXM_COLOR_SWIZZLE4_RGBA = 0x00200000u,
 SCE_GXM_COLOR_SWIZZLE4_BGRA = 0x00300000u
} SceGxmColorSwizzle4Mode;
typedef enum SceGxmColorSwizzle3Mode {
 SCE_GXM_COLOR_SWIZZLE3_BGR = 0x00000000u,
 SCE_GXM_COLOR_SWIZZLE3_RGB = 0x00100000u
} SceGxmColorSwizzle3Mode;
typedef enum SceGxmColorSwizzle2Mode {
 SCE_GXM_COLOR_SWIZZLE2_GR = 0x00000000u,
 SCE_GXM_COLOR_SWIZZLE2_RG = 0x00100000u,
 SCE_GXM_COLOR_SWIZZLE2_RA = 0x00200000u,
 SCE_GXM_COLOR_SWIZZLE2_AR = 0x00300000u
} SceGxmColorSwizzle2Mode;
typedef enum SceGxmColorSwizzle1Mode {
 SCE_GXM_COLOR_SWIZZLE1_R = 0x00000000u,
 SCE_GXM_COLOR_SWIZZLE1_G = 0x00100000u,
 SCE_GXM_COLOR_SWIZZLE1_A = 0x00100000u
} SceGxmColorSwizzle1Mode;
typedef enum SceGxmColorBaseFormat {
 SCE_GXM_COLOR_BASE_FORMAT_U8U8U8U8 = 0x00000000,
 SCE_GXM_COLOR_BASE_FORMAT_U8U8U8 = 0x10000000,
 SCE_GXM_COLOR_BASE_FORMAT_U5U6U5 = 0x30000000,
 SCE_GXM_COLOR_BASE_FORMAT_U1U5U5U5 = 0x40000000,
 SCE_GXM_COLOR_BASE_FORMAT_U4U4U4U4 = 0x50000000,
 SCE_GXM_COLOR_BASE_FORMAT_U8U3U3U2 = 0x60000000,
 SCE_GXM_COLOR_BASE_FORMAT_F16 = 0xF0000000,
 SCE_GXM_COLOR_BASE_FORMAT_F16F16 = 0x00800000,
 SCE_GXM_COLOR_BASE_FORMAT_F32 = 0x10800000,
 SCE_GXM_COLOR_BASE_FORMAT_S16 = 0x20800000,
 SCE_GXM_COLOR_BASE_FORMAT_S16S16 = 0x30800000,
 SCE_GXM_COLOR_BASE_FORMAT_U16 = 0x40800000,
 SCE_GXM_COLOR_BASE_FORMAT_U16U16 = 0x50800000,
 SCE_GXM_COLOR_BASE_FORMAT_U2U10U10U10 = 0x60800000,
 SCE_GXM_COLOR_BASE_FORMAT_U8 = 0x80800000,
 SCE_GXM_COLOR_BASE_FORMAT_S8 = 0x90800000,
 SCE_GXM_COLOR_BASE_FORMAT_S5S5U6 = 0xA0800000,
 SCE_GXM_COLOR_BASE_FORMAT_U8U8 = 0xB0800000,
 SCE_GXM_COLOR_BASE_FORMAT_S8S8 = 0xC0800000,
 SCE_GXM_COLOR_BASE_FORMAT_U8S8S8U8 = 0xD0800000,
 SCE_GXM_COLOR_BASE_FORMAT_S8S8S8S8 = 0xE0800000,
 SCE_GXM_COLOR_BASE_FORMAT_F16F16F16F16 = 0x01000000,
 SCE_GXM_COLOR_BASE_FORMAT_F32F32 = 0x11000000,
 SCE_GXM_COLOR_BASE_FORMAT_F11F11F10 = 0x21000000,
 SCE_GXM_COLOR_BASE_FORMAT_SE5M9M9M9 = 0x31000000,
 SCE_GXM_COLOR_BASE_FORMAT_U2F10F10F10 = 0x41000000
} SceGxmColorBaseFormat;
typedef enum SceGxmColorFormat {
 SCE_GXM_COLOR_FORMAT_U8U8U8U8_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8U8 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U8U8U8U8_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8U8 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_U8U8U8U8_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8U8 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_U8U8U8U8_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8U8 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_U8U8U8_BGR = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8 | SCE_GXM_COLOR_SWIZZLE3_BGR,
 SCE_GXM_COLOR_FORMAT_U8U8U8_RGB = SCE_GXM_COLOR_BASE_FORMAT_U8U8U8 | SCE_GXM_COLOR_SWIZZLE3_RGB,
 SCE_GXM_COLOR_FORMAT_U5U6U5_BGR = SCE_GXM_COLOR_BASE_FORMAT_U5U6U5 | SCE_GXM_COLOR_SWIZZLE3_BGR,
 SCE_GXM_COLOR_FORMAT_U5U6U5_RGB = SCE_GXM_COLOR_BASE_FORMAT_U5U6U5 | SCE_GXM_COLOR_SWIZZLE3_RGB,
 SCE_GXM_COLOR_FORMAT_U1U5U5U5_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U1U5U5U5 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U1U5U5U5_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U1U5U5U5 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_U5U5U5U1_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U1U5U5U5 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_U5U5U5U1_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U1U5U5U5 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_U4U4U4U4_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U4U4U4U4 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U4U4U4U4_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U4U4U4U4 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_U4U4U4U4_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U4U4U4U4 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_U4U4U4U4_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U4U4U4U4 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_U8U3U3U2_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U8U3U3U2,
 SCE_GXM_COLOR_FORMAT_F16_R = SCE_GXM_COLOR_BASE_FORMAT_F16 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_F16_G = SCE_GXM_COLOR_BASE_FORMAT_F16 | SCE_GXM_COLOR_SWIZZLE1_G,
 SCE_GXM_COLOR_FORMAT_F16F16_GR = SCE_GXM_COLOR_BASE_FORMAT_F16F16 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_F16F16_RG = SCE_GXM_COLOR_BASE_FORMAT_F16F16 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_F32_R = SCE_GXM_COLOR_BASE_FORMAT_F32 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_S16_R = SCE_GXM_COLOR_BASE_FORMAT_S16 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_S16_G = SCE_GXM_COLOR_BASE_FORMAT_S16 | SCE_GXM_COLOR_SWIZZLE1_G,
 SCE_GXM_COLOR_FORMAT_S16S16_GR = SCE_GXM_COLOR_BASE_FORMAT_S16S16 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_S16S16_RG = SCE_GXM_COLOR_BASE_FORMAT_S16S16 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_U16_R = SCE_GXM_COLOR_BASE_FORMAT_U16 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_U16_G = SCE_GXM_COLOR_BASE_FORMAT_U16 | SCE_GXM_COLOR_SWIZZLE1_G,
 SCE_GXM_COLOR_FORMAT_U16U16_GR = SCE_GXM_COLOR_BASE_FORMAT_U16U16 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_U16U16_RG = SCE_GXM_COLOR_BASE_FORMAT_U16U16 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_U2U10U10U10_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U2U10U10U10 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U2U10U10U10_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U2U10U10U10 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_U10U10U10U2_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U2U10U10U10 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_U10U10U10U2_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U2U10U10U10 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_U8_R = SCE_GXM_COLOR_BASE_FORMAT_U8 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_U8_A = SCE_GXM_COLOR_BASE_FORMAT_U8 | SCE_GXM_COLOR_SWIZZLE1_A,
 SCE_GXM_COLOR_FORMAT_S8_R = SCE_GXM_COLOR_BASE_FORMAT_S8 | SCE_GXM_COLOR_SWIZZLE1_R,
 SCE_GXM_COLOR_FORMAT_S8_A = SCE_GXM_COLOR_BASE_FORMAT_S8 | SCE_GXM_COLOR_SWIZZLE1_A,
 SCE_GXM_COLOR_FORMAT_U6S5S5_BGR = SCE_GXM_COLOR_BASE_FORMAT_S5S5U6 | SCE_GXM_COLOR_SWIZZLE3_BGR,
 SCE_GXM_COLOR_FORMAT_S5S5U6_RGB = SCE_GXM_COLOR_BASE_FORMAT_S5S5U6 | SCE_GXM_COLOR_SWIZZLE3_RGB,
 SCE_GXM_COLOR_FORMAT_U8U8_GR = SCE_GXM_COLOR_BASE_FORMAT_U8U8 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_U8U8_RG = SCE_GXM_COLOR_BASE_FORMAT_U8U8 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_U8U8_RA = SCE_GXM_COLOR_BASE_FORMAT_U8U8 | SCE_GXM_COLOR_SWIZZLE2_RA,
 SCE_GXM_COLOR_FORMAT_U8U8_AR = SCE_GXM_COLOR_BASE_FORMAT_U8U8 | SCE_GXM_COLOR_SWIZZLE2_AR,
 SCE_GXM_COLOR_FORMAT_S8S8_GR = SCE_GXM_COLOR_BASE_FORMAT_S8S8 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_S8S8_RG = SCE_GXM_COLOR_BASE_FORMAT_S8S8 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_S8S8_RA = SCE_GXM_COLOR_BASE_FORMAT_S8S8 | SCE_GXM_COLOR_SWIZZLE2_RA,
 SCE_GXM_COLOR_FORMAT_S8S8_AR = SCE_GXM_COLOR_BASE_FORMAT_S8S8 | SCE_GXM_COLOR_SWIZZLE2_AR,
 SCE_GXM_COLOR_FORMAT_U8S8S8U8_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U8S8S8U8 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U8U8S8S8_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U8S8S8U8 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_U8S8S8U8_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U8S8S8U8 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_S8S8U8U8_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U8S8S8U8 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_S8S8S8S8_ABGR = SCE_GXM_COLOR_BASE_FORMAT_S8S8S8S8 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_S8S8S8S8_ARGB = SCE_GXM_COLOR_BASE_FORMAT_S8S8S8S8 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_S8S8S8S8_RGBA = SCE_GXM_COLOR_BASE_FORMAT_S8S8S8S8 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_S8S8S8S8_BGRA = SCE_GXM_COLOR_BASE_FORMAT_S8S8S8S8 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_F16F16F16F16_ABGR = SCE_GXM_COLOR_BASE_FORMAT_F16F16F16F16 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_F16F16F16F16_ARGB = SCE_GXM_COLOR_BASE_FORMAT_F16F16F16F16 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_F16F16F16F16_RGBA = SCE_GXM_COLOR_BASE_FORMAT_F16F16F16F16 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_F16F16F16F16_BGRA = SCE_GXM_COLOR_BASE_FORMAT_F16F16F16F16 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_F32F32_GR = SCE_GXM_COLOR_BASE_FORMAT_F32F32 | SCE_GXM_COLOR_SWIZZLE2_GR,
 SCE_GXM_COLOR_FORMAT_F32F32_RG = SCE_GXM_COLOR_BASE_FORMAT_F32F32 | SCE_GXM_COLOR_SWIZZLE2_RG,
 SCE_GXM_COLOR_FORMAT_F10F11F11_BGR = SCE_GXM_COLOR_BASE_FORMAT_F11F11F10 | SCE_GXM_COLOR_SWIZZLE3_BGR,
 SCE_GXM_COLOR_FORMAT_F11F11F10_RGB = SCE_GXM_COLOR_BASE_FORMAT_F11F11F10 | SCE_GXM_COLOR_SWIZZLE3_RGB,
 SCE_GXM_COLOR_FORMAT_SE5M9M9M9_BGR = SCE_GXM_COLOR_BASE_FORMAT_SE5M9M9M9 | SCE_GXM_COLOR_SWIZZLE3_BGR,
 SCE_GXM_COLOR_FORMAT_SE5M9M9M9_RGB = SCE_GXM_COLOR_BASE_FORMAT_SE5M9M9M9 | SCE_GXM_COLOR_SWIZZLE3_RGB,
 SCE_GXM_COLOR_FORMAT_U2F10F10F10_ABGR = SCE_GXM_COLOR_BASE_FORMAT_U2F10F10F10 | SCE_GXM_COLOR_SWIZZLE4_ABGR,
 SCE_GXM_COLOR_FORMAT_U2F10F10F10_ARGB = SCE_GXM_COLOR_BASE_FORMAT_U2F10F10F10 | SCE_GXM_COLOR_SWIZZLE4_ARGB,
 SCE_GXM_COLOR_FORMAT_F10F10F10U2_RGBA = SCE_GXM_COLOR_BASE_FORMAT_U2F10F10F10 | SCE_GXM_COLOR_SWIZZLE4_RGBA,
 SCE_GXM_COLOR_FORMAT_F10F10F10U2_BGRA = SCE_GXM_COLOR_BASE_FORMAT_U2F10F10F10 | SCE_GXM_COLOR_SWIZZLE4_BGRA,
 SCE_GXM_COLOR_FORMAT_A8B8G8R8 = SCE_GXM_COLOR_FORMAT_U8U8U8U8_ABGR,
 SCE_GXM_COLOR_FORMAT_A8R8G8B8 = SCE_GXM_COLOR_FORMAT_U8U8U8U8_ARGB,
 SCE_GXM_COLOR_FORMAT_R5G6B5 = SCE_GXM_COLOR_FORMAT_U5U6U5_RGB,
 SCE_GXM_COLOR_FORMAT_A1R5G5B5 = SCE_GXM_COLOR_FORMAT_U1U5U5U5_ARGB,
 SCE_GXM_COLOR_FORMAT_A4R4G4B4 = SCE_GXM_COLOR_FORMAT_U4U4U4U4_ARGB,
 SCE_GXM_COLOR_FORMAT_A8 = SCE_GXM_COLOR_FORMAT_U8_A
} SceGxmColorFormat;
typedef enum SceGxmColorSurfaceType {
 SCE_GXM_COLOR_SURFACE_LINEAR = 0x00000000u,
 SCE_GXM_COLOR_SURFACE_TILED = 0x04000000u,
 SCE_GXM_COLOR_SURFACE_SWIZZLED = 0x08000000u
} SceGxmColorSurfaceType;
typedef enum SceGxmColorSurfaceGammaMode {
 SCE_GXM_COLOR_SURFACE_GAMMA_NONE = 0x00000000u,
 SCE_GXM_COLOR_SURFACE_GAMMA_R = 0x00001000u,
 SCE_GXM_COLOR_SURFACE_GAMMA_GR = 0x00003000u,
 SCE_GXM_COLOR_SURFACE_GAMMA_BGR = 0x00001000u
} SceGxmColorSurfaceGammaMode;
typedef enum SceGxmColorSurfaceDitherMode {
 SCE_GXM_COLOR_SURFACE_DITHER_DISABLED = 0x00000000u,
 SCE_GXM_COLOR_SURFACE_DITHER_ENABLED = 0x00000008u
} SceGxmColorSurfaceDitherMode;
typedef enum SceGxmDepthStencilSurfaceType {
 SCE_GXM_DEPTH_STENCIL_SURFACE_LINEAR = 0x00000000u,
 SCE_GXM_DEPTH_STENCIL_SURFACE_TILED = 0x00011000u
} SceGxmDepthStencilSurfaceType;
typedef enum SceGxmOutputRegisterFormat {
 SCE_GXM_OUTPUT_REGISTER_FORMAT_DECLARED,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_CHAR4,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_USHORT2,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_SHORT2,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_HALF4,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_HALF2,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_FLOAT2,
 SCE_GXM_OUTPUT_REGISTER_FORMAT_FLOAT
} SceGxmOutputRegisterFormat;
typedef enum SceGxmMultisampleMode {
 SCE_GXM_MULTISAMPLE_NONE,
 SCE_GXM_MULTISAMPLE_2X,
 SCE_GXM_MULTISAMPLE_4X
} SceGxmMultisampleMode;
typedef enum SceGxmTextureSwizzle4Mode {
 SCE_GXM_TEXTURE_SWIZZLE4_ABGR = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE4_ARGB = 0x00001000u,
 SCE_GXM_TEXTURE_SWIZZLE4_RGBA = 0x00002000u,
 SCE_GXM_TEXTURE_SWIZZLE4_BGRA = 0x00003000u,
 SCE_GXM_TEXTURE_SWIZZLE4_1BGR = 0x00004000u,
 SCE_GXM_TEXTURE_SWIZZLE4_1RGB = 0x00005000u,
 SCE_GXM_TEXTURE_SWIZZLE4_RGB1 = 0x00006000u,
 SCE_GXM_TEXTURE_SWIZZLE4_BGR1 = 0x00007000u
} SceGxmTextureSwizzle4Mode;
typedef enum SceGxmTextureSwizzle3Mode {
 SCE_GXM_TEXTURE_SWIZZLE3_BGR = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE3_RGB = 0x00001000u
} SceGxmTextureSwizzle3Mode;
typedef enum SceGxmTextureSwizzle2Mode {
 SCE_GXM_TEXTURE_SWIZZLE2_GR = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE2_00GR = 0x00001000u,
 SCE_GXM_TEXTURE_SWIZZLE2_GRRR = 0x00002000u,
 SCE_GXM_TEXTURE_SWIZZLE2_RGGG = 0x00003000u,
 SCE_GXM_TEXTURE_SWIZZLE2_GRGR = 0x00004000u,
 SCE_GXM_TEXTURE_SWIZZLE2_00RG = 0x00005000u
} SceGxmTextureSwizzle2Mode;
typedef enum SceGxmTextureSwizzle2ModeAlt {
 SCE_GXM_TEXTURE_SWIZZLE2_SD = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE2_DS = 0x00001000u
} SceGxmTextureSwizzle2ModeAlt;
typedef enum SceGxmTextureSwizzle1Mode {
 SCE_GXM_TEXTURE_SWIZZLE1_R = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE1_000R = 0x00001000u,
 SCE_GXM_TEXTURE_SWIZZLE1_111R = 0x00002000u,
 SCE_GXM_TEXTURE_SWIZZLE1_RRRR = 0x00003000u,
 SCE_GXM_TEXTURE_SWIZZLE1_0RRR = 0x00004000u,
 SCE_GXM_TEXTURE_SWIZZLE1_1RRR = 0x00005000u,
 SCE_GXM_TEXTURE_SWIZZLE1_R000 = 0x00006000u,
 SCE_GXM_TEXTURE_SWIZZLE1_R111 = 0x00007000u
} SceGxmTextureSwizzle1Mode;
typedef enum SceGxmTextureSwizzleYUV422Mode {
 SCE_GXM_TEXTURE_SWIZZLE_YUYV_CSC0 = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE_YVYU_CSC0 = 0x00001000u,
 SCE_GXM_TEXTURE_SWIZZLE_UYVY_CSC0 = 0x00002000u,
 SCE_GXM_TEXTURE_SWIZZLE_VYUY_CSC0 = 0x00003000u,
 SCE_GXM_TEXTURE_SWIZZLE_YUYV_CSC1 = 0x00004000u,
 SCE_GXM_TEXTURE_SWIZZLE_YVYU_CSC1 = 0x00005000u,
 SCE_GXM_TEXTURE_SWIZZLE_UYVY_CSC1 = 0x00006000u,
 SCE_GXM_TEXTURE_SWIZZLE_VYUY_CSC1 = 0x00007000u
} SceGxmTextureSwizzleYUV422Mode;
typedef enum SceGxmTextureSwizzleYUV420Mode {
 SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC0 = 0x00000000u,
 SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC0 = 0x00001000u,
 SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC1 = 0x00002000u,
 SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC1 = 0x00003000u
} SceGxmTextureSwizzleYUV420Mode;
typedef enum SceGxmTextureBaseFormat {
 SCE_GXM_TEXTURE_BASE_FORMAT_U8 = 0x00000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S8 = 0x01000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 = 0x02000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U8U3U3U2 = 0x03000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 = 0x04000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U5U6U5 = 0x05000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S5S5U6 = 0x06000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 = 0x07000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 = 0x08000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U16 = 0x09000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S16 = 0x0A000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F16 = 0x0B000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 = 0x0C000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 = 0x0D000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 = 0x0E000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 = 0x0F000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 = 0x10000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 = 0x11000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F32 = 0x12000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F32M = 0x13000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_X8S8S8U8 = 0x14000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_X8U24 = 0x15000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U32 = 0x17000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S32 = 0x18000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_SE5M9M9M9 = 0x19000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F11F11F10 = 0x1A000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 = 0x1B000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 = 0x1C000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 = 0x1D000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 = 0x1E000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 = 0x1F000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_PVRT2BPP = 0x80000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_PVRT4BPP = 0x81000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII2BPP = 0x82000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII4BPP = 0x83000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_UBC1 = 0x85000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_UBC2 = 0x86000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_UBC3 = 0x87000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P2 = 0x90000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P3 = 0x91000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 = 0x92000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_P4 = 0x94000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_P8 = 0x95000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8 = 0x98000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8 = 0x99000000,
 SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 = 0x9A000000
} SceGxmTextureBaseFormat;
typedef enum SceGxmTextureFormat {
 SCE_GXM_TEXTURE_FORMAT_U8_000R = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_U8_111R = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_U8_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_U8_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_U8_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_U8_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_U8_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_U8_R = SCE_GXM_TEXTURE_BASE_FORMAT_U8 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_S8_000R = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_S8_111R = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_S8_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_S8_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_S8_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_S8_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_S8_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_S8_R = SCE_GXM_TEXTURE_BASE_FORMAT_S8 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X4U4U4U4_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X4U4U4U4_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4X4_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_U4U4U4X4_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U4U4U4U4 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U8U3U3U2_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U8U3U3U2,
 SCE_GXM_TEXTURE_FORMAT_U1U5U5U5_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U1U5U5U5_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_U5U5U5U1_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_U5U5U5U1_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X1U5U5U5_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X1U5U5U5_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_U5U5U5X1_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_U5U5U5X1_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U1U5U5U5 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U5U6U5_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U5U6U5 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_U5U6U5_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U5U6U5 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_U6S5S5_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_S5S5U6 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_S5S5U6_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_S5S5U6 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_U8U8_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_U8U8_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_U8U8_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_U8U8_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_U8U8_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_U8U8_GR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_S8S8_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_S8S8_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_S8S8_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_S8S8_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_S8S8_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_S8S8_GR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_U16_000R = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_U16_111R = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_U16_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_U16_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_U16_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_U16_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_U16_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_U16_R = SCE_GXM_TEXTURE_BASE_FORMAT_U16 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_S16_000R = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_S16_111R = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_S16_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_S16_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_S16_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_S16_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_S16_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_S16_R = SCE_GXM_TEXTURE_BASE_FORMAT_S16 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_F16_000R = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_F16_111R = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_F16_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_F16_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_F16_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_F16_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_F16_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_F16_R = SCE_GXM_TEXTURE_BASE_FORMAT_F16 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X8U8U8U8_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X8U8U8U8_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8X8_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8X8_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8S8_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8S8_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8S8_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8S8_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X8S8S8S8_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X8S8S8S8_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8X8_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8X8_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U2U10U10U10_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U2U10U10U10_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_U10U10U10U2_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_U10U10U10U2_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X2U10U10U10_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X2U10U10U10_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_U10U10U10X2_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_U10U10U10X2_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U2U10U10U10 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U16U16_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_U16U16_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_U16U16_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_U16U16_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_U16U16_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_U16U16_GR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_S16S16_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_S16S16_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_S16S16_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_S16S16_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_S16S16_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_S16S16_GR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_F16F16_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_F16F16_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_F16F16_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_F16F16_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_F16F16_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_F16F16_GR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_F32_000R = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_F32_111R = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_F32_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_F32_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_F32_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_F32_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_F32_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_F32_R = SCE_GXM_TEXTURE_BASE_FORMAT_F32 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_F32M_000R = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_F32M_111R = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_F32M_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_F32M_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_F32M_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_F32M_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_F32M_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_F32M_R = SCE_GXM_TEXTURE_BASE_FORMAT_F32M | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_X8S8S8U8_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_X8S8S8U8 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_X8U8S8S8_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_X8S8S8U8 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_X8U24_SD = SCE_GXM_TEXTURE_BASE_FORMAT_X8U24 | SCE_GXM_TEXTURE_SWIZZLE2_SD,
 SCE_GXM_TEXTURE_FORMAT_U24X8_DS = SCE_GXM_TEXTURE_BASE_FORMAT_X8U24 | SCE_GXM_TEXTURE_SWIZZLE2_DS,
 SCE_GXM_TEXTURE_FORMAT_U32_000R = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_U32_111R = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_U32_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_U32_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_U32_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_U32_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_U32_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_U32_R = SCE_GXM_TEXTURE_BASE_FORMAT_U32 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_S32_000R = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_000R,
 SCE_GXM_TEXTURE_FORMAT_S32_111R = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_111R,
 SCE_GXM_TEXTURE_FORMAT_S32_RRRR = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_RRRR,
 SCE_GXM_TEXTURE_FORMAT_S32_0RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_0RRR,
 SCE_GXM_TEXTURE_FORMAT_S32_1RRR = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_1RRR,
 SCE_GXM_TEXTURE_FORMAT_S32_R000 = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_R000,
 SCE_GXM_TEXTURE_FORMAT_S32_R111 = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_R111,
 SCE_GXM_TEXTURE_FORMAT_S32_R = SCE_GXM_TEXTURE_BASE_FORMAT_S32 | SCE_GXM_TEXTURE_SWIZZLE1_R,
 SCE_GXM_TEXTURE_FORMAT_SE5M9M9M9_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_SE5M9M9M9 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_SE5M9M9M9_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_SE5M9M9M9 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_F10F11F11_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_F11F11F10 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_F11F11F10_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_F11F11F10 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16F16_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16F16_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16F16_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16F16_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X16F16F16F16_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X16F16F16F16_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16X16_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_F16F16F16X16_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_F16F16F16F16 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16U16_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16U16_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16U16_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16U16_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X16U16U16U16_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X16U16U16U16_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16X16_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_U16U16U16X16_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U16U16U16U16 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16S16_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16S16_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16S16_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16S16_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X16S16S16S16_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X16S16S16S16_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16X16_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_S16S16S16X16_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_S16S16S16S16 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_F32F32_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_F32F32_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_F32F32_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_F32F32_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_F32F32_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_F32F32_GR = SCE_GXM_TEXTURE_BASE_FORMAT_F32F32 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_U32U32_00GR = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_00GR,
 SCE_GXM_TEXTURE_FORMAT_U32U32_GRRR = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_GRRR,
 SCE_GXM_TEXTURE_FORMAT_U32U32_RGGG = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_RGGG,
 SCE_GXM_TEXTURE_FORMAT_U32U32_GRGR = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_GRGR,
 SCE_GXM_TEXTURE_FORMAT_U32U32_00RG = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_00RG,
 SCE_GXM_TEXTURE_FORMAT_U32U32_GR = SCE_GXM_TEXTURE_BASE_FORMAT_U32U32 | SCE_GXM_TEXTURE_SWIZZLE2_GR,
 SCE_GXM_TEXTURE_FORMAT_PVRT2BPP_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRT2BPP | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRT2BPP_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRT2BPP | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_PVRT4BPP_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRT4BPP | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRT4BPP_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRT4BPP | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII2BPP_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII2BPP | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII2BPP_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII2BPP | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII4BPP_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII4BPP | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII4BPP_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_PVRTII4BPP | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_UBC1_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_UBC1 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_UBC2_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_UBC2 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_UBC3_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_UBC3 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_YUV420P2_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P2 | SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YVU420P2_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P2 | SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YUV420P2_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P2 | SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC1,
 SCE_GXM_TEXTURE_FORMAT_YVU420P2_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P2 | SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC1,
 SCE_GXM_TEXTURE_FORMAT_YUV420P3_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P3 | SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YVU420P3_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P3 | SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YUV420P3_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P3 | SCE_GXM_TEXTURE_SWIZZLE_YUV_CSC1,
 SCE_GXM_TEXTURE_FORMAT_YVU420P3_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV420P3 | SCE_GXM_TEXTURE_SWIZZLE_YVU_CSC1,
 SCE_GXM_TEXTURE_FORMAT_YUYV422_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_YUYV_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YVYU422_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_YVYU_CSC0,
 SCE_GXM_TEXTURE_FORMAT_UYVY422_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_UYVY_CSC0,
 SCE_GXM_TEXTURE_FORMAT_VYUY422_CSC0 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_VYUY_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YUYV422_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_YUYV_CSC1,
 SCE_GXM_TEXTURE_FORMAT_YVYU422_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_YVYU_CSC1,
 SCE_GXM_TEXTURE_FORMAT_UYVY422_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_UYVY_CSC1,
 SCE_GXM_TEXTURE_FORMAT_VYUY422_CSC1 = SCE_GXM_TEXTURE_BASE_FORMAT_YUV422 | SCE_GXM_TEXTURE_SWIZZLE_VYUY_CSC1,
 SCE_GXM_TEXTURE_FORMAT_P4_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_P4_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_P4_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_P4_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_P4_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_P4_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_P4_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_P4_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_P4 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_P8_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_P8_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_P8_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_P8_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_P8_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_P8_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_P8_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_P8_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_P8 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_U8U8U8_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U8U8U8 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8_BGR = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE3_BGR,
 SCE_GXM_TEXTURE_FORMAT_S8S8S8_RGB = SCE_GXM_TEXTURE_BASE_FORMAT_S8S8S8 | SCE_GXM_TEXTURE_SWIZZLE3_RGB,
 SCE_GXM_TEXTURE_FORMAT_U2F10F10F10_ABGR = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_ABGR,
 SCE_GXM_TEXTURE_FORMAT_U2F10F10F10_ARGB = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_F10F10F10U2_RGBA = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_RGBA,
 SCE_GXM_TEXTURE_FORMAT_F10F10F10U2_BGRA = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_BGRA,
 SCE_GXM_TEXTURE_FORMAT_X2F10F10F10_1BGR = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_1BGR,
 SCE_GXM_TEXTURE_FORMAT_X2F10F10F10_1RGB = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_1RGB,
 SCE_GXM_TEXTURE_FORMAT_F10F10F10X2_RGB1 = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_RGB1,
 SCE_GXM_TEXTURE_FORMAT_F10F10F10X2_BGR1 = SCE_GXM_TEXTURE_BASE_FORMAT_U2F10F10F10 | SCE_GXM_TEXTURE_SWIZZLE4_BGR1,
 SCE_GXM_TEXTURE_FORMAT_L8 = SCE_GXM_TEXTURE_FORMAT_U8_1RRR,
 SCE_GXM_TEXTURE_FORMAT_A8 = SCE_GXM_TEXTURE_FORMAT_U8_R000,
 SCE_GXM_TEXTURE_FORMAT_R8 = SCE_GXM_TEXTURE_FORMAT_U8_000R,
 SCE_GXM_TEXTURE_FORMAT_A4R4G4B4 = SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_ARGB,
 SCE_GXM_TEXTURE_FORMAT_A1R5G5B5 = SCE_GXM_TEXTURE_FORMAT_U1U5U5U5_ARGB,
 SCE_GXM_TEXTURE_FORMAT_R5G6B5 = SCE_GXM_TEXTURE_FORMAT_U5U6U5_RGB,
 SCE_GXM_TEXTURE_FORMAT_A8L8 = SCE_GXM_TEXTURE_FORMAT_U8U8_GRRR,
 SCE_GXM_TEXTURE_FORMAT_L8A8 = SCE_GXM_TEXTURE_FORMAT_U8U8_RGGG,
 SCE_GXM_TEXTURE_FORMAT_G8R8 = SCE_GXM_TEXTURE_FORMAT_U8U8_00GR,
 SCE_GXM_TEXTURE_FORMAT_L16 = SCE_GXM_TEXTURE_FORMAT_U16_1RRR,
 SCE_GXM_TEXTURE_FORMAT_A16 = SCE_GXM_TEXTURE_FORMAT_U16_R000,
 SCE_GXM_TEXTURE_FORMAT_R16 = SCE_GXM_TEXTURE_FORMAT_U16_000R,
 SCE_GXM_TEXTURE_FORMAT_D16 = SCE_GXM_TEXTURE_FORMAT_U16_R,
 SCE_GXM_TEXTURE_FORMAT_LF16 = SCE_GXM_TEXTURE_FORMAT_F16_1RRR,
 SCE_GXM_TEXTURE_FORMAT_AF16 = SCE_GXM_TEXTURE_FORMAT_F16_R000,
 SCE_GXM_TEXTURE_FORMAT_RF16 = SCE_GXM_TEXTURE_FORMAT_F16_000R,
 SCE_GXM_TEXTURE_FORMAT_A8R8G8B8 = SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ARGB,
 SCE_GXM_TEXTURE_FORMAT_A8B8G8R8 = SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR,
 SCE_GXM_TEXTURE_FORMAT_AF16LF16 = SCE_GXM_TEXTURE_FORMAT_F16F16_GRRR,
 SCE_GXM_TEXTURE_FORMAT_LF16AF16 = SCE_GXM_TEXTURE_FORMAT_F16F16_RGGG,
 SCE_GXM_TEXTURE_FORMAT_GF16RF16 = SCE_GXM_TEXTURE_FORMAT_F16F16_00GR,
 SCE_GXM_TEXTURE_FORMAT_LF32M = SCE_GXM_TEXTURE_FORMAT_F32M_1RRR,
 SCE_GXM_TEXTURE_FORMAT_AF32M = SCE_GXM_TEXTURE_FORMAT_F32M_R000,
 SCE_GXM_TEXTURE_FORMAT_RF32M = SCE_GXM_TEXTURE_FORMAT_F32M_000R,
 SCE_GXM_TEXTURE_FORMAT_DF32M = SCE_GXM_TEXTURE_FORMAT_F32M_R,
 SCE_GXM_TEXTURE_FORMAT_VYUY = SCE_GXM_TEXTURE_FORMAT_VYUY422_CSC0,
 SCE_GXM_TEXTURE_FORMAT_YVYU = SCE_GXM_TEXTURE_FORMAT_YVYU422_CSC0,
 SCE_GXM_TEXTURE_FORMAT_UBC1 = SCE_GXM_TEXTURE_FORMAT_UBC1_ABGR,
 SCE_GXM_TEXTURE_FORMAT_UBC2 = SCE_GXM_TEXTURE_FORMAT_UBC2_ABGR,
 SCE_GXM_TEXTURE_FORMAT_UBC3 = SCE_GXM_TEXTURE_FORMAT_UBC3_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRT2BPP = SCE_GXM_TEXTURE_FORMAT_PVRT2BPP_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRT4BPP = SCE_GXM_TEXTURE_FORMAT_PVRT4BPP_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII2BPP = SCE_GXM_TEXTURE_FORMAT_PVRTII2BPP_ABGR,
 SCE_GXM_TEXTURE_FORMAT_PVRTII4BPP = SCE_GXM_TEXTURE_FORMAT_PVRTII4BPP_ABGR
} SceGxmTextureFormat;
typedef enum SceGxmTextureType {
 SCE_GXM_TEXTURE_SWIZZLED = 0x00000000u,
 SCE_GXM_TEXTURE_CUBE = 0x40000000u,
 SCE_GXM_TEXTURE_LINEAR = 0x60000000u,
 SCE_GXM_TEXTURE_TILED = 0x80000000u,
 SCE_GXM_TEXTURE_SWIZZLED_ARBITRARY = 0xA0000000U,
 SCE_GXM_TEXTURE_LINEAR_STRIDED = 0xC0000000u,
 SCE_GXM_TEXTURE_CUBE_ARBITRARY = 0xE0000000U
} SceGxmTextureType;
typedef enum SceGxmTextureFilter {
 SCE_GXM_TEXTURE_FILTER_POINT = 0x00000000u,
 SCE_GXM_TEXTURE_FILTER_LINEAR = 0x00000001u
} SceGxmTextureFilter;
typedef enum SceGxmTextureMipFilter {
 SCE_GXM_TEXTURE_MIP_FILTER_DISABLED = 0x00000000u,
 SCE_GXM_TEXTURE_MIP_FILTER_ENABLED = 0x00000200u
} SceGxmTextureMipFilter;
typedef enum SceGxmTextureAddrMode {
 SCE_GXM_TEXTURE_ADDR_REPEAT = 0x00000000u,
 SCE_GXM_TEXTURE_ADDR_MIRROR = 0x00000001u,
 SCE_GXM_TEXTURE_ADDR_CLAMP = 0x00000002u,
 SCE_GXM_TEXTURE_ADDR_MIRROR_CLAMP = 0x00000003u,
 SCE_GXM_TEXTURE_ADDR_REPEAT_IGNORE_BORDER = 0x00000004u,
 SCE_GXM_TEXTURE_ADDR_CLAMP_FULL_BORDER = 0x00000005u,
 SCE_GXM_TEXTURE_ADDR_CLAMP_IGNORE_BORDER = 0x00000006u,
 SCE_GXM_TEXTURE_ADDR_CLAMP_HALF_BORDER = 0x00000007u
} SceGxmTextureAddrMode;
typedef enum SceGxmTextureGammaMode {
 SCE_GXM_TEXTURE_GAMMA_NONE = 0x00000000u,
 SCE_GXM_TEXTURE_GAMMA_R = 0x08000000u,
 SCE_GXM_TEXTURE_GAMMA_GR = 0x18000000u,
 SCE_GXM_TEXTURE_GAMMA_BGR = 0x08000000u
} SceGxmTextureGammaMode;
typedef enum SceGxmTextureNormalizeMode {
 SCE_GXM_TEXTURE_NORMALIZE_DISABLED = 0x00000000u,
 SCE_GXM_TEXTURE_NORMALIZE_ENABLED = 0x80000000u
} SceGxmTextureNormalizeMode;
typedef enum SceGxmIndexFormat {
 SCE_GXM_INDEX_FORMAT_U16 = 0x00000000u,
 SCE_GXM_INDEX_FORMAT_U32 = 0x01000000u
} SceGxmIndexFormat;
typedef enum SceGxmIndexSource {
 SCE_GXM_INDEX_SOURCE_INDEX_16BIT = 0x00000000u,
 SCE_GXM_INDEX_SOURCE_INDEX_32BIT = 0x00000001u,
 SCE_GXM_INDEX_SOURCE_INSTANCE_16BIT = 0x00000002u,
 SCE_GXM_INDEX_SOURCE_INSTANCE_32BIT = 0x00000003u
} SceGxmIndexSource;
typedef enum SceGxmFragmentProgramMode {
 SCE_GXM_FRAGMENT_PROGRAM_DISABLED = 0x00200000u,
 SCE_GXM_FRAGMENT_PROGRAM_ENABLED = 0x00000000u
} SceGxmFragmentProgramMode;
typedef enum SceGxmDepthWriteMode {
 SCE_GXM_DEPTH_WRITE_DISABLED = 0x00100000u,
 SCE_GXM_DEPTH_WRITE_ENABLED = 0x00000000u
} SceGxmDepthWriteMode;
typedef enum SceGxmLineFillLastPixelMode {
 SCE_GXM_LINE_FILL_LAST_PIXEL_DISABLED = 0x00000000u,
 SCE_GXM_LINE_FILL_LAST_PIXEL_ENABLED = 0x00080000u
} SceGxmLineFillLastPixelMode;
typedef enum SceGxmTwoSidedMode {
 SCE_GXM_TWO_SIDED_DISABLED = 0x00000000u,
 SCE_GXM_TWO_SIDED_ENABLED = 0x00000800u
} SceGxmTwoSidedMode;
typedef enum SceGxmWClampMode {
 SCE_GXM_WCLAMP_MODE_DISABLED = 0x00000000u,
 SCE_GXM_WCLAMP_MODE_ENABLED = 0x00008000u
} SceGxmWClampMode;
typedef enum SceGxmViewportMode {
 SCE_GXM_VIEWPORT_DISABLED = 0x00010000u,
 SCE_GXM_VIEWPORT_ENABLED = 0x00000000u
} SceGxmViewportMode;
typedef enum SceGxmWBufferMode {
 SCE_GXM_WBUFFER_DISABLED = 0x00000000u,
 SCE_GXM_WBUFFER_ENABLED = 0x00004000u
} SceGxmWBufferMode;
typedef enum SceGxmDepthStencilForceLoadMode {
 SCE_GXM_DEPTH_STENCIL_FORCE_LOAD_DISABLED = 0x00000000u,
 SCE_GXM_DEPTH_STENCIL_FORCE_LOAD_ENABLED = 0x00000002u
} SceGxmDepthStencilForceLoadMode;
typedef enum SceGxmDepthStencilForceStoreMode {
 SCE_GXM_DEPTH_STENCIL_FORCE_STORE_DISABLED = 0x00000000u,
 SCE_GXM_DEPTH_STENCIL_FORCE_STORE_ENABLED = 0x00000004u
} SceGxmDepthStencilForceStoreMode;
typedef enum SceGxmSceneFlags {
 SCE_GXM_SCENE_FRAGMENT_SET_DEPENDENCY = 0x00000001u,
 SCE_GXM_SCENE_VERTEX_WAIT_FOR_DEPENDENCY = 0x00000002u,
 SCE_GXM_SCENE_FRAGMENT_TRANSFER_SYNC = 0x00000004U,
 SCE_GXM_SCENE_VERTEX_TRANSFER_SYNC = 0x00000008U
} SceGxmSceneFlags;
typedef enum SceGxmMidSceneFlags {
 SCE_GXM_MIDSCENE_PRESERVE_DEFAULT_UNIFORM_BUFFERS = 0x00000001u
} SceGxmMidSceneFlags;
typedef enum SceGxmColorSurfaceScaleMode {
 SCE_GXM_COLOR_SURFACE_SCALE_NONE = 0x00000000u,
 SCE_GXM_COLOR_SURFACE_SCALE_MSAA_DOWNSCALE = 0x00000001u
} SceGxmColorSurfaceScaleMode;
typedef enum SceGxmOutputRegisterSize {
 SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT = 0x00000000u,
 SCE_GXM_OUTPUT_REGISTER_SIZE_64BIT = 0x00000001u
} SceGxmOutputRegisterSize;
typedef enum SceGxmVisibilityTestMode {
 SCE_GXM_VISIBILITY_TEST_DISABLED = 0x00000000u,
 SCE_GXM_VISIBILITY_TEST_ENABLED = 0x00004000u
} SceGxmVisibilityTestMode;
typedef enum SceGxmVisibilityTestOp {
 SCE_GXM_VISIBILITY_TEST_OP_INCREMENT = 0x00000000u,
 SCE_GXM_VISIBILITY_TEST_OP_SET = 0x00040000u
} SceGxmVisibilityTestOp;
typedef enum SceGxmYuvProfile {
 SCE_GXM_YUV_PROFILE_BT601_STANDARD,
 SCE_GXM_YUV_PROFILE_BT709_STANDARD,
 SCE_GXM_YUV_PROFILE_BT601_FULL_RANGE,
 SCE_GXM_YUV_PROFILE_BT709_FULL_RANGE
} SceGxmYuvProfile;
typedef enum SceGxmBlendFunc {
 SCE_GXM_BLEND_FUNC_NONE,
 SCE_GXM_BLEND_FUNC_ADD,
 SCE_GXM_BLEND_FUNC_SUBTRACT,
 SCE_GXM_BLEND_FUNC_REVERSE_SUBTRACT,
 SCE_GXM_BLEND_FUNC_MIN,
 SCE_GXM_BLEND_FUNC_MAX
} SceGxmBlendFunc;
typedef enum SceGxmBlendFactor {
 SCE_GXM_BLEND_FACTOR_ZERO,
 SCE_GXM_BLEND_FACTOR_ONE,
 SCE_GXM_BLEND_FACTOR_SRC_COLOR,
 SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,
 SCE_GXM_BLEND_FACTOR_SRC_ALPHA,
 SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,
 SCE_GXM_BLEND_FACTOR_DST_COLOR,
 SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_COLOR,
 SCE_GXM_BLEND_FACTOR_DST_ALPHA,
 SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_ALPHA,
 SCE_GXM_BLEND_FACTOR_SRC_ALPHA_SATURATE,
 SCE_GXM_BLEND_FACTOR_DST_ALPHA_SATURATE
} SceGxmBlendFactor;
typedef enum SceGxmColorMask {
 SCE_GXM_COLOR_MASK_NONE = 0,
 SCE_GXM_COLOR_MASK_A = (1 << 0),
 SCE_GXM_COLOR_MASK_R = (1 << 1),
 SCE_GXM_COLOR_MASK_G = (1 << 2),
 SCE_GXM_COLOR_MASK_B = (1 << 3),
 SCE_GXM_COLOR_MASK_ALL = (SCE_GXM_COLOR_MASK_A | SCE_GXM_COLOR_MASK_B | SCE_GXM_COLOR_MASK_G | SCE_GXM_COLOR_MASK_R)
} SceGxmColorMask;
typedef enum SceGxmTransferFormat {
 SCE_GXM_TRANSFER_FORMAT_U8_R = 0x00000000u,
 SCE_GXM_TRANSFER_FORMAT_U4U4U4U4_ABGR = 0x00010000u,
 SCE_GXM_TRANSFER_FORMAT_U1U5U5U5_ABGR = 0x00020000u,
 SCE_GXM_TRANSFER_FORMAT_U5U6U5_BGR = 0x00030000u,
 SCE_GXM_TRANSFER_FORMAT_U8U8_GR = 0x00040000u,
 SCE_GXM_TRANSFER_FORMAT_U8U8U8_BGR = 0x00050000u,
 SCE_GXM_TRANSFER_FORMAT_U8U8U8U8_ABGR = 0x00060000u,
 SCE_GXM_TRANSFER_FORMAT_VYUY422 = 0x00070000u,
 SCE_GXM_TRANSFER_FORMAT_YVYU422 = 0x00080000u,
 SCE_GXM_TRANSFER_FORMAT_UYVY422 = 0x00090000u,
 SCE_GXM_TRANSFER_FORMAT_YUYV422 = 0x000a0000u,
 SCE_GXM_TRANSFER_FORMAT_U2U10U10U10_ABGR = 0x000d0000u,
 SCE_GXM_TRANSFER_FORMAT_RAW16 = 0x000f0000u,
 SCE_GXM_TRANSFER_FORMAT_RAW32 = 0x00110000u,
 SCE_GXM_TRANSFER_FORMAT_RAW64 = 0x00120000u,
 SCE_GXM_TRANSFER_FORMAT_RAW128 = 0x00130000u
} SceGxmTransferFormat;
typedef enum SceGxmTransferFlags {
 SCE_GXM_TRANSFER_FRAGMENT_SYNC = 0x00000001u,
 SCE_GXM_TRANSFER_VERTEX_SYNC = 0x00000002u
} SceGxmTransferFlags;
typedef enum SceGxmTransferColorKeyMode {
 SCE_GXM_TRANSFER_COLORKEY_NONE = 0,
 SCE_GXM_TRANSFER_COLORKEY_PASS = 1,
 SCE_GXM_TRANSFER_COLORKEY_REJECT = 2
} SceGxmTransferColorKeyMode;
typedef enum SceGxmTransferType {
 SCE_GXM_TRANSFER_LINEAR = 0x00000000U,
 SCE_GXM_TRANSFER_TILED = 0x00400000U,
 SCE_GXM_TRANSFER_SWIZZLED = 0x00800000U
} SceGxmTransferType;
typedef struct SceGxmBlendInfo {
 SceGxmColorMask colorMask;
 SceGxmBlendFunc colorFunc : 4;
 SceGxmBlendFunc alphaFunc : 4;
 SceGxmBlendFactor colorSrc : 4;
 SceGxmBlendFactor colorDst : 4;
 SceGxmBlendFactor alphaSrc : 4;
 SceGxmBlendFactor alphaDst : 4;
} SceGxmBlendInfo;
typedef struct SceGxmRenderTarget SceGxmRenderTarget;
typedef struct SceGxmSyncObject SceGxmSyncObject;
typedef struct SceGxmVertexAttribute {
 unsigned short streamIndex;
 unsigned short offset;
 SceGxmAttributeFormat format;
 unsigned char componentCount;
 unsigned short regIndex;
} SceGxmVertexAttribute;
typedef struct SceGxmVertexStream {
 unsigned short stride;
 unsigned short indexSource;
} SceGxmVertexStream;
typedef struct SceGxmTexture {
 uint32_t unk0 : 1;
 uint32_t stride_ext : 2;
 uint32_t vaddr_mode : 3;
 uint32_t uaddr_mode : 3;
 union {
  struct {
   uint32_t mip_filter : 1;
   uint32_t min_filter : 2;
  };
  uint32_t stride_low : 3;
 };
 uint32_t mag_filter : 2;
 uint32_t unk1 : 3;
 union {
  struct {
   uint32_t mip_count : 4;
   uint32_t lod_bias : 6;
  };
  uint32_t stride : 10;
 };
 uint32_t gamma_mode : 2;
 uint32_t unk2 : 2;
 uint32_t format0 : 1;
 union {
  struct {
   uint32_t height : 12;
   uint32_t width : 12;
  };
  struct {
   uint32_t height_pot : 4;
   uint32_t reserved0 : 12;
   uint32_t width_pot : 4;
   uint32_t reserved1 : 4;
  };
 };
 uint32_t base_format : 5;
 uint32_t type : 3;
 uint32_t lod_min0 : 2;
 uint32_t data_addr : 30;
 uint32_t palette_addr : 26;
 uint32_t lod_min1 : 2;
 uint32_t swizzle_format : 3;
 uint32_t normalize_mode : 1;
} SceGxmTexture;
typedef struct SceGxmColorSurface {
 unsigned int pbeSidebandWord;
 unsigned int pbeEmitWords[6];
 unsigned int outputRegisterSize;
 SceGxmTexture backgroundTex;
} SceGxmColorSurface;
typedef struct SceGxmDepthStencilSurface {
 unsigned int zlsControl;
 void *depthData;
 void *stencilData;
 float backgroundDepth;
 unsigned int backgroundControl;
} SceGxmDepthStencilSurface;
typedef struct SceGxmAuxiliarySurface {
 uint32_t colorFormat;
 uint32_t type;
 uint32_t width;
 uint32_t height;
 uint32_t stride;
 void *data;
} SceGxmAuxiliarySurface;
typedef struct SceGxmNotification {
 volatile unsigned int *address;
 unsigned int value;
} SceGxmNotification;
typedef struct SceGxmValidRegion {
 unsigned int xMin;
 unsigned int yMin;
 unsigned int xMax;
 unsigned int yMax;
} SceGxmValidRegion;
typedef struct SceGxmContext SceGxmContext;
typedef struct SceGxmContextParams {
 void *hostMem;
 SceSize hostMemSize;
 void *vdmRingBufferMem;
 SceSize vdmRingBufferMemSize;
 void *vertexRingBufferMem;
 SceSize vertexRingBufferMemSize;
 void *fragmentRingBufferMem;
 SceSize fragmentRingBufferMemSize;
 void *fragmentUsseRingBufferMem;
 SceSize fragmentUsseRingBufferMemSize;
 unsigned int fragmentUsseRingBufferOffset;
} SceGxmContextParams;
typedef struct SceGxmVertexProgram SceGxmVertexProgram;
typedef struct SceGxmFragmentProgram SceGxmFragmentProgram;
typedef enum SceGxmPrecomputedWordCount {
 SCE_GXM_PRECOMPUTED_VERTEX_STATE_WORD_COUNT = 7,
 SCE_GXM_PRECOMPUTED_FRAGMENT_STATE_WORD_COUNT = 9,
 SCE_GXM_PRECOMPUTED_DRAW_WORD_COUNT = 11,
} SceGxmPrecomputedWordCount;
typedef struct SceGxmPrecomputedVertexState {
 unsigned int data[SCE_GXM_PRECOMPUTED_VERTEX_STATE_WORD_COUNT];
} SceGxmPrecomputedVertexState;
typedef struct SceGxmPrecomputedFragmentState {
 unsigned int data[SCE_GXM_PRECOMPUTED_FRAGMENT_STATE_WORD_COUNT];
} SceGxmPrecomputedFragmentState;
typedef struct SceGxmPrecomputedDraw {
 unsigned int data[SCE_GXM_PRECOMPUTED_DRAW_WORD_COUNT];
} SceGxmPrecomputedDraw;
typedef struct SceGxmProgram SceGxmProgram;
typedef struct SceGxmProgramParameter SceGxmProgramParameter;
typedef enum SceGxmProgramType {
 SCE_GXM_VERTEX_PROGRAM,
 SCE_GXM_FRAGMENT_PROGRAM
} SceGxmProgramType;
typedef enum SceGxmParameterCategory {
 SCE_GXM_PARAMETER_CATEGORY_ATTRIBUTE,
 SCE_GXM_PARAMETER_CATEGORY_UNIFORM,
 SCE_GXM_PARAMETER_CATEGORY_SAMPLER,
 SCE_GXM_PARAMETER_CATEGORY_AUXILIARY_SURFACE,
 SCE_GXM_PARAMETER_CATEGORY_UNIFORM_BUFFER
} SceGxmParameterCategory;
typedef enum SceGxmParameterType {
 SCE_GXM_PARAMETER_TYPE_F32,
 SCE_GXM_PARAMETER_TYPE_F16,
 SCE_GXM_PARAMETER_TYPE_C10,
 SCE_GXM_PARAMETER_TYPE_U32,
 SCE_GXM_PARAMETER_TYPE_S32,
 SCE_GXM_PARAMETER_TYPE_U16,
 SCE_GXM_PARAMETER_TYPE_S16,
 SCE_GXM_PARAMETER_TYPE_U8,
 SCE_GXM_PARAMETER_TYPE_S8,
 SCE_GXM_PARAMETER_TYPE_AGGREGATE
} SceGxmParameterType;
typedef enum SceGxmParameterSemantic {
 SCE_GXM_PARAMETER_SEMANTIC_NONE,
 SCE_GXM_PARAMETER_SEMANTIC_ATTR,
 SCE_GXM_PARAMETER_SEMANTIC_BCOL,
 SCE_GXM_PARAMETER_SEMANTIC_BINORMAL,
 SCE_GXM_PARAMETER_SEMANTIC_BLENDINDICES,
 SCE_GXM_PARAMETER_SEMANTIC_BLENDWEIGHT,
 SCE_GXM_PARAMETER_SEMANTIC_COLOR,
 SCE_GXM_PARAMETER_SEMANTIC_DIFFUSE,
 SCE_GXM_PARAMETER_SEMANTIC_FOGCOORD,
 SCE_GXM_PARAMETER_SEMANTIC_NORMAL,
 SCE_GXM_PARAMETER_SEMANTIC_POINTSIZE,
 SCE_GXM_PARAMETER_SEMANTIC_POSITION,
 SCE_GXM_PARAMETER_SEMANTIC_SPECULAR,
 SCE_GXM_PARAMETER_SEMANTIC_TANGENT,
 SCE_GXM_PARAMETER_SEMANTIC_TEXCOORD
} SceGxmParameterSemantic;
typedef struct SceGxmShaderPatcher SceGxmShaderPatcher;
typedef struct SceGxmRegisteredProgram SceGxmRegisteredProgram;
typedef SceGxmRegisteredProgram *SceGxmShaderPatcherId;
typedef void *(SceGxmShaderPatcherHostAllocCallback)(void *userData, SceSize size);
typedef void (SceGxmShaderPatcherHostFreeCallback)(void *userData, void *mem);
typedef void *(SceGxmShaderPatcherBufferAllocCallback)(void *userData, SceSize size);
typedef void (SceGxmShaderPatcherBufferFreeCallback)(void *userData, void *mem);
typedef void *(SceGxmShaderPatcherUsseAllocCallback)(void *userData, SceSize size, unsigned int *usseOffset);
typedef void (SceGxmShaderPatcherUsseFreeCallback)(void *userData, void *mem);
typedef struct SceGxmShaderPatcherParams {
 void *userData;
 SceGxmShaderPatcherHostAllocCallback *hostAllocCallback;
 SceGxmShaderPatcherHostFreeCallback *hostFreeCallback;
 SceGxmShaderPatcherBufferAllocCallback *bufferAllocCallback;
 SceGxmShaderPatcherBufferFreeCallback *bufferFreeCallback;
 void *bufferMem;
 SceSize bufferMemSize;
 SceGxmShaderPatcherUsseAllocCallback *vertexUsseAllocCallback;
 SceGxmShaderPatcherUsseFreeCallback *vertexUsseFreeCallback;
 void *vertexUsseMem;
 SceSize vertexUsseMemSize;
 unsigned int vertexUsseOffset;
 SceGxmShaderPatcherUsseAllocCallback *fragmentUsseAllocCallback;
 SceGxmShaderPatcherUsseFreeCallback *fragmentUsseFreeCallback;
 void *fragmentUsseMem;
 SceSize fragmentUsseMemSize;
 unsigned int fragmentUsseOffset;
} SceGxmShaderPatcherParams;
typedef enum SceGxmRenderTargetFlags {
 SCE_GXM_RENDER_TARGET_CUSTOM_MULTISAMPLE_LOCATIONS = (1 << 0)
} SceGxmRenderTargetFlags;
typedef struct SceGxmRenderTargetParams {
 uint32_t flags;
 uint16_t width;
 uint16_t height;
 uint16_t scenesPerFrame;
 uint16_t multisampleMode;
 uint32_t multisampleLocations;
 SceUID driverMemBlock;
} SceGxmRenderTargetParams;
typedef enum SceCommonDialogErrorCode {
 SCE_COMMON_DIALOG_ERROR_BUSY = 0x80020401,
 SCE_COMMON_DIALOG_ERROR_NULL = 0x80020402,
 SCE_COMMON_DIALOG_ERROR_INVALID_ARGUMENT = 0x80020403,
 SCE_COMMON_DIALOG_ERROR_NOT_RUNNING = 0x80020404,
 SCE_COMMON_DIALOG_ERROR_NOT_SUPPORTED = 0x80020405,
 SCE_COMMON_DIALOG_ERROR_ILLEGAL_CALLER_THREAD = 0x80020406,
 SCE_COMMON_DIALOG_ERROR_NOT_CONFIGURED = 0x80020407,
 SCE_COMMON_DIALOG_ERROR_NOT_AVAILABLE = 0x80020408,
 SCE_COMMON_DIALOG_ERROR_NOT_FINISHED = 0x80020410,
 SCE_COMMON_DIALOG_ERROR_NOT_IN_USE = 0x80020411,
 SCE_COMMON_DIALOG_ERROR_INVALID_COLOR_FORMAT = 0x80020420,
 SCE_COMMON_DIALOG_ERROR_INVALID_SURFACE_RESOLUTION = 0x80020421,
 SCE_COMMON_DIALOG_ERROR_INVALID_SURFACE_STRIDE = 0x80020422,
 SCE_COMMON_DIALOG_ERROR_INVALID_SURFACE_TYPE = 0x80020423,
 SCE_COMMON_DIALOG_ERROR_WITHIN_SCENE = 0x80020424,
 SCE_COMMON_DIALOG_ERROR_IME_IN_USE = 0x80020430,
 SCE_COMMON_DIALOG_ERROR_INVALID_LANGUAGE = 0x80020431,
 SCE_COMMON_DIALOG_ERROR_INVALID_ENTER_BUTTON_ASSIGN = 0x80020432,
 SCE_COMMON_DIALOG_ERROR_INVALID_INFOBAR_PARAM = 0x80020433,
 SCE_COMMON_DIALOG_ERROR_INVALID_BG_COLOR = 0x80020434,
 SCE_COMMON_DIALOG_ERROR_INVALID_DIMMER_COLOR = 0x80020435,
 SCE_COMMON_DIALOG_ERROR_GXM_IS_UNINITIALIZED = 0x80020436,
 SCE_COMMON_DIALOG_ERROR_UNEXPECTED_FATAL = 0x8002047F
} SceCommonDialogErrorCode;
typedef struct SceCommonDialogConfigParam {
 SceUInt32 sdkVersion;
 SceSystemParamLang language;
 SceSystemParamEnterButtonAssign enterButtonAssign;
 SceUInt8 reserved[32];
} SceCommonDialogConfigParam;
typedef enum SceCommonDialogStatus {
 SCE_COMMON_DIALOG_STATUS_NONE = 0,
 SCE_COMMON_DIALOG_STATUS_RUNNING = 1,
 SCE_COMMON_DIALOG_STATUS_FINISHED = 2
} SceCommonDialogStatus;
typedef enum SceCommonDialogResult {
 SCE_COMMON_DIALOG_RESULT_OK,
 SCE_COMMON_DIALOG_RESULT_USER_CANCELED,
 SCE_COMMON_DIALOG_RESULT_ABORTED
} SceCommonDialogResult;
typedef struct SceCommonDialogRenderTargetInfo {
 ScePVoid depthSurfaceData;
 ScePVoid colorSurfaceData;
 SceGxmColorSurfaceType surfaceType;
 SceGxmColorFormat colorFormat;
 SceUInt32 width;
 SceUInt32 height;
 SceUInt32 strideInPixels;
 SceUInt8 reserved[32];
} SceCommonDialogRenderTargetInfo;
typedef struct SceCommonDialogUpdateParam {
 SceCommonDialogRenderTargetInfo renderTarget;
 SceGxmSyncObject *displaySyncObject;
 SceUInt8 reserved[32];
} SceCommonDialogUpdateParam;
typedef struct SceCommonDialogInfobarParam {
 SceInt32 visibility;
 SceInt32 color;
 SceInt32 transparency;
 SceUInt8 reserved[32];
} SceCommonDialogInfobarParam;
typedef struct SceCommonDialogColor {
 SceUInt8 r;
 SceUInt8 g;
 SceUInt8 b;
 SceUInt8 a;
} SceCommonDialogColor;
typedef SceCommonDialogColor SceCommonDialogBgColor;
typedef struct SceCommonDialogParam {
 SceCommonDialogInfobarParam* infobarParam;
 SceCommonDialogColor* bgColor;
 SceCommonDialogColor* dimmerColor;
 SceUInt8 reserved[60];
 SceUInt32 magic;
} SceCommonDialogParam;
typedef struct SceIoDevInfo {
 SceOff max_size;
 SceOff free_size;
 SceSize cluster_size;
 void *unk;
} SceIoDevInfo;
typedef long int __off_t;
typedef int __pid_t;
typedef long long int __loff_t;
typedef long __suseconds_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long clock_t;
typedef long time_t;
typedef long daddr_t;
typedef char * caddr_t;
typedef unsigned short ino_t;
typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;
typedef int pid_t;
typedef long key_t;
typedef _ssize_t ssize_t;
typedef unsigned int mode_t ;
typedef unsigned short nlink_t;
typedef long fd_mask;
typedef struct _types_fd_set {
 fd_mask fds_bits[(((256)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
typedef unsigned long clockid_t;
typedef unsigned long timer_t;
typedef unsigned long useconds_t;
typedef __suseconds_t suseconds_t;
typedef __int64_t sbintime_t;
typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;
typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;
typedef enum SceRtcErrorCode {
 SCE_RTC_ERROR_INVALID_VALUE = 0x80251000,
 SCE_RTC_ERROR_INVALID_POINTER = 0x80251001,
 SCE_RTC_ERROR_NOT_INITIALIZED = 0x80251002,
 SCE_RTC_ERROR_ALREADY_REGISTERD = 0x80251003,
 SCE_RTC_ERROR_NOT_FOUND = 0x80251004,
 SCE_RTC_ERROR_BAD_PARSE = 0x80251080,
 SCE_RTC_ERROR_INVALID_YEAR = 0x80251081,
 SCE_RTC_ERROR_INVALID_MONTH = 0x80251082,
 SCE_RTC_ERROR_INVALID_DAY = 0x80251083,
 SCE_RTC_ERROR_INVALID_HOUR = 0x80251084,
 SCE_RTC_ERROR_INVALID_MINUTE = 0x80251085,
 SCE_RTC_ERROR_INVALID_SECOND = 0x80251086,
 SCE_RTC_ERROR_INVALID_MICROSECOND = 0x80251087
} SceRtcErrorCode;
typedef enum SceRtcDayOfWeek {
 SCE_RTC_DAYOFWEEK_SUNDAY = 0,
 SCE_RTC_DAYOFWEEK_MONDAY = 1,
 SCE_RTC_DAYOFWEEK_TUESDAY = 2,
 SCE_RTC_DAYOFWEEK_WEDNESDAY = 3,
 SCE_RTC_DAYOFWEEK_THURSDAY = 4,
 SCE_RTC_DAYOFWEEK_FRIDAY = 5,
 SCE_RTC_DAYOFWEEK_SATURDAY = 6
} SceRtcDayOfWeek;
typedef struct SceRtcTick {
 SceUInt64 tick;
} SceRtcTick;
typedef enum SceCompatCacheMode {
 SCE_COMPAT_CACHE_NONE = 0,
 SCE_COMPAT_CACHE_INVALIDATE = 1,
 SCE_COMPAT_CACHE_WRITEBACK = 2
} SceCompatCacheMode;
typedef enum SceCompatPeripheralMode {
 SCE_COMPAT_PERIPHERAL_POWER_IS_SUSPEND_REQUIRED = 1,
 SCE_COMPAT_PERIPHERAL_POWER_GET_BATTERY_LIFETIME = 2,
 SCE_COMPAT_PERIPHERAL_POWER_GET_BATTERY_PERCENT = 3,
 SCE_COMPAT_PERIPHERAL_HPREMOTE_IS_HEADPHONE_EXIST = 4
} SceCompatPeripheralMode;
typedef struct SceCompatCdram {
 void *cached_cdram;
 void *uncached_cdram;
} SceCompatCdram;
typedef struct SceCtrlDataPsp {
 unsigned int TimeStamp;
 unsigned int Buttons;
 unsigned char Lx;
 unsigned char Ly;
 unsigned char Rx;
 unsigned char Ry;
 unsigned char Rsrv[4];
} SceCtrlDataPsp;
typedef enum SceCtrlErrorCode {
 SCE_CTRL_ERROR_INVALID_ARG = 0x80340001,
 SCE_CTRL_ERROR_PRIV_REQUIRED = 0x80340002,
 SCE_CTRL_ERROR_NO_DEVICE = 0x80340020,
 SCE_CTRL_ERROR_NOT_SUPPORTED = 0x80340021,
 SCE_CTRL_ERROR_INVALID_MODE = 0x80340022,
 SCE_CTRL_ERROR_FATAL = 0x803400FF
} SceCtrlErrorCode;
typedef enum SceCtrlButtons {
 SCE_CTRL_SELECT = 0x00000001,
 SCE_CTRL_L3 = 0x00000002,
 SCE_CTRL_R3 = 0x00000004,
 SCE_CTRL_START = 0x00000008,
 SCE_CTRL_UP = 0x00000010,
 SCE_CTRL_RIGHT = 0x00000020,
 SCE_CTRL_DOWN = 0x00000040,
 SCE_CTRL_LEFT = 0x00000080,
 SCE_CTRL_LTRIGGER = 0x00000100,
 SCE_CTRL_L2 = SCE_CTRL_LTRIGGER,
 SCE_CTRL_RTRIGGER = 0x00000200,
 SCE_CTRL_R2 = SCE_CTRL_RTRIGGER,
 SCE_CTRL_L1 = 0x00000400,
 SCE_CTRL_R1 = 0x00000800,
 SCE_CTRL_TRIANGLE = 0x00001000,
 SCE_CTRL_CIRCLE = 0x00002000,
 SCE_CTRL_CROSS = 0x00004000,
 SCE_CTRL_SQUARE = 0x00008000,
 SCE_CTRL_INTERCEPTED = 0x00010000,
 SCE_CTRL_PSBUTTON = SCE_CTRL_INTERCEPTED,
 SCE_CTRL_HEADPHONE = 0x00080000,
 SCE_CTRL_VOLUP = 0x00100000,
 SCE_CTRL_VOLDOWN = 0x00200000,
 SCE_CTRL_POWER = 0x40000000
} SceCtrlButtons;
typedef enum SceCtrlExternalInputMode {
 SCE_CTRL_TYPE_UNPAIRED = 0,
 SCE_CTRL_TYPE_PHY = 1,
 SCE_CTRL_TYPE_VIRT = 2,
 SCE_CTRL_TYPE_DS3 = 4,
 SCE_CTRL_TYPE_DS4 = 8
} SceCtrlExternalInputMode;
typedef enum SceCtrlPadInputMode {
 SCE_CTRL_MODE_DIGITAL = 0,
 SCE_CTRL_MODE_ANALOG = 1,
 SCE_CTRL_MODE_ANALOG_WIDE = 2
} SceCtrlPadInputMode;
typedef struct SceCtrlData {
 uint64_t timeStamp;
 unsigned int buttons;
 unsigned char lx;
 unsigned char ly;
 unsigned char rx;
 unsigned char ry;
 uint8_t up;
 uint8_t right;
 uint8_t down;
 uint8_t left;
 uint8_t lt;
 uint8_t rt;
 uint8_t l1;
 uint8_t r1;
 uint8_t triangle;
 uint8_t circle;
 uint8_t cross;
 uint8_t square;
 uint8_t reserved[4];
} SceCtrlData;
typedef struct SceCtrlRapidFireRule {
 unsigned int Mask;
 unsigned int Trigger;
 unsigned int Target;
 unsigned int Delay;
 unsigned int Make;
 unsigned int Break;
} SceCtrlRapidFireRule;
typedef struct SceCtrlActuator {
 unsigned char small;
 unsigned char large;
 uint8_t unk[6];
} SceCtrlActuator;
typedef struct SceCtrlPortInfo {
 uint8_t port[5];
 uint8_t unk[11];
} SceCtrlPortInfo;
typedef enum SceDisplayErrorCode {
 SCE_DISPLAY_ERROR_OK = 0,
 SCE_DISPLAY_ERROR_INVALID_HEAD = 0x80290000,
 SCE_DISPLAY_ERROR_INVALID_VALUE = 0x80290001,
 SCE_DISPLAY_ERROR_INVALID_ADDR = 0x80290002,
 SCE_DISPLAY_ERROR_INVALID_PIXELFORMAT = 0x80290003,
 SCE_DISPLAY_ERROR_INVALID_PITCH = 0x80290004,
 SCE_DISPLAY_ERROR_INVALID_RESOLUTION = 0x80290005,
 SCE_DISPLAY_ERROR_INVALID_UPDATETIMING = 0x80290006,
 SCE_DISPLAY_ERROR_NO_FRAME_BUFFER = 0x80290007,
 SCE_DISPLAY_ERROR_NO_PIXEL_DATA = 0x80290008,
 SCE_DISPLAY_ERROR_NO_OUTPUT_SIGNAL = 0x80290009
} SceDisplayErrorCode;
typedef enum SceDisplayPixelFormat {
 SCE_DISPLAY_PIXELFORMAT_A8B8G8R8 = 0x00000000U
} SceDisplayPixelFormat;
typedef enum SceDisplaySetBufSync {
 SCE_DISPLAY_SETBUF_IMMEDIATE = 0,
 SCE_DISPLAY_SETBUF_NEXTFRAME = 1
} SceDisplaySetBufSync;
typedef struct SceDisplayFrameBuf {
 SceSize size;
 void *base;
 unsigned int pitch;
 unsigned int pixelformat;
 unsigned int width;
 unsigned int height;
} SceDisplayFrameBuf;
typedef enum SceFiberErrorCode {
 SCE_FIBER_ERROR_NULL = 0x80590001,
 SCE_FIBER_ERROR_ALIGNMENT = 0x80590002,
 SCE_FIBER_ERROR_RANGE = 0x80590003,
 SCE_FIBER_ERROR_INVALID = 0x80590004,
 SCE_FIBER_ERROR_PERMISSION = 0x80590005,
 SCE_FIBER_ERROR_STATE = 0x80590006,
 SCE_FIBER_ERROR_BUSY = 0x80590007,
 SCE_FIBER_ERROR_AGAIN = 0x80590008,
 SCE_FIBER_ERROR_FATAL = 0x80590009
} SceFiberErrorCode;
typedef struct SceFiber {
 char reserved[128];
} SceFiber ;
typedef struct SceFiberOptParam {
 char reserved[128];
} SceFiberOptParam ;
typedef void (SceFiberEntry)(SceUInt32 argOnInitialize, SceUInt32 argOnRun);
typedef struct SceFiberInfo
{
 SceFiberEntry* entry;
 SceUInt32 argOnInitialize;
 void* addrContext;
 SceSize sizeContext;
 char name[32];
 unsigned padding[80];
} SceFiberInfo ;
typedef enum SceGxtErrorCode {
 SCE_OK = 0,
 SCE_GXT_ERROR_INVALID_VALUE = 0x805D0000,
 SCE_GXT_ERROR_INVALID_POINTER = 0x805D0001,
 SCE_GXT_ERROR_INVALID_ALIGNMENT = 0x805D0002
} SceGxtErrorCode;
typedef struct SceGxtHeader {
 uint32_t tag;
 uint32_t version;
 uint32_t numTextures;
 uint32_t dataOffset;
 uint32_t dataSize;
 uint32_t numP4Palettes;
 uint32_t numP8Palettes;
 uint32_t pad;
} SceGxtHeader;
typedef struct SceGxtTextureInfo {
 uint32_t dataOffset;
 uint32_t dataSize;
 uint32_t paletteIndex;
 uint32_t flags;
 uint32_t type;
 uint32_t format;
 uint16_t width;
 uint16_t height;
 uint8_t mipCount;
 uint8_t pad[3];
} SceGxtTextureInfo;
typedef struct SceHidKeyboardReport {
 SceUInt8 reserved;
 SceUInt8 modifiers[2];
 SceUInt8 keycodes[6];
 SceUInt8 unk1[15];
} SceHidKeyboardReport;
typedef struct SceHidMouseReport {
 SceUInt8 buttons;
 SceUInt8 reserved;
 SceInt16 rel_x;
 SceInt16 rel_y;
 SceInt8 unk[10];
} SceHidMouseReport;
typedef enum SceImeLanguage {
 SCE_IME_LANGUAGE_DANISH = 0x00000001ULL,
 SCE_IME_LANGUAGE_GERMAN = 0x00000002ULL,
 SCE_IME_LANGUAGE_ENGLISH = 0x00000004ULL,
 SCE_IME_LANGUAGE_SPANISH = 0x00000008ULL,
 SCE_IME_LANGUAGE_FRENCH = 0x00000010ULL,
 SCE_IME_LANGUAGE_ITALIAN = 0x00000020ULL,
 SCE_IME_LANGUAGE_DUTCH = 0x00000040ULL,
 SCE_IME_LANGUAGE_NORWEGIAN = 0x00000080ULL,
 SCE_IME_LANGUAGE_POLISH = 0x00000100ULL,
 SCE_IME_LANGUAGE_PORTUGUESE = 0x00000200ULL,
 SCE_IME_LANGUAGE_RUSSIAN = 0x00000400ULL,
 SCE_IME_LANGUAGE_FINNISH = 0x00000800ULL,
 SCE_IME_LANGUAGE_SWEDISH = 0x00001000ULL,
 SCE_IME_LANGUAGE_JAPANESE = 0x00002000ULL,
 SCE_IME_LANGUAGE_KOREAN = 0x00004000ULL,
 SCE_IME_LANGUAGE_SIMPLIFIED_CHINESE = 0x00008000ULL,
 SCE_IME_LANGUAGE_TRADITIONAL_CHINESE = 0x00010000ULL,
 SCE_IME_LANGUAGE_PORTUGUESE_BR = 0x00020000ULL,
 SCE_IME_LANGUAGE_ENGLISH_GB = 0x00040000ULL,
 SCE_IME_LANGUAGE_TURKISH = 0x00080000ULL
} SceImeLanguage;
typedef enum SceImeType {
 SCE_IME_TYPE_DEFAULT = 0,
 SCE_IME_TYPE_BASIC_LATIN = 1,
 SCE_IME_TYPE_NUMBER = 2,
 SCE_IME_TYPE_EXTENDED_NUMBER = 3
} SceImeType;
typedef enum SceImeEnterLabel {
 SCE_IME_ENTER_LABEL_DEFAULT = 0,
 SCE_IME_ENTER_LABEL_SEND = 1,
 SCE_IME_ENTER_LABEL_SEARCH = 2,
 SCE_IME_ENTER_LABEL_GO = 3
} SceImeEnterLabel;
typedef enum SceImeOption {
 SCE_IME_OPTION_MULTILINE = 0x01,
 SCE_IME_OPTION_NO_AUTO_CAPITALIZATION = 0x02,
 SCE_IME_OPTION_NO_ASSISTANCE = 0x04
} SceImeOption;
typedef enum SceImeDialogDialogMode {
 SCE_IME_DIALOG_DIALOG_MODE_DEFAULT = 0,
 SCE_IME_DIALOG_DIALOG_MODE_WITH_CANCEL = 1
} SceImeDialogDialogMode;
typedef enum SceImeDialogTextboxMode {
 SCE_IME_DIALOG_TEXTBOX_MODE_DEFAULT = 0,
 SCE_IME_DIALOG_TEXTBOX_MODE_PASSWORD = 1,
 SCE_IME_DIALOG_TEXTBOX_MODE_WITH_CLEAR = 2
} SceImeDialogTextboxMode;
typedef enum SceImeDialogButton {
 SCE_IME_DIALOG_BUTTON_NONE = 0,
 SCE_IME_DIALOG_BUTTON_CLOSE = 1,
 SCE_IME_DIALOG_BUTTON_ENTER = 2
} SceImeDialogButton;
typedef SceInt32 (*SceImeCharFilter)(SceWChar16 ch);
typedef struct SceImeDialogParam {
 SceUInt32 sdkVersion;
 SceUInt32 inputMethod;
 SceUInt64 supportedLanguages;
 SceBool languagesForced;
 SceUInt32 type;
 SceUInt32 option;
 SceImeCharFilter filter;
 SceUInt32 dialogMode;
 SceUInt32 textBoxMode;
 const SceWChar16 *title;
 SceUInt32 maxTextLength;
 SceWChar16 *initialText;
 SceWChar16 *inputTextBuffer;
 SceCommonDialogParam commonParam;
 SceUChar8 enterLabel;
 SceChar8 reserved[35];
} SceImeDialogParam;
typedef struct SceImeDialogResult {
 SceInt32 result;
 SceInt32 button;
 SceChar8 reserved[28];
} SceImeDialogResult;
typedef void *SceJpegEncoderContext;
typedef enum SceJpegEncErrorCode {
 SCE_JPEGENC_ERROR_IMAGE_SIZE = 0x80650200,
 SCE_JPEGENC_ERROR_INSUFFICIENT_BUFFER = 0x80650201,
 SCE_JPEGENC_ERROR_INVALID_COMPRATIO = 0x80650202,
 SCE_JPEGENC_ERROR_INVALID_PIXELFORMAT = 0x80650203,
 SCE_JPEGENC_ERROR_INVALID_HEADER_MODE = 0x80650204,
 SCE_JPEGENC_ERROR_INVALID_POINTER = 0x80650205,
 SCE_JPEGENC_ERROR_NOT_PHY_CONTINUOUS_MEMORY = 0x80650206
} SceJpegEncErrorCode;
typedef enum SceJpegEncoderPixelFormat {
 SCE_JPEGENC_PIXELFORMAT_ARGB8888 = 0,
 SCE_JPEGENC_PIXELFORMAT_YCBCR420 = 8,
 SCE_JPEGENC_PIXELFORMAT_YCBCR422 = 9,
 SCE_JPEGENC_PIXELFORMAT_CSC_ARGB_YCBCR = 16
} SceJpegEncoderPixelFormat;
typedef enum SceJpegEncoderHeaderMode {
 SCE_JPEGENC_HEADER_MODE_JPEG = 0,
 SCE_JPEGENC_HEADER_MODE_MJPEG = 1
} SceJpegEncoderHeaderMode;
typedef enum SceJpegEncoderInitParamOption {
 SCE_JPEGENC_INIT_PARAM_OPTION_NONE = 0,
 SCE_JPEGENC_INIT_PARAM_OPTION_LPDDR2_MEMORY = 1
} SceJpegEncoderInitParamOption;
typedef struct SceJpegEncoderInitParam {
 SceSize size;
 int inWidth;
 int inHeight;
 int pixelFormat;
 void *outBuffer;
 SceSize outSize;
 int option;
} SceJpegEncoderInitParam;
typedef enum SceSslErrorCode {
 SCE_SSL_ERROR_BEFORE_INIT = 0x80435001,
 SCE_SSL_ERROR_ALREADY_INITED = 0x80435020,
 SCE_SSL_ERROR_OUT_OF_MEMORY = 0x80435022,
 SCE_SSL_ERROR_NOT_FOUND = 0x80435025,
 SCE_SSL_ERROR_INTERNAL = 0x80435026,
 SCE_SSL_ERROR_INVALID_FORMAT = 0x80435108,
 SCE_SSL_ERROR_INVALID_VALUE = 0x804351FE
} SceSslErrorCode;
typedef void SceSslCert;
typedef void SceSslCertName;
typedef struct SceSslMemoryPoolStats{
 unsigned poolSize;
 unsigned maxInuseSize;
 unsigned currentInuseSize;
 int reserved;
} SceSslMemoryPoolStats;
typedef enum SceLocationErrorCode {
 SCE_LOCATION_SUCCESS = 0,
 SCE_LOCATION_INFO_UNDETERMINED_LOCATION = 0x80101200,
 SCE_LOCATION_INFO_INSUFFICIENT_INFORMATION = 0x80101201,
 SCE_LOCATION_INFO_GET_LOCATION_CANCELED = 0x80101202,
 SCE_LOCATION_INFO_DENIED_BY_USER = 0x80101203,
 SCE_LOCATION_ERROR_INVALID_ADDRESS = 0x80101204,
 SCE_LOCATION_ERROR_INVALID_HANDLE = 0x80101205,
 SCE_LOCATION_ERROR_NO_MEMORY = 0x80101206,
 SCE_LOCATION_ERROR_TOO_MANY_HANDLES = 0x80101207,
 SCE_LOCATION_ERROR_INVALID_LOCATION_METHOD = 0x80101208,
 SCE_LOCATION_ERROR_INVALID_HEADING_METHOD = 0x80101209,
 SCE_LOCATION_ERROR_MULTIPLE_CALLBACK = 0x8010120A,
 SCE_LOCATION_ERROR_NOT_RUNNING_CALLBACK = 0x8010120B,
 SCE_LOCATION_ERROR_DIALOG_RESULT_NONE = 0x8010120C,
 SCE_LOCATION_ERROR_DISABLE_APPLICATION = 0x8010120D,
 SCE_LOCATION_ERROR_MULTIPLE_CONFIRM = 0x8010120E,
 SCE_LOCATION_ERROR_UNAUTHORIZED = 0x80101280,
 SCE_LOCATION_ERROR_PROVIDER_UNAVAILABLE = 0x80101281,
 SCE_LOCATION_ERROR_FILE_IO = 0x80101282,
 SCE_LOCATION_ERROR_INVALID_FILE_FORMAT = 0x80101283,
 SCE_LOCATION_ERROR_TIME_OUT = 0x80101284,
 SCE_LOCATION_ERROR_NO_SERVER_MEMORY = 0x80101285,
 SCE_LOCATION_ERROR_INVALID_TITLE_ID = 0x80101286,
 SCE_LOCATION_ERROR_FATAL_ERROR = 0x801012FF
} SceLocationErrorCode;
typedef SceUInt8 SceLocationHandle;
typedef enum SceLocationDialogStatus {
 SCE_LOCATION_DIALOG_STATUS_IDLE = 0,
 SCE_LOCATION_DIALOG_STATUS_RUNNING = 1,
 SCE_LOCATION_DIALOG_STATUS_FINISHED = 2
} SceLocationDialogStatus;
typedef enum SceLocationDialogResult {
 SCE_LOCATION_DIALOG_RESULT_NONE = 0,
 SCE_LOCATION_DIALOG_RESULT_DISABLE = 1,
 SCE_LOCATION_DIALOG_RESULT_ENABLE = 2
} SceLocationDialogResult;
typedef enum SceLocationPermissionApplicationStatus {
 SCE_LOCATION_PERMISSION_APPLICATION_NONE = 0,
 SCE_LOCATION_PERMISSION_APPLICATION_INIT = 1,
 SCE_LOCATION_PERMISSION_APPLICATION_DENY = 2,
 SCE_LOCATION_PERMISSION_APPLICATION_ALLOW = 3
} SceLocationPermissionApplicationStatus;
typedef enum SceLocationPermissionStatus {
 SCE_LOCATION_PERMISSION_DENY = 0,
 SCE_LOCATION_PERMISSION_ALLOW = 1
} SceLocationPermissionStatus;
typedef enum SceLocationLocationMethod {
 SCE_LOCATION_LMETHOD_NONE = 0,
 SCE_LOCATION_LMETHOD_AGPS_AND_3G_AND_WIFI = 1,
 SCE_LOCATION_LMETHOD_GPS_AND_WIFI = 2,
 SCE_LOCATION_LMETHOD_WIFI = 3,
 SCE_LOCATION_LMETHOD_3G = 4,
 SCE_LOCATION_LMETHOD_GPS = 5
} SceLocationLocationMethod;
typedef enum SceLocationHeadingMethod {
 SCE_LOCATION_HMETHOD_NONE = 0,
 SCE_LOCATION_HMETHOD_AUTO = 1,
 SCE_LOCATION_HMETHOD_VERTICAL = 2,
 SCE_LOCATION_HMETHOD_HORIZONTAL = 3,
 SCE_LOCATION_HMETHOD_CAMERA = 4
} SceLocationHeadingMethod;
typedef struct SceLocationLocationInfo {
 SceDouble64 latitude;
 SceDouble64 longitude;
 SceDouble64 altitude;
 SceFloat32 accuracy;
 SceFloat32 reserve;
 SceFloat32 direction;
 SceFloat32 speed;
 SceRtcTick timestamp;
} SceLocationLocationInfo;
typedef struct SceLocationHeadingInfo {
 SceFloat32 trueHeading;
 SceFloat32 headingVectorX;
 SceFloat32 headingVectorY;
 SceFloat32 headingVectorZ;
 SceFloat32 reserve;
 SceFloat32 reserve2;
 SceRtcTick timestamp;
} SceLocationHeadingInfo;
typedef void(*SceLocationLocationInfoCallback)(SceInt32 result, SceLocationHandle handle, const SceLocationLocationInfo *location, void *userdata);
typedef void(*SceLocationHeadingInfoCallback)(SceInt32 result, SceLocationHandle handle, const SceLocationHeadingInfo *heading, void *userdata);
typedef struct SceLocationPermissionInfo {
 SceLocationPermissionStatus parentalstatus;
 SceLocationPermissionStatus mainstatus;
 SceLocationPermissionApplicationStatus applicationstatus;
} SceLocationPermissionInfo;
typedef enum SceMsgDialogErrorCode {
 SCE_MSG_DIALOG_ERROR_PARAM = 0x80100A01
} SceMsgDialogErrorCode;
typedef enum SceMsgDialogMode {
 SCE_MSG_DIALOG_MODE_INVALID = 0,
 SCE_MSG_DIALOG_MODE_USER_MSG = 1,
 SCE_MSG_DIALOG_MODE_SYSTEM_MSG = 2,
 SCE_MSG_DIALOG_MODE_ERROR_CODE = 3,
 SCE_MSG_DIALOG_MODE_PROGRESS_BAR = 4
} SceMsgDialogMode;
typedef enum SceMsgDialogSystemMessageType {
 SCE_MSG_DIALOG_SYSMSG_TYPE_INVALID = 0,
 SCE_MSG_DIALOG_SYSMSG_TYPE_WAIT = 1,
 SCE_MSG_DIALOG_SYSMSG_TYPE_NOSPACE = 2,
 SCE_MSG_DIALOG_SYSMSG_TYPE_MAGNETIC_CALIBRATION = 3,
 SCE_MSG_DIALOG_SYSMSG_TYPE_WAIT_SMALL = 5,
 SCE_MSG_DIALOG_SYSMSG_TYPE_WAIT_CANCEL = 6,
 SCE_MSG_DIALOG_SYSMSG_TYPE_NEED_MC_CONTINUE = 7,
 SCE_MSG_DIALOG_SYSMSG_TYPE_NEED_MC_OPERATION = 8,
 SCE_MSG_DIALOG_SYSMSG_TYPE_TRC_MIC_DISABLED = 100,
 SCE_MSG_DIALOG_SYSMSG_TYPE_TRC_WIFI_REQUIRED_OPERATION = 101,
 SCE_MSG_DIALOG_SYSMSG_TYPE_TRC_WIFI_REQUIRED_APPLICATION = 102,
 SCE_MSG_DIALOG_SYSMSG_TYPE_TRC_EMPTY_STORE = 103
} SceMsgDialogSystemMessageType;
typedef enum SceMsgDialogButtonType {
 SCE_MSG_DIALOG_BUTTON_TYPE_OK = 0,
 SCE_MSG_DIALOG_BUTTON_TYPE_YESNO = 1,
 SCE_MSG_DIALOG_BUTTON_TYPE_NONE = 2,
 SCE_MSG_DIALOG_BUTTON_TYPE_OK_CANCEL = 3,
 SCE_MSG_DIALOG_BUTTON_TYPE_CANCEL = 4,
 SCE_MSG_DIALOG_BUTTON_TYPE_3BUTTONS = 5
} SceMsgDialogButtonType;
typedef enum SceMsgDialogButtonId {
 SCE_MSG_DIALOG_BUTTON_ID_INVALID = 0,
 SCE_MSG_DIALOG_BUTTON_ID_OK = 1,
 SCE_MSG_DIALOG_BUTTON_ID_YES = 1,
 SCE_MSG_DIALOG_BUTTON_ID_NO = 2,
 SCE_MSG_DIALOG_BUTTON_ID_RETRY = 3,
 SCE_MSG_DIALOG_BUTTON_ID_BUTTON1 = 1,
 SCE_MSG_DIALOG_BUTTON_ID_BUTTON2 = 2,
 SCE_MSG_DIALOG_BUTTON_ID_BUTTON3 = 3
} SceMsgDialogButtonId;
typedef enum SceMsgDialogProgressBarType {
 SCE_MSG_DIALOG_PROGRESSBAR_TYPE_PERCENTAGE = 0
} SceMsgDialogProgressBarType;
typedef enum SceMsgDialogProgressBarTarget {
 SCE_MSG_DIALOG_PROGRESSBAR_TARGET_BAR_DEFAULT = 0
} SceMsgDialogProgressBarTarget;
typedef enum SceMsgDialogEnvFlag {
 SCE_MSG_DIALOG_ENV_FLAG_DEFAULT = 0
} SceMsgDialogEnvFlag;
typedef enum SceMsgDialogFontSize {
 SCE_MSG_DIALOG_FONT_SIZE_DEFAULT = 0,
 SCE_MSG_DIALOG_FONT_SIZE_SMALL = 1
} SceMsgDialogFontSize;
typedef struct SceMsgDialogButtonsParam {
 const char* msg1;
 SceInt32 fontSize1;
 const char* msg2;
 SceInt32 fontSize2;
 const char* msg3;
 SceInt32 fontSize3;
 SceChar8 reserved[32];
} SceMsgDialogButtonsParam;
typedef struct SceMsgDialogUserMessageParam {
 SceInt32 buttonType;
 const SceChar8 *msg;
 SceMsgDialogButtonsParam *buttonParam;
 SceChar8 reserved[28];
} SceMsgDialogUserMessageParam;
typedef struct SceMsgDialogSystemMessageParam {
 SceInt32 sysMsgType;
 SceInt32 value;
 SceChar8 reserved[32];
} SceMsgDialogSystemMessageParam;
typedef struct SceMsgDialogErrorCodeParam {
 SceInt32 errorCode;
 SceChar8 reserved[32];
} SceMsgDialogErrorCodeParam;
typedef struct SceMsgDialogProgressBarParam {
 SceInt32 barType;
 SceMsgDialogSystemMessageParam sysMsgParam;
 const SceChar8 *msg;
 SceInt32 reserved[8];
} SceMsgDialogProgressBarParam;
typedef struct SceMsgDialogParam {
 SceUInt32 sdkVersion;
 SceCommonDialogParam commonParam;
 SceInt32 mode;
 SceMsgDialogUserMessageParam *userMsgParam;
 SceMsgDialogSystemMessageParam *sysMsgParam;
 SceMsgDialogErrorCodeParam *errorCodeParam;
 SceMsgDialogProgressBarParam *progBarParam;
 SceInt32 flag;
 SceChar8 reserved[32];
} SceMsgDialogParam;
typedef struct SceMsgDialogResult {
 SceInt32 mode;
 SceInt32 result;
 SceInt32 buttonId;
 SceChar8 reserved[32];
} SceMsgDialogResult;
typedef struct SceMotionState {
 unsigned int timestamp;
 SceFVector3 acceleration;
 SceFVector3 angularVelocity;
 uint8_t reserved1[12];
 SceFQuaternion deviceQuat;
 SceUMatrix4 rotationMatrix;
 SceUMatrix4 nedMatrix;
 uint32_t reserved2;
 SceFVector3 basicOrientation;
 SceULong64 hostTimestamp;
 uint8_t reserved[40];
} SceMotionState;
typedef struct SceMotionSensorState {
 SceFVector3 accelerometer;
 SceFVector3 gyro;
 uint8_t reserved1[12];
 unsigned int timestamp;
 unsigned int counter;
 uint32_t reserved2;
 SceULong64 hostTimestamp;
 uint8_t reserved3[8];
} SceMotionSensorState;
typedef struct MusicExportParam {
 char reserved[128];
} MusicExportParam;
typedef enum SceNetErrorCode {
 SCE_NET_ERROR_EPERM = 0x80410101,
 SCE_NET_ERROR_ENOENT = 0x80410102,
 SCE_NET_ERROR_ESRCH = 0x80410103,
 SCE_NET_ERROR_EINTR = 0x80410104,
 SCE_NET_ERROR_EIO = 0x80410105,
 SCE_NET_ERROR_ENXIO = 0x80410106,
 SCE_NET_ERROR_E2BIG = 0x80410107,
 SCE_NET_ERROR_ENOEXEC = 0x80410108,
 SCE_NET_ERROR_EBADF = 0x80410109,
 SCE_NET_ERROR_ECHILD = 0x8041010A,
 SCE_NET_ERROR_EDEADLK = 0x8041010B,
 SCE_NET_ERROR_ENOMEM = 0x8041010C,
 SCE_NET_ERROR_EACCES = 0x8041010D,
 SCE_NET_ERROR_EFAULT = 0x8041010E,
 SCE_NET_ERROR_ENOTBLK = 0x8041010F,
 SCE_NET_ERROR_EBUSY = 0x80410110,
 SCE_NET_ERROR_EEXIST = 0x80410111,
 SCE_NET_ERROR_EXDEV = 0x80410112,
 SCE_NET_ERROR_ENODEV = 0x80410113,
 SCE_NET_ERROR_ENOTDIR = 0x80410114,
 SCE_NET_ERROR_EISDIR = 0x80410115,
 SCE_NET_ERROR_EINVAL = 0x80410116,
 SCE_NET_ERROR_ENFILE = 0x80410117,
 SCE_NET_ERROR_EMFILE = 0x80410118,
 SCE_NET_ERROR_ENOTTY = 0x80410119,
 SCE_NET_ERROR_ETXTBSY = 0x8041011A,
 SCE_NET_ERROR_EFBIG = 0x8041011B,
 SCE_NET_ERROR_ENOSPC = 0x8041011C,
 SCE_NET_ERROR_ESPIPE = 0x8041011D,
 SCE_NET_ERROR_EROFS = 0x8041011E,
 SCE_NET_ERROR_EMLINK = 0x8041011F,
 SCE_NET_ERROR_EPIPE = 0x80410120,
 SCE_NET_ERROR_EDOM = 0x80410121,
 SCE_NET_ERROR_ERANGE = 0x80410122,
 SCE_NET_ERROR_EAGAIN = 0x80410123,
 SCE_NET_ERROR_EWOULDBLOCK = 0x80410123,
 SCE_NET_ERROR_EINPROGRESS = 0x80410124,
 SCE_NET_ERROR_EALREADY = 0x80410125,
 SCE_NET_ERROR_ENOTSOCK = 0x80410126,
 SCE_NET_ERROR_EDESTADDRREQ = 0x80410127,
 SCE_NET_ERROR_EMSGSIZE = 0x80410128,
 SCE_NET_ERROR_EPROTOTYPE = 0x80410129,
 SCE_NET_ERROR_ENOPROTOOPT = 0x8041012A,
 SCE_NET_ERROR_EPROTONOSUPPORT = 0x8041012B,
 SCE_NET_ERROR_ESOCKTNOSUPPORT = 0x8041012C,
 SCE_NET_ERROR_EOPNOTSUPP = 0x8041012D,
 SCE_NET_ERROR_EPFNOSUPPORT = 0x8041012E,
 SCE_NET_ERROR_EAFNOSUPPORT = 0x8041012F,
 SCE_NET_ERROR_EADDRINUSE = 0x80410130,
 SCE_NET_ERROR_EADDRNOTAVAIL = 0x80410131,
 SCE_NET_ERROR_ENETDOWN = 0x80410132,
 SCE_NET_ERROR_ENETUNREACH = 0x80410133,
 SCE_NET_ERROR_ENETRESET = 0x80410134,
 SCE_NET_ERROR_ECONNABORTED = 0x80410135,
 SCE_NET_ERROR_ECONNRESET = 0x80410136,
 SCE_NET_ERROR_ENOBUFS = 0x80410137,
 SCE_NET_ERROR_EISCONN = 0x80410138,
 SCE_NET_ERROR_ENOTCONN = 0x80410139,
 SCE_NET_ERROR_ESHUTDOWN = 0x8041013A,
 SCE_NET_ERROR_ETOOMANYREFS = 0x8041013B,
 SCE_NET_ERROR_ETIMEDOUT = 0x8041013C,
 SCE_NET_ERROR_ECONNREFUSED = 0x8041013D,
 SCE_NET_ERROR_ELOOP = 0x8041013E,
 SCE_NET_ERROR_ENAMETOOLONG = 0x8041013F,
 SCE_NET_ERROR_EHOSTDOWN = 0x80410140,
 SCE_NET_ERROR_EHOSTUNREACH = 0x80410141,
 SCE_NET_ERROR_ENOTEMPTY = 0x80410142,
 SCE_NET_ERROR_EPROCLIM = 0x80410143,
 SCE_NET_ERROR_EUSERS = 0x80410144,
 SCE_NET_ERROR_EDQUOT = 0x80410145,
 SCE_NET_ERROR_ESTALE = 0x80410146,
 SCE_NET_ERROR_EREMOTE = 0x80410147,
 SCE_NET_ERROR_EBADRPC = 0x80410148,
 SCE_NET_ERROR_ERPCMISMATCH = 0x80410149,
 SCE_NET_ERROR_EPROGUNAVAIL = 0x8041014A,
 SCE_NET_ERROR_EPROGMISMATCH = 0x8041014B,
 SCE_NET_ERROR_EPROCUNAVAIL = 0x8041014C,
 SCE_NET_ERROR_ENOLCK = 0x8041014D,
 SCE_NET_ERROR_ENOSYS = 0x8041014E,
 SCE_NET_ERROR_EFTYPE = 0x8041014F,
 SCE_NET_ERROR_EAUTH = 0x80410150,
 SCE_NET_ERROR_ENEEDAUTH = 0x80410151,
 SCE_NET_ERROR_EIDRM = 0x80410152,
 SCE_NET_ERROR_ENOMS = 0x80410153,
 SCE_NET_ERROR_EOVERFLOW = 0x80410154,
 SCE_NET_ERROR_EILSEQ = 0x80410155,
 SCE_NET_ERROR_ENOTSUP = 0x80410156,
 SCE_NET_ERROR_ECANCELED = 0x80410157,
 SCE_NET_ERROR_EBADMSG = 0x80410158,
 SCE_NET_ERROR_ENODATA = 0x80410159,
 SCE_NET_ERROR_ENOSR = 0x8041015A,
 SCE_NET_ERROR_ENOSTR = 0x8041015B,
 SCE_NET_ERROR_ETIME = 0x8041015C,
 SCE_NET_ERROR_EADHOC = 0x804101A0,
 SCE_NET_ERROR_EDISABLEDIF = 0x804101A1,
 SCE_NET_ERROR_ERESUME = 0x804101A2,
 SCE_NET_ERROR_ENOTINIT = 0x804101C8,
 SCE_NET_ERROR_ENOLIBMEM = 0x804101C9,
 SCE_NET_ERROR_ERESERVED202 = 0x804101CA,
 SCE_NET_ERROR_ECALLBACK = 0x804101CB,
 SCE_NET_ERROR_EINTERNAL = 0x804101CC,
 SCE_NET_ERROR_ERETURN = 0x804101CD,
 SCE_NET_ERROR_RESOLVER_EINTERNAL = 0x804101DC,
 SCE_NET_ERROR_RESOLVER_EBUSY = 0x804101DD,
 SCE_NET_ERROR_RESOLVER_ENOSPACE = 0x804101DE,
 SCE_NET_ERROR_RESOLVER_EPACKET = 0x804101DF,
 SCE_NET_ERROR_RESOLVER_ERESERVED22 = 0x804101E0,
 SCE_NET_ERROR_RESOLVER_ENODNS = 0x804101E1,
 SCE_NET_ERROR_RESOLVER_ETIMEDOUT = 0x804101E2,
 SCE_NET_ERROR_RESOLVER_ENOSUPPORT = 0x804101E3,
 SCE_NET_ERROR_RESOLVER_EFORMAT = 0x804101E4,
 SCE_NET_ERROR_RESOLVER_ESERVERFAILURE = 0x804101E5,
 SCE_NET_ERROR_RESOLVER_ENOHOST = 0x804101E6,
 SCE_NET_ERROR_RESOLVER_ENOTIMPLEMENTED = 0x804101E7,
 SCE_NET_ERROR_RESOLVER_ESERVERREFUSED = 0x804101E8,
 SCE_NET_ERROR_RESOLVER_ENORECORD = 0x804101E9,
 SCE_NET_ERROR_RESOLVER_EALIGNMENT = 0x804101EA
} SceNetErrorCode;
typedef enum SceNetKernelErrorCode {
 SCE_NET_EPERM = 1,
 SCE_NET_ENOENT = 2,
 SCE_NET_ESRCH = 3,
 SCE_NET_EINTR = 4,
 SCE_NET_EIO = 5,
 SCE_NET_ENXIO = 6,
 SCE_NET_E2BIG = 7,
 SCE_NET_ENOEXEC = 8,
 SCE_NET_EBADF = 9,
 SCE_NET_ECHILD = 10,
 SCE_NET_EDEADLK = 11,
 SCE_NET_ENOMEM = 12,
 SCE_NET_EACCES = 13,
 SCE_NET_EFAULT = 14,
 SCE_NET_ENOTBLK = 15,
 SCE_NET_EBUSY = 16,
 SCE_NET_EEXIST = 17,
 SCE_NET_EXDEV = 18,
 SCE_NET_ENODEV = 19,
 SCE_NET_ENOTDIR = 20,
 SCE_NET_EISDIR = 21,
 SCE_NET_EINVAL = 22,
 SCE_NET_ENFILE = 23,
 SCE_NET_EMFILE = 24,
 SCE_NET_ENOTTY = 25,
 SCE_NET_ETXTBSY = 26,
 SCE_NET_EFBIG = 27,
 SCE_NET_ENOSPC = 28,
 SCE_NET_ESPIPE = 29,
 SCE_NET_EROFS = 30,
 SCE_NET_EMLINK = 31,
 SCE_NET_EPIPE = 32,
 SCE_NET_EDOM = 33,
 SCE_NET_ERANGE = 34,
 SCE_NET_EAGAIN = 35,
 SCE_NET_EWOULDBLOCK = 35,
 SCE_NET_EINPROGRESS = 36,
 SCE_NET_EALREADY = 37,
 SCE_NET_ENOTSOCK = 38,
 SCE_NET_EDESTADDRREQ = 39,
 SCE_NET_EMSGSIZE = 40,
 SCE_NET_EPROTOTYPE = 41,
 SCE_NET_ENOPROTOOPT = 42,
 SCE_NET_EPROTONOSUPPORT = 43,
 SCE_NET_ESOCKTNOSUPPORT = 44,
 SCE_NET_EOPNOTSUPP = 45,
 SCE_NET_EPFNOSUPPORT = 46,
 SCE_NET_EAFNOSUPPORT = 47,
 SCE_NET_EADDRINUSE = 48,
 SCE_NET_EADDRNOTAVAIL = 49,
 SCE_NET_ENETDOWN = 50,
 SCE_NET_ENETUNREACH = 51,
 SCE_NET_ENETRESET = 52,
 SCE_NET_ECONNABORTED = 53,
 SCE_NET_ECONNRESET = 54,
 SCE_NET_ENOBUFS = 55,
 SCE_NET_EISCONN = 56,
 SCE_NET_ENOTCONN = 57,
 SCE_NET_ESHUTDOWN = 58,
 SCE_NET_ETOOMANYREFS = 59,
 SCE_NET_ETIMEDOUT = 60,
 SCE_NET_ECONNREFUSED = 61,
 SCE_NET_ELOOP = 62,
 SCE_NET_ENAMETOOLONG = 63,
 SCE_NET_EHOSTDOWN = 64,
 SCE_NET_EHOSTUNREACH = 65,
 SCE_NET_ENOTEMPTY = 66,
 SCE_NET_EPROCLIM = 67,
 SCE_NET_EUSERS = 68,
 SCE_NET_EDQUOT = 69,
 SCE_NET_ESTALE = 70,
 SCE_NET_EREMOTE = 71,
 SCE_NET_EBADRPC = 72,
 SCE_NET_ERPCMISMATCH = 73,
 SCE_NET_EPROGUNAVAIL = 74,
 SCE_NET_EPROGMISMATCH = 75,
 SCE_NET_EPROCUNAVAIL = 76,
 SCE_NET_ENOLCK = 77,
 SCE_NET_ENOSYS = 78,
 SCE_NET_EFTYPE = 79,
 SCE_NET_EAUTH = 80,
 SCE_NET_ENEEDAUTH = 81,
 SCE_NET_EIDRM = 82,
 SCE_NET_ENOMSG = 83,
 SCE_NET_EOVERFLOW = 84,
 SCE_NET_EILSEQ = 85,
 SCE_NET_ENOTSUP = 86,
 SCE_NET_ECANCELED = 87,
 SCE_NET_EBADMSG = 88,
 SCE_NET_ENODATA = 89,
 SCE_NET_ENOSR = 90,
 SCE_NET_ENOSTR = 91,
 SCE_NET_ETIME = 92,
 SCE_NET_EADHOC = 160,
 SCE_NET_EDISABLEDIF = 161,
 SCE_NET_ERESUME = 162
} SceNetKernelErrorCode;
typedef enum SceNetLibnetErrorCode {
 SCE_NET_ENOTINIT = 200,
 SCE_NET_ENOLIBMEM,
 SCE_NET_ETLS,
 SCE_NET_ECALLBACK,
 SCE_NET_EINTERNAL,
 SCE_NET_ERETURN
} SceNetLibnetErrorCode;
typedef enum SceNetResolverErrorCode {
 SCE_NET_RESOLVER_EINTERNAL = 220,
 SCE_NET_RESOLVER_EBUSY,
 SCE_NET_RESOLVER_ENOSPACE,
 SCE_NET_RESOLVER_EPACKET,
 SCE_NET_RESOLVER_ERESERVED224,
 SCE_NET_RESOLVER_ENODNS,
 SCE_NET_RESOLVER_ETIMEDOUT,
 SCE_NET_RESOLVER_ENOSUPPORT,
 SCE_NET_RESOLVER_EFORMAT,
 SCE_NET_RESOLVER_ESERVERFAILURE,
 SCE_NET_RESOLVER_ENOHOST,
 SCE_NET_RESOLVER_ENOTIMPLEMENTED,
 SCE_NET_RESOLVER_ESERVERREFUSED,
 SCE_NET_RESOLVER_ENORECORD,
 SCE_NET_RESOLVER_EALIGNMENT
} SceNetResolverErrorCode;
typedef enum SceNetDumpType {
 SCE_NET_DUMP_PEEK = 0x00000010,
 SCE_NET_DUMP_DONTWAIT = 0x00000020,
 SCE_NET_DUMP_OVERFLOW = 0x00000040,
 SCE_NET_DUMP_ABORT_FLAG_PRESERVATION = 0x00000001
} SceNetDumpType;
typedef enum SceNetEpollEventType {
 SCE_NET_EPOLLIN = 0x00000001,
 SCE_NET_EPOLLOUT = 0x00000002,
 SCE_NET_EPOLLERR = 0x00000008,
 SCE_NET_EPOLLHUP = 0x00000010,
 SCE_NET_EPOLLDESCID = 0x00010000
} SceNetEpollEventType;
typedef enum SceNetEpollControlFlag {
 SCE_NET_EPOLL_CTL_ADD = 1,
 SCE_NET_EPOLL_CTL_MOD,
 SCE_NET_EPOLL_CTL_DEL
} SceNetEpollControlFlag;
typedef enum SceNetSockInfoState {
 SCE_NET_SOCKINFO_STATE_UNKNOWN,
 SCE_NET_SOCKINFO_STATE_CLOSED,
 SCE_NET_SOCKINFO_STATE_OPENED,
 SCE_NET_SOCKINFO_STATE_LISTEN,
 SCE_NET_SOCKINFO_STATE_SYN_SENT,
 SCE_NET_SOCKINFO_STATE_SYN_RECEIVED,
 SCE_NET_SOCKINFO_STATE_ESTABLISHED,
 SCE_NET_SOCKINFO_STATE_FIN_WAIT_1,
 SCE_NET_SOCKINFO_STATE_FIN_WAIT_2,
 SCE_NET_SOCKINFO_STATE_CLOSE_WAIT,
 SCE_NET_SOCKINFO_STATE_CLOSING,
 SCE_NET_SOCKINFO_STATE_LAST_ACK,
 SCE_NET_SOCKINFO_STATE_TIME_WAIT
} SceNetSockInfoState;
typedef enum SceNetSockInfoFlag {
 SCE_NET_SOCKINFO_F_SELF = 0x00000001,
 SCE_NET_SOCKINFO_F_KERNEL = 0x00000002,
 SCE_NET_SOCKINFO_F_OTHERS = 0x00000004,
 SCE_NET_SOCKINFO_F_RECV_WAIT = 0x00010000,
 SCE_NET_SOCKINFO_F_SEND_WAIT = 0x00020000,
 SCE_NET_SOCKINFO_F_RECV_EWAIT = 0x00040000,
 SCE_NET_SOCKINFO_F_SEND_EWAIT = 0x00080000,
 SCE_NET_SOCKINFO_F_WAKEUP_SIGNAL = 0x00100000,
 SCE_NET_SOCKINFO_F_ALL = 0x001F0007
} SceNetSockInfoFlag;
typedef enum SceNetEmulationFlag {
 SCE_NET_EMULATION_FLAG_ETH0 = 1,
 SCE_NET_EMULATION_FLAG_WLAN0
} SceNetEmulationFlag;
typedef enum SceNetResolverFlag {
 SCE_NET_RESOLVER_ASYNC = 0x00000001,
 SCE_NET_RESOLVER_START_NTOA_DISABLE_IPADDRESS = 0x00010000
} SceNetResolverFlag;
typedef enum SceNetResolverAbortFlag {
 SCE_NET_RESOLVER_ABORT_FLAG_NTOA_PRESERVATION = 0x00000001,
 SCE_NET_RESOLVER_ABORT_FLAG_ATON_PRESERVATION = 0x00000002
} SceNetResolverAbortFlag;
typedef enum SceNetSocketAbortFlag {
 SCE_NET_SOCKET_ABORT_FLAG_RCV_PRESERVATION = 0x00000001,
 SCE_NET_SOCKET_ABORT_FLAG_SND_PRESERVATION = 0x00000002
} SceNetSocketAbortFlag;
typedef enum SceNetProtocol {
 SCE_NET_IPPROTO_IP = 0,
 SCE_NET_IPPROTO_ICMP = 1,
 SCE_NET_IPPROTO_IGMP = 2,
 SCE_NET_IPPROTO_TCP = 6,
 SCE_NET_IPPROTO_UDP = 17,
 SCE_NET_SOL_SOCKET = 0xFFFF
} SceNetProtocol;
typedef enum SceNetSocketOption {
 SCE_NET_IP_HDRINCL = 2,
 SCE_NET_IP_TOS = 3,
 SCE_NET_IP_TTL = 4,
 SCE_NET_IP_MULTICAST_IF = 9,
 SCE_NET_IP_MULTICAST_TTL = 10,
 SCE_NET_IP_MULTICAST_LOOP = 11,
 SCE_NET_IP_ADD_MEMBERSHIP = 12,
 SCE_NET_IP_DROP_MEMBERSHIP = 13,
 SCE_NET_IP_TTLCHK = 23,
 SCE_NET_IP_MAXTTL = 24,
 SCE_NET_TCP_NODELAY = 1,
 SCE_NET_TCP_MAXSEG = 2,
 SCE_NET_TCP_MSS_TO_ADVERTISE = 3,
 SCE_NET_SO_REUSEADDR = 0x00000004,
 SCE_NET_SO_KEEPALIVE = 0x00000008,
 SCE_NET_SO_BROADCAST = 0x00000020,
 SCE_NET_SO_LINGER = 0x00000080,
 SCE_NET_SO_OOBINLINE = 0x00000100,
 SCE_NET_SO_REUSEPORT = 0x00000200,
 SCE_NET_SO_ONESBCAST = 0x00000800,
 SCE_NET_SO_USECRYPTO = 0x00001000,
 SCE_NET_SO_USESIGNATURE = 0x00002000,
 SCE_NET_SO_SNDBUF = 0x1001,
 SCE_NET_SO_RCVBUF = 0x1002,
 SCE_NET_SO_SNDLOWAT = 0x1003,
 SCE_NET_SO_RCVLOWAT = 0x1004,
 SCE_NET_SO_SNDTIMEO = 0x1005,
 SCE_NET_SO_RCVTIMEO = 0x1006,
 SCE_NET_SO_ERROR = 0x1007,
 SCE_NET_SO_TYPE = 0x1008,
 SCE_NET_SO_NBIO = 0x1100,
 SCE_NET_SO_TPPOLICY = 0x1101,
 SCE_NET_SO_NAME = 0x1102
} SceNetSocketOption;
typedef enum SceNetSocketType {
 SCE_NET_SOCK_STREAM = 1,
 SCE_NET_SOCK_DGRAM = 2,
 SCE_NET_SOCK_RAW = 3,
 SCE_NET_SOCK_DGRAM_P2P = 6,
 SCE_NET_SOCK_STREAM_P2P = 10
} SceNetSocketType;
typedef enum SceNetMsgFlag {
 SCE_NET_MSG_PEEK = 0x00000002,
 SCE_NET_MSG_WAITALL = 0x00000040,
 SCE_NET_MSG_DONTWAIT = 0x00000080,
 SCE_NET_MSG_USECRYPTO = 0x00000400,
 SCE_NET_MSG_USESIGNATURE = 0x00000800
} SceNetMsgFlag;
typedef enum SceNetShutdownFlag {
 SCE_NET_SHUT_RD,
 SCE_NET_SHUT_WR,
 SCE_NET_SHUT_RDWR
} SceNetShutdownFlag;
typedef enum SceNetIcmpType {
 SCE_NET_ICMP_TYPE_ECHO_REPLY = 0,
 SCE_NET_ICMP_TYPE_DEST_UNREACH = 3,
 SCE_NET_ICMP_TYPE_SOURCE_QUENCH = 4,
 SCE_NET_ICMP_TYPE_REDIRECT = 5,
 SCE_NET_ICMP_TYPE_ECHO_REQUEST = 8,
 SCE_NET_ICMP_TYPE_TIME_EXCEEDED = 11,
 SCE_NET_ICMP_TYPE_PARAMETER_PROBLEM = 12,
 SCE_NET_ICMP_TYPE_TIMESTAMP_REQUEST = 13,
 SCE_NET_ICMP_TYPE_TIMESTAMP_REPLY = 14,
 SCE_NET_ICMP_TYPE_INFORMATION_REQUEST = 15,
 SCE_NET_ICMP_TYPE_INFORMATION_REPLY = 16,
 SCE_NET_ICMP_TYPE_ADDRESS_MASK_REQUEST = 17,
 SCE_NET_ICMP_TYPE_ADDRESS_MASK_REPLY = 18
} SceNetIcmpType;
typedef enum SceNetIcmpCode {
 SCE_NET_ICMP_CODE_DEST_UNREACH_NET_UNREACH = 0,
 SCE_NET_ICMP_CODE_DEST_UNREACH_HOST_UNREACH = 1,
 SCE_NET_ICMP_CODE_DEST_UNREACH_PROTO_UNREACH = 2,
 SCE_NET_ICMP_CODE_DEST_UNREACH_PORT_UNREACH = 3,
 SCE_NET_ICMP_CODE_DEST_UNREACH_FRAG_AND_DF = 4,
 SCE_NET_ICMP_CODE_DEST_UNREACH_SRC_HOST_FAILED = 5,
 SCE_NET_ICMP_CODE_DEST_UNREACH_DST_NET_UNKNOWN = 6,
 SCE_NET_ICMP_CODE_DEST_UNREACH_DST_HOST_UNKNOWN = 7,
 SCE_NET_ICMP_CODE_DEST_UNREACH_SRC_HOST_ISOLATED = 8,
 SCE_NET_ICMP_CODE_DEST_UNREACH_NET_ADMIN_PROHIBITED = 9,
 SCE_NET_ICMP_CODE_DEST_UNREACH_NET_HOST_PROHIBITED = 10,
 SCE_NET_ICMP_CODE_DEST_UNREACH_NET_TOS = 11,
 SCE_NET_ICMP_CODE_DEST_UNREACH_HOST_TOS = 12,
 SCE_NET_ICMP_CODE_TIME_EXCEEDED_TTL_EXCEEDED = 0,
 SCE_NET_ICMP_CODE_TIME_EXCEEDED_FRT_EXCEEDED = 1
} SceNetIcmpCode;
typedef void *(*SceNetResolverFunctionAllocate)(
 unsigned int size,
 int rid,
 const char *name,
 void *user);
typedef void (*SceNetResolverFunctionFree)(
 void *ptr,
 int rid,
 const char *name,
 void *user);
typedef struct SceNetFdSet {
 unsigned int bits[32];
} SceNetFdSet;
typedef struct SceNetInAddr {
 unsigned int s_addr;
} SceNetInAddr;
typedef struct SceNetSockaddrIn {
 unsigned char sin_len;
 unsigned char sin_family;
 unsigned short int sin_port;
 SceNetInAddr sin_addr;
 unsigned short int sin_vport;
 char sin_zero[6];
} SceNetSockaddrIn;
typedef struct SceNetIpMreq {
 SceNetInAddr imr_multiaddr;
 SceNetInAddr imr_interface;
} SceNetIpMreq;
typedef struct SceNetInitParam {
 void *memory;
 int size;
 int flags;
} SceNetInitParam;
typedef struct SceNetEmulationData {
 unsigned short int drop_rate;
 unsigned short int drop_duration;
 unsigned short int pass_duration;
 unsigned short int delay_time;
 unsigned short int delay_jitter;
 unsigned short int order_rate;
 unsigned short int order_delay_time;
 unsigned short int duplication_rate;
 unsigned int bps_limit;
 unsigned short int lower_size_limit;
 unsigned short int upper_size_limit;
 unsigned int system_policy_pattern;
 unsigned int game_policy_pattern;
 unsigned short int policy_flags[64];
 unsigned char reserved[64];
} SceNetEmulationData;
typedef struct SceNetEmulationParam {
 unsigned short int version;
 unsigned short int option_number;
 unsigned short int current_version;
 unsigned short int result;
 unsigned int flags;
 unsigned int reserved1;
 SceNetEmulationData send;
 SceNetEmulationData recv;
 unsigned int seed;
 unsigned char reserved[44];
} SceNetEmulationParam;
typedef struct SceNetEtherAddr {
 unsigned char data[6];
} SceNetEtherAddr;
typedef struct SceNetDnsInfo {
 SceNetInAddr dns_addr[2];
} SceNetDnsInfo;
typedef struct SceNetEpollDataExt {
 int id;
 unsigned int u32;
} SceNetEpollDataExt;
typedef union SceNetEpollData {
 void *ptr;
 int fd;
 unsigned int u32;
 unsigned long long int u64;
 SceNetEpollDataExt ext;
} SceNetEpollData;
typedef struct SceNetEpollSystemData {
 unsigned int system[4];
} SceNetEpollSystemData;
typedef struct SceNetEpollEvent {
 unsigned int events;
 unsigned int reserved;
 SceNetEpollSystemData system;
 SceNetEpollData data;
} SceNetEpollEvent;
typedef struct SceNetResolverParam {
 SceNetResolverFunctionAllocate allocate;
 SceNetResolverFunctionFree free;
 void *user;
} SceNetResolverParam;
typedef struct SceNetLinger {
 int l_onoff;
 int l_linger;
} SceNetLinger;
typedef struct SceNetSockaddr {
 unsigned char sa_len;
 unsigned char sa_family;
 char sa_data[14];
} SceNetSockaddr;
typedef struct SceNetIovec {
 void *iov_base;
 unsigned int iov_len;
} SceNetIovec;
typedef struct SceNetMsghdr {
 void *msg_name;
 unsigned int msg_namelen;
 SceNetIovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 unsigned int msg_controllen;
 int msg_flags;
} SceNetMsghdr;
typedef struct SceNetSockInfo {
 char name[31 + 1];
 int pid;
 int s;
 char socket_type;
 char policy;
 short int reserved16;
 int recv_queue_length;
 int send_queue_length;
 SceNetInAddr local_adr;
 SceNetInAddr remote_adr;
 unsigned short int local_port;
 unsigned short int remote_port;
 unsigned short int local_vport;
 unsigned short int remote_vport;
 int state;
 int flags;
 int reserved[8];
} SceNetSockInfo;
typedef struct SceNetStatisticsInfo {
 int kernel_mem_free_size;
 int kernel_mem_free_min;
 int packet_count;
 int packet_qos_count;
 int libnet_mem_free_size;
 int libnet_mem_free_min;
} SceNetStatisticsInfo;
typedef struct SceNetIpHeaderIpVerHl {
 unsigned char hl;
 unsigned char ver;
} SceNetIpHeaderIpVerHl;
typedef union SceNetIpHeaderUnion {
 SceNetIpHeaderIpVerHl ip_ver_hl;
 unsigned char ver_hl;
} SceNetIpHeaderUnion;
typedef struct SceNetIpHeader {
 SceNetIpHeaderUnion un;
 unsigned char ip_tos;
 unsigned short ip_len;
 unsigned short ip_id;
 unsigned short ip_off;
 unsigned char ip_ttl;
 unsigned char ip_p;
 unsigned short ip_sum;
 SceNetInAddr ip_src;
 SceNetInAddr ip_dst;
} SceNetIpHeader;
typedef struct SceNetIcmpHeaderEcho {
 unsigned short id;
 unsigned short sequence;
} SceNetIcmpHeaderEcho;
typedef struct SceNetIcmpHeaderFrag {
 unsigned short unused;
 unsigned short mtu;
} SceNetIcmpHeaderFrag;
typedef union SceNetIcmpHeaderUnion {
 SceNetIcmpHeaderEcho echo;
 unsigned int gateway;
 SceNetIcmpHeaderFrag frag;
} SceNetIcmpHeaderUnion;
typedef struct SceNetIcmpHeader {
 unsigned char type;
 unsigned char code;
 unsigned short checksum;
 SceNetIcmpHeaderUnion un;
} SceNetIcmpHeader;
typedef enum ScePspnetAdhocctlErrorCode {
 SCE_ERROR_NET_ADHOCCTL_INVALID_ARG = 0x80410B04,
 SCE_ERROR_NET_ADHOCCTL_ALREADY_INITIALIZED = 0x80410B07,
 SCE_ERROR_NET_ADHOCCTL_NOT_INITIALIZED = 0x80410B08
} ScePspnetAdhocctlErrorCode;
typedef enum ScePspnetAdhocctlAdhocType {
 SCE_NET_ADHOCCTL_ADHOCTYPE_PRODUCT_ID = 0,
 SCE_NET_ADHOCCTL_ADHOCTYPE_RESERVED = 1,
 SCE_NET_ADHOCCTL_ADHOCTYPE_SYSTEM = 2
} ScePspnetAdhocctlAdhocType;
typedef struct SceNetAdhocctlAdhocId {
 int type;
 SceChar8 data[9];
 SceUChar8 padding[3];
} SceNetAdhocctlAdhocId;
typedef struct SceNetAdhocctlGroupName {
 SceChar8 data[8];
} SceNetAdhocctlGroupName;
typedef struct SceNetAdhocctlNickname {
 SceChar8 data[128];
} SceNetAdhocctlNickname;
typedef struct SceNetAdhocctlPeerInfo {
 struct SceNetAdhocctlPeerInfo *next;
 struct SceNetAdhocctlNickname nickname;
 struct SceNetEtherAddr macAddr;
 SceUChar8 padding[6];
 SceUInt64 lastRecv;
} SceNetAdhocctlPeerInfo;
typedef struct SceNetAdhocctlBSSId {
 SceUChar8 data[6];
 SceUChar8 padding[2];
} SceNetAdhocctlBSSId;
typedef struct SceNetAdhocctlParameter {
 int channel;
 struct SceNetAdhocctlGroupName groupName;
 struct SceNetAdhocctlNickname nickname;
 struct SceNetAdhocctlBSSId bssid;
} SceNetAdhocctlParameter;
typedef enum SceNetCheckDialoErrorCode {
 SCE_NETCHECK_DIALOG_ERROR_PARAM = 0x80100C01,
 SCE_NETCHECK_DIALOG_ERROR_INVALID_MODE = 0x80100C02,
 SCE_NETCHECK_DIALOG_ERROR_LACK_OF_LIBHTTP_POOL_SIZE = 0x80100C03,
 SCE_NETCHECK_DIALOG_ERROR_LACK_OF_LIBSSL_POOL_SIZE = 0x80100C04,
 SCE_NETCHECK_DIALOG_ERROR_LATEST_PATCH_PKG_EXIST = 0x80100C05,
 SCE_NETCHECK_DIALOG_ERROR_SIGN_OUT = 0x80100C06,
 SCE_NETCHECK_DIALOG_ERROR_INVALID_PSPADHOC_PARAM = 0x80100C07,
 SCE_NETCHECK_DIALOG_ERROR_INVALID_TIMEOUT_PARAM = 0x80100C08,
 SCE_NETCHECK_DIALOG_ERROR_PSN_AGE_RESTRICTION = 0x80100C09
} SceNetCheckDialoErrorCode;
typedef enum SceNetCheckDialogMode {
 SCE_NETCHECK_DIALOG_MODE_INVALID = 0,
 SCE_NETCHECK_DIALOG_MODE_ADHOC_CONN = 1,
 SCE_NETCHECK_DIALOG_MODE_PSN = 2,
 SCE_NETCHECK_DIALOG_MODE_PSN_ONLINE = 3,
 SCE_NETCHECK_DIALOG_MODE_PS3_CONNECT = 4,
 SCE_NETCHECK_DIALOG_MODE_PSP_ADHOC_CONN = 5,
 SCE_NETCHECK_DIALOG_MODE_PSP_ADHOC_CREATE = 6,
 SCE_NETCHECK_DIALOG_MODE_PSP_ADHOC_JOIN = 7
} SceNetCheckDialogMode;
typedef enum SceNetCheckDialogPS3ConnectAction {
 SCE_NETCHECK_DIALOG_PS3_CONNECT_ACTION_ENTER = 0,
 SCE_NETCHECK_DIALOG_PS3_CONNECT_ACTION_LEAVE = 1
} SceNetCheckDialogPS3ConnectAction;
typedef struct SceNpCommunicationId {
 char data[9];
 char term;
 SceUChar8 num;
 char dummy;
} SceNpCommunicationId;
typedef struct SceNetCheckDialogPS3ConnectParam {
 SceInt32 action;
 char ssid[32 + 1];
 char wpaKey[64 + 1];
 char titleId[9 + 1];
} SceNetCheckDialogPS3ConnectParam;
typedef struct SceNetCheckDialogAgeRestriction {
 char countryCode[(2)];
 SceInt8 age;
 SceInt8 padding;
} SceNetCheckDialogAgeRestriction;
typedef struct SceNetCheckDialogParam {
 SceUInt32 sdkVersion;
 SceCommonDialogParam commonParam;
 SceInt32 mode;
 SceNpCommunicationId npCommunicationId;
 SceNetCheckDialogPS3ConnectParam *ps3ConnectParam;
 SceNetAdhocctlGroupName *groupName;
 SceUInt32 timeoutUs;
 SceInt8 defaultAgeRestriction;
 SceInt8 padding[3];
 SceInt32 ageRestrictionCount;
 const SceNetCheckDialogAgeRestriction *ageRestriction;
 SceUInt8 reserved[104];
} SceNetCheckDialogParam;
typedef struct SceNetCheckDialogResult {
 SceInt32 result;
 SceBool psnModeSucceeded;
 SceUInt8 reserved[124];
} SceNetCheckDialogResult;
typedef struct SceNetCheckDialogPS3ConnectInfo {
 SceNetInAddr inaddr;
 SceUInt8 nickname[128];
 SceUInt8 macAddress[6];
 SceUInt8 reserved[6];
} SceNetCheckDialogPS3ConnectInfo;
typedef struct _sceNpDrmPackageDecrypt {
 SceOff offset;
 unsigned int identifier;
} _sceNpDrmPackageDecrypt_opt;
typedef void *SceFontLibHandle;
typedef void *SceFontHandle;
typedef enum SceFontErrorCode {
 SCE_FONT_ERROR_OUT_OF_MEMORY = 0x80460001,
 SCE_FONT_ERROR_INVALID_LIBID = 0x80460002,
 SCE_FONT_ERROR_INVALID_PARAMETER = 0x80460003,
 SCE_FONT_ERROR_HANDLER_OPEN_FAILED = 0x80460005,
 SCE_FONT_ERROR_TOO_MANY_OPEN_FONTS = 0x80460009,
 SCE_FONT_ERROR_INVALID_FONT_DATA = 0x8046000A,
} SceFontErrorCode;
typedef struct SceSceFontNewLibParams {
 void *userData;
 unsigned int numFonts;
 void *cacheData;
 void *(*allocFunc)(void *, unsigned int);
 void (*freeFunc)(void *, void *);
 void *openFunc;
 void *closeFunc;
 void *readFunc;
 void *seekFunc;
 void *errorFunc;
 void *ioFinishFunc;
} SceFontNewLibParams;
typedef enum SceFontFamilyCode {
 SCE_FONT_FAMILY_DEFAULT = 0,
 SCE_FONT_FAMILY_SANS_SERIF = 1,
 SCE_FONT_FAMILY_SERIF = 2,
 SCE_FONT_FAMILY_ROUNDED = 3,
} SceFontFamilyCode;
typedef enum SceFontStyleCode {
 SCE_FONT_STYLE_DEFAULT = 0,
 SCE_FONT_STYLE_REGULAR = 1,
 SCE_FONT_STYLE_ITALIC = 2,
 SCE_FONT_STYLE_NARROW = 3,
 SCE_FONT_STYLE_NARROW_ITALIC = 4,
 SCE_FONT_STYLE_BOLD = 5,
 SCE_FONT_STYLE_BOLD_ITALIC = 6,
 SCE_FONT_STYLE_BLACK = 7,
 SCE_FONT_STYLE_BLACK_ITALIC = 8,
 SCE_FONT_STYLE_L = 101,
 SCE_FONT_STYLE_M = 102,
 SCE_FONT_STYLE_DB = 103,
 SCE_FONT_STYLE_B = 104,
 SCE_FONT_STYLE_EB = 105,
 SCE_FONT_STYLE_UB = 106,
} SceFontStyleCode;
typedef enum SceFontLanguageCode {
 SCE_FONT_LANGUAGE_DEFAULT = 0,
 SCE_FONT_LANGUAGE_JAPANESE = 1,
 SCE_FONT_LANGUAGE_LATIN = 2,
 SCE_FONT_LANGUAGE_KOREAN = 3,
 SCE_FONT_LANGUAGE_CHINESE = 4,
 SCE_FONT_LANGUAGE_CJK = 5,
} SceFontLanguageCode;
typedef enum SceFontPixelFormatCode {
 SCE_FONT_PIXELFORMAT_4 = 0,
 SCE_FONT_PIXELFORMAT_4_REV = 1,
 SCE_FONT_PIXELFORMAT_8 = 2,
 SCE_FONT_PIXELFORMAT_24 = 3,
 SCE_FONT_PIXELFORMAT_32 = 4,
} SceFontPixelFormatCode;
typedef struct SceFontImageRect {
 unsigned short width;
 unsigned short height;
} SceFontImageRect;
typedef struct SceFontGlyphImage {
 unsigned int pixelFormat;
 int xPos64;
 int yPos64;
 unsigned short bufWidth;
 unsigned short bufHeight;
 unsigned short bytesPerLine;
 unsigned short pad;
 unsigned int bufferPtr;
} SceFontGlyphImage;
typedef struct SceFontStyle {
 float fontH;
 float fontV;
 float fontHRes;
 float fontVRes;
 float fontWeight;
 unsigned short fontFamily;
 unsigned short fontStyle;
 unsigned short fontStyleSub;
 unsigned short fontLanguage;
 unsigned short fontRegion;
 unsigned short fontCountry;
 char fontName[64];
 char fontFileName[64];
 unsigned int fontAttributes;
 unsigned int fontExpire;
} SceFontStyle;
typedef struct SceFontCharInfo {
 unsigned int bitmapWidth;
 unsigned int bitmapHeight;
 unsigned int bitmapLeft;
 unsigned int bitmapTop;
 unsigned int sfp26Width;
 unsigned int sfp26Height;
 int sfp26Ascender;
 int sfp26Descender;
 int sfp26BearingHX;
 int sfp26BearingHY;
 int sfp26BearingVX;
 int sfp26BearingVY;
 int sfp26AdvanceH;
 int sfp26AdvanceV;
 short shadowFlags;
 short shadowId;
} SceFontCharInfo;
typedef struct SceFontInfo {
 unsigned int maxGlyphWidthI;
 unsigned int maxGlyphHeightI;
 unsigned int maxGlyphAscenderI;
 unsigned int maxGlyphDescenderI;
 unsigned int maxGlyphLeftXI;
 unsigned int maxGlyphBaseYI;
 unsigned int minGlyphCenterXI;
 unsigned int maxGlyphTopYI;
 unsigned int maxGlyphAdvanceXI;
 unsigned int maxGlyphAdvanceYI;
 float maxGlyphWidthF;
 float maxGlyphHeightF;
 float maxGlyphAscenderF;
 float maxGlyphDescenderF;
 float maxGlyphLeftXF;
 float maxGlyphBaseYF;
 float minGlyphCenterXF;
 float maxGlyphTopYF;
 float maxGlyphAdvanceXF;
 float maxGlyphAdvanceYF;
 short maxGlyphWidth;
 short maxGlyphHeight;
 unsigned int charMapLength;
 unsigned int shadowMapLength;
 SceFontStyle fontStyle;
 uint8_t BPP;
 uint8_t pad[3];
} SceFontInfo;
typedef struct PhotoExportParam {
 int version;
 const SceWChar32 *photoTitle;
 const SceWChar32 *gameTitle;
 const SceWChar32 *gameComment;
 int reserved[8];
} PhotoExportParam;
typedef enum ScePowerErrorCode {
 SCE_POWER_ERROR_INVALID_VALUE = 0x802B0000,
 SCE_POWER_ERROR_ALREADY_REGISTERED = 0x802B0001,
 SCE_POWER_ERROR_CALLBACK_NOT_REGISTERED = 0x802B0002,
 SCE_POWER_ERROR_CANT_SUSPEND = 0x802B0003,
 SCE_POWER_ERROR_NO_BATTERY = 0x802B0100,
 SCE_POWER_ERROR_DETECTING = 0x802B0101
} ScePowerErrorCode;
typedef enum ScePowerCallbackType {
 SCE_POWER_CB_POWER_SWITCH = 0x80000000,
 SCE_POWER_CB_UNK_1 = 0x00600000,
 SCE_POWER_CB_UNK_2 = 0x00400000,
 SCE_POWER_CB_RESUME_COMPLETE = 0x00040000,
 SCE_POWER_CB_RESUMING = 0x00020000,
 SCE_POWER_CB_SUSPENDING = 0x00010000,
 SCE_POWER_CB_AC_POWER = 0x00001000,
 SCE_POWER_CB_LOWBATTERY = 0x00000100,
 SCE_POWER_CB_BATTERY_EXIST = 0x00000080
} ScePowerCallbackType;
typedef enum ScePowerConfigurationMode {
 SCE_POWER_CONFIGURATION_MODE_A = 0x00000080U,
 SCE_POWER_CONFIGURATION_MODE_B = 0x00000800U,
 SCE_POWER_CONFIGURATION_MODE_C = 0x00010880U,
} ScePowerConfigurationMode;
typedef void (*ScePowerCallback)(int notifyId, int notifyCount, int powerInfo);
typedef struct ScePromoterUtilityLAUpdate {
 char titleid[12];
 char path[128];
} ScePromoterUtilityLAUpdate;
typedef enum ScePspnetAdhocErrorCode {
 SCE_ERROR_NET_ADHOC_INVALID_SOCKET_ID = 0x80410701,
 SCE_ERROR_NET_ADHOC_INVALID_ADDR = 0x80410702,
 SCE_ERROR_NET_ADHOC_INVALID_PORT = 0x80410703,
 SCE_ERROR_NET_ADHOC_INVALID_BUFLEN = 0x80410704,
 SCE_ERROR_NET_ADHOC_INVALID_DATALEN = 0x80410705,
 SCE_ERROR_NET_ADHOC_NOT_ENOUGH_SPACE = 0x80410706,
 SCE_ERROR_NET_ADHOC_SOCKET_DELETED = 0x80410707,
 SCE_ERROR_NET_ADHOC_SOCKET_ALERTED = 0x80410708,
 SCE_ERROR_NET_ADHOC_WOULD_BLOCK = 0x80410709,
 SCE_ERROR_NET_ADHOC_PORT_IN_USE = 0x8041070A,
 SCE_ERROR_NET_ADHOC_NOT_CONNECTED = 0x8041070B,
 SCE_ERROR_NET_ADHOC_DISCONNECTED = 0x8041070C,
 SCE_ERROR_NET_ADHOC_NOT_OPENED = 0x8041070D,
 SCE_ERROR_NET_ADHOC_NOT_LISTENED = 0x8041070E,
 SCE_ERROR_NET_ADHOC_SOCKET_ID_NOT_AVAIL = 0x8041070F,
 SCE_ERROR_NET_ADHOC_PORT_NOT_AVAIL = 0x80410710,
 SCE_ERROR_NET_ADHOC_INVALID_ARG = 0x80410711,
 SCE_ERROR_NET_ADHOC_NOT_INITIALIZED = 0x80410712,
 SCE_ERROR_NET_ADHOC_ALREADY_INITIALIZED = 0x80410713,
 SCE_ERROR_NET_ADHOC_BUSY = 0x80410714,
 SCE_ERROR_NET_ADHOC_TIMEOUT = 0x80410715,
 SCE_ERROR_NET_ADHOC_NO_ENTRY = 0x80410716,
 SCE_ERROR_NET_ADHOC_EXCEPTION_EVENT = 0x80410717,
 SCE_ERROR_NET_ADHOC_CONNECTION_REFUSED = 0x80410718,
 SCE_ERROR_NET_ADHOC_THREAD_ABORTED = 0x80410719,
 SCE_ERROR_NET_ADHOC_ALREADY_CREATED = 0x8041071A,
 SCE_ERROR_NET_ADHOC_NOT_IN_GAMEMODE = 0x8041071B,
 SCE_ERROR_NET_ADHOC_NOT_CREATED = 0x8041071C,
 SCE_ERROR_NET_ADHOC_INVALID_ALIGNMENT = 0x8041071D
} ScePspnetAdhocErrorCode;
typedef enum ScePspnetAdhocEvent {
 SCE_NET_ADHOC_EV_SEND = 0x0001,
 SCE_NET_ADHOC_EV_RECV = 0x0002,
 SCE_NET_ADHOC_EV_CONNECT = 0x0004,
 SCE_NET_ADHOC_EV_ACCEPT = 0x0008,
 SCE_NET_ADHOC_EV_FLUSH = 0x0010,
 SCE_NET_ADHOC_EV_INVALID = 0x0100,
 SCE_NET_ADHOC_EV_DELETE = 0x0200,
 SCE_NET_ADHOC_EV_ALERT = 0x0400,
 SCE_NET_ADHOC_EV_DISCONNECT = 0x0800
} ScePspnetAdhocEvent;
typedef enum ScePspnetAdhocPtpState {
 SCE_NET_ADHOC_PTP_STATE_CLOSED = 0,
 SCE_NET_ADHOC_PTP_STATE_LISTEN = 1,
 SCE_NET_ADHOC_PTP_STATE_SYN_SENT = 2,
 SCE_NET_ADHOC_PTP_STATE_SYN_RCVD = 3,
 SCE_NET_ADHOC_PTP_STATE_ESTABLISHED = 4
} ScePspnetAdhocPtpState;
typedef enum ScePspnetAdhocFlags {
 SCE_NET_ADHOC_F_NONBLOCK = 0x0001,
 SCE_NET_ADHOC_F_ALERTSEND = 0x0010,
 SCE_NET_ADHOC_F_ALERTRECV = 0x0020,
 SCE_NET_ADHOC_F_ALERTPOLL = 0x0040,
 SCE_NET_ADHOC_F_ALERTCONNECT = 0x0080,
 SCE_NET_ADHOC_F_ALERTACCEPT = 0x0100,
 SCE_NET_ADHOC_F_ALERTFLUSH = 0x0200
} ScePspnetAdhocFlags;
typedef struct ScePssCryptoHandle {
  uint32_t unk0;
  uint32_t unk1;
  SceSize size;
  uint32_t unk3;
} ScePssCryptoHandle;
typedef enum ScePvfErrorCode {
 SCE_PVF_ERROR_NOMEMORY = 0x80460001,
 SCE_PVF_ERROR_LIBID = 0x80460002,
 SCE_PVF_ERROR_ARG = 0x80460003,
 SCE_PVF_ERROR_NOFILE = 0x80460004,
 SCE_PVF_ERROR_FILEOPEN = 0x80460005,
 SCE_PVF_ERROR_FILECLOSE = 0x80460006,
 SCE_PVF_ERROR_FILEREAD = 0x80460007,
 SCE_PVF_ERROR_FILESEEK = 0x80460008,
 SCE_PVF_ERROR_TOOMANYOPENED = 0x80460009,
 SCE_PVF_ERROR_ILLEGALVERSION = 0x8046000A,
 SCE_PVF_ERROR_DATAINCONSISTENT = 0x8046000B,
 SCE_PVF_ERROR_EXPIRED = 0x8046000C,
 SCE_PVF_ERROR_NOSUPPORT = 0x8046000E,
 SCE_PVF_ERROR_NOGLYPH = 0x8046000F,
 SCE_PVF_ERROR_UNKNOWN = 0x8046FFFF
} ScePvfErrorCode;
typedef enum ScePvfFamilyCode {
 SCE_PVF_DEFAULT_FAMILY_CODE = 0,
 SCE_PVF_FAMILY_SANSERIF = 1,
 SCE_PVF_FAMILY_SERIF = 2,
 SCE_PVF_FAMILY_ROUNDED = 3
} ScePvfFamilyCode;
typedef enum ScePvfStyleCode {
 SCE_PVF_DEFAULT_STYLE_CODE = 0,
 SCE_PVF_STYLE_REGULAR = 1,
 SCE_PVF_STYLE_OBLIQUE = 2,
 SCE_PVF_STYLE_NARROW = 3,
 SCE_PVF_STYLE_NARROW_OBLIQUE = 4,
 SCE_PVF_STYLE_BOLD = 5,
 SCE_PVF_STYLE_BOLD_OBLIQUE = 6,
 SCE_PVF_STYLE_BLACK = 7,
 SCE_PVF_STYLE_BLACK_OBLIQUE = 8,
 SCE_PVF_STYLE_L = 101,
 SCE_PVF_STYLE_M = 102,
 SCE_PVF_STYLE_DB = 103,
 SCE_PVF_STYLE_B = 104,
 SCE_PVF_STYLE_EB = 105,
 SCE_PVF_STYLE_UB = 106
} ScePvfStyleCode;
typedef enum ScePvfImageByfferPixelFormatType {
 SCE_PVF_USERIMAGE_DIRECT4_L = 0,
 SCE_PVF_USERIMAGE_DIRECT8 = 2
} ScePvfImageByfferPixelFormatType;
typedef enum ScePvfLanguageCode {
 SCE_PVF_DEFAULT_LANGUAGE_CODE = 0,
 SCE_PVF_LANGUAGE_J = 1,
 SCE_PVF_LANGUAGE_LATIN = 2,
 SCE_PVF_LANGUAGE_K = 3,
 SCE_PVF_LANGUAGE_C = 4,
 SCE_PVF_LANGUAGE_CJK = 5
} ScePvfLanguageCode;
typedef enum ScePvfRegionCode {
 SCE_PVF_GENERIC_REGION_CODE = 0,
 SCE_PVF_REGION_001 = 1,
 SCE_PVF_REGION_002 = 2,
 SCE_PVF_REGION_003 = 3,
 SCE_PVF_REGION_004 = 4,
 SCE_PVF_REGION_005 = 5,
 SCE_PVF_REGION_006 = 6,
 SCE_PVF_REGION_007 = 7
} ScePvfRegionCode;
typedef enum ScePvfFontVendorCountryCode {
 SCE_PVF_GENERIC_COUNTRY_CODE = 0,
 SCE_PVF_COUNTRY_JAPAN = 1,
 SCE_PVF_COUNTRY_USA = 2,
 SCE_PVF_COUNTRY_KOREA = 3
} ScePvfFontVendorCountryCode;
typedef enum ScePvfBoolValue {
 SCE_PVF_FALSE = 0,
 SCE_PVF_TRUE = 1
} ScePvfBoolValue;
typedef enum ScePvfSubstyle {
 SCE_PVF_SUBSTYLE_VERTICALLAYOUT = 0x0001,
 SCE_PVF_SUBSTYLE_PSEUDO_BOLD = 0x0002,
 SCE_PVF_SUBSTYLE_PSEUDO_SLANT = 0x0004
} ScePvfSubstyle;
typedef enum ScePvfDataAccessMode {
 SCE_PVF_FILEBASEDSTREAM = 0,
 SCE_PVF_MEMORYBASEDSTREAM = 1
} ScePvfDataAccessMode;
typedef unsigned int ScePvfU32;
typedef signed int ScePvfS32;
typedef unsigned short ScePvfU16;
typedef unsigned char ScePvfU8;
typedef float ScePvfFloat32;
typedef ScePvfU32 ScePvfBool;
typedef void *ScePvfLibId;
typedef void *ScePvfFontId;
typedef void *ScePvfPointer;
typedef void *ScePvfHandle;
typedef ScePvfS32 ScePvfError;
typedef ScePvfS32 ScePvfInt;
typedef ScePvfU16 ScePvfCharCode;
typedef ScePvfS32 ScePvfFontIndex;
typedef struct ScePvfIrect {
 ScePvfU16 width;
 ScePvfU16 height;
} ScePvfIrect;
typedef struct ScePvfRect {
 ScePvfU32 width;
 ScePvfU32 height;
} ScePvfRect;
typedef ScePvfS32 (*ScePvfFontCacheLockFunc)(ScePvfPointer cacheInstance);
typedef ScePvfS32 (*ScePvfFontChcheUnlockFunc)(ScePvfPointer cacheInstance);
typedef ScePvfPointer (*ScePvfFontChcheFindFunc)(ScePvfPointer chcheInstance,
 ScePvfU32 hashValue, ScePvfPointer key, ScePvfBool *result);
typedef ScePvfS32 (*ScePvfFontChcheWriteKeyValueToCacheFunc)(ScePvfPointer cacheInstance,
 ScePvfPointer chcheSlot, ScePvfPointer key);
typedef ScePvfS32 (*ScePvfFontChcheWriteToCacheFunc)(ScePvfPointer cacheInstance,
 ScePvfPointer cacheSlot, ScePvfPointer data0, ScePvfInt size);
typedef ScePvfS32 (*ScePvfFontChcheReadFromCacheFunc)(ScePvfPointer cacheInstance,
 ScePvfPointer cacheSlot, ScePvfPointer data0);
typedef struct ScePvfCacheSystemInterface {
 ScePvfPointer *cacheInstance;
 ScePvfFontCacheLockFunc lockFunc;
 ScePvfFontChcheUnlockFunc unlockFunc;
 ScePvfFontChcheFindFunc findFunc;
 ScePvfFontChcheWriteKeyValueToCacheFunc writeKeyValueToCacheFunc;
 ScePvfFontChcheWriteToCacheFunc write0ToCacheFunc;
 ScePvfFontChcheWriteToCacheFunc write1ToCacheFunc;
 ScePvfFontChcheReadFromCacheFunc read0FromCacheFunc;
 ScePvfFontChcheReadFromCacheFunc read1FromCacheFunc;
} ScePvfCacheSystemInterface;
typedef ScePvfPointer (*ScePvfAllocFunc)(ScePvfPointer userData, ScePvfU32 size);
typedef ScePvfPointer (*ScePvfReallocFunc)(ScePvfPointer userData, ScePvfPointer old_ptr,
 ScePvfU32 size);
typedef void (*ScePvfFreeFunc)(ScePvfPointer userData, ScePvfPointer ptr);
typedef struct ScePvfInitRec {
 ScePvfPointer userData;
 ScePvfU32 maxNumFonts;
 ScePvfCacheSystemInterface *cache;
 ScePvfPointer reserved;
 ScePvfAllocFunc allocFunc;
 ScePvfReallocFunc reallocFunc;
 ScePvfFreeFunc freeFunc;
} ScePvfInitRec;
typedef struct ScePvfFontStyleInfo {
 ScePvfFloat32 weight;
 ScePvfU16 familyCode;
 ScePvfU16 style;
 ScePvfU16 subStyle;
 ScePvfU16 languageCode;
 ScePvfU16 regionCode;
 ScePvfU16 countryCode;
 ScePvfU8 fontName [64];
 ScePvfU8 styleName [64];
 ScePvfU8 fileName [64];
 ScePvfU32 extraAttributes;
 ScePvfU32 expireDate;
} ScePvfFontStyleInfo;
typedef struct ScePvfUserImageBufferRec {
 ScePvfU32 pixelFormat;
 ScePvfS32 xPos64;
 ScePvfS32 yPos64;
 ScePvfIrect rect;
 ScePvfU16 bytesPerLine;
 ScePvfU16 reserved;
 ScePvfU8 *buffer;
} ScePvfUserImageBufferRec;
typedef struct ScePvfIGlyphMetricsInfo {
 ScePvfU32 width64;
 ScePvfU32 height64;
 ScePvfS32 ascender64;
 ScePvfS32 descender64;
 ScePvfS32 horizontalBearingX64;
 ScePvfS32 horizontalBearingY64;
 ScePvfS32 verticalBearingX64;
 ScePvfS32 verticalBearingY64;
 ScePvfS32 horizontalAdvance64;
 ScePvfS32 verticalAdvance64;
} ScePvfIGlyphMetricsInfo;
typedef struct ScePvfCharInfo {
 ScePvfU32 bitmapWidth;
 ScePvfU32 bitmapHeight;
 ScePvfU32 bitmapPitch;
 ScePvfS32 bitmapLeft;
 ScePvfS32 bitmapTop;
 ScePvfIGlyphMetricsInfo glyphMetrics;
 ScePvfU8 reserved0 [2];
 ScePvfU16 reserved1;
} ScePvfCharInfo;
typedef struct ScePvfFGlyphMetricsInfo {
 ScePvfFloat32 width;
 ScePvfFloat32 height;
 ScePvfFloat32 ascender;
 ScePvfFloat32 descender;
 ScePvfFloat32 horizontalBearingX;
 ScePvfFloat32 horizontalBearingY;
 ScePvfFloat32 verticalBearingX;
 ScePvfFloat32 verticalBearingY;
 ScePvfFloat32 horizontalAdvance;
 ScePvfFloat32 verticalAdvance;
} ScePvfFGlyphMetricsInfo;
typedef struct ScePvfFontInfo {
 ScePvfIGlyphMetricsInfo maxIGlyphMetrics;
 ScePvfFGlyphMetricsInfo maxFGlyphMetrics;
 ScePvfU32 numChars;
 ScePvfFontStyleInfo fontStyleInfo;
 ScePvfU8 reserved [4];
} ScePvfFontInfo;
typedef struct ScePvfIKerningInfo {
 ScePvfS32 xOffset64;
 ScePvfS32 yOffset64;
} ScePvfIKerningInfo;
typedef struct ScePvfFKerningInfo {
 ScePvfFloat32 xOffset;
 ScePvfFloat32 yOffset;
} ScePvfFKerningInfo;
typedef struct ScePvfKerningInfo {
 ScePvfIKerningInfo iKerningInfo;
 ScePvfFKerningInfo fKerningInfo;
} ScePvfKerningInfo;
typedef struct ScePvfCacheKey {
 int keyValue0;
 int keyValue1;
 float keyValue2;
 float keyValue3;
 float keyValue4;
 float keyValue5;
 float keyValue6;
 float keyValue7;
 float keyValue8;
} ScePvfCacheKey;
typedef enum SceScreenshotErrorCode {
 SCE_SCREENSHOT_ERROR_INVALID_ARGUMENT = 0x80102F01,
 SCE_SCREENSHOT_ERROR_NO_MEMORY = 0x80102F02,
 SCE_SCREENSHOT_ERROR_FILE_NOT_FOUND = 0x80102F03,
 SCE_SCREENSHOT_ERROR_NOT_SUPPORTED_FORMAT = 0x80102F04,
 SCE_SCREENSHOT_ERROR_MEDIA_FULL = 0x80102F05,
 SCE_SCREENSHOT_ERROR_INTERNAL = 0x80102F06
} SceScreenshotErrorCode;
typedef struct SceScreenShotParam {
 const SceWChar32 *photoTitle;
 const SceWChar32 *gameTitle;
 const SceWChar32 *gameComment;
 void *reserved;
} SceScreenShotParam;
typedef enum SceShellUtilLockType {
 SCE_SHELL_UTIL_LOCK_TYPE_PS_BTN = 0x1,
 SCE_SHELL_UTIL_LOCK_TYPE_QUICK_MENU = 0x2,
 SCE_SHELL_UTIL_LOCK_TYPE_POWEROFF_MENU = 0x4,
 SCE_SHELL_UTIL_LOCK_TYPE_UNK8 = 0x8,
 SCE_SHELL_UTIL_LOCK_TYPE_USB_CONNECTION = 0x10,
 SCE_SHELL_UTIL_LOCK_TYPE_MC_INSERTED = 0x20,
 SCE_SHELL_UTIL_LOCK_TYPE_MC_REMOVED = 0x40,
 SCE_SHELL_UTIL_LOCK_TYPE_UNK80 = 0x80,
 SCE_SHELL_UTIL_LOCK_TYPE_UNK100 = 0x100,
 SCE_SHELL_UTIL_LOCK_TYPE_UNK200 = 0x200,
 SCE_SHELL_UTIL_LOCK_TYPE_MUSIC_PLAYER = 0x400,
 SCE_SHELL_UTIL_LOCK_TYPE_PS_BTN_2 = 0x800
} SceShellUtilLockType;
typedef enum SceShellUtilLockMode {
 SCE_SHELL_UTIL_LOCK_MODE_LOCK = 1,
 SCE_SHELL_UTIL_LOCK_MODE_UNLOCK = 2
} SceShellUtilLockMode;
typedef void (SceShellUtilEventHandler)(int result, SceShellUtilLockMode mode, SceShellUtilLockType type, void *userData);
typedef enum SceShutterSoundErrorCode {
 SCE_SHUTTER_SOUND_ERROR_INVALID_ARGUMENT = 0x80105201,
 SCE_SHUTTER_SOUND_ERROR_INTERNAL = 0x80105202,
 SCE_SHUTTER_SOUND_ERROR_FATAL = 0x80105203
} SceShutterSoundErrorCode;
typedef enum SceShutterSoundType {
 SCE_SHUTTER_SOUND_TYPE_SAVE_IMAGE = 0,
 SCE_SHUTTER_SOUND_TYPE_SAVE_VIDEO_START = 1,
 SCE_SHUTTER_SOUND_TYPE_SAVE_VIDEO_END = 2
} SceShutterSoundType;
typedef struct{
 void *(*xMalloc)(int);
 void *(*xRealloc)(void*,int);
 void (*xFree)(void*);
} SceSqliteMallocMethods;
typedef enum SceSysmoduleErrorCode {
 SCE_SYSMODULE_LOADED = 0,
 SCE_SYSMODULE_ERROR_INVALID_VALUE = 0x805A1000,
 SCE_SYSMODULE_ERROR_UNLOADED = 0x805A1001,
 SCE_SYSMODULE_ERROR_FATAL = 0x805A10FF
} SceSysmoduleErrorCode;
typedef enum SceSysmoduleModuleId {
 SCE_SYSMODULE_INVALID = 0x0000,
 SCE_SYSMODULE_NET = 0x0001,
 SCE_SYSMODULE_HTTP = 0x0002,
 SCE_SYSMODULE_SSL = 0x0003,
 SCE_SYSMODULE_HTTPS = 0x0004,
 SCE_SYSMODULE_PERF = 0x0005,
 SCE_SYSMODULE_FIBER = 0x0006,
 SCE_SYSMODULE_ULT = 0x0007,
 SCE_SYSMODULE_DBG = 0x0008,
 SCE_SYSMODULE_RAZOR_CAPTURE = 0x0009,
 SCE_SYSMODULE_RAZOR_HUD = 0x000A,
 SCE_SYSMODULE_NGS = 0x000B,
 SCE_SYSMODULE_SULPHA = 0x000C,
 SCE_SYSMODULE_SAS = 0x000D,
 SCE_SYSMODULE_PGF = 0x000E,
 SCE_SYSMODULE_APPUTIL = 0x000F,
 SCE_SYSMODULE_FIOS2 = 0x0010,
 SCE_SYSMODULE_IME = 0x0011,
 SCE_SYSMODULE_NP_BASIC = 0x0012,
 SCE_SYSMODULE_SYSTEM_GESTURE = 0x0013,
 SCE_SYSMODULE_LOCATION = 0x0014,
 SCE_SYSMODULE_NP = 0x0015,
 SCE_SYSMODULE_PHOTO_EXPORT = 0x0016,
 SCE_SYSMODULE_XML = 0x0017,
 SCE_SYSMODULE_NP_COMMERCE2 = 0x0018,
 SCE_SYSMODULE_NP_UTILITY = 0x0019,
 SCE_SYSMODULE_VOICE = 0x001A,
 SCE_SYSMODULE_VOICEQOS = 0x001B,
 SCE_SYSMODULE_NP_MATCHING2 = 0x001C,
 SCE_SYSMODULE_SCREEN_SHOT = 0x001D,
 SCE_SYSMODULE_NP_SCORE_RANKING = 0x001E,
 SCE_SYSMODULE_SQLITE = 0x001F,
 SCE_SYSMODULE_TRIGGER_UTIL = 0x0020,
 SCE_SYSMODULE_RUDP = 0x0021,
 SCE_SYSMODULE_CODECENGINE_PERF = 0x0022,
 SCE_SYSMODULE_LIVEAREA = 0x0023,
 SCE_SYSMODULE_NP_ACTIVITY = 0x0024,
 SCE_SYSMODULE_NP_TROPHY = 0x0025,
 SCE_SYSMODULE_NP_MESSAGE = 0x0026,
 SCE_SYSMODULE_SHUTTER_SOUND = 0x0027,
 SCE_SYSMODULE_CLIPBOARD = 0x0028,
 SCE_SYSMODULE_NP_PARTY = 0x0029,
 SCE_SYSMODULE_NET_ADHOC_MATCHING = 0x002A,
 SCE_SYSMODULE_NEAR_UTIL = 0x002B,
 SCE_SYSMODULE_NP_TUS = 0x002C,
 SCE_SYSMODULE_MP4 = 0x002D,
 SCE_SYSMODULE_AACENC = 0x002E,
 SCE_SYSMODULE_HANDWRITING = 0x002F,
 SCE_SYSMODULE_ATRAC = 0x0030,
 SCE_SYSMODULE_NP_SNS_FACEBOOK = 0x0031,
 SCE_SYSMODULE_VIDEO_EXPORT = 0x0032,
 SCE_SYSMODULE_NOTIFICATION_UTIL = 0x0033,
 SCE_SYSMODULE_BG_APP_UTIL = 0x0034,
 SCE_SYSMODULE_INCOMING_DIALOG = 0x0035,
 SCE_SYSMODULE_IPMI = 0x0036,
 SCE_SYSMODULE_AUDIOCODEC = 0x0037,
 SCE_SYSMODULE_FACE = 0x0038,
 SCE_SYSMODULE_SMART = 0x0039,
 SCE_SYSMODULE_MARLIN = 0x003A,
 SCE_SYSMODULE_MARLIN_DOWNLOADER = 0x003B,
 SCE_SYSMODULE_MARLIN_APP_LIB = 0x003C,
 SCE_SYSMODULE_TELEPHONY_UTIL = 0x003D,
 SCE_SYSMODULE_PSPNET_ADHOC = 0x0043,
 SCE_SYSMODULE_DTCP_IP = 0x0044,
 SCE_SYSMODULE_VIDEO_SEARCH_EMPR = 0x0045,
 SCE_SYSMODULE_NP_SIGNALING = 0x0046,
 SCE_SYSMODULE_BEISOBMF = 0x0047,
 SCE_SYSMODULE_BEMP2SYS = 0x0048,
 SCE_SYSMODULE_MUSIC_EXPORT = 0x0049,
 SCE_SYSMODULE_NEAR_DIALOG_UTIL = 0x004A,
 SCE_SYSMODULE_LOCATION_EXTENSION = 0x004B,
 SCE_SYSMODULE_AVPLAYER = 0x004C,
 SCE_SYSMODULE_GAME_UPDATE = 0x004D,
 SCE_SYSMODULE_MAIL_API = 0x004E,
 SCE_SYSMODULE_TELEPORT_CLIENT = 0x004F,
 SCE_SYSMODULE_TELEPORT_SERVER = 0x0050,
 SCE_SYSMODULE_MP4_RECORDER = 0x0051,
 SCE_SYSMODULE_APPUTIL_EXT = 0x0052,
 SCE_SYSMODULE_NP_WEBAPI = 0x0053,
 SCE_SYSMODULE_AVCDEC = 0x0054,
 SCE_SYSMODULE_JSON = 0x0055
} SceSysmoduleModuleId;
typedef enum SceSysmoduleInternalModuleId {
 SCE_SYSMODULE_INTERNAL_JPEG_ENC_ARM = 0x80000001,
 SCE_SYSMODULE_INTERNAL_AUDIOCODEC = 0x80000002,
 SCE_SYSMODULE_INTERNAL_JPEG_ARM = 0x80000003,
 SCE_SYSMODULE_INTERNAL_G729 = 0x80000004,
 SCE_SYSMODULE_INTERNAL_BXCE = 0x80000005,
 SCE_SYSMODULE_INTERNAL_INI_FILE_PROCESSOR = 0x80000006,
 SCE_SYSMODULE_INTERNAL_NP_ACTIVITY_NET = 0x80000007,
 SCE_SYSMODULE_INTERNAL_PAF = 0x80000008,
 SCE_SYSMODULE_INTERNAL_SQLITE_VSH = 0x80000009,
 SCE_SYSMODULE_INTERNAL_DBUTIL = 0x8000000A,
 SCE_SYSMODULE_INTERNAL_ACTIVITY_DB = 0x8000000B,
 SCE_SYSMODULE_INTERNAL_COMMON_GUI_DIALOG = 0x8000000C,
 SCE_SYSMODULE_INTERNAL_STORE_CHECKOUT = 0x8000000D,
 SCE_SYSMODULE_INTERNAL_IME_DIALOG = 0x8000000E,
 SCE_SYSMODULE_INTERNAL_PHOTO_IMPORT_DIALOG = 0x8000000F,
 SCE_SYSMODULE_INTERNAL_PHOTO_REVIEW_DIALOG = 0x80000010,
 SCE_SYSMODULE_INTERNAL_CHECKOUT_DIALOG = 0x80000011,
 SCE_SYSMODULE_INTERNAL_COMMON_DIALOG_MAIN = 0x80000012,
 SCE_SYSMODULE_INTERNAL_MSG_DIALOG = 0x80000013,
 SCE_SYSMODULE_INTERNAL_NET_CHECK_DIALOG = 0x80000014,
 SCE_SYSMODULE_INTERNAL_SAVEDATA_DIALOG = 0x80000015,
 SCE_SYSMODULE_INTERNAL_NP_MESSAGE_DIALOG = 0x80000016,
 SCE_SYSMODULE_INTERNAL_TROPHY_SETUP_DIALOG = 0x80000017,
 SCE_SYSMODULE_INTERNAL_FRIEND_LIST_DIALOG = 0x80000018,
 SCE_SYSMODULE_INTERNAL_NEAR_PROFILE = 0x8000001A,
 SCE_SYSMODULE_INTERNAL_NP_FRIEND_PRIVACY_LEVEL = 0x8000001B,
 SCE_SYSMODULE_INTERNAL_NP_COMMERCE2 = 0x8000001D,
 SCE_SYSMODULE_INTERNAL_NP_KDC = 0x8000001E,
 SCE_SYSMODULE_INTERNAL_MUSIC_EXPORT = 0x8000001F,
 SCE_SYSMODULE_INTERNAL_VIDEO_EXPORT = 0x80000020,
 SCE_SYSMODULE_INTERNAL_NP_MESSAGE_DIALOG_IMPL = 0x80000021,
 SCE_SYSMODULE_INTERNAL_NP_MESSAGE_CONTACTS = 0x80000022,
 SCE_SYSMODULE_INTERNAL_DB_RECOVERY_UTILITY = 0x80000023,
 SCE_SYSMODULE_INTERNAL_PROMOTER_UTIL = 0x80000024,
 SCE_SYSMODULE_INTERNAL_PARTY_MEMBER_LIST = 0x80000026,
 SCE_SYSMODULE_INTERNAL_ULT = 0x80000025,
 SCE_SYSMODULE_INTERNAL_DRM_PSM_KDC = 0x80000027,
 SCE_SYSMODULE_INTERNAL_LOCATION_INTERNAL = 0x80000028,
 SCE_SYSMODULE_INTERNAL_LOCATION_FACTORY = 0x80000029
} SceSysmoduleInternalModuleId;
typedef enum SceTouchErrorCode {
 SCE_TOUCH_ERROR_INVALID_ARG = 0x80350001,
 SCE_TOUCH_ERROR_PRIV_REQUIRED = 0x80350002,
 SCE_TOUCH_ERROR_FATAL = 0x803500FF
} SceTouchErrorCode;
typedef enum SceTouchPortType {
 SCE_TOUCH_PORT_FRONT = 0,
 SCE_TOUCH_PORT_BACK = 1,
 SCE_TOUCH_PORT_MAX_NUM = 2
} SceTouchPortType;
typedef enum SceTouchSamplingState {
 SCE_TOUCH_SAMPLING_STATE_STOP = 0,
 SCE_TOUCH_SAMPLING_STATE_START = 1
} SceTouchSamplingState;
typedef enum SceTouchReportInfo {
 SCE_TOUCH_REPORT_INFO_HIDE_UPPER_LAYER = 0x0001
} SceTouchReportInfo;
typedef struct SceTouchPanelInfo {
 SceInt16 minAaX;
 SceInt16 minAaY;
 SceInt16 maxAaX;
 SceInt16 maxAaY;
 SceInt16 minDispX;
 SceInt16 minDispY;
 SceInt16 maxDispX;
 SceInt16 maxDispY;
 SceUInt8 minForce;
 SceUInt8 maxForce;
 SceUInt8 reserved[30];
} SceTouchPanelInfo;
typedef struct SceTouchReport {
 SceUInt8 id;
 SceUInt8 force;
 SceInt16 x;
 SceInt16 y;
 SceUInt8 reserved[8];
 SceUInt16 info;
} SceTouchReport;
typedef struct SceTouchData {
 SceUInt64 timeStamp;
 SceUInt32 status;
 SceUInt32 reportNum;
 SceTouchReport report[8];
} SceTouchData;
typedef enum SceUdcdStatus {
 SCE_UDCD_STATUS_CONNECTION_NEW = 0x0001,
 SCE_UDCD_STATUS_CONNECTION_ESTABLISHED = 0x0002,
 SCE_UDCD_STATUS_CONNECTION_SUSPENDED = 0x0004,
 SCE_UDCD_STATUS_CABLE_DISCONNECTED = 0x0010,
 SCE_UDCD_STATUS_CABLE_CONNECTED = 0x0020,
 SCE_UDCD_STATUS_DEACTIVATED = 0x0100,
 SCE_UDCD_STATUS_ACTIVATED = 0x0200,
 SCE_UDCD_STATUS_IS_CHARGING = 0x0400,
 SCE_UDCD_STATUS_USE_USB_CHARGING = 0x0800,
 SCE_UDCD_STATUS_UNKNOWN_1000 = 0x1000,
 SCE_UDCD_STATUS_UNKNOWN_2000 = 0x2000
} SceUdcdStatus;
typedef enum SceUdcdStatusDriver {
 SCE_UDCD_STATUS_DRIVER_STARTED = 0x01,
 SCE_UDCD_STATUS_DRIVER_REGISTERED = 0x02
} SceUdcdStatusDriver;
typedef struct {
 uint8_t info[64];
} SceUdcdDeviceInfo;
typedef struct SceUdcdWaitParam {
 int unk_00;
 int status;
 int unk_08;
 int unk_0C;
 int unk_10;
 const char *driverName;
} SceUdcdWaitParam;
typedef struct SceUdcdDeviceState {
 int unk_00;
 int state;
 int cable;
 int connection;
 int use_usb_charging;
 int unk_14;
} SceUdcdDeviceState;
typedef SceUInt64 SceKernelSysClock;
typedef int (*SceKernelThreadEntry)(SceSize args, void *argp);
typedef struct SceKernelThreadOptParam {
 SceSize size;
 SceUInt32 attr;
} SceKernelThreadOptParam;
typedef struct SceKernelThreadInfo {
 SceSize size;
 SceUID processId;
 char name[32];
 SceUInt attr;
 int status;
 SceKernelThreadEntry entry;
 void *stack;
 int stackSize;
 int initPriority;
 int currentPriority;
 int initCpuAffinityMask;
 int currentCpuAffinityMask;
 int currentCpuId;
 int lastExecutedCpuId;
 int waitType;
 SceUID waitId;
 int exitStatus;
 SceKernelSysClock runClocks;
 SceUInt intrPreemptCount;
 SceUInt threadPreemptCount;
 SceUInt threadReleaseCount;
 SceUID fNotifyCallback;
 int reserved;
} SceKernelThreadInfo;
typedef struct SceKernelThreadRunStatus {
 SceSize size;
 struct {
  SceUID processId;
  SceUID threadId;
  int priority;
 } cpuInfo[4];
} SceKernelThreadRunStatus;
typedef enum SceThreadStatus {
 SCE_THREAD_RUNNING = 1,
 SCE_THREAD_READY = 2,
 SCE_THREAD_WAITING = 4,
 SCE_THREAD_SUSPEND = 8,
 SCE_THREAD_STOPPED = 16,
 SCE_THREAD_KILLED = 32,
} SceThreadStatus;
typedef enum SceKernelMutexAttribute {
 SCE_KERNEL_MUTEX_ATTR_RECURSIVE = 0x02
} SceKernelMutexAttribute;
typedef struct SceKernelSemaOptParam {
 SceSize size;
} SceKernelSemaOptParam;
typedef struct SceKernelSemaInfo {
 SceSize size;
 SceUID semaId;
 char name[32];
 SceUInt attr;
 int initCount;
 int currentCount;
 int maxCount;
 int numWaitThreads;
} SceKernelSemaInfo;
typedef struct SceKernelMutexOptParam {
 SceSize size;
 int ceilingPriority;
} SceKernelMutexOptParam;
typedef struct SceKernelMutexInfo {
 SceSize size;
 SceUID mutexId;
 char name[32];
 SceUInt attr;
 int initCount;
 int currentCount;
 SceUID currentOwnerId;
 int numWaitThreads;
} SceKernelMutexInfo;
typedef struct SceKernelEventFlagInfo {
 SceSize size;
 SceUID evfId;
 char name[32];
 SceUInt attr;
 SceUInt initPattern;
 SceUInt currentPattern;
 int numWaitThreads;
} SceKernelEventFlagInfo;
typedef struct SceKernelEventFlagOptParam {
 SceSize size;
} SceKernelEventFlagOptParam;
typedef struct SceKernelEventFlagOptParam SceKernelEventFlagOptParam;
typedef enum SceEventFlagAttributes {
 SCE_EVENT_WAITMULTIPLE = 0x200
} SceEventFlagAttributes;
typedef enum SceEventFlagWaitTypes {
 SCE_EVENT_WAITAND = 0,
 SCE_EVENT_WAITOR = 1,
 SCE_EVENT_WAITCLEAR = 2,
 SCE_EVENT_WAITCLEAR_PAT = 4
} SceEventFlagWaitTypes;
typedef struct SceKernelCondOptParam {
 SceSize size;
} SceKernelCondOptParam;
typedef struct SceKernelCondInfo {
 SceSize size;
 SceUID condId;
 char name[32];
 SceUInt attr;
 SceUID mutexId;
 int numWaitThreads;
} SceKernelCondInfo;
typedef int (*SceKernelCallbackFunction)(int notifyId, int notifyCount, int notifyArg, void *common);
typedef struct SceKernelCallbackInfo {
 SceSize size;
 SceUID callbackId;
 char name[32];
 SceUID threadId;
 SceKernelCallbackFunction callback;
 void *common;
 int notifyCount;
 int notifyArg;
} SceKernelCallbackInfo;
typedef struct SceKernelMppInfo {
 SceSize size;
 SceUID mppId;
 char name[32];
 SceUInt attr;
 int bufSize;
 int freeSize;
 int numSendWaitThreads;
 int numReceiveWaitThreads;
} SceKernelMppInfo;
typedef struct SceKernelSystemInfo {
 SceSize size;
 SceUInt32 activeCpuMask;
 struct {
  SceKernelSysClock idleClock;
  SceUInt32 comesOutOfIdleCount;
  SceUInt32 threadSwitchCount;
 } cpuInfo[4];
} SceKernelSystemInfo;
typedef enum SceKernelIdListType {
 SCE_KERNEL_TMID_Thread = 1,
 SCE_KERNEL_TMID_Semaphore = 2,
 SCE_KERNEL_TMID_EventFlag = 3,
 SCE_KERNEL_TMID_Mbox = 4,
 SCE_KERNEL_TMID_Vpl = 5,
 SCE_KERNEL_TMID_Fpl = 6,
 SCE_KERNEL_TMID_Mpipe = 7,
 SCE_KERNEL_TMID_Callback = 8,
 SCE_KERNEL_TMID_ThreadEventHandler = 9,
 SCE_KERNEL_TMID_Alarm = 10,
 SCE_KERNEL_TMID_VTimer = 11,
 SCE_KERNEL_TMID_SleepThread = 64,
 SCE_KERNEL_TMID_DelayThread = 65,
 SCE_KERNEL_TMID_SuspendThread = 66,
 SCE_KERNEL_TMID_DormantThread = 67
} SceKernelIdListType;
typedef struct SceKernelLwMutexWork {
 SceInt64 data[4];
} SceKernelLwMutexWork;
typedef struct SceKernelLwMutexOptParam {
 SceSize size;
} SceKernelLwMutexOptParam;
typedef struct SceKernelLwCondWork {
 SceInt64 data[4];
} SceKernelLwCondWork;
typedef struct SceKernelLwCondOptParam {
 SceSize size;
} SceKernelLwCondOptParam;
typedef enum SceUsbdErrorCode {
 SCE_USBD_ERROR_IO = 0x80240001,
 SCE_USBD_ERROR_INVALID_ARG = 0x80240002,
 SCE_USBD_ERROR_ACCESS = 0x80240003,
 SCE_USBD_ERROR_NO_DEVICE = 0x80240004,
 SCE_USBD_ERROR_NOT_FOUND = 0x80240005,
 SCE_USBD_ERROR_BUSY = 0x80240006,
 SCE_USBD_ERROR_TIMEOUT = 0x80240007,
 SCE_USBD_ERROR_OVERFLOW = 0x80240008,
 SCE_USBD_ERROR_PIPE = 0x80240009,
 SCE_USBD_ERROR_INTERRUPTED = 0x8024000A,
 SCE_USBD_ERROR_NO_MEM = 0x8024000B,
 SCE_USBD_ERROR_NOT_SUPPORTED = 0x8024000C,
 SCE_USBD_ERROR_FATAL = 0x802400FF
} SceUsbdErrorCode;
typedef struct SceUsbdDeviceInfo {
 unsigned int unk0;
 unsigned int device_id;
 unsigned int unk2;
} SceUsbdDeviceInfo;
typedef struct SceUsbdDeviceAddress {
 unsigned int unk0;
 unsigned short unk1;
} SceUsbdDeviceAddress;
typedef struct SceUsbdTransferData {
 unsigned int pipe;
 const void *buff1;
 unsigned int size1;
 void *buff2;
 unsigned int size2;
} SceUsbdTransferData;
typedef struct SceUsbdReceiveEvent {
 unsigned int unk0;
 unsigned int unk1;
 unsigned int unk2;
 unsigned int unk3;
 unsigned int unk4;
 unsigned int unk5;
 unsigned int transfer_id;
} SceUsbdReceiveEvent;
typedef enum SceUsbstorVstorType {
 SCE_USBSTOR_VSTOR_TYPE_FAT = 0,
 SCE_USBSTOR_VSTOR_TYPE_CDROM = 5
} SceUsbstorVstorType;
typedef enum SceVideodecErrorCode {
 SCE_VIDEODEC_ERROR_INVALID_TYPE = 0x80620801,
 SCE_VIDEODEC_ERROR_INVALID_PARAM = 0x80620802,
 SCE_VIDEODEC_ERROR_OUT_OF_MEMORY = 0x80620803,
 SCE_VIDEODEC_ERROR_INVALID_STATE = 0x80620804,
 SCE_VIDEODEC_ERROR_UNSUPPORT_IMAGE_SIZE = 0x80620805,
 SCE_VIDEODEC_ERROR_INVALID_COLOR_FORMAT = 0x80620806,
 SCE_VIDEODEC_ERROR_NOT_PHY_CONTINUOUS_MEMORY = 0x80620807,
 SCE_VIDEODEC_ERROR_ALREADY_USED = 0x80620808,
 SCE_VIDEODEC_ERROR_INVALID_POINTER = 0x80620809,
 SCE_VIDEODEC_ERROR_ES_BUFFER_FULL = 0x8062080A,
 SCE_VIDEODEC_ERROR_INITIALIZE = 0x8062080B,
 SCE_VIDEODEC_ERROR_NOT_INITIALIZE = 0x8062080C,
 SCE_VIDEODEC_ERROR_INVALID_STREAM = 0x8062080D,
 SCE_VIDEODEC_ERROR_INVALID_ARGUMENT_SIZE = 0x8062080E
} SceVideodecErrorCode;
typedef enum SceVideodecType {
 SCE_VIDEODEC_TYPE_HW_AVCDEC = 0x1001
} SceVideodecType;
typedef enum SceAvcdecErrorCode {
 SCE_AVCDEC_ERROR_INVALID_TYPE = 0x80620001,
 SCE_AVCDEC_ERROR_INVALID_PARAM = 0x80620002,
 SCE_AVCDEC_ERROR_OUT_OF_MEMORY = 0x80620003,
 SCE_AVCDEC_ERROR_INVALID_STATE = 0x80620004,
 SCE_AVCDEC_ERROR_UNSUPPORT_IMAGE_SIZE = 0x80620005,
 SCE_AVCDEC_ERROR_INVALID_COLOR_FORMAT = 0x80620006,
 SCE_AVCDEC_ERROR_NOT_PHY_CONTINUOUS_MEMORY = 0x80620007,
 SCE_AVCDEC_ERROR_ALREADY_USED = 0x80620008,
 SCE_AVCDEC_ERROR_INVALID_POINTER = 0x80620009,
 SCE_AVCDEC_ERROR_ES_BUFFER_FULL = 0x8062000A,
 SCE_AVCDEC_ERROR_INITIALIZE = 0x8062000B,
 SCE_AVCDEC_ERROR_NOT_INITIALIZE = 0x8062000C,
 SCE_AVCDEC_ERROR_INVALID_STREAM = 0x8062000D,
 SCE_AVCDEC_ERROR_INVALID_ARGUMENT_SIZE = 0x8062000E
} SceAvcdecErrorCode;
typedef enum SceAvcdecPixelFormat {
 SCE_AVCDEC_PIXELFORMAT_RGBA8888 = 0x00,
 SCE_AVCDEC_PIXELFORMAT_RGBA565 = 0x01,
 SCE_AVCDEC_PIXELFORMAT_RGBA5551 = 0x02,
 SCE_AVCDEC_PIXELFORMAT_YUV420_RASTER = 0x10,
 SCE_AVCDEC_PIXELFORMAT_YUV420_PACKED_RASTER = 0x20
} SceAvcdecPixelFormat ;
typedef struct SceVideodecQueryInitInfoHwAvcdec {
 uint32_t size;
 uint32_t horizontal;
 uint32_t vertical;
 uint32_t numOfRefFrames;
 uint32_t numOfStreams;
} SceVideodecQueryInitInfoHwAvcdec;
typedef union SceVideodecQueryInitInfo {
 uint8_t reserved[32];
 SceVideodecQueryInitInfoHwAvcdec hwAvc;
} SceVideodecQueryInitInfo;
typedef struct SceVideodecTimeStamp {
 uint32_t upper;
 uint32_t lower;
} SceVideodecTimeStamp;
typedef struct SceAvcdecQueryDecoderInfo {
 uint32_t horizontal;
 uint32_t vertical;
 uint32_t numOfRefFrames;
} SceAvcdecQueryDecoderInfo;
typedef struct SceAvcdecDecoderInfo {
 uint32_t frameMemSize;
} SceAvcdecDecoderInfo;
typedef struct SceAvcdecBuf {
 void *pBuf;
 uint32_t size;
} SceAvcdecBuf;
typedef struct SceAvcdecCtrl {
 uint32_t handle;
 SceAvcdecBuf frameBuf;
} SceAvcdecCtrl;
typedef struct SceAvcdecAu {
 SceVideodecTimeStamp pts;
 SceVideodecTimeStamp dts;
 SceAvcdecBuf es;
} SceAvcdecAu;
typedef struct SceAvcdecInfo {
 uint32_t numUnitsInTick;
 uint32_t timeScale;
 uint8_t fixedFrameRateFlag;
 uint8_t aspectRatioIdc;
 uint16_t sarWidth;
 uint16_t sarHeight;
 uint8_t colourPrimaries;
 uint8_t transferCharacteristics;
 uint8_t matrixCoefficients;
 uint8_t videoFullRangeFlag;
 uint8_t picStruct[2];
 uint8_t ctType;
 SceVideodecTimeStamp pts;
} SceAvcdecInfo;
typedef struct SceAvcdecFrameOptionRGBA {
 uint8_t alpha;
 uint8_t cscCoefficient;
 uint8_t reserved[14];
} SceAvcdecFrameOptionRGBA;
typedef union SceAvcdecFrameOption {
 uint8_t reserved[16];
 SceAvcdecFrameOptionRGBA rgba;
} SceAvcdecFrameOption;
typedef struct SceAvcdecFrame {
 uint32_t pixelType;
 uint32_t framePitch;
 uint32_t frameWidth;
 uint32_t frameHeight;
 uint32_t horizontalSize;
 uint32_t verticalSize;
 uint32_t frameCropLeftOffset;
 uint32_t frameCropRightOffset;
 uint32_t frameCropTopOffset;
 uint32_t frameCropBottomOffset;
 SceAvcdecFrameOption opt;
 void *pPicture[2];
} SceAvcdecFrame;
typedef struct SceAvcdecPicture {
 uint32_t size;
 SceAvcdecFrame frame;
 SceAvcdecInfo info;
} SceAvcdecPicture;
typedef struct SceAvcdecArrayPicture {
 uint32_t numOfOutput;
 uint32_t numOfElm;
 SceAvcdecPicture **pPicture;
} SceAvcdecArrayPicture;
typedef struct VideoExportInputParam {
 char path[1024];
 char reserved[64];
} VideoExportInputParam;
typedef struct VideoExportOutputParam {
 char path[1024];
 char reserved[8];
} VideoExportOutputParam;
typedef struct SceKernelSegmentInfo {
 SceUInt size;
 SceUInt perms;
 void *vaddr;
 SceUInt memsz;
 SceUInt flags;
 SceUInt res;
} SceKernelSegmentInfo;
typedef struct SceKernelModuleInfo {
 SceUInt size;
 SceUInt handle;
 SceUInt flags;
 char module_name[28];
 SceUInt unk28;
 void *module_start;
 SceUInt unk30;
 void *module_stop;
 void *exidxTop;
 void *exidxBtm;
 SceUInt unk40;
 SceUInt unk44;
 void *tlsInit;
 SceSize tlsInitSize;
 SceSize tlsAreaSize;
 char path[256];
 SceKernelSegmentInfo segments[4];
 SceUInt type;
} SceKernelModuleInfo;
typedef struct SceKernelLMOption {
 SceSize size;
} SceKernelLMOption;
typedef struct SceKernelULMOption {
 SceSize size;
} SceKernelULMOption;
typedef struct SceKernelFwInfo {
  SceSize size;
  char versionString[16];
  SceUInt unk_14;
  SceUInt unk_18;
  SceUInt unk_1C;
  SceUInt version;
  SceUInt unk_24;
} SceKernelFwInfo;
typedef enum SceIoAccessMode {
 SCE_S_IXUSR = 0x0001,
 SCE_S_IWUSR = 0x0002,
 SCE_S_IRUSR = 0x0004,
 SCE_S_IRWXU = 0x0007,
 SCE_S_IXGRP = 0x0008,
 SCE_S_IWGRP = 0x0010,
 SCE_S_IRGRP = 0x0020,
 SCE_S_IRWXG = 0x0038,
 SCE_S_IXOTH = 0x0040,
 SCE_S_IWOTH = 0x0080,
 SCE_S_IROTH = 0x0100,
 SCE_S_IRWXO = 0x01C0,
 SCE_S_ISVTX = 0x0200,
 SCE_S_ISGID = 0x0400,
 SCE_S_ISUID = 0x0800,
 SCE_S_IFDIR = 0x1000,
 SCE_S_IFREG = 0x2000,
 SCE_S_IFLNK = 0x4000,
 SCE_S_IFMT = 0xF000,
} SceIoAccessMode;
typedef enum SceIoFileMode {
 SCE_SO_IXOTH = 0x0001,
 SCE_SO_IWOTH = 0x0002,
 SCE_SO_IROTH = 0x0004,
 SCE_SO_IFLNK = 0x0008,
 SCE_SO_IFDIR = 0x0010,
 SCE_SO_IFREG = 0x0020,
 SCE_SO_IFMT = 0x0038,
} SceIoFileMode;
typedef struct SceIoStat {
 SceMode st_mode;
 unsigned int st_attr;
 SceOff st_size;
 SceDateTime st_ctime;
 SceDateTime st_atime;
 SceDateTime st_mtime;
 unsigned int st_private[6];
} SceIoStat;
typedef struct SceIoDirent {
 SceIoStat d_stat;
 char d_name[256];
 void *d_private;
 int dummy;
} SceIoDirent;
typedef enum SceIoMode {
 SCE_O_RDONLY = 0x0001,
 SCE_O_WRONLY = 0x0002,
 SCE_O_RDWR = (SCE_O_RDONLY | SCE_O_WRONLY),
 SCE_O_NBLOCK = 0x0004,
 SCE_O_DIROPEN = 0x0008,
 SCE_O_RDLOCK = 0x0010,
 SCE_O_WRLOCK = 0x0020,
 SCE_O_APPEND = 0x0100,
 SCE_O_CREAT = 0x0200,
 SCE_O_TRUNC = 0x0400,
 SCE_O_EXCL = 0x0800,
 SCE_O_SCAN = 0x1000,
 SCE_O_RCOM = 0x2000,
 SCE_O_NOBUF = 0x4000,
 SCE_O_NOWAIT = 0x8000,
 SCE_O_FDEXCL = 0x01000000,
 SCE_O_PWLOCK = 0x02000000,
 SCE_O_FGAMEDATA = 0x40000000
} SceIoMode;
typedef enum SceIoSeekMode {
 SCE_SEEK_SET,
 SCE_SEEK_CUR,
 SCE_SEEK_END
} SceIoSeekMode;
typedef enum SceIoDevType {
 SCE_DEV_TYPE_NULL = 0x00,
 SCE_DEV_TYPE_CHAR = 0x01,
 SCE_DEV_TYPE_BLOCK = 0x04,
 SCE_DEV_TYPE_FS = 0x10,
 SCE_DEV_TYPE_ALIAS = 0x20,
 SCE_DEV_TYPE_MOUNTPT = 0x40
} SceIoDevType;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef enum SceKernelErrorCode {
 SCE_KERNEL_OK = 0x0,
 SCE_KERNEL_ERROR_ERROR = 0x80020001,
 SCE_KERNEL_ERROR_NOT_IMPLEMENTED = 0x80020002,
 SCE_KERNEL_ERROR_NOSYS = 0x80020003,
 SCE_KERNEL_ERROR_UNSUP = 0x80020004,
 SCE_KERNEL_ERROR_INVALID_ARGUMENT = 0x80020005,
 SCE_KERNEL_ERROR_ILLEGAL_ADDR = 0x80020006,
 SCE_KERNEL_ERROR_ILLEGAL_ALIGNMENT = 0x80020007,
 SCE_KERNEL_ERROR_ILLEGAL_PERMISSION = 0x80020008,
 SCE_KERNEL_ERROR_INVALID_ARGUMENT_SIZE = 0x80020009,
 SCE_KERNEL_ERROR_INVALID_FLAGS = 0x8002000A,
 SCE_KERNEL_ERROR_ILLEGAL_SIZE = 0x8002000B,
 SCE_KERNEL_ERROR_ILLEGAL_TYPE = 0x8002000C,
 SCE_KERNEL_ERROR_ILLEGAL_PATTERN = 0x8002000D,
 SCE_KERNEL_ERROR_ILLEGAL_ATTR = 0x8002000E,
 SCE_KERNEL_ERROR_ILLEGAL_COUNT = 0x8002000F,
 SCE_KERNEL_ERROR_ILLEGAL_MODE = 0x80020010,
 SCE_KERNEL_ERROR_ILLEGAL_OPEN_LIMIT = 0x80020011,
 SCE_KERNEL_ERROR_ONLY_DEVELOPMENT_MODE = 0x80020012,
 SCE_KERNEL_ERROR_DEBUG_ERROR = 0x80021000,
 SCE_KERNEL_ERROR_ILLEGAL_DIPSW_NUMBER = 0x80021001,
 SCE_KERNEL_ERROR_PA_ERROR = 0x80021100,
 SCE_KERNEL_ERROR_PA_NOT_AVAILABLE = 0x80021101,
 SCE_KERNEL_ERROR_PA_INVALID_KEY = 0x80021102,
 SCE_KERNEL_ERROR_PA_KEY_IS_NOT_SHARED = 0x80021103,
 SCE_KERNEL_ERROR_PA_INVALID_SIGNATURE = 0x80021104,
 SCE_KERNEL_ERROR_CPU_ERROR = 0x80022000,
 SCE_KERNEL_ERROR_MMU_ILLEGAL_L1_TYPE = 0x80022001,
 SCE_KERNEL_ERROR_MMU_L2_INDEX_OVERFLOW = 0x80022002,
 SCE_KERNEL_ERROR_MMU_L2_SIZE_OVERFLOW = 0x80022003,
 SCE_KERNEL_ERROR_INVALID_CPU_AFFINITY = 0x80022004,
 SCE_KERNEL_ERROR_INVALID_MEMORY_ACCESS = 0x80022005,
 SCE_KERNEL_ERROR_INVALID_MEMORY_ACCESS_PERMISSION = 0x80022006,
 SCE_KERNEL_ERROR_VA2PA_FAULT = 0x80022007,
 SCE_KERNEL_ERROR_VA2PA_MAPPED = 0x80022008,
 SCE_KERNEL_ERROR_VALIDATION_CHECK_FAILED = 0x80022009,
 SCE_KERNEL_ERROR_SYSMEM_ERROR = 0x80024000,
 SCE_KERNEL_ERROR_INVALID_PROCESS_CONTEXT = 0x80024001,
 SCE_KERNEL_ERROR_UID_NAME_TOO_LONG = 0x80024002,
 SCE_KERNEL_ERROR_VARANGE_IS_NOT_PHYSICAL_CONTINUOUS = 0x80024003,
 SCE_KERNEL_ERROR_PHYADDR_ERROR = 0x80024100,
 SCE_KERNEL_ERROR_NO_PHYADDR = 0x80024101,
 SCE_KERNEL_ERROR_PHYADDR_USED = 0x80024102,
 SCE_KERNEL_ERROR_PHYADDR_NOT_USED = 0x80024103,
 SCE_KERNEL_ERROR_NO_IOADDR = 0x80024104,
 SCE_KERNEL_ERROR_PHYMEM_ERROR = 0x80024300,
 SCE_KERNEL_ERROR_ILLEGAL_PHYPAGE_STATUS = 0x80024301,
 SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE = 0x80024302,
 SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_UNIT = 0x80024303,
 SCE_KERNEL_ERROR_PHYMEMPART_NOT_EMPTY = 0x80024304,
 SCE_KERNEL_ERROR_NO_PHYMEMPART_LPDDR2 = 0x80024305,
 SCE_KERNEL_ERROR_NO_PHYMEMPART_CDRAM = 0x80024306,
 SCE_KERNEL_ERROR_PHYMEMPART_OUT_OF_INDEX = 0x80024307,
 SCE_KERNEL_ERROR_CANNOT_GROW_PHYMEMPART = 0x80024308,
 SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_CDRAM = 0x80024309,
 SCE_KERNEL_ERROR_INVALID_SUBBUDGET_ID = 0x8002430A,
 SCE_KERNEL_ERROR_FIXEDHEAP_ERROR = 0x80024400,
 SCE_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_SIZE = 0x80024401,
 SCE_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_INDEX = 0x80024402,
 SCE_KERNEL_ERROR_FIXEDHEAP_INDEX_OVERFLOW = 0x80024403,
 SCE_KERNEL_ERROR_FIXEDHEAP_NO_CHUNK = 0x80024404,
 SCE_KERNEL_ERROR_UID_ERROR = 0x80024500,
 SCE_KERNEL_ERROR_INVALID_UID = 0x80024501,
 SCE_KERNEL_ERROR_SYSMEM_UID_INVALID_ARGUMENT = 0x80024502,
 SCE_KERNEL_ERROR_SYSMEM_INVALID_UID_RANGE = 0x80024503,
 SCE_KERNEL_ERROR_SYSMEM_NO_VALID_UID = 0x80024504,
 SCE_KERNEL_ERROR_SYSMEM_CANNOT_ALLOCATE_UIDENTRY = 0x80024505,
 SCE_KERNEL_ERROR_NOT_PROCESS_UID = 0x80024506,
 SCE_KERNEL_ERROR_NOT_KERNEL_UID = 0x80024507,
 SCE_KERNEL_ERROR_INVALID_UID_CLASS = 0x80024508,
 SCE_KERNEL_ERROR_INVALID_UID_SUBCLASS = 0x80024509,
 SCE_KERNEL_ERROR_UID_CANNOT_FIND_BY_NAME = 0x8002450A,
 SCE_KERNEL_ERROR_UID_NOT_VISIBLE = 0x8002450B,
 SCE_KERNEL_ERROR_UID_MAX_OPEN = 0x8002450C,
 SCE_KERNEL_ERROR_UID_RL_OVERFLOW = 0x8002450D,
 SCE_KERNEL_ERROR_VIRPAGE_ERROR = 0x80024600,
 SCE_KERNEL_ERROR_ILLEGAL_VIRPAGE_TYPE = 0x80024601,
 SCE_KERNEL_ERROR_BLOCK_ERROR = 0x80024700,
 SCE_KERNEL_ERROR_ILLEGAL_BLOCK_ID = 0x80024701,
 SCE_KERNEL_ERROR_ILLEGAL_BLOCK_TYPE = 0x80024702,
 SCE_KERNEL_ERROR_BLOCK_IN_USE = 0x80024703,
 SCE_KERNEL_ERROR_PARTITION_ERROR = 0x80024800,
 SCE_KERNEL_ERROR_ILLEGAL_PARTITION_ID = 0x80024801,
 SCE_KERNEL_ERROR_ILLEGAL_PARTITION_INDEX = 0x80024802,
 SCE_KERNEL_ERROR_NO_L2PAGETABLE = 0x80024803,
 SCE_KERNEL_ERROR_HEAPLIB_ERROR = 0x80024900,
 SCE_KERNEL_ERROR_ILLEGAL_HEAP_ID = 0x80024901,
 SCE_KERNEL_ERROR_OUT_OF_RANG = 0x80024902,
 SCE_KERNEL_ERROR_HEAPLIB_NOMEM = 0x80024903,
 SCE_KERNEL_ERROR_HEAPLIB_VERIFY_ERROR = 0x80024904,
 SCE_KERNEL_ERROR_SYSMEM_ADDRESS_SPACE_ERROR = 0x80024A00,
 SCE_KERNEL_ERROR_INVALID_ADDRESS_SPACE_ID = 0x80024A01,
 SCE_KERNEL_ERROR_INVALID_PARTITION_INDEX = 0x80024A02,
 SCE_KERNEL_ERROR_ADDRESS_SPACE_CANNOT_FIND_PARTITION_BY_ADDR = 0x80024A03,
 SCE_KERNEL_ERROR_SYSMEM_MEMBLOCK_ERROR = 0x80024B00,
 SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_TYPE = 0x80024B01,
 SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_REMAP_TYPE = 0x80024B02,
 SCE_KERNEL_ERROR_NOT_PHY_CONT_MEMBLOCK = 0x80024B03,
 SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_CODE = 0x80024B04,
 SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_SIZE = 0x80024B05,
 SCE_KERNEL_ERROR_ILLEGAL_USERMAP_SIZE = 0x80024B06,
 SCE_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_KERNEL_PROCESS = 0x80024B07,
 SCE_KERNEL_ERROR_PROCESS_CANNOT_REMAP_MEMBLOCK = 0x80024B08,
 SCE_KERNEL_ERROR_MEMBLOCK_RANGE_ERROR = 0x80024B09,
 SCE_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_UPDATER_OR_SAFEMODE = 0x80024B0A,
 SCE_KERNEL_ERROR_MEMBLOCK_OVERFLOW = 0x80024B0B,
 SCE_KERNEL_ERROR_SYSMEM_PHYMEMLOW_ERROR = 0x80024C00,
 SCE_KERNEL_ERROR_CANNOT_ALLOC_PHYMEMLOW = 0x80024C01,
 SCE_KERNEL_ERROR_UNKNOWN_PHYMEMLOW_TYPE = 0x80024C02,
 SCE_KERNEL_ERROR_SYSMEM_BITHEAP_ERROR = 0x80024D00,
 SCE_KERNEL_ERROR_CANNOT_ALLOC_BITHEAP = 0x80024D01,
 SCE_KERNEL_ERROR_SYSMEM_NAMEHEAP_ERROR = 0x80024E00,
 SCE_KERNEL_ERROR_NO_SUCH_NAME = 0x80024E01,
 SCE_KERNEL_ERROR_DUPLICATE_NAME = 0x80024E02,
 SCE_KERNEL_ERROR_LOADCORE_ERROR = 0x80025000,
 SCE_KERNEL_ERROR_ILLEGAL_ELF_HEADER = 0x80025001,
 SCE_KERNEL_ERROR_ILLEGAL_SELF_HEADER = 0x80025002,
 SCE_KERNEL_ERROR_EXCPMGR_ERROR = 0x80027000,
 SCE_KERNEL_ERROR_ILLEGAL_EXCPCODE = 0x80027001,
 SCE_KERNEL_ERROR_ILLEGAL_EXCPHANDLER = 0x80027002,
 SCE_KERNEL_ERROR_NOTFOUND_EXCPHANDLER = 0x80027003,
 SCE_KERNEL_ERROR_CANNOT_RELEASE_EXCPHANDLER = 0x80027004,
 SCE_KERNEL_ERROR_INTRMGR_ERROR = 0x80027100,
 SCE_KERNEL_ERROR_ILLEGAL_CONTEXT = 0x80027101,
 SCE_KERNEL_ERROR_ILLEGAL_INTRCODE = 0x80027102,
 SCE_KERNEL_ERROR_ILLEGAL_INTRPARAM = 0x80027103,
 SCE_KERNEL_ERROR_ILLEGAL_INTRPRIORITY = 0x80027104,
 SCE_KERNEL_ERROR_ILLEGAL_TARGET_CPU = 0x80027105,
 SCE_KERNEL_ERROR_ILLEGAL_INTRFILTER = 0x80027106,
 SCE_KERNEL_ERROR_ILLEGAL_INTRTYPE = 0x80027107,
 SCE_KERNEL_ERROR_ILLEGAL_HANDLER = 0x80027108,
 SCE_KERNEL_ERROR_FOUND_HANDLER = 0x80027109,
 SCE_KERNEL_ERROR_NOTFOUND_HANDLER = 0x8002710A,
 SCE_KERNEL_ERROR_NO_MEMORY = 0x8002710B,
 SCE_KERNEL_ERROR_DMACMGR_ERROR = 0x80027200,
 SCE_KERNEL_ERROR_ALREADY_QUEUED = 0x80027201,
 SCE_KERNEL_ERROR_NOT_QUEUED = 0x80027202,
 SCE_KERNEL_ERROR_NOT_SETUP = 0x80027203,
 SCE_KERNEL_ERROR_ON_TRANSFERRING = 0x80027204,
 SCE_KERNEL_ERROR_NOT_INITIALIZED = 0x80027205,
 SCE_KERNEL_ERROR_TRANSFERRED = 0x80027206,
 SCE_KERNEL_ERROR_NOT_UNDER_CONTROL = 0x80027207,
 SCE_KERNEL_ERROR_CANCELING = 0x80027208,
 SCE_KERNEL_ERROR_SYSTIMER_ERROR = 0x80027300,
 SCE_KERNEL_ERROR_NO_FREE_TIMER = 0x80027301,
 SCE_KERNEL_ERROR_TIMER_NOT_ALLOCATED = 0x80027302,
 SCE_KERNEL_ERROR_TIMER_COUNTING = 0x80027303,
 SCE_KERNEL_ERROR_TIMER_STOPPED = 0x80027304,
 SCE_KERNEL_ERROR_THREADMGR_ERROR = 0x80028000,
 SCE_KERNEL_ERROR_UNKNOWN_UID = 0x80028001,
 SCE_KERNEL_ERROR_DIFFERENT_UID_CLASS = 0x80028002,
 SCE_KERNEL_ERROR_ALREADY_REGISTERED = 0x80028003,
 SCE_KERNEL_ERROR_CAN_NOT_WAIT = 0x80028004,
 SCE_KERNEL_ERROR_WAIT_TIMEOUT = 0x80028005,
 SCE_KERNEL_ERROR_WAIT_DELETE = 0x80028006,
 SCE_KERNEL_ERROR_WAIT_CANCEL = 0x80028007,
 SCE_KERNEL_ERROR_THREAD_ERROR = 0x80028020,
 SCE_KERNEL_ERROR_UNKNOWN_THREAD_ID = 0x80028021,
 SCE_KERNEL_ERROR_ILLEGAL_THREAD_ID = 0x80028022,
 SCE_KERNEL_ERROR_ILLEGAL_PRIORITY = 0x80028023,
 SCE_KERNEL_ERROR_ILLEGAL_STACK_SIZE = 0x80028024,
 SCE_KERNEL_ERROR_ILLEGAL_CPU_AFFINITY_MASK = 0x80028025,
 SCE_KERNEL_ERROR_ILLEGAL_THREAD_PARAM_COMBINATION = 0x80028026,
 SCE_KERNEL_ERROR_DORMANT = 0x80028027,
 SCE_KERNEL_ERROR_NOT_DORMANT = 0x80028028,
 SCE_KERNEL_ERROR_RUNNING = 0x80028029,
 SCE_KERNEL_ERROR_DELETED = 0x8002802A,
 SCE_KERNEL_ERROR_CAN_NOT_SUSPEND = 0x8002802B,
 SCE_KERNEL_ERROR_THREAD_STOPPED = 0x8002802C,
 SCE_KERNEL_ERROR_THREAD_SUSPENDED = 0x8002802D,
 SCE_KERNEL_ERROR_NOT_SUSPENDED = 0x8002802E,
 SCE_KERNEL_ERROR_ALREADY_DEBUG_SUSPENDED = 0x8002802F,
 SCE_KERNEL_ERROR_NOT_DEBUG_SUSPENDED = 0x80028030,
 SCE_KERNEL_ERROR_CAN_NOT_USE_VFP = 0x80028031,
 SCE_KERNEL_ERROR_THREAD_EVENT_ERROR = 0x80028060,
 SCE_KERNEL_ERROR_UNKNOWN_THREAD_EVENT_ID = 0x80028061,
 SCE_KERNEL_ERROR_KERNEL_TLS_ERROR = 0x80028080,
 SCE_KERNEL_ERROR_KERNEL_TLS_FULL = 0x80028081,
 SCE_KERNEL_ERROR_ILLEGAL_KERNEL_TLS_INDEX = 0x80028082,
 SCE_KERNEL_ERROR_KERNEL_TLS_BUSY = 0x80028083,
 SCE_KERNEL_ERROR_CALLBACK_ERROR = 0x800280A0,
 SCE_KERNEL_ERROR_UNKNOWN_CALLBACK_ID = 0x800280A1,
 SCE_KERNEL_ERROR_NOTIFY_CALLBACK = 0x800280A2,
 SCE_KERNEL_ERROR_CALLBACK_NOT_REGISTERED = 0x800280A3,
 SCE_KERNEL_ERROR_ALARM_ERROR = 0x800280C0,
 SCE_KERNEL_ERROR_UNKNOWN_ALARM_ID = 0x800280C1,
 SCE_KERNEL_ERROR_ALARM_CAN_NOT_CANCEL = 0x800280C2,
 SCE_KERNEL_ERROR_EVF_ERROR = 0x800280E0,
 SCE_KERNEL_ERROR_UNKNOWN_EVF_ID = 0x800280E1,
 SCE_KERNEL_ERROR_EVF_MULTI = 0x800280E2,
 SCE_KERNEL_ERROR_EVF_COND = 0x800280E3,
 SCE_KERNEL_ERROR_SEMA_ERROR = 0x80028100,
 SCE_KERNEL_ERROR_UNKNOWN_SEMA_ID = 0x80028101,
 SCE_KERNEL_ERROR_SEMA_ZERO = 0x80028102,
 SCE_KERNEL_ERROR_SEMA_OVF = 0x80028103,
 SCE_KERNEL_ERROR_SIGNAL_ERROR = 0x80028120,
 SCE_KERNEL_ERROR_ALREADY_SENT = 0x80028121,
 SCE_KERNEL_ERROR_MUTEX_ERROR = 0x80028140,
 SCE_KERNEL_ERROR_UNKNOWN_MUTEX_ID = 0x80028141,
 SCE_KERNEL_ERROR_MUTEX_RECURSIVE = 0x80028142,
 SCE_KERNEL_ERROR_MUTEX_LOCK_OVF = 0x80028143,
 SCE_KERNEL_ERROR_MUTEX_UNLOCK_UDF = 0x80028144,
 SCE_KERNEL_ERROR_MUTEX_FAILED_TO_OWN = 0x80028145,
 SCE_KERNEL_ERROR_MUTEX_NOT_OWNED = 0x80028146,
 SCE_KERNEL_ERROR_FAST_MUTEX_ERROR = 0x80028160,
 SCE_KERNEL_ERROR_UNKNOWN_FAST_MUTEX_ID = 0x80028161,
 SCE_KERNEL_ERROR_FAST_MUTEX_RECURSIVE = 0x80028162,
 SCE_KERNEL_ERROR_FAST_MUTEX_LOCK_OVF = 0x80028163,
 SCE_KERNEL_ERROR_FAST_MUTEX_FAILED_TO_OWN = 0x80028164,
 SCE_KERNEL_ERROR_FAST_MUTEX_NOT_OWNED = 0x80028165,
 SCE_KERNEL_ERROR_FAST_MUTEX_OWNED = 0x80028166,
 SCE_KERNEL_ERROR_FAST_MUTEX_ALREADY_INITIALIZED = 0x80028167,
 SCE_KERNEL_ERROR_FAST_MUTEX_NOT_INITIALIZED = 0x80028168,
 SCE_KERNEL_ERROR_LW_MUTEX_ERROR = 0x80028180,
 SCE_KERNEL_ERROR_UNKNOWN_LW_MUTEX_ID = 0x80028181,
 SCE_KERNEL_ERROR_LW_MUTEX_RECURSIVE = 0x80028182,
 SCE_KERNEL_ERROR_LW_MUTEX_LOCK_OVF = 0x80028183,
 SCE_KERNEL_ERROR_LW_MUTEX_UNLOCK_UDF = 0x80028184,
 SCE_KERNEL_ERROR_LW_MUTEX_FAILED_TO_OWN = 0x80028185,
 SCE_KERNEL_ERROR_LW_MUTEX_NOT_OWNED = 0x80028186,
 SCE_KERNEL_ERROR_COND_ERROR = 0x800281A0,
 SCE_KERNEL_ERROR_UNKNOWN_COND_ID = 0x800281A1,
 SCE_KERNEL_ERROR_WAIT_DELETE_MUTEX = 0x800281A2,
 SCE_KERNEL_ERROR_WAIT_CANCEL_MUTEX = 0x800281A3,
 SCE_KERNEL_ERROR_WAIT_DELETE_COND = 0x800281A4,
 SCE_KERNEL_ERROR_WAIT_CANCEL_COND = 0x800281A5,
 SCE_KERNEL_ERROR_LW_COND_ERROR = 0x800281C0,
 SCE_KERNEL_ERROR_UNKNOWN_LW_COND_ID = 0x800281C1,
 SCE_KERNEL_ERROR_WAIT_DELETE_LW_MUTEX = 0x800281C2,
 SCE_KERNEL_ERROR_WAIT_DELETE_LW_COND = 0x800281C3,
 SCE_KERNEL_ERROR_RW_LOCK_ERROR = 0x800281E0,
 SCE_KERNEL_ERROR_UNKNOWN_RW_LOCK_ID = 0x800281E1,
 SCE_KERNEL_ERROR_RW_LOCK_RECURSIVE = 0x800281E2,
 SCE_KERNEL_ERROR_RW_LOCK_LOCK_OVF = 0x800281E3,
 SCE_KERNEL_ERROR_RW_LOCK_NOT_OWNED = 0x800281E4,
 SCE_KERNEL_ERROR_RW_LOCK_UNLOCK_UDF = 0x800281E5,
 SCE_KERNEL_ERROR_RW_LOCK_FAILED_TO_LOCK = 0x800281E6,
 SCE_KERNEL_ERROR_RW_LOCK_FAILED_TO_UNLOCK = 0x800281E7,
 SCE_KERNEL_ERROR_EVENT_ERROR = 0x80028200,
 SCE_KERNEL_ERROR_UNKNOWN_EVENT_ID = 0x80028201,
 SCE_KERNEL_ERROR_EVENT_COND = 0x80028202,
 SCE_KERNEL_ERROR_MSG_PIPE_ERROR = 0x80028220,
 SCE_KERNEL_ERROR_UNKNOWN_MSG_PIPE_ID = 0x80028221,
 SCE_KERNEL_ERROR_MSG_PIPE_FULL = 0x80028222,
 SCE_KERNEL_ERROR_MSG_PIPE_EMPTY = 0x80028223,
 SCE_KERNEL_ERROR_MSG_PIPE_DELETED = 0x80028224,
 SCE_KERNEL_ERROR_TIMER_ERROR = 0x80028240,
 SCE_KERNEL_ERROR_UNKNOWN_TIMER_ID = 0x80028241,
 SCE_KERNEL_ERROR_EVENT_NOT_SET = 0x80028242,
 SCE_KERNEL_ERROR_SIMPLE_EVENT_ERROR = 0x80028260,
 SCE_KERNEL_ERROR_UNKNOWN_SIMPLE_EVENT_ID = 0x80028261,
 SCE_KERNEL_ERROR_PMON_ERROR = 0x80028280,
 SCE_KERNEL_ERROR_PMON_NOT_THREAD_MODE = 0x80028281,
 SCE_KERNEL_ERROR_PMON_NOT_CPU_MODE = 0x80028282,
 SCE_KERNEL_ERROR_WORK_QUEUE = 0x80028300,
 SCE_KERNEL_ERROR_UNKNOWN_WORK_QUEUE_ID = 0x80028301,
 SCE_KERNEL_ERROR_UNKNOWN_WORK_TASK_ID = 0x80028302,
 SCE_KERNEL_ERROR_PROCESSMGR_ERROR = 0x80029000,
 SCE_KERNEL_ERROR_INVALID_PID = 0x80029001,
 SCE_KERNEL_ERROR_INVALID_PROCESS_TYPE = 0x80029002,
 SCE_KERNEL_ERROR_PLS_FULL = 0x80029003,
 SCE_KERNEL_ERROR_INVALID_PROCESS_STATUS = 0x80029004,
 SCE_KERNEL_ERROR_PROCESS_CALLBACK_NOTFOUND = 0x80029005,
 SCE_KERNEL_ERROR_INVALID_BUDGET_ID = 0x80029006,
 SCE_KERNEL_ERROR_INVALID_BUDGET_SIZE = 0x80029007,
 SCE_KERNEL_ERROR_CP14_DISABLED = 0x80029008,
 SCE_KERNEL_ERROR_EXCEEDED_MAX_PROCESSES = 0x80029009,
 SCE_KERNEL_ERROR_PROCESS_REMAINING = 0x8002900A,
 SCE_KERNEL_ERROR_NO_PROCESS_DATA = 0x8002900B,
 SCE_KERNEL_ERROR_PROCESS_EVENT_INHIBITED = 0x8002900C,
 SCE_KERNEL_ERROR_IOFILEMGR_ERROR = 0x8002A000,
 SCE_KERNEL_ERROR_IO_NAME_TOO_LONG = 0x8002A001,
 SCE_KERNEL_ERROR_IO_REG_DEV = 0x8002A002,
 SCE_KERNEL_ERROR_IO_ALIAS_USED = 0x8002A003,
 SCE_KERNEL_ERROR_IO_DEL_DEV = 0x8002A004,
 SCE_KERNEL_ERROR_IO_WOULD_BLOCK = 0x8002A005,
 SCE_KERNEL_ERROR_MODULEMGR_START_FAILED = 0x8002D000,
 SCE_KERNEL_ERROR_MODULEMGR_STOP_FAIL = 0x8002D001,
 SCE_KERNEL_ERROR_MODULEMGR_IN_USE = 0x8002D002,
 SCE_KERNEL_ERROR_MODULEMGR_NO_LIB = 0x8002D003,
 SCE_KERNEL_ERROR_MODULEMGR_SYSCALL_REG = 0x8002D004,
 SCE_KERNEL_ERROR_MODULEMGR_NOMEM_LIB = 0x8002D005,
 SCE_KERNEL_ERROR_MODULEMGR_NOMEM_STUB = 0x8002D006,
 SCE_KERNEL_ERROR_MODULEMGR_NOMEM_SELF = 0x8002D007,
 SCE_KERNEL_ERROR_MODULEMGR_NOMEM = 0x8002D008,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_LIB = 0x8002D009,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_STUB = 0x8002D00A,
 SCE_KERNEL_ERROR_MODULEMGR_NO_FUNC_NID = 0x8002D00B,
 SCE_KERNEL_ERROR_MODULEMGR_NO_VAR_NID = 0x8002D00C,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_TYPE = 0x8002D00D,
 SCE_KERNEL_ERROR_MODULEMGR_NO_MOD_ENTRY = 0x8002D00E,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_PROC_PARAM = 0x8002D00F,
 SCE_KERNEL_ERROR_MODULEMGR_NO_MODOBJ = 0x8002D010,
 SCE_KERNEL_ERROR_MODULEMGR_NO_MOD = 0x8002D011,
 SCE_KERNEL_ERROR_MODULEMGR_NO_PROCESS = 0x8002D012,
 SCE_KERNEL_ERROR_MODULEMGR_OLD_LIB = 0x8002D013,
 SCE_KERNEL_ERROR_MODULEMGR_STARTED = 0x8002D014,
 SCE_KERNEL_ERROR_MODULEMGR_NOT_STARTED = 0x8002D015,
 SCE_KERNEL_ERROR_MODULEMGR_NOT_STOPPED = 0x8002D016,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_PROCESS_UID = 0x8002D017,
 SCE_KERNEL_ERROR_MODULEMGR_CANNOT_EXPORT_LIB_TO_SHARED = 0x8002D018,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_REL_INFO = 0x8002D019,
 SCE_KERNEL_ERROR_MODULEMGR_INVALID_REF_INFO = 0x8002D01A,
 SCE_KERNEL_ERROR_MODULEMGR_ELINK = 0x8002D01B,
 SCE_KERNEL_ERROR_MODULEMGR_NOENT = 0x8002D01C,
 SCE_KERNEL_ERROR_MODULEMGR_BUSY = 0x8002D01D,
 SCE_KERNEL_ERROR_MODULEMGR_NOEXEC = 0x8002D01E,
 SCE_KERNEL_ERROR_MODULEMGR_NAMETOOLONG = 0x8002D01F,
 SCE_KERNEL_ERROR_LIBRARYDB_NOENT = 0x8002D080,
 SCE_KERNEL_ERROR_LIBRARYDB_NO_LIB = 0x8002D081,
 SCE_KERNEL_ERROR_LIBRARYDB_NO_MOD = 0x8002D082,
 SCE_KERNEL_ERROR_PRELOAD_FAILED = 0x8002D0F0,
 SCE_KERNEL_ERROR_PRELOAD_LIBC_FAILED = 0x8002D0F1,
 SCE_KERNEL_ERROR_PRELOAD_FIOS2_FAILED = 0x8002D0F2,
 SCE_KERNEL_ERROR_AUTHFAIL = 0x8002F000,
 SCE_KERNEL_ERROR_NO_AUTH = 0x8002F001
} SceKernelErrorCode;
typedef struct {
 uint16_t size;
 uint16_t ver;
 uint16_t attr;
 uint16_t funcNum;
 uint32_t varNum;
 uint32_t unkNum;
 uint32_t nid;
 const char *name;
 const uint32_t *nids;
 const void **ents;
} SceLibraryEntryTable;
typedef struct SceKernelOpenPsId {
 char id[16];
} SceKernelOpenPsId;
typedef enum SceKernelProcessPrioritySystem {
 SCE_KERNEL_PROCESS_PRIORITY_SYSTEM_HIGH = 32,
 SCE_KERNEL_PROCESS_PRIORITY_SYSTEM_DEFAULT = 96,
 SCE_KERNEL_PROCESS_PRIORITY_SYSTEM_LOW = 159
} SceKernelProcessPrioritySystem;
typedef enum SceKernelProcessPriorityUser {
 SCE_KERNEL_PROCESS_PRIORITY_USER_HIGH = 64,
 SCE_KERNEL_PROCESS_PRIORITY_USER_DEFAULT = 96,
 SCE_KERNEL_PROCESS_PRIORITY_USER_LOW = 127
} SceKernelProcessPriorityUser;
typedef enum SceKernelPowerTickType {
 SCE_KERNEL_POWER_TICK_DEFAULT = 0,
 SCE_KERNEL_POWER_TICK_DISABLE_AUTO_SUSPEND = 1,
 SCE_KERNEL_POWER_TICK_DISABLE_OLED_OFF = 4,
 SCE_KERNEL_POWER_TICK_DISABLE_OLED_DIMMING = 6
} SceKernelPowerTickType;
typedef enum SceKernelMemBlockType {
 SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE = 0x0C208060,
 SCE_KERNEL_MEMBLOCK_TYPE_USER_RW = 0x0C20D060,
 SCE_KERNEL_MEMBLOCK_TYPE_USER_MAIN_PHYCONT_RW = 0x0C80D060,
 SCE_KERNEL_MEMBLOCK_TYPE_USER_MAIN_PHYCONT_NC_RW = 0x0D808060,
 SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW = 0x09408060
} SceKernelMemBlockType;
typedef struct SceKernelAllocMemBlockOpt {
 SceSize size;
 SceUInt32 attr;
 SceSize alignment;
 SceUInt32 uidBaseBlock;
 const char *strBaseBlockName;
 int flags;
 int reserved[10];
} SceKernelAllocMemBlockOpt;
typedef struct SceKernelFreeMemorySizeInfo {
 int size;
 int size_user;
 int size_cdram;
 int size_phycont;
} SceKernelFreeMemorySizeInfo;
typedef enum SceKernelModel {
 SCE_KERNEL_MODEL_VITA = 0x10000,
 SCE_KERNEL_MODEL_VITATV = 0x20000
} SceKernelModel;
typedef struct SceKernelMemBlockInfo {
 SceSize size;
 void *mappedBase;
 SceSize mappedSize;
 int memoryType;
 SceUInt32 access;
 SceKernelMemBlockType type;
} SceKernelMemBlockInfo;
typedef enum SceKernelMemoryAccessType {
 SCE_KERNEL_MEMORY_ACCESS_X = 0x01,
 SCE_KERNEL_MEMORY_ACCESS_W = 0x02,
 SCE_KERNEL_MEMORY_ACCESS_R = 0x04
} SceKernelMemoryAccessType;
typedef enum SceKernelMemoryType {
 SCE_KERNEL_MEMORY_TYPE_NORMAL_NC = 0x80,
 SCE_KERNEL_MEMORY_TYPE_NORMAL = 0xD0
} SceKernelMemoryType;
typedef enum SceHttpErrorCode {
 SCE_HTTP_ERROR_BEFORE_INIT = 0x80431001,
 SCE_HTTP_ERROR_ALREADY_INITED = 0x80431020,
 SCE_HTTP_ERROR_BUSY = 0x80431021,
 SCE_HTTP_ERROR_OUT_OF_MEMORY = 0x80431022,
 SCE_HTTP_ERROR_NOT_FOUND = 0x80431025,
 SCE_HTTP_ERROR_INVALID_VERSION = 0x8043106A,
 SCE_HTTP_ERROR_INVALID_ID = 0x80431100,
 SCE_HTTP_ERROR_OUT_OF_SIZE = 0x80431104,
 SCE_HTTP_ERROR_INVALID_VALUE = 0x804311FE,
 SCE_HTTP_ERROR_INVALID_URL = 0x80433060,
 SCE_HTTP_ERROR_UNKNOWN_SCHEME = 0x80431061,
 SCE_HTTP_ERROR_NETWORK = 0x80431063,
 SCE_HTTP_ERROR_BAD_RESPONSE = 0x80431064,
 SCE_HTTP_ERROR_BEFORE_SEND = 0x80431065,
 SCE_HTTP_ERROR_AFTER_SEND = 0x80431066,
 SCE_HTTP_ERROR_TIMEOUT = 0x80431068,
 SCE_HTTP_ERROR_UNKOWN_AUTH_TYPE = 0x80431069,
 SCE_HTTP_ERROR_UNKNOWN_METHOD = 0x8043106B,
 SCE_HTTP_ERROR_READ_BY_HEAD_METHOD = 0x8043106F,
 SCE_HTTP_ERROR_NOT_IN_COM = 0x80431070,
 SCE_HTTP_ERROR_NO_CONTENT_LENGTH = 0x80431071,
 SCE_HTTP_ERROR_CHUNK_ENC = 0x80431072,
 SCE_HTTP_ERROR_TOO_LARGE_RESPONSE_HEADER = 0x80431073,
 SCE_HTTP_ERROR_SSL = 0x80431075,
 SCE_HTTP_ERROR_ABORTED = 0x80431080,
 SCE_HTTP_ERROR_UNKNOWN = 0x80431081,
 SCE_HTTP_ERROR_PARSE_HTTP_NOT_FOUND = 0x80432025,
 SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE = 0x80432060,
 SCE_HTTP_ERROR_PARSE_HTTP_INVALID_VALUE = 0x804321FE,
 SCE_HTTP_ERROR_RESOLVER_EPACKET = 0x80436001,
 SCE_HTTP_ERROR_RESOLVER_ENODNS = 0x80436002,
 SCE_HTTP_ERROR_RESOLVER_ETIMEDOUT = 0x80436003,
 SCE_HTTP_ERROR_RESOLVER_ENOSUPPORT = 0x80436004,
 SCE_HTTP_ERROR_RESOLVER_EFORMAT = 0x80436005,
 SCE_HTTP_ERROR_RESOLVER_ESERVERFAILURE = 0x80436006,
 SCE_HTTP_ERROR_RESOLVER_ENOHOST = 0x80436007,
 SCE_HTTP_ERROR_RESOLVER_ENOTIMPLEMENTED = 0x80436008,
 SCE_HTTP_ERROR_RESOLVER_ESERVERREFUSED = 0x80436009,
 SCE_HTTP_ERROR_RESOLVER_ENORECORD = 0x8043600A
} SceHttpErrorCode;
typedef enum SceHttpsErrorCode {
 SCE_HTTPS_ERROR_CERT = 0x80435060,
 SCE_HTTPS_ERROR_HANDSHAKE = 0x80435061,
 SCE_HTTPS_ERROR_IO = 0x80435062,
 SCE_HTTPS_ERROR_INTERNAL = 0x80435063,
 SCE_HTTPS_ERROR_PROXY = 0x80435064
} SceHttpsErrorCode;
typedef enum SceHttpsSslErrorCode {
 SCE_HTTPS_ERROR_SSL_INTERNAL = (0x01U),
 SCE_HTTPS_ERROR_SSL_INVALID_CERT = (0x02U),
 SCE_HTTPS_ERROR_SSL_CN_CHECK = (0x04U),
 SCE_HTTPS_ERROR_SSL_NOT_AFTER_CHECK = (0x08U),
 SCE_HTTPS_ERROR_SSL_NOT_BEFORE_CHECK = (0x10U),
 SCE_HTTPS_ERROR_SSL_UNKNOWN_CA = (0x20U)
} SceHttpsSslErrorCode;
typedef enum SceHttpStatusCode {
 SCE_HTTP_STATUS_CODE_CONTINUE = 100,
 SCE_HTTP_STATUS_CODE_SWITCHING_PROTOCOLS = 101,
 SCE_HTTP_STATUS_CODE_PROCESSING = 102,
 SCE_HTTP_STATUS_CODE_OK = 200,
 SCE_HTTP_STATUS_CODE_CREATED = 201,
 SCE_HTTP_STATUS_CODE_ACCEPTED = 202,
 SCE_HTTP_STATUS_CODE_NON_AUTHORITATIVE_INFORMATION = 203,
 SCE_HTTP_STATUS_CODE_NO_CONTENT = 204,
 SCE_HTTP_STATUS_CODE_RESET_CONTENT = 205,
 SCE_HTTP_STATUS_CODE_PARTIAL_CONTENT = 206,
 SCE_HTTP_STATUS_CODE_MULTI_STATUS = 207,
 SCE_HTTP_STATUS_CODE_MULTIPLE_CHOICES = 300,
 SCE_HTTP_STATUS_CODE_MOVED_PERMANENTLY = 301,
 SCE_HTTP_STATUS_CODE_FOUND = 302,
 SCE_HTTP_STATUS_CODE_SEE_OTHER = 303,
 SCE_HTTP_STATUS_CODE_NOT_MODIFIED = 304,
 SCE_HTTP_STATUS_CODE_USE_PROXY = 305,
 SCE_HTTP_STATUS_CODE_TEMPORARY_REDIRECT = 307,
 SCE_HTTP_STATUS_CODE_BAD_REQUEST = 400,
 SCE_HTTP_STATUS_CODE_UNAUTHORIZED = 401,
 SCE_HTTP_STATUS_CODE_PAYMENT_REQUIRED = 402,
 SCE_HTTP_STATUS_CODE_FORBIDDDEN = 403,
 SCE_HTTP_STATUS_CODE_NOT_FOUND = 404,
 SCE_HTTP_STATUS_CODE_METHOD_NOT_ALLOWED = 405,
 SCE_HTTP_STATUS_CODE_NOT_ACCEPTABLE = 406,
 SCE_HTTP_STATUS_CODE_PROXY_AUTHENTICATION_REQUIRED = 407,
 SCE_HTTP_STATUS_CODE_REQUEST_TIME_OUT = 408,
 SCE_HTTP_STATUS_CODE_CONFLICT = 409,
 SCE_HTTP_STATUS_CODE_GONE = 410,
 SCE_HTTP_STATUS_CODE_LENGTH_REQUIRED = 411,
 SCE_HTTP_STATUS_CODE_PRECONDITION_FAILED = 412,
 SCE_HTTP_STATUS_CODE_REQUEST_ENTITY_TOO_LARGE = 413,
 SCE_HTTP_STATUS_CODE_REQUEST_URI_TOO_LARGE = 414,
 SCE_HTTP_STATUS_CODE_UNSUPPORTED_MEDIA_TYPE = 415,
 SCE_HTTP_STATUS_CODE_REQUEST_RANGE_NOT_SATISFIBLE = 416,
 SCE_HTTP_STATUS_CODE_EXPECTATION_FAILED = 417,
 SCE_HTTP_STATUS_CODE_UNPROCESSABLE_ENTITY = 422,
 SCE_HTTP_STATUS_CODE_LOCKED = 423,
 SCE_HTTP_STATUS_CODE_FAILED_DEPENDENCY = 424,
 SCE_HTTP_STATUS_CODE_UPGRADE_REQUIRED = 426,
 SCE_HTTP_STATUS_CODE_INTERNAL_SERVER_ERROR = 500,
 SCE_HTTP_STATUS_CODE_NOT_IMPLEMENTED = 501,
 SCE_HTTP_STATUS_CODE_BAD_GATEWAY = 502,
 SCE_HTTP_STATUS_CODE_SERVICE_UNAVAILABLE = 503,
 SCE_HTTP_STATUS_CODE_GATEWAY_TIME_OUT = 504,
 SCE_HTTP_STATUS_CODE_HTTP_VERSION_NOT_SUPPORTED = 505,
 SCE_HTTP_STATUS_CODE_INSUFFICIENT_STORAGE = 507
} SceHttpStatuscode;
typedef enum SceHttpUriBuildType {
 SCE_HTTP_URI_BUILD_WITH_SCHEME = 0x01,
 SCE_HTTP_URI_BUILD_WITH_HOSTNAME = 0x02,
 SCE_HTTP_URI_BUILD_WITH_PORT = 0x04,
 SCE_HTTP_URI_BUILD_WITH_PATH = 0x08,
 SCE_HTTP_URI_BUILD_WITH_USERNAME = 0x10,
 SCE_HTTP_URI_BUILD_WITH_PASSWORD = 0x20,
 SCE_HTTP_URI_BUILD_WITH_QUERY = 0x40,
 SCE_HTTP_URI_BUILD_WITH_FRAGMENT = 0x80,
 SCE_HTTP_URI_BUILD_WITH_ALL = 0xFFFF
} SceHttpUriBuildType;
typedef enum SceHttpsFlag {
 SCE_HTTPS_FLAG_SERVER_VERIFY = (0x01U),
 SCE_HTTPS_FLAG_CLIENT_VERIFY = (0x02U),
 SCE_HTTPS_FLAG_CN_CHECK = (0x04U),
 SCE_HTTPS_FLAG_NOT_AFTER_CHECK = (0x08U),
 SCE_HTTPS_FLAG_NOT_BEFORE_CHECK = (0x10U),
 SCE_HTTPS_FLAG_KNOWN_CA_CHECK = (0x20U)
} SceHttpsFlag;
typedef struct SceHttpMemoryPoolStats {
 unsigned int poolSize;
 unsigned int maxInuseSize;
 unsigned int currentInuseSize;
 int reserved;
} SceHttpMemoryPoolStats;
typedef enum SceHttpMethods {
 SCE_HTTP_METHOD_GET,
 SCE_HTTP_METHOD_POST,
 SCE_HTTP_METHOD_HEAD,
 SCE_HTTP_METHOD_OPTIONS,
 SCE_HTTP_METHOD_PUT,
 SCE_HTTP_METHOD_DELETE,
 SCE_HTTP_METHOD_TRACE,
 SCE_HTTP_METHOD_CONNECT
} SceHttpMethods;
typedef struct SceHttpUriElement {
 int opaque;
 char *scheme;
 char *username;
 char *password;
 char *hostname;
 char *path;
 char *query;
 char *fragment;
 unsigned short port;
 unsigned char reserved[10];
} SceHttpUriElement;
typedef enum SceHttpVersion {
 SCE_HTTP_VERSION_1_0 = 1,
 SCE_HTTP_VERSION_1_1
} SceHttpHttpVersion;
typedef enum SceHttpProxyMode {
 SCE_HTTP_PROXY_AUTO,
 SCE_HTTP_PROXY_MANUAL
} SceHttpProxyMode;
typedef enum SceHttpAddHeaderMode {
 SCE_HTTP_HEADER_OVERWRITE,
 SCE_HTTP_HEADER_ADD
} SceHttpAddHeaderMode;
typedef enum SceHttpAuthType {
 SCE_HTTP_AUTH_BASIC,
 SCE_HTTP_AUTH_DIGEST,
 SCE_HTTP_AUTH_RESERVED0,
 SCE_HTTP_AUTH_RESERVED1,
 SCE_HTTP_AUTH_RESERVED2
} SceHttpAuthType;
typedef enum SceHttpSslVersion {
 SCE_HTTPS_SSLV23,
 SCE_HTTPS_SSLV2,
 SCE_HTTPS_SSLV3,
 SCE_HTTPS_TLSV1
} SceHttpSslVersion;
typedef struct SceHttpsData {
 char *ptr;
 unsigned int size;
} SceHttpsData;
typedef struct SceHttpsCaList {
 void **caCerts;
 int caNum;
} SceHttpsCaList;
typedef int (*SceHttpAuthInfoCallback)(
 int request,
 SceHttpAuthType authType,
 const char *realm,
 char *username,
 char *password,
 int needEntity,
 unsigned char **entityBody,
 unsigned int *entitySize,
 int *save,
 void *userArg);
typedef int (*SceHttpRedirectCallback)(
 int request,
 int statusCode,
 int *method,
 const char *location,
 void *userArg);
typedef int (*SceHttpsCallback)(
 unsigned int verifyEsrr,
 void * const sslCert[],
 int certNum,
 void *userArg);
typedef int (*SceHttpCookieRecvCallback)(
 int request,
 const char *url,
 const char *cookieHeader,
 unsigned int headerLen,
 void *userArg);
typedef int (*SceHttpCookieSendCallback)(
 int request,
 const char *url,
 const char *cookieHeader,
 void *userArg);
typedef enum SceNetCtlInfoType {
 SCE_NETCTL_INFO_GET_CNF_NAME = 1,
 SCE_NETCTL_INFO_GET_DEVICE,
 SCE_NETCTL_INFO_GET_ETHER_ADDR,
 SCE_NETCTL_INFO_GET_MTU,
 SCE_NETCTL_INFO_GET_LINK,
 SCE_NETCTL_INFO_GET_BSSID,
 SCE_NETCTL_INFO_GET_SSID,
 SCE_NETCTL_INFO_GET_WIFI_SECURITY,
 SCE_NETCTL_INFO_GET_RSSI_DBM,
 SCE_NETCTL_INFO_GET_RSSI_PERCENTAGE,
 SCE_NETCTL_INFO_GET_CHANNEL,
 SCE_NETCTL_INFO_GET_IP_CONFIG,
 SCE_NETCTL_INFO_GET_DHCP_HOSTNAME,
 SCE_NETCTL_INFO_GET_PPPOE_AUTH_NAME,
 SCE_NETCTL_INFO_GET_IP_ADDRESS,
 SCE_NETCTL_INFO_GET_NETMASK,
 SCE_NETCTL_INFO_GET_DEFAULT_ROUTE,
 SCE_NETCTL_INFO_GET_PRIMARY_DNS,
 SCE_NETCTL_INFO_GET_SECONDARY_DNS,
 SCE_NETCTL_INFO_GET_HTTP_PROXY_CONFIG,
 SCE_NETCTL_INFO_GET_HTTP_PROXY_SERVER,
 SCE_NETCTL_INFO_GET_HTTP_PROXY_PORT,
} SceNetCtlInfoType;
typedef enum SceNetCtlState {
 SCE_NETCTL_STATE_DISCONNECTED,
 SCE_NETCTL_STATE_CONNECTING,
 SCE_NETCTL_STATE_FINALIZING,
 SCE_NETCTL_STATE_CONNECTED
} SceNetCtlState;
typedef void *(*SceNetCtlCallback)(
 int event_type,
 void *arg);
typedef union SceNetCtlInfo {
 char cnf_name[64 + 1];
 unsigned int device;
 SceNetEtherAddr ether_addr;
 unsigned int mtu;
 unsigned int link;
 SceNetEtherAddr bssid;
 char ssid[32 + 1];
 unsigned int wifi_security;
 unsigned int rssi_dbm;
 unsigned int rssi_percentage;
 unsigned int channel;
 unsigned int ip_config;
 char dhcp_hostname[256];
 char pppoe_auth_name[128];
 char ip_address[16];
 char netmask[16];
 char default_route[16];
 char primary_dns[16];
 char secondary_dns[16];
 unsigned int http_proxy_config;
 char http_proxy_server[256];
 unsigned int http_proxy_port;
} SceNetCtlInfo;
typedef struct SceNetCtlNatInfo {
 unsigned int size;
 int stun_status;
 int nat_type;
 SceNetInAddr mapped_addr;
} SceNetCtlNatInfo;
typedef struct SceNetCtlAdhocPeerInfo {
 struct SceNetCtlAdhocPeerInfo *next;
 SceNetInAddr inet_addr;
} SceNetCtlAdhocPeerInfo;
typedef int ptrdiff_t;
typedef unsigned int size_t;
typedef unsigned int wchar_t;
typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef long _off_t;
typedef short __dev_t;
typedef unsigned short __uid_t;
typedef unsigned short __gid_t;
typedef long long _off64_t;
typedef long _fpos_t;
typedef signed int _ssize_t;
typedef unsigned int wint_t;
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;
typedef _LOCK_RECURSIVE_T _flock_t;
typedef void *_iconv_t;
typedef unsigned long __ULong;
typedef struct __sFILE __FILE;
typedef unsigned int size_t;
typedef unsigned int wchar_t;
typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef long _off_t;
typedef short __dev_t;
typedef unsigned short __uid_t;
typedef unsigned short __gid_t;
typedef long long _off64_t;
typedef long _fpos_t;
typedef signed int _ssize_t;
typedef unsigned int wint_t;
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;
typedef _LOCK_RECURSIVE_T _flock_t;
typedef void *_iconv_t;
typedef unsigned long __ULong;
typedef struct __sFILE __FILE;
typedef struct
{
  int quot;
  int rem;
} div_t;
typedef struct
{
  long quot;
  long rem;
} ldiv_t;
typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;
typedef int (*__compar_fn_t) (const void *, const void *);
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
typedef unsigned int size_t;
typedef int ptrdiff_t;
typedef unsigned int wchar_t;
typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
typedef __builtin_va_list __gnuc_va_list;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef long _off_t;
typedef short __dev_t;
typedef unsigned short __uid_t;
typedef unsigned short __gid_t;
typedef long long _off64_t;
typedef long _fpos_t;
typedef signed int _ssize_t;
typedef unsigned int wint_t;
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;
typedef _LOCK_RECURSIVE_T _flock_t;
typedef void *_iconv_t;
typedef unsigned long __ULong;
typedef struct __sFILE __FILE;
typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;
typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;
typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;
typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;
typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
typedef long int __off_t;
typedef int __pid_t;
typedef long long int __loff_t;
typedef long __suseconds_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long clock_t;
typedef long time_t;
typedef long daddr_t;
typedef char * caddr_t;
typedef unsigned short ino_t;
typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;
typedef int pid_t;
typedef long key_t;
typedef _ssize_t ssize_t;
typedef unsigned int mode_t ;
typedef unsigned short nlink_t;
typedef long fd_mask;
typedef struct _types_fd_set {
 fd_mask fds_bits[(((256)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
typedef unsigned long clockid_t;
typedef unsigned long timer_t;
typedef unsigned long useconds_t;
typedef __suseconds_t suseconds_t;
typedef __int64_t sbintime_t;
typedef __FILE FILE;
typedef _fpos_t fpos_t;
typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);
typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);
typedef int cookie_close_function_t(void *__cookie);
typedef struct
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
