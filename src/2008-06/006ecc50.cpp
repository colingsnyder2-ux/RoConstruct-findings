// from server: 62% by colin
struct CXTPGroupLine
{
    char pad[0x88];
    int m_n88;
    int m_n8c;
    int m_n90;
    int m_n94;
    int m_n98;
    char pad2[0x54];
    int m_nf0;
    char pad3[0xc0];
    int m_n1b4;
    CXTPGroupLine* ctor(void* param);
};

extern "C" void __cdecl sub_7bc4d2(int, int, int);
extern "C" void __fastcall sub_6a0e90(void*);
extern "C" void __fastcall sub_6ec8d0(void*);

CXTPGroupLine* CXTPGroupLine::ctor(void* param)
{
    sub_7bc4d2(0x30, 0, 0x239e);
    *(void**)this = (void*)0x857cf4;
    sub_6a0e90((char*)this + 0x9c);
    *(void**)((char*)this + 0x9c) = (void*)0x857fdc;
    sub_6ec8d0((char*)this + 0xf4);
    sub_6ec8d0((char*)this + 0x154);
    int* p = *(int**)((char*)param + 0xb8);
    int* q = *(int**)((char*)p + 0x74);
    m_n88 = *(int*)((char*)q + 0x20);
    m_n8c = *(int*)((char*)q + 0x24);
    m_n90 = *(int*)((char*)q + 0x30);
    m_n94 = *(int*)((char*)q + 0x28);
    m_n98 = *(int*)((char*)q + 0x2c);
    m_nf0 = *(int*)((char*)q + 0x54);
    m_n1b4 = (int)param;
    return this;
}
