// from server: 48% by colin
extern "C" void __stdcall G1_func_0062fef6(unsigned int);
extern "C" void __stdcall G1_func_00630b9e(void *, const char *);
extern "C" void *__stdcall G1_func_0077e6ec(void *);

struct VDHTMLWindow_SignalDesc
{
    void func_0041b660(unsigned int);
};

void VDHTMLWindow_SignalDesc::func_0041b660(unsigned int count)
{
    if (count <= 0xffffffffu / 0x1c)
    {
        unsigned int size = count * 0x1c;
        G1_func_0062fef6(size);
        return;
    }

    unsigned int n = 0xffffffffu / count;
    if (n >= 0x1c)
    {
        unsigned int size = count * 0x1c;
        G1_func_0062fef6(size);
        return;
    }

    char *msg = (char *)0x83f17c;
    void *buf = 0;
    G1_func_0077e6ec(&buf);
    G1_func_00630b9e(&buf, msg);
}
