// from server: 89% by colin
// roc 2007-08 0044bf50  unit: seg_00440000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044bf50

extern "C" void __stdcall _invalid_parameter_noinfo();

struct CRobloxControlColorSelector {
    char pad[0x16c];
    int index;
    unsigned char flag;
    char pad2[0x3];
    int value;
    void sub_63c510();
    void func();
};

void CRobloxControlColorSelector::func() {
    int idx = this->index;
    if (idx != -1) {
        int* begin = *(int**)0x8bbebc;
        if (begin != 0) {
            int count = (*(int**)0x8bbec0 - begin) / 6;
            if ((unsigned)idx >= (unsigned)count) {
                _invalid_parameter_noinfo();
                begin = *(int**)0x8bbebc;
            }
        } else {
            _invalid_parameter_noinfo();
            begin = *(int**)0x8bbebc;
        }
        this->value = begin[idx * 3];
        this->flag = 1;
    }
    this->sub_63c510();
}
