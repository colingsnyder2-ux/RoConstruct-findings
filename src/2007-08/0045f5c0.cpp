// from server: 31% by colin
struct CScintillaView {
    char pad[0xc8];
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    char pad2[0x10];
    int field_e8;
    void Method();
};

struct Helper1 {
    void Init(int, int);
    void Cleanup();
};

struct Helper2 {
    int Get();
    void Set(int, int, int);
};

struct Helper3 {
    void Set(int);
};

extern "C" void __stdcall CopyRect(void*, const void*);

void CScintillaView::Method() {
    Helper1 h1;
    Helper2 h2;
    Helper3 h3;
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;
    int local8;

    h1.Init(2, 0);
    local1 = 0;
    local2 = 0;
    local3 = 0;
    local4 = 0;
    local5 = 0;
    local6 = 0;
    local7 = 0;
    local8 = 0;

    if (this->field_e8 != 0) {
        local1 |= 8;
    } else {
        local1 |= 4;
    }

    local2 = this->field_c8;
    local3 = this->field_cc;
    local4 = this->field_d0;
    local5 = this->field_d4;

    h2.Get();
    h3.Set(0);

    if (h2.Get() == 1) {
        CopyRect(&local2, &this->field_c8);
        h2.Set(1, local2, local3);
    }

    h1.Cleanup();
}
