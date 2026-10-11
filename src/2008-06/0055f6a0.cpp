// from server: 52% by colin
struct S {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void __cdecl construct(void* src);
};

void S::construct(void* src)
{
    if (this != 0) {
        void** s = (void**)src;
        field0 = s[0];
        field8 = 0;
        void* p = s[2];
        if (p != 0) {
            field8 = p;
            void* q = s[2];
            void** vt = (void**)((char*)q + 0x10);
            void* arg = (char*)this + 0x10;
            void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vt[0];
            fn(arg, (char*)src + 0x10, 0);
        }
    }
}
