// from server: 62% by atomic.potato
struct CRobloxTreeCtrlNode {
    char pad0[0x0c];
    int field_0c;
    char pad10[0x48];
    void* field_58;
    void* field_5c;
    char pad60[0x20];
    int field_80;
    void f();
};

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern void* g_802e14;

void CRobloxTreeCtrlNode::f() {
    if (field_80 == 0)
        goto L2d;
    {
        void* p = field_58;
        int r = ((int (__thiscall*)(void*))((*(void***)p)[0x150/4]))(p);
        if (r == 0)
            goto L2d;
        int a = field_0c;
        void* p2 = field_58;
        int r2 = ((int (__thiscall*)(void*))((*(void***)p2)[0x150/4]))(p2);
        char c = ((char (__thiscall*)(int, int))0x424eb0)(r2, a);
        if (c == 0)
            goto L2d;
        {
            void* node = field_5c;
            while (node != 0) {
                char old = *(char*)((char*)node + 0x55);
                *(char*)((char*)node + 0x55) = 1;
                int e = *(int*)((char*)node + 0x80);
                void* ctrl = *(void**)((char*)node + 0x58);
                void* hwnd = *(void**)((char*)ctrl + 0x20);
                ((void* (__stdcall*)(void*, unsigned int, unsigned int, int))g_802e14)(hwnd, 0x1102, 0x4002, e);
                *(char*)((char*)node + 0x55) = old;
                node = *(void**)((char*)node + 0x5c);
            }
        }
        {
            int e = field_80;
            void* ctrl = field_58;
            ((void (__thiscall*)(void*, int, int, int))0x6dcfd0)((char*)ctrl + 0x54, e, e, 0);
        }
        {
            int e = field_80;
            void* ctrl = field_58;
            void* hwnd = *(void**)((char*)ctrl + 0x20);
            ((void* (__stdcall*)(void*, unsigned int, unsigned int, int))g_802e14)(hwnd, 0x1114, 0, e);
        }
        return;
    }
L2d:
    {
        void* ctrl = field_58;
        int e = field_80;
        ((void (__thiscall*)(void*, int, int, int))((*(void***)ctrl)[0x14c/4]))(ctrl, e, 0, 2);
    }
}
