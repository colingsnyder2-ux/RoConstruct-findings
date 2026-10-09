// roc 2007-03 00432f40  unit: seg_00430000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00432f40
//
// 00432f40  80b9e000000000       cmp byte ptr [ecx + 0xe0], 0
// 00432f47  0f94c0               sete al
// 00432f4a  50                   push eax
// 00432f4b  e860feffff           call 0x432db0
// 00432f50  c3                   ret 
// copied from an identical function in another client (function ?wrapper@CDataModelPropGrid@ns_ROCX00001a@@QAEHXZ)

namespace ns_ROCX00001a {
struct CDataModelPropGrid {
    char pad[0xe0];
    unsigned char m_flag;
    int helper(bool value);
    int wrapper();
};

int CDataModelPropGrid::wrapper() {
    return helper(m_flag == 0);
}
}
