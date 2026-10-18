// from server: 90% by colin
// from server: 85% by king_originala
// roc 2008-06 0042e770  unit: CRobloxControlColorSelector  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e770
//
// 0042e770  6aff                 push -1
// 0042e772  6884f97b00           push 0x7bf984
// 0042e777  64a100000000         mov eax, dword ptr fs:[0]
// 0042e77d  50                   push eax
// 0042e77e  64892500000000       mov dword ptr fs:[0], esp
// 0042e785  83ec0c               sub esp, 0xc
// 0042e788  53                   push ebx
// 0042e789  56                   push esi
// 0042e78a  8bf1                 mov esi, ecx
// 0042e78c  57                   push edi
// 0042e78d  8dbeec000000         lea edi, [esi + 0xec]
// 0042e793  33db                 xor ebx, ebx
// 0042e795  8bcf                 mov ecx, edi
// 0042e797  895c240c             mov dword ptr [esp + 0xc], ebx
// 0042e79b  ff15d82f8000         call dword ptr [0x802fd8]
// 0042e7a1  84c0                 test al, al
// 0042e7a3  7504                 jne 0x42e7a9
// 0042e7a5  8bc7                 mov eax, edi
// 0042e7a7  eb3f                 jmp 0x42e7e8
// 0042e7a9  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0042e7af  3bcb                 cmp ecx, ebx
// 0042e7b1  7415                 je 0x42e7c8
// 0042e7b3  8d442414             lea eax, [esp + 0x14]
// 0042e7b7  50                   push eax
// 0042e7b8  e813ffffff           call 0x42e6d0
// 0042e7bd  895c2420             mov dword ptr [esp + 0x20], ebx
// 0042e7c1  bb01000000           mov ebx, 1
// 0042e7c6  eb1c                 jmp 0x42e7e4
// 0042e7c8  6816b78000           push 0x80b716
// 0042e7cd  8d4c2414             lea ecx, [esp + 0x14]
// 0042e7d1  ff15103f8000         call dword ptr [0x803f10]
// 0042e7d7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0042e7df  bb02000000           mov ebx, 2
// 0042e7e4  895c240c             mov dword ptr [esp + 0xc], ebx
// 0042e7e8  8b742428             mov esi, dword ptr [esp + 0x28]
// 0042e7ec  50                   push eax
// 0042e7ed  8bce                 mov ecx, esi
// 0042e7ef  ff15d43e8000         call dword ptr [0x803ed4]
// 0042e7f5  83cb04               or ebx, 4
// 0042e7f8  f6c302               test bl, 2
// 0042e7fb  740d                 je 0x42e80a
// 0042e7fd  8d4c2410             lea ecx, [esp + 0x10]
// 0042e801  83e3fd               and ebx, 0xfffffffd
// 0042e804  ff15143f8000         call dword ptr [0x803f14]
// 0042e80a  f6c301               test bl, 1
// 0042e80d  740a                 je 0x42e819
// 0042e80f  8d4c2414             lea ecx, [esp + 0x14]
// 0042e813  ff15143f8000         call dword ptr [0x803f14]
// 0042e819  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042e81d  5f                   pop edi
// 0042e81e  8bc6                 mov eax, esi
// 0042e820  5e                   pop esi
// 0042e821  5b                   pop ebx
// 0042e822  64890d00000000       mov dword ptr fs:[0], ecx
// 0042e829  83c418               add esp, 0x18
// 0042e82c  c20400               ret 4

struct Str;
extern bool (__thiscall* str_empty)(const Str*);
extern Str* (__thiscall* str_text)(Str*, const char*);
extern Str* (__thiscall* str_copy)(Str*, const Str*) throw();
extern void (__thiscall* str_destroy)(Str*) throw();

struct Str {
    char* data;
    Str(const char*);
    Str(const Str&) throw();
    __declspec(dllimport) ~Str() throw();
    bool empty() const;
};

inline Str::Str(const char* text)
{
    str_text(this, text);
}

inline Str::Str(const Str& other) throw()
{
    str_copy(this, &other);
}

inline bool Str::empty() const
{
    return str_empty(this);
}

struct X {
    Str copy();
};

struct S {
    char padding[0xec];
    Str caption;
    char padding2[0x6c];
    X* parent;
    Str getCaption();
};

Str S::getCaption()
{
    return !caption.empty()
        ? caption
        : (parent ? parent->copy() : Str(">Authoring"));
}
