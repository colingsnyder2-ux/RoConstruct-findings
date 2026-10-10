// from server: 84% by colin
extern "C" int __cdecl func_00630d60(float);

struct CRenderSettings {
    char pad[0x10];
    void (__thiscall *callback)(void *, int);
    int offset;
    void setValue(void *arg1, float *arg2);
};

void CRenderSettings::setValue(void *arg1, float *arg2)
{
    int base;
    if (arg1 != 0)
        base = (int)arg1 - 4;
    else
        base = 0;

    int result = func_00630d60(*arg2);
    callback((void *)(offset + base), result);
}
