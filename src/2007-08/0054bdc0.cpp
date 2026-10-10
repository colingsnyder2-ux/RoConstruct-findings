// from server: 44% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S_func_0054bdc0 {
    char pad0[0x10];
    unsigned char* m_p10;
    char pad14[0x0c];
    unsigned char** m_p20;
    char pad24[0x0c];
    unsigned char** m_p30;
    char pad34[0x0c];
    unsigned char* m_p40;
    unsigned char* m_p44;
    unsigned char* m_p48;
    unsigned char* m_p4c;
    unsigned char* m_p50;
    int f();
};

int S_func_0054bdc0::f()
{
    if (*m_p20 == 0) {
        (*(void (__stdcall **)(void))(*(unsigned int*)this + 0x54))();
    }
    unsigned char* p = *m_p20;
    unsigned char* end = p + (unsigned int)*m_p30;
    if (p < end) {
        return *p;
    }
    unsigned char* base = m_p10;
    unsigned int off = (unsigned int)(p - base);
    unsigned char* old = m_p50;
    if ((int)m_p50 < (int)off) {
        old = (unsigned char*)off;
    }
    if (old != 0) {
        memmove_s(m_p40, (unsigned int)(m_p48 - old) + (unsigned int)m_p50, old, (unsigned int)(p - old));
    }
    unsigned char* newp = m_p48 + (unsigned int)m_p50;
    m_p10 = newp - (unsigned int)old;
    *m_p20 = newp;
    *m_p30 = 0;
    unsigned char* b = m_p50;
    unsigned int len = (unsigned int)(m_p4c - b);
    unsigned char* dst = m_p48 + (unsigned int)b;
    unsigned char* src = m_p44;
    S_func_0054bdc0* self = (S_func_0054bdc0*)((char*)this + 0x40);
    (*(void (__stdcall**)(void*, unsigned char*, unsigned char*, unsigned int))0x54b440)(self, src, dst, len);
    return 0;
}
