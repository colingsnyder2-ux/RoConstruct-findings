// from server: 100% by colin
// roc 2007-08 00725810  unit: boost::lock_error  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725810
//
// 00725810  56                   push esi
// 00725811  8bf1                 mov esi, ecx
// 00725813  ff15f8e67700         call dword ptr [0x77e6f8]
// 00725819  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00725820  c7064ca17800         mov dword ptr [esi], 0x78a14c
// 00725826  8bc6                 mov eax, esi
// 00725828  5e                   pop esi
// 00725829  c3                   ret 

struct S {
    void* vfptr;
    int pad[2];
    int field_c;
    S* ctor();
};

extern "C" void (__stdcall *exception_ctor)();

S* S::ctor()
{
    exception_ctor();
    field_c = 0;
    vfptr = (void*)0x78a14c;
    return this;
}
