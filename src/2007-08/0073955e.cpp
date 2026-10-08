// from server: 72% by colin
// roc 2007-08 0073955e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073955e
//
// 0073955e  8b542408             mov edx, dword ptr [esp + 8]
// 00739562  8d02                 lea eax, [edx]
// 00739564  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739567  33c8                 xor ecx, eax
// 00739569  e8b074efff           call 0x630a1e
// 0073956e  b878fa8300           mov eax, 0x83fa78
// 00739573  e9a074efff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);
extern int G_83fa78;

int __cdecl sub_73955e(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    return sub_630a18((int)&G_83fa78);
}
