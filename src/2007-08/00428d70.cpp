// from server: 49% by colin
struct RBX_Log;
struct MainLogManager;

struct LogManager {
    RBX_Log* log;
    static bool logsEnabled;
protected:
    unsigned long threadID;
    void* name_repr[7];
    static MainLogManager* mainLogManager;
public:
    virtual ~LogManager();
    virtual void getLogFileName();
protected:
    LogManager(const char* name);
};

struct MainLogManager : public LogManager {
    void* crashReporter;
    void* fastLogChannels[4];
    const char* crashExtention;
    const char* crashEventExtention;
    MainLogManager(const char* productName, const char* crashExtention, const char* crashEventExtention);
    ~MainLogManager();
};

extern "C" {
    unsigned long __stdcall GetCurrentThreadId();
}

extern void* __cdecl sub_501F30();
extern void __cdecl sub_501FE0(void*);
extern void __cdecl sub_62FC62(void*);
extern void __cdecl sub_630A1E();
extern void __cdecl sub_428100(void*, void*);
extern void __cdecl sub_4283F0(void*);

extern void* g_8b5188;
extern int g_8c30f0;
extern int g_8bb8e8;

extern void* g_78a170;
extern void* g_78a164;
extern void* g_78a09c;
extern void* g_78a090;

extern void* g_77e698;
extern void* g_77e6a8;
extern void* g_77e6ac;

void* g_string_holder[8];

MainLogManager::MainLogManager(const char* productName, const char* crashExtention, const char* crashEventExtention)
    : LogManager(productName)
{
    this->crashExtention = crashExtention;
    this->crashEventExtention = crashEventExtention;
    this->crashReporter = 0;
    this->fastLogChannels[0] = 0;
    this->fastLogChannels[1] = 0;
    this->fastLogChannels[2] = 0;
    this->fastLogChannels[3] = 0;

    void* h = sub_501F30();
    if (h) {
        sub_501FE0(g_string_holder);
        void* p = sub_501F30();
        if (p) {
            void** vt = *(void***)p;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
            fn(p, 1);
        }
        if (g_8c30f0 == 2) {
            void* s = ((void* (*)(const char*))g_77e698)("error\\");
            void* r = ((void* (*)(void*))g_77e6a8)(g_string_holder);
            sub_428100(s, r);
        } else {
            void* s = ((void* (*)(const char*))g_77e698)("archive\\");
            void* r = ((void* (*)(void*))g_77e6a8)(g_string_holder);
            sub_428100(s, r);
        }
        ((void (*)(void*))g_77e6ac)(g_string_holder);
        ((void (*)(void*))g_77e6ac)(g_string_holder);
    }

    g_8bb8e8 = 0;
    ((void (*)(void*))g_77e6ac)((char*)this + 0x30);
    sub_62FC62(*(void**)((char*)this + 0x2c));
    sub_4283F0((char*)this + 4);
}
