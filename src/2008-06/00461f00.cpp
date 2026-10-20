// from server: 96% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern char symbol[];
#include <intrin.h>

extern "C" __declspec(dllimport) int __stdcall GetLocaleInfoA(unsigned long, unsigned long, char*, int);

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
    volatile int field_b8;
    volatile int field_bc;
    volatile int field_c0;
    volatile int field_c4;
    volatile int field_c8;
    volatile int field_cc;
    volatile int field_d0;
    volatile int field_d4;
    volatile int field_d8;
    volatile int field_dc;
    volatile int field_e0;
    volatile int field_e4;
    volatile int field_e8;

    S();
    virtual ~S();
};

S::S()
{
    field_b4 = symbol;
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



