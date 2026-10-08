// from server: 41% by colin
// roc 2007-08 0073b45e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b45e
//
// 0073b45e  8b542408             mov edx, dword ptr [esp + 8]
// 0073b462  8d02                 lea eax, [edx]
// 0073b464  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b467  33c8                 xor ecx, eax
// 0073b469  e8b055efff           call 0x630a1e
// 0073b46e  b860218400           mov eax, 0x842160
// 0073b473  e9a055efff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(int);

int g_842160;

void __cdecl func_0073b45e(int a, int b)
{
    int* p = &b;
    sub_630a1e(*((int*)p - 1) ^ (int)p);
    sub_630a18(g_842160);
}
