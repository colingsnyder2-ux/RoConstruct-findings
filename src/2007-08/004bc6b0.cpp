// from server: 48% by colin
struct RakPeer {
    char pad0[4];
    char field4;
    char pad5[0x22c - 5];
    int field22c;
    char pad230[0x72c - 0x230];
    void* field72c;
    bool func1(int, int, int, int, int, int, int, int);
    bool func2(int, int, int, int, int, int, int, int);
};

extern "C" bool __stdcall sub_4a3480(void*, const char*);
extern "C" bool __stdcall sub_4ba840(RakPeer*, int, int, int, int, int, int, int, int);

bool RakPeer::func1(int a, int b, int c, int d, int e, int f, int g, int h)
{
    if (a == 0)
        return false;
    if (b < 0)
        return false;
    if (field22c == 0)
        return false;
    if (field4 == 1)
        return false;

    char local[4];
    if (h == 0)
    {
        if (sub_4a3480(local, (const char*)0x892f5c))
            return false;
        if (field72c != 0)
        {
            bool r = func2(c, d, e, f, g, h, 0, 0);
            if (!r)
            {
                void** vt = *(void***)field72c;
                bool (*fn)(void*, int, int, int, int, int, int, int, int) = (bool (*)(void*, int, int, int, int, int, int, int, int))vt[0];
                return fn(field72c, a, b * 8, e, f, g, h, 0, 0);
            }
        }
    }

    sub_4ba840(this, a, b * 8, c, d, e, f, g, h);
    return true;
}
