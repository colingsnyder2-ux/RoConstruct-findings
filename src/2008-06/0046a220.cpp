// from server: 18% by colin
struct S_func_0046a220 {
    unsigned short m0;
    unsigned short m2;
    void* m4;
    unsigned int m8;
    unsigned int mC;
    unsigned int m10;
    void f(unsigned int arg);
};

extern "C" void __stdcall func_006a094a(void*);
extern "C" void* __stdcall func_006a0956(void*);
extern "C" int __stdcall func_007a6368(void*, const char*, void*, unsigned int*);
extern "C" int __stdcall func_007a636e(void*, void*);
extern "C" void* __stdcall func_007a6374(void*);

extern "C" unsigned int __stdcall GetFileVersionInfoSizeA(const char*, unsigned int*);
extern "C" int __stdcall GetFileVersionInfoA(const char*, unsigned int, unsigned int, void*);
extern "C" int __stdcall VerQueryValueA(const void*, const char*, void**, unsigned int*);

extern "C" void __stdcall func_00803ed4(void*, const char*);
extern "C" void* __stdcall func_008032cc(void*);
extern "C" void __stdcall func_00803f14(void*);

extern const char str_008104ec[];
extern const char str_0081c440[];

void S_func_0046a220::f(unsigned int arg)
{
    unsigned int size;
    void* buf;
    void* data;
    unsigned int len;
    unsigned int dummy;
    char verInfo[16];

    m10 = 0;
    if (m4 != 0) {
        func_006a094a(m4);
        m4 = 0;
    }

    m2 = 0x4e4;
    m0 = 0;
    m8 = 0;
    mC = 0;

    func_00803ed4(verInfo, (const char*)arg);

    size = GetFileVersionInfoSizeA((const char*)arg, &dummy);
    if (size == 0)
        goto fail;

    buf = func_007a6374((void*)size);
    if (buf == 0)
        goto fail;

    m4 = func_006a0956(buf);
    if (GetFileVersionInfoA((const char*)arg, 0, size, buf) == 0)
        goto fail;

    if (VerQueryValueA(buf, str_008104ec, &data, &len) == 0)
        goto fail;

    if (VerQueryValueA(buf, str_0081c440, &data, &len) == 0)
        goto done;

    if (len < 4)
        goto done;

    mC = len >> 2;
    m0 = *(unsigned short*)data;
    m2 = *(unsigned short*)((char*)data + 2);

done:
    dummy = 1;
    goto cleanup;

fail:
    if (m4 != 0) {
        func_006a094a(m4);
        m4 = 0;
    }

cleanup:
    func_00803f14(verInfo);
}
