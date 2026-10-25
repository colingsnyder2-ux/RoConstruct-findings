// from server: 100% by tester
// roc 2008-06 006cb000  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb000
//
// 006cb000  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 006cb006  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 006cb00c  52                   push edx
// 006cb00d  e80ee0ffff           call 0x6c9020
// 006cb012  c3                   ret 

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
