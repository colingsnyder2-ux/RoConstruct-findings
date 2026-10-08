// from server: 61% by colin
// roc 2007-08 0073c63e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c63e
//
// 0073c63e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c642  8d02                 lea eax, [edx]
// 0073c644  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c647  33c8                 xor ecx, eax
// 0073c649  e8d043efff           call 0x630a1e
// 0073c64e  b8b8358400           mov eax, 0x8435b8
// 0073c653  e9c043efff           jmp 0x630a18

struct S_0073c63e {
    void f(int a1);
};

extern "C" void __cdecl helper_00630a1e(int);
extern "C" void __cdecl helper_00630a18();

void S_0073c63e::f(int a1)
{
    int v = a1;
    helper_00630a1e(v ^ *(int *)(v - 4));
    helper_00630a18();
}
