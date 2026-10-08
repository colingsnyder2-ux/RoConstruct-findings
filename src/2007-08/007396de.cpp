// from server: 69% by colin
// roc 2007-08 007396de  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007396de
//
// 007396de  8b542408             mov edx, dword ptr [esp + 8]
// 007396e2  8d02                 lea eax, [edx]
// 007396e4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007396e7  33c8                 xor ecx, eax
// 007396e9  e83073efff           call 0x630a1e
// 007396ee  b80cfd8300           mov eax, 0x83fd0c
// 007396f3  e92073efff           jmp 0x630a18

extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18(int);

int __cdecl sub_7396de(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    return sub_630a18(0x83fd0c);
}
