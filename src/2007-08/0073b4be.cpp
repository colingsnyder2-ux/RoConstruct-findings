// from server: 70% by colin
// roc 2007-08 0073b4be  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b4be
//
// 0073b4be  8b542408             mov edx, dword ptr [esp + 8]
// 0073b4c2  8d02                 lea eax, [edx]
// 0073b4c4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b4c7  33c8                 xor ecx, eax
// 0073b4c9  e85055efff           call 0x630a1e
// 0073b4ce  b8b8218400           mov eax, 0x8421b8
// 0073b4d3  e94055efff           jmp 0x630a18

extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

struct CSpinButtonCtrl {
    void func_0073b4be(int a1, int a2);
};

void CSpinButtonCtrl::func_0073b4be(int a1, int a2)
{
    unsigned char* p = (unsigned char*)a2;
    unsigned int v = *(unsigned int*)(p - 4) ^ (unsigned int)p;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x8421b8);
}
