// from server: 100% by king_originala
// roc 2008-06 00619af0  unit: RBX::HingeTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619af0
//
// 00619af0  56                   push esi
// 00619af1  8b742408             mov esi, dword ptr [esp + 8]
// 00619af5  8b0e                 mov ecx, dword ptr [esi]
// 00619af7  e874f1f7ff           call 0x598c70
// 00619afc  6a06                 push 6
// 00619afe  8bce                 mov ecx, esi
// 00619b00  e8db78fdff           call 0x5f13e0
// 00619b05  6a00                 push 0
// 00619b07  8bce                 mov ecx, esi
// 00619b09  e82279fdff           call 0x5f1430
// 00619b0e  d9ee                 fldz 
// 00619b10  51                   push ecx
// 00619b11  d91c24               fstp dword ptr [esp]
// 00619b14  8bce                 mov ecx, esi
// 00619b16  e8d579fdff           call 0x5f14f0
// 00619b1b  d9ee                 fldz 
// 00619b1d  51                   push ecx
// 00619b1e  d91c24               fstp dword ptr [esp]
// 00619b21  8bce                 mov ecx, esi
// 00619b23  e8987afdff           call 0x5f15c0
// 00619b28  8b0e                 mov ecx, dword ptr [esi]
// 00619b2a  e861f1f7ff           call 0x598c90
// 00619b2f  5e                   pop esi
// 00619b30  c20400               ret 4

struct S
{
    void func_00598c70();
    void func_00598c90();
};

struct Object
{
    S* receiver;
    void func_005f13e0(int value);
    void func_005f1430(int value);
    void func_005f14f0(float value);
    void func_005f15c0(float value);
};

void __stdcall func_00619af0(Object* object)
{
    object->receiver->func_00598c70();
    object->func_005f13e0(6);
    object->func_005f1430(0);
    object->func_005f14f0(0.0f);
    object->func_005f15c0(0.0f);
    object->receiver->func_00598c90();
}
