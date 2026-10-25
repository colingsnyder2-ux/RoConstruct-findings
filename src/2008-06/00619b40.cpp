// from server: 100% by king_originala
// roc 2008-06 00619b40  unit: RBX::RightMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619b40
//
// 00619b40  56                   push esi
// 00619b41  8b742408             mov esi, dword ptr [esp + 8]
// 00619b45  8b0e                 mov ecx, dword ptr [esi]
// 00619b47  e824f1f7ff           call 0x598c70
// 00619b4c  6a07                 push 7
// 00619b4e  8bce                 mov ecx, esi
// 00619b50  e88b78fdff           call 0x5f13e0
// 00619b55  6a02                 push 2
// 00619b57  8bce                 mov ecx, esi
// 00619b59  e8d278fdff           call 0x5f1430
// 00619b5e  d90564378400         fld dword ptr [0x843764]
// 00619b64  51                   push ecx
// 00619b65  8bce                 mov ecx, esi
// 00619b67  d91c24               fstp dword ptr [esp]
// 00619b6a  e88179fdff           call 0x5f14f0
// 00619b6f  d90504e78100         fld dword ptr [0x81e704]
// 00619b75  51                   push ecx
// 00619b76  8bce                 mov ecx, esi
// 00619b78  d91c24               fstp dword ptr [esp]
// 00619b7b  e8407afdff           call 0x5f15c0
// 00619b80  8b0e                 mov ecx, dword ptr [esi]
// 00619b82  e809f1f7ff           call 0x598c90
// 00619b87  5e                   pop esi
// 00619b88  c20400               ret 4

struct S
{
    void func_00598c70();
    void func_00598c90();
};

struct State
{
    S* object;
    void func_005f13e0(int value);
    void func_005f1430(int value);
    void func_005f14f0(float value);
    void func_005f15c0(float value);
};

extern float value_00843764;
extern float value_0081e704;

void __stdcall func_00619b40(State* state)
{
    state->object->func_00598c70();
    state->func_005f13e0(7);
    state->func_005f1430(2);
    state->func_005f14f0(value_00843764);
    state->func_005f15c0(value_0081e704);
    state->object->func_00598c90();
}
