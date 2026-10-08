// from server: 100% by colin
// roc 2007-08 00432510  unit: CDataModelPropGrid  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00432510
//
// 00432510  80b9e000000000       cmp byte ptr [ecx + 0xe0], 0
// 00432517  0f94c0               sete al
// 0043251a  50                   push eax
// 0043251b  e860feffff           call 0x432380
// 00432520  c3                   ret 

struct CDataModelPropGrid {
    char pad[0xe0];
    unsigned char m_flag;
    int helper(bool value);
    int wrapper();
};

int CDataModelPropGrid::wrapper() {
    return helper(m_flag == 0);
}
