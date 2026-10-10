// from server: 34% by colin
struct COleException {
    void* vtable;
    void* m_pException;
    char m_padding[4];
    void* m_pString;
    void COleException_dtor();
};

extern "C" {
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6A8(void);
    void __stdcall sub_77E6AC(void);
    void __cdecl sub_630A1E(void);
    void __cdecl sub_428100(void);
}

void COleException::COleException_dtor()
{
    this->vtable = (void*)0x789fa4;
    if (this->m_pException != 0) {
        void* p = (char*)this->m_pException + 8;
        sub_77E69C(p);
        void* p2 = this->m_pException;
        int edi = *(int*)((char*)p2 + 4);
        if (p2 != 0) {
            void* vt = *(void**)p2;
            void (*fn)(void*, int) = *(void (**)(void*, int))vt;
            fn(p2, 1);
        }
        this->m_pException = 0;
        if (edi == 2) {
            sub_77E698((void*)0x78a09c);
            sub_77E6A8();
            sub_428100();
        } else {
            sub_77E698((void*)0x78a090);
            sub_77E6A8();
            sub_428100();
        }
        sub_77E6AC();
        sub_77E6AC();
    }
    sub_77E6AC();
    sub_630A1E();
}
