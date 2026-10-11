// from server: 80% by atomic.potato
struct CXTIconHandle {
    void* m_vtable;
    void* m_ptr;
    void* m_self;
    unsigned int m_value0c;
    unsigned int m_value10;
    unsigned int m_value14;
    unsigned short m_value18;
    unsigned short m_value1a;

    CXTIconHandle(void* p);
};

CXTIconHandle::CXTIconHandle(void* p)
{
    m_ptr = p;
    m_vtable = (void*)0xa73fe4;
    m_value14 = 2;
    m_value0c = 0;
    m_value10 = 0;
    m_value18 = 0;
    m_value1a = 0;
    m_self = this;
}
