// from server: 60% by colin
struct S_0049c3c0 {
    char pad[0x14];
    int m_field14;
    char pad2[0x18];
    int m_field30;
    char pad3[4];
    int m_field38;
    char pad4[4];
    int m_field40;
    void construct(int a, int b, int c);
};

extern "C" int __cdecl func_0056d350();
extern "C" int __cdecl func_0056da00(void*);
extern "C" int __cdecl func_0052c940(int, int, int);
extern "C" int __cdecl func_0056d400();
extern "C" int __cdecl func_0056d7d0(void*);

void S_0049c3c0::construct(int a, int b, int c)
{
    m_field14 = func_0056d350();
    int t1 = func_0056da00(&m_field30);
    int t2 = func_0052c940(c, -1, t1);
    func_0056d400();
    int t3 = func_0056da00(&m_field38);
    int t4 = func_0052c940(b, -1, t3);
    func_0056d400();
    int t5 = func_0056d7d0(&m_field40);
    int t6 = func_0052c940(a, -1, t5);
    func_0056d400();
}
