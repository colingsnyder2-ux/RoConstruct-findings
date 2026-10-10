// from server: 83% by colin
struct PartInstance {
    char pad[0x1d8];
    void* field_1d8;
    char pad2[0x250 - 0x1dc];
    unsigned char field_250;

    void someMethod(void* arg);
};

extern "C" void __fastcall sub_530100(void*);
extern "C" char __fastcall sub_4730e0(void*, void*);
extern "C" void __fastcall sub_5b5170(void*, void*);

void PartInstance::someMethod(void* arg) {
    void* p = field_1d8;
    void* q = *(void**)((char*)p + 0x64);
    sub_530100(q);
    q = (char*)q + 0x84;
    char result = sub_4730e0(arg, q);
    if (result) {
        void* s = field_1d8;
        sub_5b5170(s, arg);
        field_250 = 1;
        void** vtbl = *(void***)this;
        void (*fn)() = (void (*)())vtbl[0x54/4];
        fn();
    }
}
