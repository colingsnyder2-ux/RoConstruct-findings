// from server: 61% by colin
// roc 2007-08 0073b9ce  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b9ce
//
// 0073b9ce  8b542408             mov edx, dword ptr [esp + 8]
// 0073b9d2  8d02                 lea eax, [edx]
// 0073b9d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b9d7  33c8                 xor ecx, eax
// 0073b9d9  e84050efff           call 0x630a1e
// 0073b9de  b804288400           mov eax, 0x842804
// 0073b9e3  e93050efff           jmp 0x630a18

struct CSpinButtonCtrl {
    void f(int);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void CSpinButtonCtrl::f(int a1)
{
    int v = a1;
    int x = v;
    int y = *(int*)(v - 4);
    sub_00630a1e(y ^ x);
    sub_00630a18();
}
