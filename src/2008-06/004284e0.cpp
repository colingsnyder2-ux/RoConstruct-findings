// from server: 82% by king_originala
struct String;

extern int (__thiscall *stringLength)(const String*);
extern char* (__thiscall *stringBuffer)(String*, int);
extern void (__thiscall *stringRelease)(String*, int);
extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *stringDestroy)(String*);

extern "C" char* (__stdcall *PathAddBackslashA)(char*);
extern "C" void* (__stdcall *FindFirstFileA)(const char*, void*);
extern "C" int (__stdcall *FindNextFileA)(void*, void*);

struct String {
    char* data;
    __declspec(nothrow) ~String();
    int length() const;
    char* buffer(int);
    void release(int);
    __declspec(nothrow) const char* c_str() const;
};

inline String::~String() {
    stringDestroy(this);
}

inline int String::length() const {
    return stringLength(this);
}

inline char* String::buffer(int n) {
    return stringBuffer(this, n);
}

inline void String::release(int n) {
    stringRelease(this, n);
}

inline const char* String::c_str() const {
    return stringData(this);
}

extern String __cdecl concatenate(const String&, const char*);

struct PathSource {
    String get();
};

struct MainLogManager {
    unsigned long prefix;
    PathSource source;
    bool hasDump();
};

bool MainLogManager::hasDump() {
    String path = source.get();
    PathAddBackslashA(path.buffer(path.length() + 1));
    path.release(-1);

    struct FindData {
        unsigned long attributes;
        unsigned char remaining[316];
    } data;

    void* handle = FindFirstFileA(concatenate(path, "*.dmp").c_str(), &data);
    if (handle != reinterpret_cast<void*>(-1)) {
        int (__stdcall *next)(void*, void*) = FindNextFileA;
        do {
            if (!(data.attributes & 0x10))
                return true;
        } while (next(handle, &data));
    }
    return false;
}
