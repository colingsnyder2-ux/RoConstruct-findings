// from server: 63% by colin
struct CXTPControlTabWorkspace {
    char pad_0000[0xfc];
    int field_0xfc;
    char pad_0100[0x5c];
    int field_0x15c;
    char pad_0160[0x8];
    int field_0x168;

    int method(int a, int b);
};

struct Inner {
    char pad_0000[0x2c];
    int (__thiscall* field_0x2c)(void*);
};

struct Inner2 {
    char pad_0000[0xe0];
    int field_0xe0;
};

extern "C" int __stdcall sub_63a640(int, int, int, int);
extern "C" int __stdcall sub_707fc0(int, int);

int CXTPControlTabWorkspace::method(int a, int b)
{
    int local_0;
    int local_4;
    int* p = (int*)&this->field_0x168;
    int result = ((int (__thiscall*)(int*))((Inner*)this->field_0x168)->field_0x2c)(p);
    if (result == 0) {
        int r = sub_63a640(this->field_0xfc, b, a, 0);
        return b;
    }
    int eax = sub_707fc0(((Inner2*)result)->field_0xe0, (int)p);
    if (*(int*)(result + 0x3c) != 0) {
        eax += 2;
    }
    int ecx = *(int*)(this->field_0xfc + 0xfc);
    if (ecx == 2 || ecx == 3 || ecx == 5) {
        local_0 = eax;
        local_4 = this->field_0x15c;
    } else {
        local_0 = this->field_0x15c;
        local_4 = eax;
    }
    *(int*)a = local_0;
    *(int*)(a + 4) = local_4;
    return a;
}
