// roc 2007-03 00431550  unit: seg_00430000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00431550
//
// 00431550  56                   push esi
// 00431551  8bf1                 mov esi, ecx
// 00431553  e87ad11e00           call 0x61e6d2
// 00431558  80bee000000000       cmp byte ptr [esi + 0xe0], 0
// 0043155f  7420                 je 0x431581
// 00431561  80bee100000000       cmp byte ptr [esi + 0xe1], 0
// 00431568  7517                 jne 0x431581
// 0043156a  837c240800           cmp dword ptr [esp + 8], 0
// 0043156f  7510                 jne 0x431581
// 00431571  8bce                 mov ecx, esi
// 00431573  e8c8feffff           call 0x431440
// 00431578  6a07                 push 7
// 0043157a  8bce                 mov ecx, esi
// 0043157c  e857ce1e00           call 0x61e3d8
// 00431581  5e                   pop esi
// 00431582  c20800               ret 8
// copied from an identical function in another client (function ?func@CWrapperView@ns_ROCX00000f@@QAEXHH@Z)

namespace ns_ROCX00000f {
struct CWrapperView {
    char pad[0xe0];
    unsigned char flag0;
    unsigned char flag1;
    void sub_63023E();
    void sub_430800();
    void sub_62FF4A(int);
    void func(int, int);
};

void CWrapperView::func(int a, int b) {
    sub_63023E();
    if (flag0 != 0 && flag1 == 0 && a == 0) {
        sub_430800();
        sub_62FF4A(7);
    }
}
}
