// from server: 43% by colin
struct CPen {
    char pad0[0x20];
    void* field20;
    char pad1[0x14];
    void* field38;
};

extern "C" {
    extern void* g_8c8f50;
    extern void* g_8c8f54;
    extern void* __stdcall CallNextHookEx(void*, int, unsigned int, void*);
    extern void* __stdcall GetParent(void*);
    extern int __stdcall PtInRect(const void*, int, int);
}

void __stdcall sub_67ffa0(void*, void*);
void __stdcall sub_6301c0(void*);
void __stdcall sub_630004(void*);

int __stdcall CPen_681f70(int a1, unsigned int a2, int a3, int a4)
{
    if (a1 != 0)
        goto do_call;
    if (g_8c8f54 == 0)
        goto do_call;

    {
        char local[8];
        sub_67ffa0(local, g_8c8f54);
        if (PtInRect(local, a3, a4) == 0)
        {
            if (a2 <= 0x201)
            {
                if (a2 == 0x201)
                    goto handle;
                if (a2 - 0xa1 == 0)
                    goto handle;
                if (a2 - 0xa4 == 0)
                    goto handle;
                if (a2 - 0xa7 == 0)
                    goto handle;
            }
            else
            {
                if (a2 - 0x204 == 0)
                    goto handle;
                if (a2 - 0x207 == 0)
                    goto handle;
            }
        }
    }

do_call:
    CallNextHookEx(g_8c8f50, a2, (unsigned int)a3, (void*)a4);
    return 0;

handle:
    {
        void* p = ((CPen*)g_8c8f54)->field38;
        if (p == 0)
            p = GetParent(((CPen*)g_8c8f54)->field20);
        sub_6301c0(p);
        sub_630004(p);
    }
    return 1;
}
