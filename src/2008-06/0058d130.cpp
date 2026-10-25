// from server: 100% by colin
// roc 2008-06 0058d130  unit: RBX::ChangeHistoryService  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d130
//
// 0058d130  6aff                 push -1
// 0058d132  68d3607c00           push 0x7c60d3
// 0058d137  64a100000000         mov eax, dword ptr fs:[0]
// 0058d13d  50                   push eax
// 0058d13e  64892500000000       mov dword ptr fs:[0], esp
// 0058d145  83ec20               sub esp, 0x20
// 0058d148  56                   push esi
// 0058d149  8bf1                 mov esi, ecx
// 0058d14b  c744240400000000     mov dword ptr [esp + 4], 0
// 0058d153  e858f9ffff           call 0x58cab0
// 0058d158  8d4c2408             lea ecx, [esp + 8]
// 0058d15c  ff1560248000         call dword ptr [0x802460]
// 0058d162  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058d165  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0058d16d  ff15fc248000         call dword ptr [0x8024fc]
// 0058d173  3c3c                 cmp al, 0x3c
// 0058d175  7421                 je 0x58d198
// 0058d177  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058d17a  ff15f8248000         call dword ptr [0x8024f8]
// 0058d180  50                   push eax
// 0058d181  8d4c240c             lea ecx, [esp + 0xc]
// 0058d185  ff15b4248000         call dword ptr [0x8024b4]
// 0058d18b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058d18e  ff15fc248000         call dword ptr [0x8024fc]
// 0058d194  3c3c                 cmp al, 0x3c
// 0058d196  75df                 jne 0x58d177
// 0058d198  807c243800           cmp byte ptr [esp + 0x38], 0
// 0058d19d  7423                 je 0x58d1c2
// 0058d19f  83ec1c               sub esp, 0x1c
// 0058d1a2  8d442424             lea eax, [esp + 0x24]
// 0058d1a6  8bcc                 mov ecx, esp
// 0058d1a8  89642454             mov dword ptr [esp + 0x54], esp
// 0058d1ac  50                   push eax
// 0058d1ad  ff155c248000         call dword ptr [0x80245c]
// 0058d1b3  8b742450             mov esi, dword ptr [esp + 0x50]
// 0058d1b7  56                   push esi
// 0058d1b8  e893fbffff           call 0x58cd50
// 0058d1bd  83c420               add esp, 0x20
// 0058d1c0  eb11                 jmp 0x58d1d3
// 0058d1c2  8b742434             mov esi, dword ptr [esp + 0x34]
// 0058d1c6  8d4c2408             lea ecx, [esp + 8]
// 0058d1ca  51                   push ecx
// 0058d1cb  8bce                 mov ecx, esi
// 0058d1cd  ff155c248000         call dword ptr [0x80245c]
// 0058d1d3  8d4c2408             lea ecx, [esp + 8]
// 0058d1d7  c744240401000000     mov dword ptr [esp + 4], 1
// 0058d1df  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0058d1e4  ff1568248000         call dword ptr [0x802468]
// 0058d1ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058d1ee  8bc6                 mov eax, esi
// 0058d1f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d1f7  5e                   pop esi
// 0058d1f8  83c42c               add esp, 0x2c
// 0058d1fb  c20800               ret 8

struct String;

typedef void (__thiscall *StringCtor)(String*);
typedef void (__thiscall *StringCopyCtor)(String*, const String&);
typedef void (__thiscall *StringDtor)(String*);
typedef String& (__thiscall *StringAppend)(String*, int);

extern StringCtor string_ctor;
extern StringDtor string_dtor;
extern StringAppend string_append;

struct String {
    char storage[28];
    String();
    __declspec(dllimport) String(const String&);
    ~String();
    String& operator+=(int);
};

inline String::String() {
    string_ctor(this);
}

inline String::~String() {
    string_dtor(this);
}

inline String& String::operator+=(int c) {
    return string_append(this, c);
}

struct StreamBuf {
    int sbumpc();
    int sgetc();
};

typedef int (__thiscall *StreamGet)(StreamBuf*);
extern StreamGet stream_sbumpc;
extern StreamGet stream_sgetc;

inline int StreamBuf::sbumpc() {
    return stream_sbumpc(this);
}

inline int StreamBuf::sgetc() {
    return stream_sgetc(this);
}

String __cdecl decode(String);

struct Verb {
    char pad[4];
    StreamBuf* stream;
    void skipWhitespace();
    String readText(bool);
};

String Verb::readText(bool escaped) {
    skipWhitespace();
    String text;
    while ((char)stream->sgetc() != '<')
        text += stream->sbumpc();
    if (escaped)
        return decode(text);
    return text;
}
