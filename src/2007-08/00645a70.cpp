// from server: 71% by colin
extern "C" {
    __declspec(dllimport) unsigned int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);
}

struct CXTPCommandBar {
    int SetActive(int, int);
};

extern int g_8b565c;
extern void* g_77edec;

int CXTPCommandBar::SetActive(int a, int b)
{
    int old = *(int*)((char*)this + 0xcc);
    if (old == a)
        return 0;

    if (old != -1) {
        void* p = ((void* (__thiscall*)(void*, int))0x644720)(this, old);
        *(int*)((char*)this + 0xcc) = -1;
        (*(void (__thiscall**)(void*, int))(*(int*)p + 0xe4))(p, 0);
    }

    if (a != -1) {
        void* p = ((void* (__thiscall*)(void*, int))0x644720)(this, a);
        if (p != 0) {
            int v = *(int*)((char*)p + 0x9c);
            if (v == -1) {
                int q = *(int*)((char*)p + 0x158);
                if (q != 0) {
                    ((void (__thiscall*)(int))0x63a580)(q);
                }
            }
            if (v != 0) {
                *(int*)((char*)this + 0xcc) = a;
                (*(void (__thiscall**)(void*, int, int, int))(*(int*)this + 0x140))(this, 2, 0, b);
                (*(void (__thiscall**)(void*, int, int))(*(int*)this + 0x148))(this, a, b);
                if ((*(int (__thiscall**)(void*, int))(*(int*)p + 0xe4))(p, 1) == 0) {
                    *(int*)((char*)this + 0xcc) = -1;
                    return 0;
                }
                void* r = ((void* (__thiscall*)(void*))0x643980)(this);
                if (r != 0) {
                    int c = *(int*)((char*)r + 0x74);
                    if (*(int*)((char*)c + 0x24) != 0) {
                        void* s = *(void**)((char*)this + 0x20);
                        if (s != 0) {
                            SetTimer(s, 0x1b660, g_8b565c, g_77edec);
                        }
                    }
                }
            }
        }
    }

    return 1;
}
