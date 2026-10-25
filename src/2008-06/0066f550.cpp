// from server: 100% by king_originala
// roc 2008-06 0066f550  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f550
//
// 0066f550  56                   push esi
// 0066f551  57                   push edi
// 0066f552  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066f556  8bf1                 mov esi, ecx
// 0066f558  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066f55b  57                   push edi
// 0066f55c  e83fbbfdff           call 0x64b0a0
// 0066f561  56                   push esi
// 0066f562  8bcf                 mov ecx, edi
// 0066f564  e8d762fdff           call 0x645840
// 0066f569  5f                   pop edi
// 0066f56a  5e                   pop esi
// 0066f56b  c20400               ret 4

struct Argument {
    int field0;
    int field4;
    void f(int);
};

struct Receiver {
    void f(Argument *);
};

struct S {
    int field0;
    int field4;
    Receiver *field8;
    void f(Argument *);
};

void S::f(Argument *argument)
{
    field8->f(argument);
    argument->f(reinterpret_cast<int>(this));
}
