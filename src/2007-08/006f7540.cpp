// from server: 52% by colin
// roc 2007-08 006f7540  unit: VCEdit::?$CXTMaskEditT  size: 313 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7540

extern "C" int __stdcall sub_77dcc8();
extern "C" char __stdcall sub_77d578(int);

struct CXTMaskEditT {
    char pad[0x6c];
    char field_6c;
    char pad2[0x84 - 0x6d];
    int field_84;
    int method(int * pos, int forward);
};

int CXTMaskEditT::method(int * pos, int forward)
{
    int saved = this->field_84;
    int cur = *pos;
    if (cur >= 0) {
        int n = sub_77dcc8();
        if (cur < n) {
            if (sub_77d578(cur) == this->field_6c)
                return 1;
        }
    }
    if (forward) {
        while (*pos < saved) {
            int i = *pos;
            if (i >= 0) {
                int n = sub_77dcc8();
                if (i < n) {
                    if (sub_77d578(i) == this->field_6c)
                        return 1;
                }
            }
            *pos = *pos + 1;
        }
        while (*pos >= 0) {
            int i = *pos - 1;
            if (i >= 0) {
                int n = sub_77dcc8();
                if (i < n) {
                    if (sub_77d578(i) == this->field_6c)
                        return 0;
                }
            }
            *pos = *pos - 1;
        }
        return 0;
    } else {
        while (*pos >= 0) {
            int i = *pos;
            if (i >= 0) {
                int n = sub_77dcc8();
                if (i < n) {
                    if (sub_77d578(i) == this->field_6c)
                        return 1;
                }
            }
            *pos = *pos - 1;
        }
        while (*pos < saved) {
            int i = *pos;
            if (i >= 0) {
                int n = sub_77dcc8();
                if (i < n) {
                    if (sub_77d578(i) == this->field_6c)
                        return 0;
                }
            }
            *pos = *pos + 1;
        }
        return 0;
    }
}
