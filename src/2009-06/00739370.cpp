// roc 2009-06 00739370  unit: CXTPImageManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00739370
//
// 00739370  8b442404             mov eax, dword ptr [esp + 4]
// 00739374  83f801               cmp eax, 1
// 00739377  7509                 jne 0x739382
// 00739379  89442404             mov dword ptr [esp + 4], eax
// 0073937d  e92efdffff           jmp 0x7390b0
// 00739382  83f802               cmp eax, 2
// 00739385  7508                 jne 0x73938f
// 00739387  e824a7ffff           call 0x733ab0
// 0073938c  c20400               ret 4
// 0073938f  83f803               cmp eax, 3
// 00739392  7508                 jne 0x73939c
// 00739394  e837a7ffff           call 0x733ad0
// 00739399  c20400               ret 4
// 0073939c  83f804               cmp eax, 4
// 0073939f  7508                 jne 0x7393a9
// 007393a1  e84aa7ffff           call 0x733af0
// 007393a6  c20400               ret 4
// 007393a9  e8128cffff           call 0x731fc0
// 007393ae  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPImageManagerIconSet@ns_ROCX000032@@QAEXH@Z)

namespace ns_ROCX000032 {
struct CXTPImageManagerIconSet {
    void sub_64C960(int);
    void sub_648740();
    void sub_648760();
    void sub_648780();
    void sub_648730();
    void func(int);
};

void CXTPImageManagerIconSet::func(int n) {
    if (n == 1) {
        sub_64C960(n);
        return;
    }
    if (n == 2) {
        sub_648740();
        return;
    }
    if (n == 3) {
        sub_648760();
        return;
    }
    if (n == 4) {
        sub_648780();
        return;
    }
    sub_648730();
}
}
