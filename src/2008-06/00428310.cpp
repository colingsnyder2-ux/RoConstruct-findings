// from server: 63% by king_originala
struct String;
struct BufferString;

extern void (__thiscall *p_803f10)(BufferString *, const char *);
extern int (__thiscall *p_802fe0)(const BufferString *);
extern char *(__thiscall *p_803384)(BufferString *, int);
extern void (__thiscall *p_803380)(BufferString *, int);
extern const char *(__thiscall *p_803ee0)(const BufferString *);
extern void (__thiscall *p_803f14)(BufferString *);
extern const char *(__thiscall *p_802464)(const String *);
extern void (__thiscall *p_802458)(String *, const char *);
extern void (__thiscall *p_802468)(String *);

extern "C" {
    int __stdcall PathRemoveFileSpecA(char *);
    void __stdcall PathStripPathA(char *);
    int __stdcall PathAppendA(char *, const char *);
    int __stdcall PathFileExistsA(const char *);
    int __stdcall MoveFileA(const char *, const char *);
    int __stdcall DeleteFileA(const char *);
    int __cdecl _mkdir(const char *);
    unsigned int __cdecl strlen(const char *);
}

struct String {
    char storage[28];
    String(const char *);
    ~String();
    const char *c_str() const;
};

struct BufferString {
    char *data;
    BufferString(const char *);
    ~BufferString();
    int length() const;
    char *buffer(int);
    void release(int);
    const char *text() const;
};

inline String::String(const char *s) {
    p_802458(this, s);
}

inline String::~String() {
    p_802468(this);
}

inline const char *String::c_str() const {
    return p_802464(this);
}

inline BufferString::BufferString(const char *s) {
    p_803f10(this, s);
}

inline BufferString::~BufferString() {
    p_803f14(this);
}

inline int BufferString::length() const {
    return p_802fe0(this);
}

inline char *BufferString::buffer(int n) {
    return p_803384(this, n);
}

inline void BufferString::release(int n) {
    p_803380(this, n);
}

inline const char *BufferString::text() const {
    return p_803ee0(this);
}

String __cdecl f_00428310(const char *name, String suffix)
{
    BufferString destination(name);
    PathRemoveFileSpecA(destination.buffer(destination.length()));
    destination.release(-1);

    const char *tail = suffix.c_str();
    unsigned int count = strlen(tail);
    PathAppendA(destination.buffer(count + destination.length() + 1), tail);
    destination.release(-1);

    if (!PathFileExistsA(destination.text()))
        _mkdir(destination.text());

    BufferString filename(name);
    PathStripPathA(filename.buffer(filename.length()));
    filename.release(-1);

    tail = filename.text();
    count = strlen(tail);
    PathAppendA(destination.buffer(count + destination.length() + 1), tail);
    destination.release(-1);

    if (!MoveFileA(name, destination.text()))
        DeleteFileA(name);

    return String(destination.text());
}
