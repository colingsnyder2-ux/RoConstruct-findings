// from server: 97% by colin
// from server: 96% by king_originala
// roc 2008-06 00589950  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00589950
//
// 00589950  6aff                 push -1
// 00589952  6856157d00           push 0x7d1556
// 00589957  64a100000000         mov eax, dword ptr fs:[0]
// 0058995d  50                   push eax
// 0058995e  64892500000000       mov dword ptr fs:[0], esp
// 00589965  83ec08               sub esp, 8
// 00589968  56                   push esi
// 00589969  8bf1                 mov esi, ecx
// 0058996b  33c0                 xor eax, eax
// 0058996d  894604               mov dword ptr [esi + 4], eax
// 00589970  89742408             mov dword ptr [esp + 8], esi
// 00589974  894608               mov dword ptr [esi + 8], eax
// 00589977  89460c               mov dword ptr [esi + 0xc], eax
// 0058997a  894610               mov dword ptr [esi + 0x10], eax
// 0058997d  89442414             mov dword ptr [esp + 0x14], eax
// 00589981  894614               mov dword ptr [esi + 0x14], eax
// 00589984  8d442407             lea eax, [esp + 7]
// 00589988  50                   push eax
// 00589989  8d4c240b             lea ecx, [esp + 0xb]
// 0058998d  51                   push ecx
// 0058998e  8d4e18               lea ecx, [esi + 0x18]
// 00589991  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00589996  e8f5f7ffff           call 0x589190
// 0058999b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058999f  8bc6                 mov eax, esi
// 005899a1  5e                   pop esi
// 005899a2  64890d00000000       mov dword ptr fs:[0], ecx
// 005899a9  83c414               add esp, 0x14
// 005899ac  c3                   ret 

struct Empty1 {
    Empty1();
};

struct Empty2 {
    Empty2();
};

inline Empty1::Empty1() {}
inline Empty2::Empty2() {}

struct A {
    int unused;
    int first;
    volatile int second;
    int third;
    int fourth;

    A();
    ~A();
};

struct B {
    int value;

    B();
    ~B();
};

struct Both : Empty1, Empty2 { Both() {} };
struct C {
    C(const Empty1 &, const Empty2 &);
};

struct S {
    A a;
    B b;
    C c;

    S();
};

inline A::A()
{
    first = 0;
    second = 0;
    third = 0;
    fourth = 0;
}

inline B::B()
    : value(0)
{
}

S::S()
    : a(), b(), c(Both(), Both())
{
}
