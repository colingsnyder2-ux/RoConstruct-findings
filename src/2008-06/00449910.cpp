// from server: 36% by tester
extern "C" void __stdcall func_006a117e();
extern "C" void* __stdcall func_006a0920(unsigned int);
extern "C" void __stdcall func_006a1172(void*);
extern "C" void __stdcall func_006a11cc(void*, int, char*, char*, char*);
extern "C" void __stdcall func_006a0d2e();
extern "C" void __stdcall func_00455d40();
extern "C" void __stdcall func_00458e70();
extern "C" void __stdcall func_00412b80();
extern "C" void __stdcall func_0044f200();
extern "C" void __stdcall func_0040df70();
extern "C" void __stdcall func_00412af0();
extern "C" void __stdcall func_0040dfa0();
extern "C" void __stdcall func_004638c0();
extern "C" void __stdcall func_004638a0();
extern "C" void __stdcall func_00433410();
extern "C" void __stdcall func_004332e0();
extern "C" void __stdcall func_00803f04();

struct CRbxPlayDocTemplate {
    void* field_0;
    char pad_4[0x1c];
    void* field_20;
    void* field_24;
    void* field_28;
    void* field_2c;
    void construct(char);
};

void CRbxPlayDocTemplate::construct(char flag)
{
    void* p;
    void* q;
    void* r;
    void* s;
    char* a;
    char* b;
    char* c;

    func_006a117e();
    field_0 = (void*)0x81685c;

    p = func_006a0920(0x98);
    if (p == 0) {
        if (flag != 0) {
            func_00455d40();
        } else {
            func_00458e70();
        }
        func_00412b80();
        func_0044f200();
        func_006a11cc(p, 0x81, a, b, c);
        *(void**)((char*)p + 0x90) = 0;
        *(void**)p = (void*)0x81671c;
        func_00803f04();
    } else {
        p = 0;
    }
    func_006a1172(p);
    field_24 = p;

    q = func_006a0920(0x90);
    if (q != 0) {
        func_0040df70();
        func_00412af0();
        func_0040dfa0();
        func_006a11cc(q, 0xb9, a, b, c);
        *(void**)q = (void*)0x816684;
    } else {
        q = 0;
    }
    func_006a1172(q);
    field_20 = q;

    r = func_006a0920(0x90);
    if (r != 0) {
        func_004638c0();
        func_006a0d2e();
        func_004638a0();
        func_006a11cc(r, 0xcf, a, b, c);
        *(void**)r = (void*)0x816684;
    } else {
        r = 0;
    }
    func_006a1172(r);
    field_28 = r;

    s = func_006a0920(0x90);
    if (s != 0) {
        func_00433410();
        func_006a0d2e();
        func_004332e0();
        func_006a11cc(s, 0x8a, a, b, c);
        *(void**)s = (void*)0x816684;
    } else {
        s = 0;
    }
    func_006a1172(s);
    field_2c = s;
}
