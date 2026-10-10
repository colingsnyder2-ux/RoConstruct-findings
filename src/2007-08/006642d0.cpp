// from server: 46% by colin
struct VCXTPReportRows {
    int field_0x30;
    int field_0x34;
    void sub_6641E0(int, int, int);
    void sub_62FF20();
    void func(int a, int b);
};

void VCXTPReportRows::func(int a, int b) {
    int i = this->field_0x34 - 1;
    if (i < 0) {
        return;
    }
    while (i >= 0) {
        if (i >= this->field_0x34) {
            this->sub_62FF20();
        }
        int* row = (int*)((char*)i + this->field_0x30 * 8);
        if (i >= this->field_0x34) {
            this->sub_62FF20();
        }
        int v = *row;
        int* p = (int*)((char*)this->field_0x30 + i * 8 + 4);
        if (v > a) {
            *row = v + b;
            *p = *p + b;
        } else {
            int next = a + 1;
            if (*p > next) {
                this->sub_6641E0(i + 1, a + b + 1, *p + b);
                if (i >= this->field_0x34) {
                    this->sub_62FF20();
                }
                *(int*)((char*)this->field_0x30 + i * 8 + 4) = next;
            } else if (*p < a) {
                this->sub_62FF20();
            }
        }
        i--;
    }
}
