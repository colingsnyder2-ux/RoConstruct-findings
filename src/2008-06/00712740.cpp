// from server: 64% by colin
struct CPropertyGridItemBrickColor {
    char pad[0x24];
    int count;
    int* items;
    char pad2[0x84 - 0x28];
    int field84;
    char pad3[0xc0 - 0x88];
    void* fieldC0;
    void SetIndex(int index);
};

struct CPropertyGridItemConstraint {
    char pad[0x84];
    int field84;
    char pad2[0xc0 - 0x88];
    CPropertyGridItemBrickColor* fieldC0;
    void SetIndex(int index);
};

void CPropertyGridItemBrickColor::SetIndex(int index) {
    this->field84 = index;
    int i = 0;
    while (i < ((CPropertyGridItemBrickColor*)this->fieldC0)->count) {
        CPropertyGridItemBrickColor* p = (CPropertyGridItemBrickColor*)this->fieldC0;
        int idx = i;
        int* arr = p->items;
        CPropertyGridItemBrickColor* item = (idx >= 0 && idx < p->count) ? (CPropertyGridItemBrickColor*)arr[idx] : 0;
        item->SetIndex(index + 1);
        i++;
    }
}

void CPropertyGridItemConstraint::SetIndex(int index) {
    this->field84 = index;
    int i = 0;
    while (i < this->fieldC0->count) {
        CPropertyGridItemBrickColor* p = this->fieldC0;
        int idx = i;
        int* arr = p->items;
        CPropertyGridItemBrickColor* item = (idx >= 0 && idx < p->count) ? (CPropertyGridItemBrickColor*)arr[idx] : 0;
        item->SetIndex(index + 1);
        i++;
    }
}
