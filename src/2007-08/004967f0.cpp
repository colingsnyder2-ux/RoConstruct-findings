// from server: 31% by colin
struct BoundFuncDesc {
    void* field_0;
    char pad[0x14];
    void* field_18;
    void* field_1c;
    void construct(void* function, const char* name, int security, int attributes);
};

extern "C" void* __stdcall sub_494e80();
extern "C" void __fastcall sub_570410(void* self, void* dummy, void* a, void* b);
extern "C" void* __stdcall sub_52c940(void* a, int b);
extern "C" void* __stdcall sub_56d6f0();
extern "C" void __fastcall sub_56d3c0(void* self, void* dummy);
extern "C" void* __fastcall sub_415240(void* self, void* dummy, void* a, void* b, void* c);
extern "C" void __fastcall sub_414670(void* self, void* dummy, int a);

void BoundFuncDesc::construct(void* function, const char* name, int security, int attributes) {
    void* p = sub_494e80();
    sub_570410(this, 0, p, function);
    this->field_0 = (void*)0x79bc08;
    void* r = sub_52c940((void*)name, -1);
    void* q = sub_56d6f0();
    sub_56d3c0(&q, 0);
    void* ebp = this->field_1c;
    void* ecx = *(void**)((char*)ebp + 4);
    void* edi = (char*)this + 0x18;
    void* ebx = sub_415240(edi, 0, ebp, ecx, &q);
    sub_414670(edi, 0, 1);
    *(void**)((char*)ebp + 4) = ebx;
    void* eax = *(void**)((char*)ebx + 4);
    *(void**)eax = ebx;
    if (q) {
        void** vt = *(void***)q;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(q, 1);
    }
}
