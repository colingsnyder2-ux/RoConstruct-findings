// from server: 22% by colin
struct SignalInstance {
    void f();
};

struct SignalDesc {
    char pad0[0x2ac];
    int field_2ac;
    int field_2b0;
    int field_2b4;
    char pad2[0x2c4 - 0x2bc];
    int field_2c4;
    int field_2c8;
    int field_2cc;
    int field_2d0;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void SignalInstance::f()
{
    SignalDesc* desc = (SignalDesc*)((char*)this - 0x2ac);
    desc->field_2ac = 0;
    if (desc->field_2d0 == 0)
    {
        return;
    }
    int idx = desc->field_2cc;
    int count = desc->field_2d0;
    if ((unsigned int)idx > (unsigned int)(idx + count))
    {
        _invalid_parameter_noinfo();
    }
    int* arr = (int*)desc->field_2c4;
    int* slot = (int*)(arr[idx]);
    int* vtbl = (int*)*slot;
    if (vtbl != 0)
    {
        int* fn = (int*)*vtbl;
        if (fn != 0)
        {
            ((void (__stdcall*)(int*, int*, int))fn)(slot + 2, slot + 2, 1);
        }
        *slot = 0;
    }
    desc->field_2cc++;
    if (desc->field_2c8 <= desc->field_2cc)
    {
        desc->field_2cc = 0;
    }
    desc->field_2d0--;
    if (desc->field_2d0 == 0)
    {
        desc->field_2cc = 0;
    }
}
