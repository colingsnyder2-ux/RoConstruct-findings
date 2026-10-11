// from server: 79% by colin
struct CWebToolbox {
    char pad[0xf8];
    void* field_f8;
    void* field_fc;
    int func_0046a8e0(void** arg);
};

extern "C" void __stdcall sub_6a0a28(void*);

int CWebToolbox::func_0046a8e0(void** arg)
{
    if (field_f8 != 0) {
        sub_6a0a28(field_f8);
    }
    void* p = field_fc;
    if (p != 0) {
        (*(void (__stdcall**)(void*))((*(int**)p)[1]))(p);
    }
    int result;
    if (arg == 0) {
        result = (int)0x80004003;
    } else {
        *arg = p;
        if (p != 0) {
            (*(void (__stdcall**)(void*))((*(int**)p)[1]))(p);
        }
        result = 0;
    }
    if (p != 0) {
        (*(void (__stdcall**)(void*))((*(int**)p)[2]))(p);
    }
    return result;
}
