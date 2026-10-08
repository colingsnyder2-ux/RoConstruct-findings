// from server: 73% by colin
// roc 2007-08 005706d0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005706d0
//
// 005706d0  51                   push ecx
// 005706d1  8b4104               mov eax, dword ptr [ecx + 4]
// 005706d4  8b09                 mov ecx, dword ptr [ecx]
// 005706d6  56                   push esi
// 005706d7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005706db  50                   push eax
// 005706dc  56                   push esi
// 005706dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005706e5  e8e6fdffff           call 0x5704d0
// 005706ea  8bc6                 mov eax, esi
// 005706ec  5e                   pop esi
// 005706ed  59                   pop ecx
// 005706ee  c20400               ret 4

struct S {
    void* p0;
    void* p1;
    void* f(void* arg);
};

extern "C" void __stdcall helper(void* a, void* b, void* c);

void* S::f(void* arg) {
    void* a = p1;
    void* b = p0;
    helper(arg, b, a);
    return arg;
}
