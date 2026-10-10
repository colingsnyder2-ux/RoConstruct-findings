// from server: 65% by atomic.potato
extern "C" void __stdcall setmbcp(int);

struct T_func_006a0926
{
    unsigned char padding0[20];
    unsigned char value14;
    unsigned char padding[47];
    unsigned int value44;
};

extern "C" T_func_006a0926* __cdecl func_006a0926();

int __stdcall func_007bca0b(int value, unsigned int data)
{
    T_func_006a0926* object = func_006a0926();
    object->value14 = (unsigned char)value;
    object->value44 = data;
    if (!value)
        setmbcp(-3);
    return 1;
}
