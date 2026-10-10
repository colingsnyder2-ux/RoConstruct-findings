// from server: 51% by colin
struct CChatPrompt {
    char pad0[8];
    void* field8;
    void assign(void* first, void* last, void* srcFirst, void* srcLast, void* out);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void CChatPrompt::assign(void* first, void* last, void* srcFirst, void* srcLast, void* out) {
    if (first != 0 && first != last) {
        _invalid_parameter_noinfo();
    }
    void* dst = srcFirst;
    void* srcEnd = srcLast;
    if (dst != srcEnd) {
        void* tmp = field8;
        char flag1 = 0;
        char flag2 = 0;
        void* p1 = *(void**)&flag1;
        void* p2 = *(void**)&flag2;
        void* result = 0;
        // call 0x40d450
        extern void __stdcall sub_40d450(void*, void*, void*, void*, void*, void*, void*);
        sub_40d450(srcEnd, dst, tmp, p2, p1, result, out);
        void* newEnd = (char*)dst + (((char*)tmp - (char*)srcEnd) >> 3) * 8;
        // call 0x40db50
        extern void __stdcall sub_40db50(void*, void*, void*, void*);
        sub_40db50(newEnd, tmp, out, this);
        field8 = newEnd;
    }
    *(void**)out = srcEnd;
    *(void**)((char*)out + 4) = dst;
}
