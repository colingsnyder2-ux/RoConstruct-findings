// from server: 64% by colin
struct CXTPGroupLine {
    char pad[0x88];
    int m_88;
    int m_8c;
    int m_90;
    int m_94;
    int m_98;
    char pad2[0xf0 - 0x9c];
    int m_f0;
    char pad3[0x1ac - 0xf4];
    int m_1ac;
    CXTPGroupLine(int* p);
};

extern "C" void __cdecl func_738808(int, int, int);
extern void __fastcall func_6305da(void*);
extern void __fastcall func_675a70(void*);

CXTPGroupLine::CXTPGroupLine(int* p)
{
    *(void**)this = (void*)0x7cc4e4;
    func_738808(0x239e, 0, 0x30);
    *(void**)((char*)this + 0x9c) = (void*)0x7cc7bc;
    func_6305da((char*)this + 0x9c);
    func_675a70((char*)this + 0xf4);
    func_675a70((char*)this + 0x150);

    int* q = *(int**)((char*)p + 0xb8);
    int* r = *(int**)((char*)q + 0x74);
    m_88 = *(int*)((char*)r + 0x20);
    m_8c = *(int*)((char*)r + 0x24);
    m_90 = *(int*)((char*)r + 0x30);
    m_94 = *(int*)((char*)r + 0x28);
    m_98 = *(int*)((char*)r + 0x2c);
    m_f0 = *(int*)((char*)r + 0x54);
    m_1ac = (int)p;
}
