// from server: 69% by colin
// roc 2007-08 0073c47e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c47e
//
// 0073c47e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c482  8d02                 lea eax, [edx]
// 0073c484  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c487  33c8                 xor ecx, eax
// 0073c489  e89045efff           call 0x630a1e
// 0073c48e  b814348400           mov eax, 0x843414
// 0073c493  e98045efff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);

int __cdecl func_0073c47e(int, int * p)
{
    int v = *p;
    sub_630a1e((int)((unsigned int)(p[-1]) ^ (unsigned int)(int)p));
    return sub_630a18(0x843414);
}
