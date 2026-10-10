// from server: 96% by colin
struct VCContent_CComObject {
    void* m_vtbl0;
    void* m_vtbl1;
    int m_field8;
    char m_pad[0x0c];
    char m_stream[0x40];
    VCContent_CComObject* construct(unsigned int flags);
};

struct IUnknownLike {
    virtual void f0();
    virtual void f1();
    virtual void f2();
};

struct StreamLike {
    void init();
};

extern "C" void __cdecl sub_62FC62(void*);

IUnknownLike* g_8BAE44;

VCContent_CComObject* VCContent_CComObject::construct(unsigned int flags)
{
    m_vtbl0 = (void*)0x786EB0;
    m_vtbl1 = (void*)0x786E8C;
    m_field8 = (int)0xC0000001;

    g_8BAE44->f2();

    ((StreamLike*)((char*)this + 0x0c))->init();

    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
