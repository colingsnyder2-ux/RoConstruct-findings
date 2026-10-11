// from server: 45% by colin
struct DxUserInput {
    char pad[0x16c];
    int m_x16c;
    char pad2[0x20];
    unsigned char m_x190;
    void f(int* p);
};

extern "C" int __cdecl sub_006a17f0(float);
extern "C" void __cdecl sub_006a13ee(int);
extern "C" void __cdecl sub_006a13e8(int);
extern "C" int __cdecl sub_006a14a2(int);
extern "C" void __cdecl sub_00468520(DxUserInput*, int*);

void DxUserInput::f(int* p)
{
    int a = sub_006a17f0(*(float*)((char*)p + 4));
    int b = sub_006a17f0(*(float*)p);
    int local;
    sub_006a13ee(m_x16c);
    int r = ((int (__thiscall*)(void*, int, int))((*(int**)((char*)&local + 0))[0x5c/4]))(0, b, a);
    int c = sub_006a14a2(m_x16c);
    bool t1 = r != 0;
    bool t2 = c != 0;
    m_x190 = (t1 && t2) ? 1 : 0;
    sub_00468520(this, p);
    sub_006a13e8((int)&local);
}
