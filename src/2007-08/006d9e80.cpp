// from server: 43% by colin
struct POINT { int x; int y; };

struct CXTPDockingPaneAutoHideWnd
{
    char pad0[4];
    void* field_4;
    char pad8[0x18];
    void* field_20;
    char pad24[0xc0];
    void* field_e4;
    void* field_e8;
    char padEC[0x8];
    int field_f4;
    int field_f8;
    int field_fc;
    char pad100[0x10];
    int field_110;
    int field_114;

    void func_6d9dd0();
    void func_6d9b90();
    void func_6301e4();
    void* func_6d9950(int, int, int, int);
};

extern "C" int __stdcall GetCursorPos(POINT*);
extern "C" int __stdcall KillTimer(void*, unsigned int);
extern "C" int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

extern void* g_8b8888;
extern int g_8b8890;

extern void* func_67ffa0(void*, int, int);
extern int func_44bad0(void*);
extern int func_66e000(void*);

void CXTPDockingPaneAutoHideWnd::func_6d9dd0()
{
}

void CXTPDockingPaneAutoHideWnd::func_6d9b90()
{
}

void CXTPDockingPaneAutoHideWnd::func_6301e4()
{
}

void* CXTPDockingPaneAutoHideWnd::func_6d9950(int a, int b, int c, int d)
{
    (void)a; (void)b; (void)c; (void)d;
    return 0;
}

void func_6d9e80(CXTPDockingPaneAutoHideWnd* self, int nMessage)
{
    if (nMessage == 4)
    {
        self->func_6d9dd0();
        return;
    }

    if (self->field_e4 == 0)
        return;

    if (self->field_e8 != 0)
    {
        if (*(CXTPDockingPaneAutoHideWnd**)((char*)self->field_e8 + 0xa8) != self)
            return;
    }

    if (nMessage == 1)
    {
        if (self->field_114 != 0)
            return;

        POINT pt;
        GetCursorPos(&pt);

        if (*(int*)((char*)self->field_e4 + 0x190) != 0)
            goto label_fe6;

        {
            void* r1 = func_67ffa0(self, pt.x, pt.y);
            if (func_44bad0(r1) != 0)
                goto label_fe6;
        }

        {
            void* r2 = func_67ffa0(self->field_e8, pt.x, pt.y);
            if (func_44bad0(r2) != 0)
                goto label_fe6;
        }

        if (self->field_fc != 0)
            return;

        self->field_110--;
        if (self->field_110 > 0)
            return;

        self->field_110 = 0;
        KillTimer((char*)self + 4, 1);

        if (g_8b8890 != 0)
        {
            int v = *(int*)((char*)self->field_e4 + 0x1a0);
            void* r3 = self->func_6d9950(0xa, v, 0, 0);
            if (func_66e000(r3) == 0)
            {
                self->field_fc = 1;
                if (self->field_20 != 0)
                {
                    SetTimer(self->field_20, 3, (unsigned int)g_8b8888, 0);
                    self->func_6301e4();
                    return;
                }
                self->func_6301e4();
                return;
            }
        }
        self->field_110 = 6;
        self->func_6301e4();
        return;

label_fe6:
        self->field_110 = 6;
        if (self->field_fc == 0)
            return;
        KillTimer(self->field_20, 3);
        self->field_fc = 0;
        SetTimer(self->field_20, 2, (unsigned int)g_8b8888, 0);
        return;
    }

    if (nMessage == 3)
    {
        if (self->field_fc == 0)
            return;

        self->field_f4--;
        if (self->field_f4 > -1)
        {
            self->func_6d9b90();
            return;
        }

        KillTimer(self->field_20, 3);
        self->field_fc = 0;
        KillTimer((char*)self + 4, 1);
        {
            int v = *(int*)((char*)self->field_e4 + 0x1a0);
            void* r4 = self->func_6d9950(0xb, v, 0, 0);
            func_66e000(r4);
        }
        self->func_6d9dd0();
        self->func_6301e4();
        return;
    }

    if (nMessage == 2)
    {
        if (self->field_fc != 0)
            return;

        self->field_f4++;
        if (self->field_f4 < self->field_f8)
        {
            self->func_6d9b90();
            return;
        }

        KillTimer(self->field_20, 2);
        self->field_f4 = self->field_f8 - 1;
        {
            int v = *(int*)((char*)self->field_e4 + 0x1a0);
            void* r5 = self->func_6d9950(0xd, v, 0, 0);
            func_66e000(r5);
        }
        return;
    }
}
