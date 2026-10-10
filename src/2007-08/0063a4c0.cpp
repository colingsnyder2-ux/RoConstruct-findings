// from server: 48% by colin
extern "C" {
    typedef void* (__stdcall *PFN_0)(void*);
    typedef void* (__stdcall *PFN_1)(void*, void*);
    typedef void* (__stdcall *PFN_2)(void*, void*, int);
    typedef void* (__stdcall *PFN_3)(void*, void*);
    typedef void* (__stdcall *PFN_4)(void*, void*, void*);
}

extern PFN_0 g_pfn_77dcbc;
extern PFN_1 g_pfn_77dcc0;
extern PFN_2 g_pfn_77dcc8;
extern PFN_3 g_pfn_77dd98;
extern PFN_4 g_pfn_77dccc;

struct CPatchedControlComboBox
{
    void* method(void* a, void* b, char c);
};

void* CPatchedControlComboBox::method(void* a, void* b, char c)
{
    void* v1 = g_pfn_77dcbc(a);
    void* v2 = g_pfn_77dcc0(b, v1);
    char local = c;
    void* v3 = g_pfn_77dcc8(a, &local, 1);
    void* v4 = g_pfn_77dd98(a, v3);
    void* v5 = g_pfn_77dccc(b, v4, 0);
    return v5;
}
