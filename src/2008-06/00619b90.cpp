// from server: 100% by king_originala
// roc 2008-06 00619b90  unit: RBX::LeftMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619b90
//
// 00619b90  56                   push esi
// 00619b91  8b742408             mov esi, dword ptr [esp + 8]
// 00619b95  8b0e                 mov ecx, dword ptr [esi]
// 00619b97  e8d4f0f7ff           call 0x598c70
// 00619b9c  6a07                 push 7
// 00619b9e  8bce                 mov ecx, esi
// 00619ba0  e83b78fdff           call 0x5f13e0
// 00619ba5  6a01                 push 1
// 00619ba7  8bce                 mov ecx, esi
// 00619ba9  e88278fdff           call 0x5f1430
// 00619bae  d90564378400         fld dword ptr [0x843764]
// 00619bb4  51                   push ecx
// 00619bb5  8bce                 mov ecx, esi
// 00619bb7  d91c24               fstp dword ptr [esp]
// 00619bba  e83179fdff           call 0x5f14f0
// 00619bbf  d90504e78100         fld dword ptr [0x81e704]
// 00619bc5  51                   push ecx
// 00619bc6  8bce                 mov ecx, esi
// 00619bc8  d91c24               fstp dword ptr [esp]
// 00619bcb  e8f079fdff           call 0x5f15c0
// 00619bd0  8b0e                 mov ecx, dword ptr [esi]
// 00619bd2  e8b9f0f7ff           call 0x598c90
// 00619bd7  5e                   pop esi
// 00619bd8  c20400               ret 4

extern const float value_00843764;
extern const float value_0081e704;

struct S
{
    void func_00598c70();
    void func_00598c90();
};

struct Part
{
    S* object;
    void setShouldRender(int value);
    void func_005f1430(int value);
    void func_005f14f0(float value);
    void func_005f15c0(float value);
};

void __stdcall func_00619b90(Part* part)
{
    part->object->func_00598c70();
    part->setShouldRender(7);
    part->func_005f1430(1);
    part->func_005f14f0(value_00843764);
    part->func_005f15c0(value_0081e704);
    part->object->func_00598c90();
}
