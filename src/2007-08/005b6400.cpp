// from server: 17% by colin
struct RBXName {
    void* data;
};

struct std_string {
    void* pad[4];
    std_string();
    std_string(const char*);
    std_string(const std_string&);
    ~std_string();
    std_string& operator=(const std_string&);
};

struct SkyBase {
    char pad[0xe8];
};

struct VSky : SkyBase {
    char pad1[0x1a8 - 0xe8];
    bool flag1a8;
    int val1ac;
    char pad2[0x1b0 - 0x1ac - 4];

    VSky();
};

extern "C" {
    void __stdcall sub_77e6a4();
    void __stdcall sub_77e698();
    void __stdcall sub_77e69c();
    void __stdcall sub_77e690();
    void __stdcall sub_77e6ac();
}

void sub_5b63b0();
void* sub_52cb30();
void sub_541bf0();
void* sub_5450b0(const std_string*, void*);

VSky::VSky()
{
    sub_5b63b0();

    *(void**)((char*)this + 0) = (void*)0x7b8334;
    *(void**)((char*)this + 4) = (void*)0x7b8328;
    *(void**)((char*)this + 0x10) = (void*)0x7b8320;
    *(void**)((char*)this + 0x14) = (void*)0x7b8310;
    *(void**)((char*)this + 0x2c) = (void*)0x7b8300;
    *(void**)((char*)this + 0x44) = (void*)0x7b82f0;
    *(void**)((char*)this + 0x5c) = (void*)0x7b82e0;
    *(void**)((char*)this + 0x74) = (void*)0x7b82d0;
    *(void**)((char*)this + 0x8c) = (void*)0x7b82c0;

    sub_77e6a4();
    *(void**)((char*)this + 0xe8 + 0x1c) = sub_52cb30();

    sub_77e6a4();
    *(void**)((char*)this + 0x108 + 0x1c) = sub_52cb30();

    sub_77e6a4();
    *(void**)((char*)this + 0x128 + 0x1c) = sub_52cb30();

    sub_77e6a4();
    *(void**)((char*)this + 0x148 + 0x1c) = sub_52cb30();

    sub_77e6a4();
    *(void**)((char*)this + 0x168 + 0x1c) = sub_52cb30();

    sub_77e6a4();
    *(void**)((char*)this + 0x188 + 0x1c) = sub_52cb30();

    this->flag1a8 = true;
    this->val1ac = 0xbb8;

    std_string s1;
    sub_77e698();
    sub_541bf0();
    sub_77e6ac();

    std_string s2;
    sub_77e698();
    void* p2 = sub_5450b0(&s2, 0);
    std_string s3;
    sub_77e69c();
    *(void**)((char*)this + 0xe8 + 0x1c) = *(void**)((char*)p2 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();

    std_string s4;
    sub_77e698();
    void* p4 = sub_5450b0(&s4, 0);
    std_string s5;
    sub_77e69c();
    *(void**)((char*)this + 0x108 + 0x1c) = *(void**)((char*)p4 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();

    std_string s6;
    sub_77e698();
    void* p6 = sub_5450b0(&s6, 0);
    std_string s7;
    sub_77e69c();
    *(void**)((char*)this + 0x128 + 0x1c) = *(void**)((char*)p6 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();

    std_string s8;
    sub_77e698();
    void* p8 = sub_5450b0(&s8, 0);
    std_string s9;
    sub_77e69c();
    *(void**)((char*)this + 0x148 + 0x1c) = *(void**)((char*)p8 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();

    std_string s10;
    sub_77e698();
    void* p10 = sub_5450b0(&s10, 0);
    std_string s11;
    sub_77e69c();
    *(void**)((char*)this + 0x168 + 0x1c) = *(void**)((char*)p10 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();

    std_string s12;
    sub_77e698();
    void* p12 = sub_5450b0(&s12, 0);
    std_string s13;
    sub_77e69c();
    *(void**)((char*)this + 0x188 + 0x1c) = *(void**)((char*)p12 + 0x1c);
    sub_77e690();
    sub_77e6ac();
    sub_77e6ac();
    sub_77e6ac();
}
