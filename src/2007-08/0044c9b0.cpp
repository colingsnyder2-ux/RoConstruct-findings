// from server: 44% by colin
struct CRobloxControlColorSelector {
    char pad_0[0x20];
    void* field_20;
    char pad_24[0x144];
    int field_168;
    int field_16c;
    char field_170;
    char pad_171[3];
    int field_174;
    void construct();
};

extern "C" void __cdecl sub_63C810();
extern "C" unsigned int* __cdecl sub_586610();
extern "C" void __cdecl sub_44C8D0(int);
extern "C" void __cdecl sub_63A120(int);
extern "C" void __cdecl sub_77E6D8();

extern unsigned int dword_8BBEBC;
extern unsigned int dword_8BBEC0;

void CRobloxControlColorSelector::construct()
{
    sub_63C810();
    *(void**)this = (void*)0x790AB4;
    *(void**)((char*)this + 0x20) = (void*)0x790A54;
    field_170 = 0;

    if (dword_8BBEBC != 0) {
        unsigned int count = (dword_8BBEC0 - dword_8BBEBC) / 12;
        if (count != 0) {
            goto skip;
        }
    }

    {
        unsigned int* p = sub_586610();
        unsigned int ebx = p[2];
        if (p[1] > ebx) {
            sub_77E6D8();
        }
        p = sub_586610();
        unsigned int esi = p[1];
        if (esi > p[2]) {
            sub_77E6D8();
        }
        while (esi != ebx) {
            sub_44C8D0(*(int*)esi);
            esi += 4;
        }
    }

skip:
    field_168 = -1;
    field_174 = -1;
    sub_63A120(0x10);
    field_16c = -1;
}
