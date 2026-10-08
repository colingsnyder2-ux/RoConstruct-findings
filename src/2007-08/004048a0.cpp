// from server: 61% by colin
// roc 2007-08 004048a0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004048a0
//
// 004048a0  85c9                 test ecx, ecx
// 004048a2  7416                 je 0x4048ba
// 004048a4  8b542404             mov edx, dword ptr [esp + 4]
// 004048a8  8d4104               lea eax, [ecx + 4]
// 004048ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004048af  51                   push ecx
// 004048b0  52                   push edx
// 004048b1  50                   push eax
// 004048b2  e879faffff           call 0x404330
// 004048b7  c20800               ret 8
// 004048ba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004048be  8b542404             mov edx, dword ptr [esp + 4]
// 004048c2  51                   push ecx
// 004048c3  33c0                 xor eax, eax
// 004048c5  52                   push edx
// 004048c6  50                   push eax
// 004048c7  e864faffff           call 0x404330
// 004048cc  c20800               ret 8

struct CComObjectNoLock {
    void* m_pUnk;
    void* m_pVtbl;

    void CreateInstance(void* p1, void* p2);
};

extern "C" void __stdcall sub_404330(void*, void*, void*);

void CComObjectNoLock::CreateInstance(void* p1, void* p2) {
    if (this != 0) {
        sub_404330((char*)this + 4, p1, p2);
    } else {
        sub_404330(0, p1, p2);
    }
}
