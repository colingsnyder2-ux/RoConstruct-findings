// roc 2009-12 00747490  unit: CXTPReportControl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00747490
//
// 00747490  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 00747496  8b442404             mov eax, dword ptr [esp + 4]
// 0074749a  8908                 mov dword ptr [eax], ecx
// 0074749c  c20400               ret 4
// copied from an identical function in another client (function ?get_19c@seg_004c0000@@QAEHPAH@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD
struct seg_004c0000 {
    int get_19c(int *out);
};

int seg_004c0000::get_19c(int *out) {
    *out = *(int *)((char *)this + 0x1c0);
    return (int)out;
}