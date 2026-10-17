// from server: 74% by colin
extern "C" int __stdcall GetLocaleInfoA(unsigned long, unsigned long, char*, int);

struct Base {
    char data[0x54];
    Base();
    virtual ~Base();
};

struct Member {
    char data[0x5c];
    Member();
    ~Member();
};

struct S : Base {
    Member member_58;
    void* field_b4;
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    int field_d8;
    int field_dc;
    int field_e0;
    int field_e4;
    int field_e8;

    S();
    virtual ~S();
};

S::S()
{
    member_58.Member::Member();
    field_b4 = (void*)0x81aa5c;
    field_b8 = 0;
    field_c4 = 0;
    field_c0 = 0;
    field_bc = 0;
    field_c8 = 0;
    field_cc = 0;
    field_d0 = 0;
    field_d4 = 0;
    field_d8 = 1;
    field_dc = 1;
    field_e0 = 1;
    field_e4 = 1;

    char buffer[3];
    GetLocaleInfoA(0x400, 0x0d, buffer, 3);
    field_e8 = buffer[0] == '0';
}
