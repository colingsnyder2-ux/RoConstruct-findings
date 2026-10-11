// from server: 53% by atomic.potato
extern "C" void __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
extern "C" void __cdecl G1_func_007f539a();
extern "C" void* __cdecl G2_func_007f9c80(void*);

struct S_func_0088b3c0 {
    char pad0[0x20];
    void* m_p20;
    char pad24[0x3c];
    void* m_p60;
    void f();
};

void S_func_0088b3c0::f()
{
    char buf[0x58];
    void* p = m_p60;
    void** vt = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[0x158 / 4];
    fn(buf);
    void* r = G2_func_007f9c80(this);
    int ecx = *(int*)((char*)r + 8);
    void* hwnd = m_p20;
    void (__stdcall *sm)(void*, unsigned int, unsigned int, long) = SendMessageA;
    ecx = -ecx;
    ecx = (ecx != 0) ? 0x18 : 0;
    ecx += 0x3c;
    *(int*)(buf + 0x10) = ecx;
    sm(hwnd, 0x444, 0, *(long*)(buf + 0x40));
    sm(m_p20, 0x443, 0, *(long*)(buf + 0x54));
    G1_func_007f539a();
}
