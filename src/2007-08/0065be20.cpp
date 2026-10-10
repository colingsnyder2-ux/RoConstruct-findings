// from server: 34% by colin
struct VCXTPReportRecords {
    void dtor();
};

extern "C" int __stdcall IsWindow(void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_62fc62(void*);
extern "C" void __stdcall sub_41f680(void*);
extern "C" void __stdcall sub_6d5a00(void*);
extern "C" void __stdcall sub_664930(void*);
extern "C" void __stdcall sub_659170(void*);
extern "C" void __stdcall sub_65a610(void*);
extern "C" void __stdcall sub_6305e0(void*);

void VCXTPReportRecords::dtor()
{
    char* p = (char*)this;
    *(void**)p = (void*)0x7c8724;

    void* hwnd = *(void**)(p + 0xdc + 0x20);
    if (IsWindow(hwnd)) {
        void** vtbl = *(void***)(p + 0xdc);
        void (*fn)(void*) = (void (*)(void*))vtbl[0x68 / 4];
        fn(p + 0xdc);
    }

    sub_659170(p);
    sub_65a610(p);

    void* q;
    q = *(void**)(p + 0xa0);
    if (q) { sub_6301e4(q); *(void**)(p + 0xa0) = 0; }
    q = *(void**)(p + 0xa4);
    if (q) { sub_6301e4(q); *(void**)(p + 0xa4) = 0; }
    q = *(void**)(p + 0xd0);
    if (q) { sub_6301e4(q); *(void**)(p + 0xd0) = 0; }
    q = *(void**)(p + 0xa8);
    if (q) { sub_6301e4(q); *(void**)(p + 0xa8) = 0; }
    q = *(void**)(p + 0xac);
    if (q) { sub_6301e4(q); *(void**)(p + 0xac) = 0; }
    q = *(void**)(p + 0xb0);
    if (q) { sub_6301e4(q); *(void**)(p + 0xb0) = 0; }
    q = *(void**)(p + 0xb4);
    if (q) { sub_6301e4(q); *(void**)(p + 0xb4) = 0; }
    q = *(void**)(p + 0x178);
    if (q) { sub_6301e4(q); *(void**)(p + 0x178) = 0; }
    q = *(void**)(p + 0x200);
    if (q) { sub_6301e4(q); *(void**)(p + 0x200) = 0; }
    q = *(void**)(p + 0x198);
    if (q) { sub_6301e4(q); *(void**)(p + 0x198) = 0; }

    q = *(void**)(p + 0x234);
    if (q) { sub_62fc62(q); *(void**)(p + 0x234) = 0; }

    q = *(void**)(p + 0x1a0);
    if (q) {
        void** vtbl = *(void***)q;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[1];
        fn(q, 1);
        *(void**)(p + 0x1a0) = 0;
    }
    q = *(void**)(p + 0x1a4);
    if (q) {
        void** vtbl = *(void***)q;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[1];
        fn(q, 1);
        *(void**)(p + 0x1a4) = 0;
    }
    q = *(void**)(p + 0x1a8);
    if (q) {
        void** vtbl = *(void***)q;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[1];
        fn(q, 1);
        *(void**)(p + 0x1a8) = 0;
    }

    q = *(void**)(p + 0x20c);
    if (q) { sub_6301e4(q); *(void**)(p + 0x20c) = 0; }
    q = *(void**)(p + 0x22c);
    if (q) { sub_6301e4(q); *(void**)(p + 0x22c) = 0; }

    sub_77ddbc(p + 0x1fc);
    sub_664930(p + 0x1c0);
    *(void**)(p + 0x158) = (void*)0x788300;
    sub_41f680(p + 0x158);
    sub_6d5a00(p + 0xdc);
    sub_6305e0(p);
}
