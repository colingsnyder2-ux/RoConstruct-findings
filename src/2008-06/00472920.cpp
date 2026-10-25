// from server: 100% by king_originala
// roc 2008-06 00472920  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472920
//
// 00472920  6aff                 push -1
// 00472922  68f4447c00           push 0x7c44f4
// 00472927  64a100000000         mov eax, dword ptr fs:[0]
// 0047292d  50                   push eax
// 0047292e  64892500000000       mov dword ptr fs:[0], esp
// 00472935  51                   push ecx
// 00472936  56                   push esi
// 00472937  8bf1                 mov esi, ecx
// 00472939  89742404             mov dword ptr [esp + 4], esi
// 0047293d  8d4e44               lea ecx, [esi + 0x44]
// 00472940  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00472948  ff1568248000         call dword ptr [0x802468]
// 0047294e  8d4e28               lea ecx, [esi + 0x28]
// 00472951  c644241000           mov byte ptr [esp + 0x10], 0
// 00472956  ff1568248000         call dword ptr [0x802468]
// 0047295c  8d4e0c               lea ecx, [esi + 0xc]
// 0047295f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00472967  c706f8b78000         mov dword ptr [esi], 0x80b7f8
// 0047296d  ff1568248000         call dword ptr [0x802468]
// 00472973  8bce                 mov ecx, esi
// 00472975  ff159c288000         call dword ptr [0x80289c]
// 0047297b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047297f  5e                   pop esi
// 00472980  64890d00000000       mov dword ptr fs:[0], ecx
// 00472987  83c410               add esp, 0x10
// 0047298a  c3                   ret 

extern void (__thiscall *string_destroy)(void *);
extern void (__thiscall *exception_destroy)(void *);

struct String {
    char storage[28];
    ~String();
};

struct Exception {
    unsigned vtable;
    char storage[8];
    ~Exception() throw();
};

struct Base : Exception {
    String text;
    ~Base() throw();
};

struct S : Base {
    String first;
    String second;
    ~S();
};

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline Exception::~Exception() throw()
{
    exception_destroy(this);
}

__forceinline Base::~Base() throw()
{
    vtable = 0x80b7f8;
}

S::~S()
{
}
