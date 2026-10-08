// from server: 66% by colin
// roc 2007-08 0073c54e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c54e
//
// 0073c54e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c552  8d02                 lea eax, [edx]
// 0073c554  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c557  33c8                 xor ecx, eax
// 0073c559  e8c044efff           call 0x630a1e
// 0073c55e  b8dc348400           mov eax, 0x8434dc
// 0073c563  e9b044efff           jmp 0x630a18

extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void*);

struct CSpinButtonCtrl
{
    void func_0073c54e(int, void*);
};

void CSpinButtonCtrl::func_0073c54e(int, void* p)
{
    unsigned int cookie = *(unsigned int*)((char*)p - 4);
    unsigned int value = (unsigned int)p;
    sub_630a1e((void*)(cookie ^ value));
    sub_630a18((void*)0x8434dc);
}
