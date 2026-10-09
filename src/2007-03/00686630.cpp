// roc 2007-03 00686630  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686630
//
// 00686630  83791002             cmp dword ptr [ecx + 0x10], 2
// 00686634  7213                 jb 0x686649
// 00686636  6a01                 push 1
// 00686638  6a05                 push 5
// 0068663a  e851f7ffff           call 0x685d90
// 0068663f  84c0                 test al, al
// 00686641  7406                 je 0x686649
// 00686643  b801000000           mov eax, 1
// 00686648  c3                   ret 
// 00686649  33c0                 xor eax, eax
// 0068664b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000b@@QAEHXZ)

namespace ns_ROCX00000b {
struct CPropertyGridItemBrickColor {
    char pad[0x10];
    unsigned int count;
    bool sub_6711C0(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (count >= 2) {
        if (sub_6711C0(5, 1))
            return 1;
    }
    return 0;
}
}
