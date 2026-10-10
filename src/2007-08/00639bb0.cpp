// from server: 49% by colin
struct CXTPControlComboBoxAutoCompleteWnd
{
    char pad[0xe0];
    char field_e0[4];
    char field_e4[0x74];
    void* field_158;
    void* get(void* arg);
};

extern "C" int __stdcall sub_77dcd0(void*);
extern "C" void __stdcall sub_77dd74(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void* __stdcall sub_639b80(void*, void*);

void* CXTPControlComboBoxAutoCompleteWnd::get(void* arg)
{
    void* result;
    void* local18;
    void* local14;
    int state = 0;

    if (sub_77dcd0(field_e0))
    {
        if (field_158 == 0)
        {
            sub_639b80(field_158, &local18);
            state = 1;
            if (!sub_77dcd0(&local18))
            {
                sub_639b80(field_158, &local14);
                state = 3;
                result = &local14;
                goto done;
            }
        }
        result = field_e4;
    }
    else
    {
        result = field_e0;
    }

done:
    sub_77dd74(arg, result);
    if (state & 2)
    {
        sub_77ddbc(&local14);
    }
    if (state & 1)
    {
        sub_77ddbc(&local18);
    }
    return arg;
}
