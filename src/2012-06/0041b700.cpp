// roc 2012-06 0041b700  unit: VCRbxObject::?$CComObjectNoLock  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b700
//
// 0041b700  56                   push esi
// 0041b701  8bf1                 mov esi, ecx
// 0041b703  8b06                 mov eax, dword ptr [esi]
// 0041b705  85c0                 test eax, eax
// 0041b707  741e                 je 0x41b727
// 0041b709  50                   push eax
// 0041b70a  ff15382bb200         call dword ptr [0xb22b38]
// 0041b710  85c0                 test eax, eax
// 0041b712  7c13                 jl 0x41b727
// 0041b714  8b06                 mov eax, dword ptr [esi]
// 0041b716  50                   push eax
// 0041b717  ff15442bb200         call dword ptr [0xb22b44]
// 0041b71d  85c0                 test eax, eax
// 0041b71f  7c06                 jl 0x41b727
// 0041b721  c70600000000         mov dword ptr [esi], 0
// 0041b727  5e                   pop esi
// 0041b728  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
extern "C" {
    long (__stdcall *SafeArrayDestroy)(void*);
    long (__stdcall *SafeArrayUnlock)(void*);
}

struct S {
    void* p;
    void f();
};

void S::f() {
    if (p != 0) {
        if (SafeArrayDestroy(p) >= 0) {
            if (SafeArrayUnlock(p) >= 0) {
                p = 0;
            }
        }
    }
}
}
