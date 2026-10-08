// from server: 76% by colin
// roc 2007-08 0073ae1e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ae1e
//
// 0073ae1e  8b542408             mov edx, dword ptr [esp + 8]
// 0073ae22  8d02                 lea eax, [edx]
// 0073ae24  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ae27  33c8                 xor ecx, eax
// 0073ae29  e8f05befff           call 0x630a1e
// 0073ae2e  b8fc1a8400           mov eax, 0x841afc
// 0073ae33  e9e05befff           jmp 0x630a18

extern "C" void __fastcall sub_630a1e(int);
extern "C" void __fastcall sub_630a18(int);

extern int g_841afc;

void __cdecl func_0073ae1e(int, int* p)
{
    int v = *(int*)((char*)p - 4);
    sub_630a1e(v ^ (int)p);
    sub_630a18((int)&g_841afc);
}
