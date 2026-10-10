// from server: 52% by colin
extern "C" void __stdcall sub_0062ff38(void*, int);
extern "C" void __stdcall sub_0062ff3e(void*, int);
extern "C" int __stdcall sub_006713d0(void*, void*);
extern "C" int __stdcall sub_007383c4(void*, int);

struct CPatchedControlComboBox
{
    int method(int* a, int* b, int* c, int* d, int* e);
};

int CPatchedControlComboBox::method(int* a, int* b, int* c, int* d, int* e)
{
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;

    sub_0062ff3e(&local1, *(int*)((char*)this - 4));
    local5 = 0;
    *d = 0;
    if (sub_006713d0(this, &local7) == 1)
    {
        int* p = *(int**)((char*)this - 0x20);
        int (*fn)(void*) = *(int (**)(void*))((char*)p + 0x8c);
        int r = fn((char*)this - 0x20);
        if (r != 0)
        {
            *d = sub_007383c4((void*)r, 1);
        }
    }
    if (local1 != 0)
    {
        *(int*)(local1 + 4) = local2;
    }
    if (local4 != 0)
    {
        sub_0062ff38((void*)local3, 0);
    }
    return 0;
}
