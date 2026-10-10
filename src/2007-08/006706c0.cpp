// from server: 64% by colin
struct CXTPControlButtonExpand {
    int OnLButtonDown(unsigned int nFlags);
};

extern "C" int __stdcall sub_63C050(int);
extern "C" int __stdcall sub_639B60(int);
extern "C" int __stdcall sub_63A580(int);
extern "C" int __stdcall sub_645A70(int, int);
extern "C" int __stdcall sub_44BB40();

int CXTPControlButtonExpand::OnLButtonDown(unsigned int nFlags)
{
    int v;

    if (sub_63C050(nFlags) != 0)
        return 0;

    if (*(int*)((char*)this + 0x16c) == 0)
        return 1;

    if (*(int*)((char*)this + 0xf8) != 2)
    {
        int p = *(int*)((char*)this + 0xfc);
        if (*(int*)((char*)p + 0xf4) != 2)
        {
            if (sub_44BB40() == 0)
                return 1;
            if (sub_639B60(nFlags) == 0)
                return 1;
            {
                int q = *(int*)((char*)this + 0xfc);
                if (*(int*)((char*)q + 0xdc) != 2)
                    return 1;
            }
            sub_645A70(*(int*)((char*)this + 0x80), 0);
            return 1;
        }
    }

    v = *(int*)((char*)this + 0x9c);
    if (v == -1)
    {
        int r = *(int*)((char*)this + 0x158);
        if (r != 0)
            sub_63A580(r);
    }

    if (v != 0)
    {
        if (nFlags != 0)
        {
            int s = *(int*)((char*)this + 0xfc);
            if (*(int*)((char*)s + 0xdc) == 2)
            {
                if (*(int*)((char*)s + 0xfc) != 5)
                {
                    sub_645A70(*(int*)((char*)this + 0x80), 0);
                    return 1;
                }
            }
        }
        if (nFlags == 0)
        {
            if (*(int*)((char*)this + 0x168) != 0)
            {
                int t = *(int*)((char*)this + 0xfc);
                if (*(int*)((char*)t + 0xfc) != 5)
                    sub_645A70(-1, 0);
            }
        }
    }
    else
    {
        if (nFlags != 0)
        {
            int u = *(int*)((char*)this + 0xfc);
            if (*(int*)((char*)u + 0xdc) == 2)
            {
                if (*(int*)((char*)u + 0xfc) != 5)
                {
                    sub_645A70(*(int*)((char*)this + 0x80), 0);
                    return 1;
                }
            }
        }
        if (nFlags == 0)
        {
            if (*(int*)((char*)this + 0x168) != 0)
            {
                int w = *(int*)((char*)this + 0xfc);
                if (*(int*)((char*)w + 0xfc) != 5)
                    sub_645A70(-1, 0);
            }
        }
    }
    return 1;
}
