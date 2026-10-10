// from server: 23% by colin
struct VFillToolColorListener {
    void construct(int, int);
};

extern "C" int __stdcall sub_66D590(int, int, int);
extern "C" int __stdcall sub_631C90(int);
extern "C" int __stdcall sub_635650(int, int, int);
extern "C" int __stdcall sub_66FAA0(int, int);
extern "C" int __stdcall sub_6301E4(int);

void VFillToolColorListener::construct(int a, int b) {
    int local1c;
    int local20;
    int local24;
    int local28;
    int local30;
    int local34;
    int local38;
    int local3c;
    int local40;
    int local44;
    int local48;
    int local4c;
    int local50;
    int local54;
    int local58;
    int local14;
    int local18;

    local20 = 1;
    local28 = 1;
    local34 = 1;
    local1c = b;
    local24 = 1;
    local44 = 0;
    local34 = 0;
    local30 = 0;
    local3c = 0;
    local40 = 0;

    int* obj = (int*)a;
    int vtable = *obj;
    int (*getString)(int) = (int (*)(int))*(int*)(vtable + 0x70);
    int str1 = getString(a);
    local14 = str1;

    sub_66D590(*(int*)((char*)this + 0xd8), str1, (int)&local1c);

    vtable = *obj;
    getString = (int (*)(int))*(int*)(vtable + 0x70);
    int str2 = getString(a);
    local58 = str2;

    int* p = (int*)sub_631C90(*(int*)((char*)this + 0xd8));
    int vtable2 = *p;
    int (*getString2)(int) = (int (*)(int))*(int*)(vtable2 + 0x70);
    getString2(str2);

    vtable = *obj;
    getString = (int (*)(int))*(int*)(vtable + 0x70);
    int str3 = getString(a);
    local54 = str3;

    int edi74 = *(int*)((char*)this + 0xd8);
    edi74 = *(int*)(edi74 + 0x74);
    sub_635650(edi74, str3, 1);

    vtable = *obj;
    getString = (int (*)(int))*(int*)(vtable + 0x70);
    int str4 = getString(a);
    local18 = str4;

    sub_66FAA0((int)((char*)this + 0x120), str4);

    if (str4 != 0) {
        sub_6301E4(str4);
    }

    if (local54 != 0) {
        sub_6301E4(local54);
    }

    if (local58 != 0) {
        sub_6301E4(local58);
    }

    if (local14 != 0) {
        sub_6301E4(local14);
    }
}
