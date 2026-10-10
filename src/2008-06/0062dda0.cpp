// from server: 67% by atomic.potato
extern "C" int __stdcall sub_00490af0(int);

struct GeometryService {
    char pad0[304];
    int m_value;
    void f(int a1, int a2);
};

void GeometryService::f(int a1, int a2)
{
    if (a2)
        m_value = sub_00490af0(a2);
}
