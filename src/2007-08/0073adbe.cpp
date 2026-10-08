// from server: 35% by colin
// roc 2007-08 0073adbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073adbe
//
// 0073adbe  8b542408             mov edx, dword ptr [esp + 8]
// 0073adc2  8d02                 lea eax, [edx]
// 0073adc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073adc7  33c8                 xor ecx, eax
// 0073adc9  e8505cefff           call 0x630a1e
// 0073adce  b89c1a8400           mov eax, 0x841a9c
// 0073add3  e9405cefff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);
extern int G_841a9c;

void __cdecl func_0073adbe(int, int arg2)
{
    int* p = &arg2;
    int v = *(int*)((char*)p - 4) ^ (int)p;
    sub_630a1e(v);
    sub_630a18();
}
