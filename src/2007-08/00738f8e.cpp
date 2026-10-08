// from server: 69% by colin
// roc 2007-08 00738f8e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738f8e
//
// 00738f8e  8b542408             mov edx, dword ptr [esp + 8]
// 00738f92  8d02                 lea eax, [edx]
// 00738f94  8b4afc               mov ecx, dword ptr [edx - 4]
// 00738f97  33c8                 xor ecx, eax
// 00738f99  e8807aefff           call 0x630a1e
// 00738f9e  b87cf08300           mov eax, 0x83f07c
// 00738fa3  e9707aefff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

int g_83f07c = 0;

void __cdecl func_00738f8e(int, int* p)
{
    int* eax = p;
    int ecx = *(int*)((char*)p - 4);
    ecx ^= (int)eax;
    sub_630a1e(ecx);
    sub_630a18();
    (void)&g_83f07c;
}
