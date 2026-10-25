// from server: 100% by king_originala
// roc 2008-06 004b9440  unit: RBX::Network::Replicator  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9440
//
// 004b9440  6aff                 push -1
// 004b9442  68968d7c00           push 0x7c8d96
// 004b9447  64a100000000         mov eax, dword ptr fs:[0]
// 004b944d  50                   push eax
// 004b944e  64892500000000       mov dword ptr fs:[0], esp
// 004b9455  51                   push ecx
// 004b9456  56                   push esi
// 004b9457  8bf1                 mov esi, ecx
// 004b9459  89742404             mov dword ptr [esp + 4], esi
// 004b945d  8d8e542b0000         lea ecx, [esi + 0x2b54]
// 004b9463  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004b946b  e860ffffff           call 0x4b93d0
// 004b9470  8d8e30010000         lea ecx, [esi + 0x130]
// 004b9476  c644241000           mov byte ptr [esp + 0x10], 0
// 004b947b  e8f0a8ffff           call 0x4b3d70
// 004b9480  8bce                 mov ecx, esi
// 004b9482  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b948a  e8b1100a00           call 0x55a540
// 004b948f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9493  5e                   pop esi
// 004b9494  64890d00000000       mov dword ptr fs:[0], ecx
// 004b949b  83c410               add esp, 0x10
// 004b949e  c3                   ret 

struct Base {
    char storage[0x130];
    ~Base();
};

struct MemberA {
    char storage[0x2a24];
    ~MemberA();
};

struct MemberB {
    char storage;
    ~MemberB();
};

struct S : Base {
    MemberA a;
    MemberB b;
    ~S();
};

S::~S()
{
}
