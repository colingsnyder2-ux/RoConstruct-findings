// from server: 46% by colin
struct CXTColorSelectorCtrl {
    char pad[0x78];
    int field_78;
    int field_7c;
    char pad2[0xac - 0x80];
    unsigned char field_ac;
    char pad3[0x148 - 0xad];
    void* field_148;
    bool sub_710fd0();
    void* sub_710f90();
    void sub_711030(void*);
};

extern "C" void* __stdcall sub_6978f0();
extern "C" void* __stdcall sub_6b3010();
extern "C" void __stdcall sub_7383e8(void*, int);
extern "C" void* __stdcall sub_77ddac(void*);
extern "C" void* __stdcall sub_77dcc8(void*);
extern "C" void* __stdcall sub_77dd98(void*);
extern "C" void __stdcall sub_77ddbc(void*);

void CXTColorSelectorCtrl::sub_711030(void* a)
{
    sub_7383e8(a, 1);
    void** vt = *(void***)a;
    void* p = (char*)vt + 0x30;
    void* r = sub_6978f0();
    void* arg = (char*)r + 0xdc;
    void* fn = *(void**)p;
    void* res = ((void* (__thiscall*)(void*, void*))fn)(a, arg);
    void* saved = res;

    if (!(field_ac & 2))
    {
        char buf[8];
        sub_77ddac(buf);
        int flag = 0;
        void* obj = sub_6b3010();
        void** ovt = *(void***)obj;
        void* ofn = ovt[1];
        ((void (__thiscall*)(void*, void*, int))ofn)(obj, buf, 0x24d0);
        void** avt = *(void***)a;
        void* ap = (char*)avt + 0x64;
        void* h = sub_77dcc8(buf);
        void* h2 = sub_77dd98(h);
        void* afn = *(void**)ap;
        ((void (__thiscall*)(void*, int, int, void*))afn)(a, 6, 0x1f, h2);
        flag = -1;
        sub_77ddbc(buf);
    }

    void* node = field_148;
    int idx = 0;
    while (node != 0)
    {
        int val = *(int*)((char*)node + 8);
        int f78 = field_78;
        int f7c = field_7c;
        int b1;
        if (idx == f78 && f7c == -1)
            b1 = 1;
        else if (idx == f7c)
            b1 = 1;
        else
            b1 = 0;
        int b2;
        if (idx == f7c && idx == f78)
            b2 = 1;
        else
            b2 = 0;
        void* obj = sub_710f90();
        void** ovt = *(void***)obj;
        void* ofn = ovt[5];
        ((void (__thiscall*)(void*, int, void*, int, int))ofn)(obj, val, a, b1, b2);
        node = *(void**)node;
        idx++;
    }

    void** avt = *(void***)a;
    void* afn = avt[0xc];
    ((void (__thiscall*)(void*, void*))afn)(a, saved);
}
