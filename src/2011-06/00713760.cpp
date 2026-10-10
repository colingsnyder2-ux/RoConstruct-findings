// from server: 77% by atomic.potato
struct S_00713760
{
    int m_0;
    int m_4;
    char m_pad[16];
    int m_18;
    int m_1c;
    void f();
};

extern "C" void __cdecl sub_5980d0(S_00713760*);

void S_00713760::f()
{
    m_0 = 0xAAF0D4;
    m_4 = 0xAAF0CC;
    m_18 = 0xAAF0C0;
    m_1c = 0xAAF0B4;
    sub_5980d0(this);
}
