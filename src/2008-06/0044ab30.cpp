// from server: 100% by king_originala
// roc 2008-06 0044ab30  unit: CRbxPlayDocTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ab30
//
// 0044ab30  64a100000000         mov eax, dword ptr fs:[0]
// 0044ab36  6aff                 push -1
// 0044ab38  6881117c00           push 0x7c1181
// 0044ab3d  50                   push eax
// 0044ab3e  64892500000000       mov dword ptr fs:[0], esp
// 0044ab45  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 0044ab4b  83ec6c               sub esp, 0x6c
// 0044ab4e  85c9                 test ecx, ecx
// 0044ab50  746e                 je 0x44abc0
// 0044ab52  8b01                 mov eax, dword ptr [ecx]
// 0044ab54  8b5004               mov edx, dword ptr [eax + 4]
// 0044ab57  ffd2                 call edx
// 0044ab59  50                   push eax
// 0044ab5a  8d4c2404             lea ecx, [esp + 4]
// 0044ab5e  ff1558248000         call dword ptr [0x802458]
// 0044ab64  8d0424               lea eax, [esp]
// 0044ab67  50                   push eax
// 0044ab68  8d4c2420             lea ecx, [esp + 0x20]
// 0044ab6c  c744247800000000     mov dword ptr [esp + 0x78], 0
// 0044ab74  e8d7f1fbff           call 0x409d50
// 0044ab79  8d0c24               lea ecx, [esp]
// 0044ab7c  c644247402           mov byte ptr [esp + 0x74], 2
// 0044ab81  ff1568248000         call dword ptr [0x802468]
// 0044ab87  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 0044ab8d  c705f4dc960000000000 mov dword ptr [0x96dcf4], 0
// 0044ab97  85c9                 test ecx, ecx
// 0044ab99  7408                 je 0x44aba3
// 0044ab9b  8b11                 mov edx, dword ptr [ecx]
// 0044ab9d  8b02                 mov eax, dword ptr [edx]
// 0044ab9f  6a01                 push 1
// 0044aba1  ffd0                 call eax
// 0044aba3  8d4c241c             lea ecx, [esp + 0x1c]
// 0044aba7  51                   push ecx
// 0044aba8  8d4c2448             lea ecx, [esp + 0x48]
// 0044abac  e8dff2fbff           call 0x409e90
// 0044abb1  68c81b8d00           push 0x8d1bc8
// 0044abb6  8d542448             lea edx, [esp + 0x48]
// 0044abba  52                   push edx
// 0044abbb  e8cc692500           call 0x6a158c
// 0044abc0  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0044abc4  64890d00000000       mov dword ptr fs:[0], ecx
// 0044abcb  83c478               add esp, 0x78
// 0044abce  c3                   ret 

struct String
{
    char storage[28];
    String(const char *);
    ~String();
};

struct Error
{
    char storage[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Source
{
    virtual void destroy(unsigned int) = 0;
    virtual const char *message() = 0;
};

extern Source *globalSource;

extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);

inline String::String(const char *text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

void func_0044ab30()
{
    if (globalSource)
    {
        Error error(String(globalSource->message()));
        Source *source = globalSource;
        globalSource = 0;
        if (source)
            source->destroy(1);
        throw error;
    }
}
