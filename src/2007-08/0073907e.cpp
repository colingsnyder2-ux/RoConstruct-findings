// from server: 72% by colin
// roc 2007-08 0073907e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073907e
//
// 0073907e  8b542408             mov edx, dword ptr [esp + 8]
// 00739082  8d02                 lea eax, [edx]
// 00739084  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739087  33c8                 xor ecx, eax
// 00739089  e89079efff           call 0x630a1e
// 0073908e  b858f18300           mov eax, 0x83f158
// 00739093  e98079efff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(int);
extern int G_83f158;

void __cdecl func_0073907e(int, int* p)
{
    int v = *(p - 1);
    sub_630a1e(v ^ (int)p);
    sub_630a18((int)&G_83f158);
}
