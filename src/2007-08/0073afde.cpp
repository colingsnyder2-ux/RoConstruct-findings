// from server: 65% by colin
// roc 2007-08 0073afde  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073afde
//
// 0073afde  8b542408             mov edx, dword ptr [esp + 8]
// 0073afe2  8d02                 lea eax, [edx]
// 0073afe4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073afe7  33c8                 xor ecx, eax
// 0073afe9  e8305aefff           call 0x630a1e
// 0073afee  b8b01c8400           mov eax, 0x841cb0
// 0073aff3  e9205aefff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

struct CSpinButtonCtrl
{
    void func_0073afde(int, int);
};

void CSpinButtonCtrl::func_0073afde(int, int arg2)
{
    int v = arg2;
    sub_630a1e(v ^ *(int *)(v - 4));
    sub_630a18();
}
