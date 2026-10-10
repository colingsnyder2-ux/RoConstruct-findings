// from server: 52% by colin
struct CXTPPropertyGridItem {
    char pad0[0xb4];
    int m_field_b4;
    char pad_b8[0x8];
    int m_field_c0;
    int GetSomething();
};

struct Helper {
    int f(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" int __stdcall sub_0069ab30(int);

int CXTPPropertyGridItem::GetSomething()
{
    if (m_field_c0 == 0) {
        void* p = operator_new(0xa0);
        int* obj = 0;
        if (p != 0) {
            int v = sub_0069ab30(m_field_b4);
            obj = (int*)((Helper*)p)->f(v);
        }
        m_field_c0 = (int)obj;
    }
    return m_field_c0;
}
