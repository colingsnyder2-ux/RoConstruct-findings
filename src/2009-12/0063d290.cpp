// roc 2009-12 0063d290  unit: RBX::Team  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d290
//
// 0063d290  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 0063d296  8b442404             mov eax, dword ptr [esp + 4]
// 0063d29a  8908                 mov dword ptr [eax], ecx
// 0063d29c  c20400               ret 4
// copied from an identical function in another client (function ?get_19c@seg_004c0000@@QAEHPAH@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD
struct seg_004c0000 {
    int get_19c(int *out);
};

int seg_004c0000::get_19c(int *out) {
    *out = *(int *)((char *)this + 0x98);
    return (int)out;
}