// from server: 32% by colin
struct CMap {
    void* vftable;
    char pad[0xe8 - 4];
    int   field_e8;
    int*  field_ec;
    int   field_f0;
    char pad3[0xfc - 0xf4];
    char  field_fc[0x124 - 0xfc];
    char  field_124[4];
    char  field_128[4];
    char  field_12c[4];
    char  field_130[4];
    char  field_134[4];

    void dtor();
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __stdcall sub_6FFAB0(int, int);
extern "C" void __stdcall sub_41F680(void*);
extern "C" void __stdcall sub_6DC670(void*);
extern "C" void __stdcall sub_6DC6D0(void*);
extern "C" void __stdcall sub_738C16(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __cdecl sub_62FF20();

void CMap::dtor()
{
    this->vftable = (void*)0x7d946c;

    int i = 0;
    if (this->field_f0 > 0) {
        do {
            if (i < 0 || i >= this->field_f0)
                sub_62FF20();
            sub_62FC62((void*)this->field_ec[i]);
            ++i;
        } while (i < this->field_f0);
    }

    sub_6FFAB0(0, -1);

    *(void**)((char*)this + 0x134) = (void*)0x794a08;
    sub_41F680((char*)this + 0x134);

    *(void**)((char*)this + 0x12c) = (void*)0x794a08;
    sub_41F680((char*)this + 0x12c);

    sub_77DDBC((char*)this + 0x128);
    sub_77DDBC((char*)this + 0x124);

    sub_6DC6D0((char*)this + 0xfc);
    sub_6DC670((char*)this + 0xe8);
    sub_738C16(this);
}
