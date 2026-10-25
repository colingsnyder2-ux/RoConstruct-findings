// from server: 100% by king_originala
// roc 2008-06 0064a3e0  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a3e0
//
// 0064a3e0  56                   push esi
// 0064a3e1  57                   push edi
// 0064a3e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064a3e6  8bf1                 mov esi, ecx
// 0064a3e8  56                   push esi
// 0064a3e9  8bcf                 mov ecx, edi
// 0064a3eb  e840b4ffff           call 0x645830
// 0064a3f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a3f3  57                   push edi
// 0064a3f4  e8b7e10100           call 0x6685b0
// 0064a3f9  5f                   pop edi
// 0064a3fa  5e                   pop esi
// 0064a3fb  c20400               ret 4

struct S_func_00645830 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct NextStage {
    void f(S_func_00645830* object);
};

struct CleanStage {
    char pad0[8];
    NextStage* next;
    void f(S_func_00645830* object);
};

void CleanStage::f(S_func_00645830* object)
{
    object->f((int)this);
    next->f(object);
}
