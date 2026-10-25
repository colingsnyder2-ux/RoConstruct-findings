// from server: 100% by tester
// roc 2008-06 0040eda0  unit: CBrowserView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040eda0
//
// 0040eda0  8b442404             mov eax, dword ptr [esp + 4]
// 0040eda4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040eda7  83bafc00000005       cmp dword ptr [edx + 0xfc], 5
// 0040edae  750f                 jne 0x40edbf
// 0040edb0  e83bfaffff           call 0x40e7f0
// 0040edb5  8b442408             mov eax, dword ptr [esp + 8]
// 0040edb9  c70001000000         mov dword ptr [eax], 1
// 0040edbf  c20800               ret 8

struct CBrowserView {
    void sub_40B070();

    void sub_40B2F0(int* a1, int* a2);
};

void CBrowserView::sub_40B2F0(int* a1, int* a2) {
    int* p = *(int**)((char*)a1 + 0xc);
    if (*(int*)((char*)p + 0xfc) == 5) {
        sub_40B070();
        *a2 = 1;
    }
}
