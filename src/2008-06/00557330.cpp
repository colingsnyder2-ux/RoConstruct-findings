// from server: 97% by king_originala
typedef void *HANDLE;
typedef unsigned long DWORD;

extern "C" {
extern long (__stdcall *InterlockedCompareExchange)(volatile long *, long, long);
extern long (__stdcall *InterlockedExchange)(volatile long *, long);
extern DWORD (__stdcall *GetCurrentProcessId)();
extern HANDLE (__stdcall *CreateMutexA)(void *, int, const char *);
extern DWORD (__stdcall *WaitForSingleObject)(HANDLE, DWORD);
extern int (__stdcall *ReleaseMutex)(HANDLE);
extern int (__stdcall *CloseHandle)(HANDLE);
}

struct Stream;
struct Output {};
struct Format;

struct String {
    unsigned long allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned long length;
    unsigned long capacity;
};

extern void (__thiscall *ConstructStream)(Stream *, int, int);
extern void (__thiscall *DestroyStream)(Stream *);
extern void (__thiscall *DestroyString)(String *);
extern String *(__thiscall *StreamString)(Stream *, String *);
extern Output &(__thiscall *WriteFormat)(Output *, Format &(__cdecl *)(Format &));
extern Output &(__thiscall *WritePointer)(Output *, const void *);
extern Output &(__thiscall *WriteUnsigned)(Output *, unsigned long);

struct Stream {
    char storage[128];
    Stream(int mode);
    ~Stream();
};

extern Output &__cdecl WriteText(Stream &, const char *);
extern Format &__cdecl SetFormat(Format &);

inline Stream::Stream(int mode) {
    ConstructStream(this, mode, 1);
}

inline Stream::~Stream() {
    DestroyStream(this);
}

void __cdecl runOnce(void (__cdecl *callback)(), volatile long *volatile flag) {
    long (__stdcall *compare)(volatile long *, long, long) =
        InterlockedCompareExchange;
    volatile long *savedFlag = flag;

    flag = savedFlag;
    if (compare(flag, 1, 1) == 0) {
        Stream stream(2);

        WriteUnsigned(
            &WritePointer(
                &WriteFormat(
                    &WriteText(stream, "2AC1A572DB6944B0A65C38C4140AF2F4"),
                    SetFormat),
                const_cast<const long *>(savedFlag)),
            GetCurrentProcessId());

        String text;
        String *value = StreamString(&stream, &text);
        const char *name;
        if (value->capacity >= 16)
            name = value->storage.pointer;
        else
            name = value->storage.buffer;

        HANDLE mutex = CreateMutexA(0, 0, name);
        DestroyString(&text);
        WaitForSingleObject(mutex, ~0UL);

        flag = savedFlag;
        if (compare(flag, 1, 1) == 0) {
            try {
                callback();
                InterlockedExchange(savedFlag, 1);
                ReleaseMutex(mutex);
                CloseHandle(mutex);
            } catch (...) {
                ReleaseMutex(mutex);
                CloseHandle(mutex);
                throw;
            }
        } else {
            ReleaseMutex(mutex);
            CloseHandle(mutex);
        }
    }
}
