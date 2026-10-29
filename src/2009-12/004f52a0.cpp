// roc 2009-12 004f52a0  unit: RBX::GfxAttachement  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f52a0
//
// 004f52a0  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 004f52a6  8b442404             mov eax, dword ptr [esp + 4]
// 004f52aa  8908                 mov dword ptr [eax], ecx
// 004f52ac  c20400               ret 4
// copied from an identical function in another client (function ?get_19c@seg_004c0000@@QAEHPAH@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD
struct seg_004c0000 {
    int get_19c(int *out);
};

int seg_004c0000::get_19c(int *out) {
    *out = *(int *)((char *)this + 0xac);
    return (int)out;
}