// from server: 65% by colin
// roc 2007-08 0073c51e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c51e
//
// 0073c51e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c522  8d02                 lea eax, [edx]
// 0073c524  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c527  33c8                 xor ecx, eax
// 0073c529  e8f044efff           call 0x630a1e
// 0073c52e  b8b0348400           mov eax, 0x8434b0
// 0073c533  e9e044efff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);

int __cdecl sub_73c51e(int a, int b, int c)
{
    int* p = (int*)c;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    return sub_630a18(0x8434b0);
}
