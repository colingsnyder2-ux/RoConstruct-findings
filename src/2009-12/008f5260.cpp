// from server: 52% by atomic.potato
struct CXTCaptionButtonTheme {
    char pad0[0x30];
    int m_a;
    int m_b;
    void f(int, int, int, int);
};

extern "C" {
    int __stdcall DrawFocusRect(void*, const void*);
    int __stdcall InflateRect(void*, int, int);
}

void CXTCaptionButtonTheme::f(int a, int b, int c, int d)
{
    int v;
    if (m_b == -1)
        v = m_a;
    else
        v = m_b;
    int* p = (int*)a;
    int r = ((int (__thiscall*)(int*, int))((*(int**)p)[0x38/4]))(p, v);
    int* q = (int*)c;
    int t = ((int (__thiscall*)(int*))((*(int**)q)[0x168/4]))(q);
    if (t & 3) {
        InflateRect((void*)d, -2, -2);
    } else {
        InflateRect((void*)d, -4, -4);
    }
    DrawFocusRect((void*)d, (void*)p[1]);
    ((int (__thiscall*)(int*, int))((*(int**)p)[0x38/4]))(p, r);
}
