// from server: 100% by king_originala
// roc 2008-06 00430070  unit: CWrapperView  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430070
//
// 00430070  6aff                 push -1
// 00430072  6828317c00           push 0x7c3128
// 00430077  64a100000000         mov eax, dword ptr fs:[0]
// 0043007d  50                   push eax
// 0043007e  64892500000000       mov dword ptr fs:[0], esp
// 00430085  51                   push ecx
// 00430086  56                   push esi
// 00430087  8bf1                 mov esi, ecx
// 00430089  89742404             mov dword ptr [esp + 4], esi
// 0043008d  8d4e58               lea ecx, [esi + 0x58]
// 00430090  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00430098  e82370ffff           call 0x4270c0
// 0043009d  8bce                 mov ecx, esi
// 0043009f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004300a7  e8ec0e2700           call 0x6a0f98
// 004300ac  f644241801           test byte ptr [esp + 0x18], 1
// 004300b1  7409                 je 0x4300bc
// 004300b3  56                   push esi
// 004300b4  e8c1052700           call 0x6a067a
// 004300b9  83c404               add esp, 4
// 004300bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004300c0  8bc6                 mov eax, esi
// 004300c2  5e                   pop esi
// 004300c3  64890d00000000       mov dword ptr fs:[0], ecx
// 004300ca  83c410               add esp, 0x10
// 004300cd  c20400               ret 4

void __cdecl operator delete(void*);

struct Base {
    char padding[0x58];
    ~Base();
};

struct Member {
    ~Member();
};

struct BaseCleanup {
    Base* object;
    BaseCleanup(Base* p);
    ~BaseCleanup();
};

inline BaseCleanup::BaseCleanup(Base* p) : object(p)
{
}

inline BaseCleanup::~BaseCleanup()
{
    object->Base::~Base();
}

struct CWrapperView : Base {
    Member member;
    void* destroy(unsigned int flags);
};

void* CWrapperView::destroy(unsigned int flags)
{
    {
        BaseCleanup cleanup(this);
        member.~Member();
    }

    if (flags & 1)
        operator delete(this);

    return this;
}
