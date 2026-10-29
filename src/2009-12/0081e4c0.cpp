// roc 2009-12 0081e4c0  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e4c0
//
// 0081e4c0  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0081e4c6  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0081e4cc  52                   push edx
// 0081e4cd  e8fedfffff           call 0x81c4d0
// 0081e4d2  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPReportControl@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
// from server: 100% by tester
struct CXTPReportControl {
    char pad[0x288];
    void* field_200;
    void sub_655af0(void*);
    void f();
};

void CXTPReportControl::f() {
    void* p = field_200;
    void* q = *(void**)((char*)p + 0x94);
    sub_655af0(q);
}
}
