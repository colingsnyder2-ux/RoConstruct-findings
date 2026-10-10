// from server: 33% by colin
struct VCApp_CComAggObject
{
    void* m_vtbl;
    unsigned int m_state;
    void* m_inner;
    void Initialize();
};

extern "C" void __stdcall sub_409290(void*);

extern void* g_8bae44;

void VCApp_CComAggObject::Initialize()
{
    m_vtbl = (void*)0x78549c;
    m_state = 0xc0000001;
    void** vtbl = *(void***)g_8bae44;
    void (*fn)(void*) = (void (*)(void*))vtbl[2];
    fn(g_8bae44);
    sub_409290(&m_inner);
}
