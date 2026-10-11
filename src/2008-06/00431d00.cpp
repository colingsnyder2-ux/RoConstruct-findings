// from server: 53% by atomic.potato
struct CDataModelPropGrid {
    char pad0[0x20];
    unsigned int m_hwnd;
    char pad1[0xec - 0x24];
    void* m_ptr_ec;
    char pad2[0xf4 - 0xf0];
    char m_set[0x104 - 0xf4];
    unsigned char m_flag;
    char pad3[0x138 - 0x105];
    char m_obj138[0x230 - 0x138];
    int m_field230;
    int m_field234;
    char pad4[0x284 - 0x238];
    char m_obj284[0x3b4 - 0x284];
    char m_obj3b4[0x3e0 - 0x3b4];
    char m_obj3e0[0x100];

    int f(unsigned int);
    int sub_42ef40(const char*);
    void sub_430f50(int);
    void sub_4302b0();
    void sub_431b40(int);
    void sub_430ec0(void*);
};

extern "C" int __stdcall sub_6a105e(unsigned int);
extern "C" int __stdcall sub_70ec40(void*, unsigned int, unsigned int);
extern "C" int __stdcall sub_70fcd0(void*, const char*, int);
extern "C" void __stdcall sub_70dc00(void*, int);
extern "C" void __stdcall sub_6af0a0(int);
extern "C" void __stdcall sub_6e57f0(void*, void*, int);
extern "C" void __stdcall sub_6e6620(void*, int);
extern "C" void __stdcall sub_702c00(void*, void*, int);
extern "C" void* __stdcall sub_710e30(void*);
extern "C" void __stdcall sub_701860(void*, int);
extern "C" void* __stdcall sub_6a2f80(void*, int, int);
extern "C" void __stdcall sub_6c0f70(void*);
extern "C" void __stdcall sub_6a2810(void*, int);
extern "C" void* __stdcall sub_6a2f90(void*, int);
extern "C" void __stdcall sub_70bb30(void*);
extern "C" void* __stdcall sub_6c0e80();
extern "C" void __stdcall sub_6a38f0(void*, void*);
extern "C" void __stdcall sub_42f490(void*);
extern "C" void* __stdcall sub_6a0926();
extern "C" int __stdcall sub_6a1058(void*, const char*, const char*, int);
extern "C" void* __stdcall sub_6a0920(int);
extern "C" void __stdcall sub_4277d0(void*);
extern "C" void __stdcall sub_42ef40_impl();
extern "C" void __stdcall InterlockedIncrement(long*);
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

int CDataModelPropGrid::f(unsigned int a) {
    if (sub_6a105e(a) == -1)
        return -1;
    if (!sub_70ec40(m_obj3e0, 0x50008200, 0xe801))
        return 0;
    if (!sub_70fcd0(m_obj3e0, (const char*)0x92ec48, 6))
        return 0;
    if (!sub_42ef40((const char*)0x8107c4))
        return -1;
    sub_70dc00(m_obj3b4, 2);
    sub_6af0a0(4);
    sub_6e57f0(m_obj138, this, 1);
    sub_6e6620(m_obj138, 9);
    sub_702c00(m_obj284, this, 0);
    *(int*)((char*)sub_710e30(m_obj284) + 0x24) = 0;
    sub_701860(m_obj284, 1);
    void* p = m_ptr_ec;
    if (!p)
        return 0;
    sub_6c0f70(sub_6a2f80(p, 0x91, 0));
    m_field230 = 1;
    m_field234 = 1;
    sub_6a2810(*(void**)((char*)p + 0x74), 2);
    sub_70bb30(sub_6a2f90(p, 2));
    PostMessageA((void*)((char*)sub_6c0e80() + 4), 0, 0, 0);
    sub_6a38f0(p, sub_6c0e80());
    sub_6c0f70(sub_6a2f80(0, 0x91, 0));
    m_flag = 1;
    sub_430f50(1);
    sub_42f490(sub_6c0e80());
    sub_4302b0();
    void* q = *(void**)((char*)sub_6a0926() + 4);
    if (sub_6a1058(q, (const char*)0x811218, (const char*)0x811224, 0) == 1)
        sub_431b40(1);
    PostMessageA((void*)m_hwnd, 0x111, 0x8101, 0);
    void* r = sub_6a0920(0x14);
    if (r)
        sub_4277d0(r);
    else
        r = 0;
    sub_430ec0(r);
    return 0;
}
