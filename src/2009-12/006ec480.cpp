// roc 2009-12 006ec480  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec480
//
// 006ec480  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 006ec486  8a403c               mov al, byte ptr [eax + 0x3c]
// 006ec489  c3                   ret 
// copied from an identical function in another client (function ?get@S@ns_ROCX000014@@QBEDXZ)

namespace ns_ROCX000014 {
// from server: 100% by tester
struct S {
    char pad[0xf4];
    char* ptr;
    char get() const;
};

char S::get() const
{
    return *(char*)(ptr + 0x3c);
}
}
