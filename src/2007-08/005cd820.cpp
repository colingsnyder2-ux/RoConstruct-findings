// from server: 65% by tester
struct RBX_BallBallContact {
    char pad0[8];
    void* m_p0;
    void* m_p1;
    char pad10[0x18];
    float m_f28;
    float m_f2c;
    char pad30[0x44];
    float m_f74;
    float m_f78;
    char pad7c[0x34];
    float m_fb0;
    char m_b4;
    char padb5[3];
    void* m_pb8;
    void* m_pbc;
    void f();
};

extern "C" float __cdecl func_006086a0(float);

void RBX_BallBallContact::f()
{
    RBX_BallBallContact* p0 = *(RBX_BallBallContact**)((char*)this + 8);
    RBX_BallBallContact* p1 = *(RBX_BallBallContact**)((char*)this + 0xc);

    float a = p1->m_f74;
    float b = p0->m_f74;
    if (a < b)
        this->m_f28 = b;
    else
        this->m_f28 = a;

    float c = p1->m_f78;
    float d = p0->m_f78;
    float e;
    if (c < d)
        e = d;
    else
        e = c;

    if (p1->m_b4 != 0) {
        typedef float (__thiscall *Fn)(void*);
        Fn fn = (Fn)p1->m_pbc;
        p1->m_fb0 = fn(p1->m_pb8);
        p1->m_b4 = 0;
    }

    float f1 = p1->m_fb0;

    if (p0->m_b4 != 0) {
        typedef float (__thiscall *Fn)(void*);
        Fn fn = (Fn)p0->m_pbc;
        p0->m_fb0 = fn(p0->m_pb8);
        p0->m_b4 = 0;
    }

    float f2 = p0->m_fb0;
    float g;
    if (f2 < f1)
        g = f1;
    else
        g = f2;

    this->m_f2c = func_006086a0(e) * g;
}
