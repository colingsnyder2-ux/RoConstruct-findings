// from server: 57% by colin
struct ICameraSubject {
    char pad0[0x198];
    void* m_ptr;
    float getDistance() const;
};

float ICameraSubject::getDistance() const
{
    extern float g_float_7a4cdc;
    float result = g_float_7a4cdc;
    if (m_ptr != 0) {
        float a;
        float b;
        void** vtbl = *(void***)m_ptr;
        typedef float* (__thiscall *Fn)(void*, float*);
        Fn fn = (Fn)vtbl[0x58 / 4];
        float* p = fn(m_ptr, &a);
        a = p[4];
        void** vtbl2 = *(void***)this;
        Fn fn2 = (Fn)vtbl2[0x58 / 4];
        float* q = fn2((void*)this, &b);
        b = q[4];
        result = b - g_float_7a4cdc + a;
    }
    return result;
}
