// from server: 59% by colin
struct CXTPPrintOptions
{
    int f(int* out);
};

int CXTPPrintOptions::f(int* out)
{
    int (*fn)(void*) = *(int (**)(void*))((*(char**)this) + 0x58);
    if (fn(this) == 0)
    {
        out[0] = *(int*)((char*)this + 0x20);
        out[1] = *(int*)((char*)this + 0x24);
        out[2] = *(int*)((char*)this + 0x28);
        out[3] = *(int*)((char*)this + 0x2c);
        return 0;
    }

    out[0] = (*(int*)((char*)this + 0x20) * 0xfe) / 0x320;
    out[1] = (*(int*)((char*)this + 0x24) * 0xfe) / 0x320;
    out[2] = (*(int*)((char*)this + 0x28) * 0xfe) / 0x320;
    out[3] = (*(int*)((char*)this + 0x2c) * 0xfe) / 0x320;
    return 0;
}
