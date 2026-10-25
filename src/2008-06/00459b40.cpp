// from server: 100% by king_originala
// roc 2008-06 00459b40  unit: VCRobloxView::?$VerbBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459b40
//
// 00459b40  6aff                 push -1
// 00459b42  6828317c00           push 0x7c3128
// 00459b47  64a100000000         mov eax, dword ptr fs:[0]
// 00459b4d  50                   push eax
// 00459b4e  64892500000000       mov dword ptr fs:[0], esp
// 00459b55  51                   push ecx
// 00459b56  56                   push esi
// 00459b57  8bf1                 mov esi, ecx
// 00459b59  89742404             mov dword ptr [esp + 4], esi
// 00459b5d  8d4e58               lea ecx, [esi + 0x58]
// 00459b60  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00459b68  e813a20f00           call 0x553d80
// 00459b6d  8bce                 mov ecx, esi
// 00459b6f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00459b77  e81c742400           call 0x6a0f98
// 00459b7c  f644241801           test byte ptr [esp + 0x18], 1
// 00459b81  7409                 je 0x459b8c
// 00459b83  56                   push esi
// 00459b84  e8f16a2400           call 0x6a067a
// 00459b89  83c404               add esp, 4
// 00459b8c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00459b90  8bc6                 mov eax, esi
// 00459b92  5e                   pop esi
// 00459b93  64890d00000000       mov dword ptr fs:[0], ecx
// 00459b9a  83c410               add esp, 0x10
// 00459b9d  c20400               ret 4

struct Base {
    char storage[0x58];
    ~Base();
};

struct Member {
    ~Member();
};

void __cdecl operator delete(void *);

struct S : Base {
    Member member;
    S *destroy(unsigned int flags);
};

S *S::destroy(unsigned int flags)
{
    this->S::~S();
    if (flags & 1)
        operator delete(this);
    return this;
}
