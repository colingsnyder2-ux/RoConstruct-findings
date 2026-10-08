// from server: 100% by colin
// roc 2007-08 005a4830  unit: RBX::IControllable  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4830
//
// 005a4830  8b4104               mov eax, dword ptr [ecx + 4]
// 005a4833  c701ac4c7a00         mov dword ptr [ecx], 0x7a4cac
// 005a4839  8b5004               mov edx, dword ptr [eax + 4]
// 005a483c  c7440a04a44c7a00     mov dword ptr [edx + ecx + 4], 0x7a4ca4
// 005a4844  c3                   ret 

struct T_func_005a4830 {
    void m();
};

void T_func_005a4830::m()
{
    int* p = *(int**)((char*)this + 4);
    *(int*)this = 0x7a4cac;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 4) = 0x7a4ca4;
}
