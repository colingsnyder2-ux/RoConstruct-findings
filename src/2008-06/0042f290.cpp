// from server: 69% by king_originala
// roc 2008-06 0042f290  unit: CPatchedControlComboBox  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042f290
//
// 0042f290  6aff                 push -1
// 0042f292  68c9107c00           push 0x7c10c9
// 0042f297  64a100000000         mov eax, dword ptr fs:[0]
// 0042f29d  50                   push eax
// 0042f29e  64892500000000       mov dword ptr fs:[0], esp
// 0042f2a5  51                   push ecx
// 0042f2a6  53                   push ebx
// 0042f2a7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0042f2ab  55                   push ebp
// 0042f2ac  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0042f2b0  8d4c2408             lea ecx, [esp + 8]
// 0042f2b4  ff15043f8000         call dword ptr [0x803f04]
// 0042f2ba  56                   push esi
// 0042f2bb  57                   push edi
// 0042f2bc  8d442410             lea eax, [esp + 0x10]
// 0042f2c0  685c0c8100           push 0x810c5c
// 0042f2c5  50                   push eax
// 0042f2c6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0042f2ce  ff15dc3e8000         call dword ptr [0x803edc]
// 0042f2d4  83c410               add esp, 0x10
// 0042f2d7  6a00                 push 0
// 0042f2d9  8d4c240c             lea ecx, [esp + 0xc]
// 0042f2dd  ff15bc338000         call dword ptr [0x8033bc]
// 0042f2e3  8bc8                 mov ecx, eax
// 0042f2e5  ff15e03e8000         call dword ptr [0x803ee0]
// 0042f2eb  53                   push ebx
// 0042f2ec  55                   push ebp
// 0042f2ed  8bc8                 mov ecx, eax
// 0042f2ef  e8acfdffff           call 0x42f0a0
// 0042f2f4  83c40c               add esp, 0xc
// 0042f2f7  84c0                 test al, al
// 0042f2f9  7467                 je 0x42f362
// 0042f2fb  56                   push esi
// 0042f2fc  57                   push edi
// 0042f2fd  8d4c2410             lea ecx, [esp + 0x10]
// 0042f301  68500c8100           push 0x810c50
// 0042f306  51                   push ecx
// 0042f307  ff15dc3e8000         call dword ptr [0x803edc]
// 0042f30d  83c410               add esp, 0x10
// 0042f310  6a01                 push 1
// 0042f312  8d4c240c             lea ecx, [esp + 0xc]
// 0042f316  ff15bc338000         call dword ptr [0x8033bc]
// 0042f31c  8bc8                 mov ecx, eax
// 0042f31e  ff15e03e8000         call dword ptr [0x803ee0]
// 0042f324  53                   push ebx
// 0042f325  55                   push ebp
// 0042f326  8bc8                 mov ecx, eax
// 0042f328  e873fdffff           call 0x42f0a0
// 0042f32d  56                   push esi
// 0042f32e  57                   push edi
// 0042f32f  8d54241c             lea edx, [esp + 0x1c]
// 0042f333  68440c8100           push 0x810c44
// 0042f338  52                   push edx
// 0042f339  ff15dc3e8000         call dword ptr [0x803edc]
// 0042f33f  83c41c               add esp, 0x1c
// 0042f342  6a02                 push 2
// 0042f344  8d4c240c             lea ecx, [esp + 0xc]
// 0042f348  ff15bc338000         call dword ptr [0x8033bc]
// 0042f34e  8bc8                 mov ecx, eax
// 0042f350  ff15e03e8000         call dword ptr [0x803ee0]
// 0042f356  53                   push ebx
// 0042f357  55                   push ebp
// 0042f358  8bc8                 mov ecx, eax
// 0042f35a  e841fdffff           call 0x42f0a0
// 0042f35f  83c40c               add esp, 0xc
// 0042f362  8d4c2408             lea ecx, [esp + 8]
// 0042f366  ff15143f8000         call dword ptr [0x803f14]
// 0042f36c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042f370  5d                   pop ebp
// 0042f371  5b                   pop ebx
// 0042f372  64890d00000000       mov dword ptr fs:[0], ecx
// 0042f379  83c410               add esp, 0x10
// 0042f37c  c3                   ret 

struct String;
struct Text;
struct Resource;

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringDestroy)(String*);
extern void (__cdecl *stringFormat)(String*, const char*, ...);
extern Text* (__thiscall *stringGet)(String*);
extern Resource* (__thiscall *textGet)(Text*);

struct Resource {
    bool __cdecl apply(int, int, int);
};

struct Text {
    Resource* get();
};

struct String {
    char* data;
    String();
    ~String() throw();
    void format(const char*, int, int);
    Text* get();
};

inline String::String()
{
    stringConstruct(this);
}

inline String::~String() throw()
{
    stringDestroy(this);
}

inline void String::format(const char* pattern, int x, int y)
{
    stringFormat(this, pattern, x, y);
}

inline Text* String::get()
{
    return stringGet(this);
}

inline Resource* Text::get()
{
    return textGet(this);
}

void reconstruct(int a, int b)
{
    String s;
    register int x;
    register int y;

    s.format("%s_%d", x, y);
    if (s.get()->get()->apply(a, b, 0)) {
        s.format("%s_%d_D", x, y);
        s.get()->get()->apply(a, b, 1);
        s.format("%s_%d_H", x, y);
        s.get()->get()->apply(a, b, 2);
    }
}
