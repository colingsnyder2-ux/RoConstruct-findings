// from server: 44% by colin
// roc 2007-08 0073ba8e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ba8e
//
// 0073ba8e  8b542408             mov edx, dword ptr [esp + 8]
// 0073ba92  8d02                 lea eax, [edx]
// 0073ba94  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ba97  33c8                 xor ecx, eax
// 0073ba99  e8804fefff           call 0x630a1e
// 0073ba9e  b8b4288400           mov eax, 0x8428b4
// 0073baa3  e9704fefff           jmp 0x630a18

struct CSpinButtonCtrl {
    void f(void*);
};

extern "C" void __cdecl sub_00630a1e(void*, void*);
extern "C" void __cdecl sub_00630a18(void*, void*);

void CSpinButtonCtrl::f(void* a1)
{
    void* p = (char*)a1 - 4;
    sub_00630a1e((void*)((int)p ^ (int)a1), p);
    sub_00630a18((void*)0x8428b4, (void*)0x8428b4);
}
