// from server: 15% by colin
// roc 2008-06 0078c3c0  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c3c0

extern "C" void* __cdecl sub_6a0920(unsigned int size);

struct CXTSplitterWndThemeFactory {
    void* field_0;
    int field_4;
    int field_8;
    void* create(int type);
};

void* CXTSplitterWndThemeFactory::create(int type) {
    CXTSplitterWndThemeFactory* p;
    if (type != 1) {
        p = (CXTSplitterWndThemeFactory*)sub_6a0920(0x1c);
        if (p) {
            p->field_0 = (void*)0x86a798;
            p->field_4 = 0;
            p->field_8 = 0;
        }
    } else if (type == 2) {
        p = (CXTSplitterWndThemeFactory*)sub_6a0920(0x1c);
        if (p) {
            p->field_0 = (void*)0x86a7ac;
            p->field_4 = 0;
            p->field_8 = 0;
        }
    } else {
        p = (CXTSplitterWndThemeFactory*)sub_6a0920(0x1c);
        if (p) {
            p->field_0 = (void*)0x86a784;
            p->field_4 = 0;
            p->field_8 = 0;
        }
    }
    if (p) {
        p->field_8 = type;
    }
    return p;
}
