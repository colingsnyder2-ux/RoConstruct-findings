// roc 2009-12 00570480  unit: CSHA1  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570480
//
// 00570480  80791800             cmp byte ptr [ecx + 0x18], 0
// 00570484  7407                 je 0x57048d
// 00570486  51                   push ecx
// 00570487  ff15d0b29800         call dword ptr [0x98b2d0]
// 0057048d  c3                   ret 
// copied from an identical function in another client (function ?f@CSHA1@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
// from server: 100% by why2
struct CSHA1 {
    char pad0[24];
    char m_flag;
    void f();
};

extern "C" void (__stdcall *DeleteCriticalSection)(void*);

void CSHA1::f()
{
    if (m_flag != 0) {
        DeleteCriticalSection(this);
    }
}
}
