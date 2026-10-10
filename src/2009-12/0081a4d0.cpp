// from server: 69% by atomic.potato
typedef unsigned int DWORD;

struct S_func_0081a4d0 {
    DWORD *m_vtable;
    void f(DWORD a1, DWORD a2);
};

extern "C" DWORD __stdcall func_0098de80(DWORD);

void S_func_0081a4d0::f(DWORD a1, DWORD a2)
{
    DWORD value = func_0098de80(a2 + 0x20);
    typedef void (__thiscall *Method)(S_func_0081a4d0 *, DWORD, DWORD);
    Method method = (Method)m_vtable[0x128 / 4];
    method(this, a1, value);
}
