// from server: 71% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Sub_005d0530 {
    void f();
};

struct Sub_005d05c0 {
    void f();
};

struct Sub_005d0690 {
    void f();
};

struct Sub_00432530 {
    void f(void*);
};

struct RefCounted {
    void* m_vptr;
    long m_ref1;
    long m_ref2;
    void Release();
};

struct LocalBackpack {
    char pad0[0x120];
    int m_field120;
    int m_field124;
    char pad2[0x138 - 0x128];
    RefCounted* m_ptr138;
    RefCounted* m_ptr13c;
    void destructor();
};

void LocalBackpack::destructor()
{
    ((Sub_005d0530*)this)->f();
    ((Sub_005d05c0*)this)->f();
    ((Sub_005d0690*)this)->f();

    if (m_ptr138) {
        ((Sub_00432530*)((char*)m_ptr138 + 0x14))->f(&m_field120);
        if (m_ptr138) {
            ((Sub_00432530*)((char*)m_ptr138 + 0x2c))->f(&m_field124);
        }
        m_ptr138 = 0;

        RefCounted* p = m_ptr13c;
        m_ptr13c = 0;
        if (p) {
            if (_InterlockedExchangeAdd(&p->m_ref1, -1) == 1) {
                p->Release();
            }
            if (_InterlockedExchangeAdd(&p->m_ref2, -1) == 1) {
                p->Release();
            }
        }
    }
}
