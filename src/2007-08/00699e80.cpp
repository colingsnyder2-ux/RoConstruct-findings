// from server: 86% by colin
struct CXTPPropertyGridItem {
    void sub_699E80(int, int, int);
};

extern "C" int __stdcall sub_6F5ED0(int, int, int);
extern "C" int __stdcall sub_6983C0();
extern "C" int __stdcall sub_698420();
extern "C" int __stdcall sub_6995D0();
extern "C" int __stdcall sub_630004();
extern "C" int __stdcall IsWindowVisible(int);
extern "C" int __stdcall SendMessageA(int, unsigned int, int, int);

void CXTPPropertyGridItem::sub_699E80(int a1, int a2, int a3)
{
    int v4;
    int v5;
    int v6;
    int v7;

    v4 = sub_6F5ED0(*(int*)((char*)this + 0xc8), a1, a2);
    if (v4 != 0)
    {
        v5 = (*(int(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0x8c))(this);
        if (v5 != 0)
        {
            (*(void(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0xac))(this);
            return;
        }
    }

    if (*(int*)(*(int*)((char*)this + 0xb8) + 0x28) != 0)
    {
        if (*(int*)((char*)this + 0x9c) != 0)
        {
            sub_6983C0();
            return;
        }
        sub_698420();
        return;
    }

    (*(void(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0xac))(this);

    if ((*(unsigned char*)((char*)this + 0x8c) & 1) != 0)
    {
        v6 = (*(int(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0x84))(this);
        if (v6 != 0)
        {
            if (*(int*)(v6 + 0x20) != 0)
            {
                if (IsWindowVisible(*(int*)(v6 + 0x20)) != 0)
                {
                    if (*(int*)(v6 + 0xa0) == (int)this)
                    {
                        sub_630004();
                        if (*(int*)(v6 + 0xa0) == (int)this)
                        {
                            v7 = (*(int(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0x58))(this);
                            if (v7 == 0)
                            {
                                if ((*(int(__thiscall**)(int, int, int))(*(int*)v6 + 0x168))(v6, 1, 1) != 0)
                                {
                                    (*(void(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0x9c))(this);
                                }
                                return;
                            }
                        }
                    }
                }
            }
        }
        SendMessageA(*(int*)(v6 + 0x20), 0xb1, 0, -1);
        SendMessageA(*(int*)(v6 + 0x20), 0xb7, 0, 0);
        return;
    }

    v7 = (*(int(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0x58))(this);
    if (v7 != 0)
    {
        return;
    }
    sub_6995D0();
}
