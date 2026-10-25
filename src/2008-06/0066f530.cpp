// from server: 100% by king_originala
// roc 2008-06 0066f530  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f530
//
// 0066f530  56                   push esi
// 0066f531  57                   push edi
// 0066f532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066f536  8bf1                 mov esi, ecx
// 0066f538  56                   push esi
// 0066f539  8bcf                 mov ecx, edi
// 0066f53b  e8f062fdff           call 0x645830
// 0066f540  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066f543  57                   push edi
// 0066f544  e8a7bafdff           call 0x64aff0
// 0066f549  5f                   pop edi
// 0066f54a  5e                   pop esi
// 0066f54b  c20400               ret 4

struct S_func_00645830 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct Stage {
    void f(S_func_00645830* object);
};

struct S {
    char pad0[8];
    Stage* stage;
    void f(S_func_00645830* object);
};

void S::f(S_func_00645830* object)
{
    object->f((int)this);
    stage->f(object);
}
