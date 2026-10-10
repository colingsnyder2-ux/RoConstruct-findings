// from server: 49% by colin
struct BallBallContact {
    char pad[4];
    void* m_prim0;
    void* m_prim1;
    char pad2[0x20];
    void* m_connector;

    bool stepContact();
};

extern "C" bool __fastcall sub_5ccf60(BallBallContact* self, float overlapIgnored);
extern "C" void* __fastcall sub_5cd9e0(BallBallContact* self);

bool BallBallContact::stepContact()
{
    if (!sub_5ccf60(this, 0.0f)) {
        void** vtbl = *(void***)this;
        void (*fn)(BallBallContact*) = (void (*)(BallBallContact*))vtbl[5];
        fn(this);
        return false;
    }

    void* p0 = m_prim0;
    void** vtbl = *(void***)p0;
    int (*getType)(void*) = (int (*)(void*))vtbl[1];
    if (getType(p0) != 8)
        return true;

    if (m_connector == 0) {
        m_connector = sub_5cd9e0(this);
    }

    void* p1 = m_prim1;
    void* c0 = *(void**)((char*)p0 + 0x60);
    void* c1 = *(void**)((char*)p1 + 0x60);
    void* d0 = *(void**)((char*)p0 + 0x64);
    void* d1 = *(void**)((char*)p1 + 0x64);

    void** vtbl0 = *(void***)c0;
    float (*getVal0)(void*) = (float (*)(void*))vtbl0[4];
    float v0 = getVal0(c0);

    void** vtbl1 = *(void***)c1;
    float (*getVal1)(void*) = (float (*)(void*))vtbl1[4];
    float v1 = getVal1(c1);

    char* conn = (char*)m_connector;
    *(float*)(conn + 0x20) = v0;
    *(float*)(conn + 0x24) = v0 + v1;
    *(void**)(conn + 0x14) = d0;
    *(void**)(conn + 0x18) = d1;
    *(void**)(conn + 8) = 0;

    return true;
}
