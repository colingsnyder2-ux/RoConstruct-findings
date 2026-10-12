// from server: 54% by colin
struct DxUserInput
{
    char pad0[4];
    char m_str[32];
    char pad1[4];
    void* m_ptr;
    void f(void* other);
};

extern "C" int __stdcall sub_55BD60(void* a, void* b);
extern "C" void* __stdcall sub_80240C();
extern "C" int __stdcall sub_8021AC(void* p);
extern "C" void __stdcall sub_45AD90(void* p);

void DxUserInput::f(void* other)
{
    char* o = (char*)other;
    if (sub_55BD60(m_str, o))
    {
        sub_80240C();
        *(int*)(m_str + 0x1c) = *(int*)(o + 0x1c);
        if (m_ptr)
        {
            if (sub_8021AC((char*)m_ptr + 4) == 0)
            {
                sub_45AD90(m_ptr);
                if (m_ptr)
                {
                    void** vt = *(void***)m_ptr;
                    void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                    fn(m_ptr, 1);
                }
            }
            m_ptr = 0;
        }
    }
}
