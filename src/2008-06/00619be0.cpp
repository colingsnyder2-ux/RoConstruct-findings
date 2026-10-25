// from server: 100% by king_originala
// roc 2008-06 00619be0  unit: RBX::OscillateMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619be0
//
// 00619be0  56                   push esi
// 00619be1  8b742408             mov esi, dword ptr [esp + 8]
// 00619be5  8b0e                 mov ecx, dword ptr [esi]
// 00619be7  e884f0f7ff           call 0x598c70
// 00619bec  6a07                 push 7
// 00619bee  8bce                 mov ecx, esi
// 00619bf0  e8eb77fdff           call 0x5f13e0
// 00619bf5  6a0d                 push 0xd
// 00619bf7  8bce                 mov ecx, esi
// 00619bf9  e83278fdff           call 0x5f1430
// 00619bfe  d90564378400         fld dword ptr [0x843764]
// 00619c04  51                   push ecx
// 00619c05  8bce                 mov ecx, esi
// 00619c07  d91c24               fstp dword ptr [esp]
// 00619c0a  e8e178fdff           call 0x5f14f0
// 00619c0f  d90504e78100         fld dword ptr [0x81e704]
// 00619c15  51                   push ecx
// 00619c16  8bce                 mov ecx, esi
// 00619c18  d91c24               fstp dword ptr [esp]
// 00619c1b  e8a079fdff           call 0x5f15c0
// 00619c20  8b0e                 mov ecx, dword ptr [esi]
// 00619c22  e869f0f7ff           call 0x598c90
// 00619c27  5e                   pop esi
// 00619c28  c20400               ret 4

extern const float value_00843764;
extern const float value_0081e704;

struct S
{
    void func_00598c70();
    void func_00598c90();
};

struct State
{
    S* receiver;
    void func_005f13e0(int value);
    void func_005f1430(int value);
    void func_005f14f0(float value);
    void func_005f15c0(float value);
};

void __stdcall func_00619be0(State* state)
{
    state->receiver->func_00598c70();
    state->func_005f13e0(7);
    state->func_005f1430(13);
    state->func_005f14f0(value_00843764);
    state->func_005f15c0(value_0081e704);
    state->receiver->func_00598c90();
}
