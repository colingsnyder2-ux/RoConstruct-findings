// from server: 55% by colin
struct CXTPDockingPaneSplitterContainer {
    char pad0[0x20];
    char m_list1[0x44];
    int m_count;
    char pad1[0x0c];
    char m_list2[0x0c];
    int m_flag80;
    char pad2[0x10];
    int m_flag94;
    int f();
};

struct S_func_007a0770 {
    char pad0[60];
    int m_x;
    int f();
};

struct S_func_007a0780 {
    char pad0[60];
    int m_x;
    int g(int* p);
};

struct S_func_00754f60 {
    char pad0[8];
    void* m_p;
    void h();
};

struct S_func_00760a00 {
    void i(void* a, void* b, void* c);
};

struct S_func_0076bac0 {
    char pad0[8];
    void* m_p;
    void j(void* a);
};

extern "C" int __fastcall sub_007a0770(void* p);
extern "C" int __fastcall sub_007a0780(void* p, int* out);
extern "C" void __fastcall sub_00754f60(void* p);
extern "C" void __fastcall sub_00760a00(void* p, void* a, void* b, void* c);
extern "C" void __fastcall sub_0076bac0(void* p, void* a);

int CXTPDockingPaneSplitterContainer::f()
{
    if (m_flag94 != 0)
        return 0;
    if (*(int*)(*(char**)((char*)this + 0x2c) + 0x80) != 0)
        return 0;
    if (m_flag80 != 0)
    {
        char* p = (char*)this + 0x74;
        while (m_flag80 != 0)
        {
            void* q = 0;
            sub_00754f60(p);
            if (q != 0)
            {
                (*(void(__thiscall**)(void*, int))(*((int*)q) + 4))(q, 1);
            }
        }
    }
    if (m_count <= 1)
        return 0;
    char* list = (char*)this + 0x20;
    int v = sub_007a0770(list);
    if (v != 0)
        return 0;
    int out = 0;
    void* ebx = 0;
    while (true)
    {
        sub_007a0780(list, &out);
        ebx = (void*)out;
        int r = (*(int(__thiscall**)(void*))(*((int*)ebx) + 0x14))(ebx);
        if (r != 0)
        {
            if (out == 0)
                return 0;
            break;
        }
        if (out == 0)
            return 0;
    }
    while (out != 0)
    {
        sub_007a0780(list, &out);
        void* edi = (void*)out;
        int r = (*(int(__thiscall**)(void*))(*((int*)edi) + 0x14))(edi);
        if (r == 0)
        {
            void* ebp = (*(void*(__thiscall**)(void*))(*((int*)this) + 0x58))(this);
            sub_00760a00(ebp, this, ebx, edi);
            sub_0076bac0((char*)this + 0x74, ebp);
            ebx = edi;
        }
    }
    return 0;
}
