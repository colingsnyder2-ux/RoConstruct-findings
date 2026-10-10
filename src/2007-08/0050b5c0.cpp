// from server: 62% by colin
// roc 2007-08 0050b5c0  unit: seg_00500000  size: 280 bytes

struct std_string {
    char buf[16];
    unsigned int len;
    unsigned int cap;
    std_string();
    std_string(const std_string&);
    std_string(const char*);
    ~std_string();
    std_string& operator=(const std_string&);
};

extern "C" {
    void* __cdecl malloc(unsigned int);
    void __cdecl free(void*);
    void* __cdecl fopen(const char*, const char*);
    int __cdecl fclose(void*);
    unsigned int __cdecl fread(void*, unsigned int, unsigned int, void*);
}

extern "C" void __stdcall sub_501410(std_string*, const std_string*);
extern "C" int __stdcall sub_50b530(const std_string*);
extern "C" void __stdcall sub_630a1e();

extern "C" void __stdcall sub_77e698(std_string*, const char*);
extern "C" void __stdcall sub_77e69c(std_string*, const std_string*);
extern "C" void __stdcall sub_77e6ac(std_string*);
extern "C" void __stdcall sub_77e6c4(void*);
extern "C" void* __stdcall sub_77e6d0(unsigned int);
extern "C" void __stdcall sub_77e900(void*, int, int, const char*);
extern "C" const char* __stdcall sub_77e910(const char*);
extern "C" void __stdcall sub_77e918(const char*);

struct S {
    std_string* f(std_string* out, const std_string* name);
};

std_string* S::f(std_string* out, const std_string* name)
{
    std_string local;
    sub_501410(&local, name);
    int n = sub_50b530(&local);
    if (n == -1) {
        sub_77e698(out, (const char*)0x785954);
        return out;
    }
    char* p = (char*)sub_77e6d0(n + 1);
    const char* src;
    if (local.cap >= 16)
        src = *(const char**)local.buf;
    else
        src = local.buf;
    const char* fn = sub_77e910((const char*)0x79efb8);
    void* fp = fopen(fn, (const char*)0x79efb8);
    fread(p, 1, n, fp);
    fclose(fp);
    p[n] = 0;
    std_string tmp(p);
    sub_77e6c4(p);
    sub_77e69c(out, &tmp);
    sub_77e6ac(&tmp);
    return out;
}
