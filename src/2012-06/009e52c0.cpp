// from server: 75% by atomic.potato
struct CXTSplitterWnd
{
    char pad0[0x80];
    int field80;
    int field84;
    char pad88[0xc];
    int field94;
    char pad98[0x5c];
    int fieldf4;
    int fieldf8;

    void func_009e52c0(int arg);
};

extern "C" int __cdecl sub_982aa4(void*, int);
extern "C" int __cdecl sub_982b70(void*, int, int);
extern "C" int __cdecl sub_982c12(void*, int, int);
extern "C" int __cdecl sub_a99b00(void*, int);

void CXTSplitterWnd::func_009e52c0(int arg)
{
    int local8;
    int localc;

    if (fieldf8 != -1)
    {
        if (fieldf8 == arg)
            return;
        (*(void (__thiscall**)(CXTSplitterWnd*))(*(int*)this + 0x1bc))(this);
    }

    fieldf8 = arg;

    if ((*(int (__thiscall**)(CXTSplitterWnd*, int*, int*))(*(int*)this + 0x174))(this, &local8, &localc))
    {
        if (local8 == arg)
        {
            local8++;
            if (local8 >= field80)
                local8 = 0;
            (*(void (__thiscall**)(CXTSplitterWnd*, int, int, int))(*(int*)this + 0x178))(this, local8, localc, 0);
        }
    }

    int i = 0;
    if (field84 > 0)
    {
        do
        {
            void* p = (void*)sub_982c12(this, arg, i);
            if (!p)
                break;
            sub_982aa4(p, 0);

            int e;
            if (fieldf4 != -1 && fieldf4 > 0)
                e = 1;
            else
                e = 0;

            int v = (field80 + 0xe90) << 4;
            v += e;
            sub_a99b00(p, v);

            int j = arg + 1;
            if (j < field80)
            {
                do
                {
                    void* q = (void*)sub_982c12(this, j, i);
                    if (!q)
                        break;
                    int r = sub_982b70(this, j - 1, i);
                    sub_a99b00(q, r);
                    j++;
                } while (j < field80);
            }

            i++;
        } while (i < field84);
    }

    field80--;
    int* p94 = (int*)field94;
    p94[field80 * 3 + 2] = p94[arg * 3 + 2];

    (*(void (__thiscall**)(CXTSplitterWnd*))(*(int*)this + 0x150))(this);
}
