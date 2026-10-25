// from server: 100% by king_originala
// roc 2008-06 0066edc0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066edc0
//
// 0066edc0  56                   push esi
// 0066edc1  8bf1                 mov esi, ecx
// 0066edc3  e8884f1200           call 0x793d50
// 0066edc8  8bc8                 mov ecx, eax
// 0066edca  e80189f6ff           call 0x5d76d0
// 0066edcf  3986c4000000         cmp dword ptr [esi + 0xc4], eax
// 0066edd5  7408                 je 0x66eddf
// 0066edd7  8bce                 mov ecx, esi
// 0066edd9  5e                   pop esi
// 0066edda  e971ffffff           jmp 0x66ed50
// 0066eddf  5e                   pop esi
// 0066ede0  c3                   ret 

struct Result {
    int get();
};

struct S {
    char padding[0xC4];
    int value;

    int lookup();
    void update();
    void f();
};

void S::f()
{
    Result* result = reinterpret_cast<Result*>(lookup());
    if (value != result->get())
        update();
}
