// from server: 76% by tester
struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct S_func_005fa670 {
    int f(int a, int b);
};

struct S_func_005fb050 {
    int f(int a);
};

struct Kernel {
    char pad0[0x10];
    S_func_005fb050* m_field10;
    S_func_005fa670 m_field14;
    int removeBody(int a);
};

int Kernel::removeBody(int a)
{
    m_field10->f(a);
    m_field14.f(0, 0);
    S_func_005fa670* esi = (S_func_005fa670*)((char*)m_field10 + 0x24);
    int* eax = ((S_func_005fa610*)a)->f();
    int ebx = *eax;
    int* eax2 = ((S_func_005fa610*)esi)->f();
    int ecx = *(int*)((char*)esi + 4);
    ecx = *(int*)((char*)eax2 + ecx * 4 - 4);
    *(int*)((char*)eax2 + ebx * 4) = ecx;
    eax2 = ((S_func_005fa610*)esi)->f();
    *eax2 = ebx;
    int edx = *(int*)((char*)esi + 4);
    edx = edx - 1;
    esi->f(edx, 0);
    eax = ((S_func_005fa610*)a)->f();
    *eax = -1;
    return 0;
}
