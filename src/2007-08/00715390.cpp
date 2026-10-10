// from server: 96% by colin
// roc 2007-08 00715390  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715390

struct CXTCaptionButton {
    char pad[0x94];
    int field_94;
    int field_98;
    int GetSomething();
    void GetSize(int* out);
};

struct Helper {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    virtual int v6();
    virtual int v7();
};

extern Helper* GetHelper();

void CXTCaptionButton::GetSize(int* out) {
    Helper* h = GetHelper();
    int r = h->v6();
    if (r == 0) {
        out[0] = 0;
        out[1] = 0;
        return;
    }
    out[0] = field_94;
    out[1] = field_98;
}
