// from server: 65% by colin
// roc 2007-08 00739cee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739cee
//
// 00739cee  8b542408             mov edx, dword ptr [esp + 8]
// 00739cf2  8d02                 lea eax, [edx]
// 00739cf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739cf7  33c8                 xor ecx, eax
// 00739cf9  e8206defff           call 0x630a1e
// 00739cfe  b814058400           mov eax, 0x840514
// 00739d03  e9106defff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18();

extern int G_840514;

void sub_739cee(int* a)
{
    int* p = a;
    int v = *(int*)((char*)p - 4);
    sub_630a1e(v ^ (int)p);
    sub_630a18();
}
