// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_logpathunsignedlength4b6c03cfa7dfc0ff.cpp

// Candidate translation unit (score above; library headers required).
// from server: 63% by king_originala
// roc 2008-06 00428310  unit: MainLogManager  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428310
//
// 00428310  6aff                 push -1
// 00428312  6883f17b00           push 0x7bf183
// 00428317  64a100000000         mov eax, dword ptr fs:[0]
// 0042831d  50                   push eax
// 0042831e  64892500000000       mov dword ptr fs:[0], esp
// 00428325  83ec0c               sub esp, 0xc
// 00428328  53                   push ebx
// 00428329  55                   push ebp
// 0042832a  56                   push esi
// 0042832b  57                   push edi
// 0042832c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00428334  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00428338  57                   push edi
// 00428339  8d4c2414             lea ecx, [esp + 0x14]
// 0042833d  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00428345  ff15103f8000         call dword ptr [0x803f10]
// 0042834b  8d4c2410             lea ecx, [esp + 0x10]
// 0042834f  c644242402           mov byte ptr [esp + 0x24], 2
// 00428354  ff15e02f8000         call dword ptr [0x802fe0]
// 0042835a  50                   push eax
// 0042835b  8d4c2414             lea ecx, [esp + 0x14]
// 0042835f  ff1584338000         call dword ptr [0x803384]
// 00428365  50                   push eax
// 00428366  ff15202b8000         call dword ptr [0x802b20]
// 0042836c  6aff                 push -1
// 0042836e  8d4c2414             lea ecx, [esp + 0x14]
// 00428372  ff1580338000         call dword ptr [0x803380]
// 00428378  8d4c2434             lea ecx, [esp + 0x34]
// 0042837c  ff1564248000         call dword ptr [0x802464]
// 00428382  8bf0                 mov esi, eax
// 00428384  56                   push esi
// 00428385  ff15e42f8000         call dword ptr [0x802fe4]
// 0042838b  83c404               add esp, 4
// 0042838e  8d4c2410             lea ecx, [esp + 0x10]
// 00428392  8bd8                 mov ebx, eax
// 00428394  ff15e02f8000         call dword ptr [0x802fe0]
// 0042839a  8d440301             lea eax, [ebx + eax + 1]
// 0042839e  50                   push eax
// 0042839f  8d4c2414             lea ecx, [esp + 0x14]
// 004283a3  ff1584338000         call dword ptr [0x803384]
// 004283a9  8b2d182b8000         mov ebp, dword ptr [0x802b18]
// 004283af  56                   push esi
// 004283b0  50                   push eax
// 004283b1  ffd5                 call ebp
// 004283b3  6aff                 push -1
// 004283b5  8d4c2414             lea ecx, [esp + 0x14]
// 004283b9  ff1580338000         call dword ptr [0x803380]
// 004283bf  8d4c2410             lea ecx, [esp + 0x10]
// 004283c3  ff15e03e8000         call dword ptr [0x803ee0]
// 004283c9  50                   push eax
// 004283ca  ff151c2b8000         call dword ptr [0x802b1c]
// 004283d0  85c0                 test eax, eax
// 004283d2  7514                 jne 0x4283e8
// 004283d4  8d4c2410             lea ecx, [esp + 0x10]
// 004283d8  ff15e03e8000         call dword ptr [0x803ee0]
// 004283de  50                   push eax
// 004283df  ff156c278000         call dword ptr [0x80276c]
// 004283e5  83c404               add esp, 4
// 004283e8  57                   push edi
// 004283e9  8d4c2418             lea ecx, [esp + 0x18]
// 004283ed  ff15103f8000         call dword ptr [0x803f10]
// 004283f3  8d4c2414             lea ecx, [esp + 0x14]
// 004283f7  c644242403           mov byte ptr [esp + 0x24], 3
// 004283fc  ff15e02f8000         call dword ptr [0x802fe0]
// 00428402  50                   push eax
// 00428403  8d4c2418             lea ecx, [esp + 0x18]
// 00428407  ff1584338000         call dword ptr [0x803384]
// 0042840d  50                   push eax
// 0042840e  ff15102b8000         call dword ptr [0x802b10]
// 00428414  6aff                 push -1
// 00428416  8d4c2418             lea ecx, [esp + 0x18]
// 0042841a  ff1580338000         call dword ptr [0x803380]
// 00428420  8d4c2414             lea ecx, [esp + 0x14]
// 00428424  ff15e03e8000         call dword ptr [0x803ee0]
// 0042842a  8bf0                 mov esi, eax
// 0042842c  56                   push esi
// 0042842d  ff15e42f8000         call dword ptr [0x802fe4]
// 00428433  83c404               add esp, 4
// 00428436  8d4c2410             lea ecx, [esp + 0x10]
// 0042843a  8bd8                 mov ebx, eax
// 0042843c  ff15e02f8000         call dword ptr [0x802fe0]
// 00428442  8d4c0301             lea ecx, [ebx + eax + 1]
// 00428446  51                   push ecx
// 00428447  8d4c2414             lea ecx, [esp + 0x14]
// 0042844b  ff1584338000         call dword ptr [0x803384]
// 00428451  56                   push esi
// 00428452  50                   push eax
// 00428453  ffd5                 call ebp
// 00428455  6aff                 push -1
// 00428457  8d4c2414             lea ecx, [esp + 0x14]
// 0042845b  ff1580338000         call dword ptr [0x803380]
// 00428461  8d4c2410             lea ecx, [esp + 0x10]
// 00428465  ff15e03e8000         call dword ptr [0x803ee0]
// 0042846b  50                   push eax
// 0042846c  57                   push edi
// 0042846d  ff1500228000         call dword ptr [0x802200]
// 00428473  85c0                 test eax, eax
// 00428475  7507                 jne 0x42847e
// 00428477  57                   push edi
// 00428478  ff15fc218000         call dword ptr [0x8021fc]
// 0042847e  8d4c2410             lea ecx, [esp + 0x10]
// 00428482  ff15e03e8000         call dword ptr [0x803ee0]
// 00428488  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0042848c  50                   push eax
// 0042848d  8bce                 mov ecx, esi
// 0042848f  ff1558248000         call dword ptr [0x802458]
// 00428495  8d4c2414             lea ecx, [esp + 0x14]
// 00428499  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004284a1  ff15143f8000         call dword ptr [0x803f14]
// 004284a7  8d4c2410             lea ecx, [esp + 0x10]
// 004284ab  ff15143f8000         call dword ptr [0x803f14]
// 004284b1  8d4c2434             lea ecx, [esp + 0x34]
// 004284b5  c644242400           mov byte ptr [esp + 0x24], 0
// 004284ba  ff1568248000         call dword ptr [0x802468]
// 004284c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004284c4  5f                   pop edi
// 004284c5  8bc6                 mov eax, esi
// 004284c7  5e                   pop esi
// 004284c8  5d                   pop ebp
// 004284c9  5b                   pop ebx
// 004284ca  64890d00000000       mov dword ptr fs:[0], ecx
// 004284d1  83c418               add esp, 0x18
// 004284d4  c3                   ret 

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
    __declspec(dllimport) int __stdcall PathRemoveFileSpecA(char *);
    __declspec(dllimport) void __stdcall PathStripPathA(char *);
    __declspec(dllimport) int __stdcall PathAppendA(char *, const char *);
    __declspec(dllimport) int __stdcall PathFileExistsA(const char *);
    __declspec(dllimport) int __stdcall MoveFileA(const char *, const char *);
    __declspec(dllimport) int __stdcall DeleteFileA(const char *);
    __declspec(dllimport) int __cdecl _mkdir(const char *);
}
extern unsigned int (__cdecl *p_802fe4)(const char *);

struct String {
    char storage[28];
    String(const char *);
    ~String();
    const char *c_str() const;
};

struct BufferString {
    char *data;
    BufferString(const char *);
    ~BufferString() throw() { p_803f14(this); }
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
    unsigned int count = p_802fe4(tail);
    char *buf = destination.buffer(count + destination.length() + 1);
    PathAppendA(buf, tail);
    destination.release(-1);

    if (!PathFileExistsA(destination.text()))
        _mkdir(destination.text());

    BufferString filename(name);
    PathStripPathA(filename.buffer(filename.length()));
    filename.release(-1);

    tail = filename.text();
    count = p_802fe4(tail);
    buf = destination.buffer(count + destination.length() + 1);
    PathAppendA(buf, tail);
    destination.release(-1);

    if (!MoveFileA(name, destination.text()))
        DeleteFileA(name);

    return String(destination.text());
}
