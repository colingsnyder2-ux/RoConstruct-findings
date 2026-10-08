// from server: 64% by colin
// roc 2007-08 00724f73  unit: CXTIconHandle  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724f73
//
// 00724f73  56                   push esi
// 00724f74  8bf1                 mov esi, ecx
// 00724f76  8d4e18               lea ecx, [esi + 0x18]
// 00724f79  e832c9cdff           call 0x4018b0
// 00724f7e  33c0                 xor eax, eax
// 00724f80  894630               mov dword ptr [esi + 0x30], eax
// 00724f83  894634               mov dword ptr [esi + 0x34], eax
// 00724f86  894638               mov dword ptr [esi + 0x38], eax
// 00724f89  8bc6                 mov eax, esi
// 00724f8b  5e                   pop esi
// 00724f8c  c3                   ret 
// 00724f8d  56                   push esi
// 00724f8e  8bf1                 mov esi, ecx
// 00724f90  8d4618               lea eax, [esi + 0x18]
// 00724f93  50                   push eax
// 00724f94  ff1504d37700         call dword ptr [0x77d304]
// 00724f9a  8d4e30               lea ecx, [esi + 0x30]
// 00724f9d  5e                   pop esi
// 00724f9e  e9ebfeffff           jmp 0x724e8e

struct CXTIconHandle {
    char pad[0x18];
    int field_18;
    char pad2[0x14];
    int field_30;
    int field_34;
    int field_38;
    CXTIconHandle* CXTIconHandle_ctor();
    void CXTIconHandle_dtor();
};

extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" void __stdcall sub_4018b0(void*);
extern "C" void __stdcall sub_724e8e(void*);

CXTIconHandle* CXTIconHandle::CXTIconHandle_ctor() {
    sub_4018b0(&field_18);
    field_30 = 0;
    field_34 = 0;
    field_38 = 0;
    return this;
}

void CXTIconHandle::CXTIconHandle_dtor() {
    DeleteCriticalSection(&field_30);
    sub_724e8e(&field_18);
}
