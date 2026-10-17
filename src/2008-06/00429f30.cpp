// from server: 23% by colin
struct String {
    unsigned char data[28];
    const char *c_str() const;
    ~String();
};

struct Path {
    unsigned char data[28];
    Path(const char *);
};

struct ThreadLogManager;

extern "C" {
    void *__stdcall FindFirstFileA(const char *, void *);
    int __stdcall FindNextFileA(void *, void *);
    int __stdcall DeleteFileA(const char *);
    char *__stdcall PathAddBackslashA(char *);
    int __stdcall PathAppendA(char *, const char *);
}

extern void (__thiscall *string_assign)(String *, const char *);
extern void (__thiscall *string_append)(String *, const char *);
extern void (__thiscall *string_insert)(String *, unsigned int, const char *);
extern void (__thiscall *string_destroy)(String *);
extern const char *(__thiscall *string_c_str)(const String *);
extern unsigned int (__thiscall *string_size)(const String *);
extern void (__thiscall *path_construct)(Path *, const char *);
extern void (__thiscall *path_destroy)(Path *);
extern void (__thiscall *path_append)(Path *, const char *);
extern const char *(__thiscall *path_c_str)(const Path *);

extern void *__stdcall GetCurrentThreadId();
extern void *__stdcall GetCurrentProcess();
extern void *__stdcall GetCurrentThread();

struct LogManager {
    void *log;
    unsigned int threadID;
    String name;
    LogManager(const char *);
    virtual ~LogManager();
    virtual String getLogFileName();
};

struct ThreadLogManager : LogManager {
    ThreadLogManager(const char *);
    virtual ~ThreadLogManager();
    virtual String getLogFileName();
};

extern ThreadLogManager *mainLogManager;

ThreadLogManager::ThreadLogManager(const char *n)
    : LogManager(n)
{
}

String ThreadLogManager::getLogFileName()
{
    String fileName = mainLogManager->getLogFileName();
    String id;
    char buf[64];
    char *p = buf;
    *p++ = '_';
    const char *nm = name.c_str();
    while (*nm)
        *p++ = *nm++;
    *p++ = '_';
    unsigned int tid = threadID;
    char tmp[16];
    int i = 0;
    if (tid != 0) {
        tmp[i++] = '0';
    } else {
        while (tid) {
            tmp[i++] = (char)('0' + tid % 10);
            tid /= 10;
        }
    }
    while (i)
        *p++ = tmp[--i];
    *p = 0;
    string_assign(&id, buf);
    unsigned int sz = string_size(&fileName);
    string_insert(&fileName, sz - 4, id.c_str());
    string_destroy(&id);
    return fileName;
}
