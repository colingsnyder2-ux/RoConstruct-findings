// from server: 54% by colin
struct CXTPRibbonBar;

struct CXTPRibbonBar
{
    char pad0[0x20];
    void* field_20;
    char pad24[0xcc - 0x24];
    int field_cc;
    char padD0[0x264 - 0xd0];
    void* field_264;
    char pad268[0x274 - 0x268];
    void* field_274;

    void func_006aa170(void* arg1, void* arg2, void* arg3);
};

extern "C" void* __stdcall sub_00643980();
extern "C" void* __stdcall sub_00633900(void*);
extern "C" int __stdcall sub_006a37b0(void*);
extern "C" int __stdcall sub_006a3940(void*, void*);
extern "C" void* __stdcall sub_006a79e0();
extern "C" void* __stdcall sub_006a7f30(void*, void*, void*);
extern "C" void __stdcall sub_006a38f0(void*, void*);
extern "C" void __stdcall sub_006febf0(void*, void*, void*, void*);
extern "C" void __stdcall sub_00644280(void*, void*, void*, void*);

void CXTPRibbonBar::func_006aa170(void* arg1, void* arg2, void* arg3)
{
    void* v1;
    void* v2;
    int flag;
    void* result;
    void* old;
    int rect[4];

    v1 = sub_00643980();
    v2 = sub_00633900(v1);

    flag = 0;

    if (*(int*)((char*)v2 + 4) <= 0)
    {
        if (sub_006a37b0(field_20) == 0)
            goto skip;

        if (sub_006a3940(v2, this) != 0)
            goto skip;

        if (field_cc != -1)
            goto skip;

        result = 0;
        old = sub_006a79e0();

        if (*(int*)((char*)old + 0x62c) != 0)
        {
            result = sub_006a7f30(this, arg2, arg3);
        }

        if (field_274 != result)
        {
            if (field_274 != 0)
            {
                old = field_274;
                rect[0] = *(int*)((char*)old + 0x34);
                rect[1] = *(int*)((char*)old + 0x38);
                rect[2] = *(int*)((char*)old + 0x3c);
                rect[3] = *(int*)((char*)old + 0x40);
                void (__stdcall *fn)(void*, int*, int) = *(void (__stdcall **)(void*, int*, int))((char*)(*(void**)this) + 0x19c);
                field_274 = 0;
                fn(this, rect, 1);
            }

            field_274 = result;

            if (result != 0)
            {
                rect[0] = *(int*)((char*)result + 0x34);
                rect[1] = *(int*)((char*)result + 0x38);
                rect[2] = *(int*)((char*)result + 0x3c);
                rect[3] = *(int*)((char*)result + 0x40);
                void (__stdcall *fn)(void*, int*, int) = *(void (__stdcall **)(void*, int*, int))((char*)(*(void**)this) + 0x19c);
                fn(this, rect, 1);
            }

            if (field_274 != 0)
            {
                sub_006a38f0(v2, field_20);
            }
        }

        if (flag == 0)
        {
            if (field_264 != 0)
            {
                sub_006febf0((char*)field_264 + 0x178, field_20, arg2, arg3);
            }
        }

        sub_00644280(this, arg1, arg2, arg3);
        return;
    }

skip:
    flag = 1;
    goto skip;
}
