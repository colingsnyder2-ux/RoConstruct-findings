// from server: 77% by colin
struct CXTPToolBarControlButtonExpand {
    char pad[0x16c];
    void* field_16c;
    int OnLButtonDown(unsigned int nFlags);
};

extern "C" void* __stdcall sub_63A910(void* p);
extern "C" void* __stdcall sub_6704F0(void* p);
extern "C" void* __stdcall sub_630202(void* a, void* b);
extern "C" int __stdcall sub_67BD90(void* a, void* b);

int CXTPToolBarControlButtonExpand::OnLButtonDown(unsigned int nFlags)
{
    void* p = sub_63A910((void*)nFlags);
    if (p == 0)
        return 0;
    void* q = sub_6704F0((void*)nFlags);
    void* r = sub_630202(q, (void*)nFlags);
    if (r == 0)
        return 0;
    void* a = this->field_16c;
    if (a != 0)
    {
        void* b = *(void**)((char*)r + 0x16c);
        if (b != 0)
        {
            void* c = *(void**)((char*)b + 0xf8);
            void* d = *(void**)((char*)a + 0xf8);
            if (sub_67BD90(c, d) == 0)
                return 0;
        }
    }
    return 1;
}
