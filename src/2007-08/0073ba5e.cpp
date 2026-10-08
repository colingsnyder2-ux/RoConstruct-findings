// from server: 29% by colin
// roc 2007-08 0073ba5e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ba5e
//
// 0073ba5e  8b542408             mov edx, dword ptr [esp + 8]
// 0073ba62  8d02                 lea eax, [edx]
// 0073ba64  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ba67  33c8                 xor ecx, eax
// 0073ba69  e8b04fefff           call 0x630a1e
// 0073ba6e  b888288400           mov eax, 0x842888
// 0073ba73  e9a04fefff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);

int __cdecl sub_0073ba5e(int a, int b, int c)
{
    int* p = &c;
    int v = *(int*)((char*)p - 4);
    v ^= (int)p;
    sub_630a1e(v);
    return sub_630a18(0x842888);
}
