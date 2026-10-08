// from server: 66% by colin
// roc 2007-08 00738fbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738fbe
//
// 00738fbe  8b542408             mov edx, dword ptr [esp + 8]
// 00738fc2  8d02                 lea eax, [edx]
// 00738fc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00738fc7  33c8                 xor ecx, eax
// 00738fc9  e8507aefff           call 0x630a1e
// 00738fce  b8a8f08300           mov eax, 0x83f0a8
// 00738fd3  e9407aefff           jmp 0x630a18

struct S_00738fbe {
    void f(void*, int);
};

void S_00738fbe::f(void* a1, int a2)
{
    int* p = (int*)a1;
    int v = p[-1] ^ (int)p;
    extern void __stdcall sub_00630a1e(int);
    sub_00630a1e(v);
    extern void __stdcall sub_00630a18(void*);
    sub_00630a18((void*)0x83f0a8);
}
