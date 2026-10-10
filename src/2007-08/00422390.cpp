// from server: 89% by colin
struct CRobloxTreeCtrlNode {
    char pad_0x00[0xbc];
    int field_0xbc;
    char pad_0xc0[0x10c - 0xc0];
    int field_0x10c;
    int sub_422390();
    CRobloxTreeCtrlNode* sub_630d36(int, int, int, int, int);
};

int CRobloxTreeCtrlNode::sub_422390()
{
    if (this->field_0x10c == -1) {
        CRobloxTreeCtrlNode* v = this->sub_630d36(this->field_0xbc, 0, 0x881f4c, 0x884e54, 0);
        if (v != 0) {
            CRobloxTreeCtrlNode* v2 = this->sub_630d36(this->field_0xbc, 0, 0x881f4c, 0x884e54, 0);
            if (v2 != 0) {
                if (v2->sub_422390() != 0) {
                    return 1;
                }
            }
        }
        return 0;
    } else {
        int tmp = 0;
        int *p = &this->field_0x10c;
        if (*p < 0) {
            p = &tmp;
        }
        return *p;
    }
}
