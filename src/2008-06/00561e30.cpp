// from server: 34% by colin
struct VContentProvider {
    char pad[0x1c];
    void* field1c;
    bool sub_560200(void*);
    void* sub_561980();
    void* sub_561e30(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void* __stdcall sub_80245c(void*, const void*);
    void __stdcall sub_802468(void*);
    void* __stdcall sub_6a158c(void*, const char*);
    void* __stdcall sub_6a0920(unsigned int);
}

void* __stdcall sub_409d50(void*);
void* __stdcall sub_509b10(void*, const char*, void*);

void* VContentProvider::sub_561e30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char buf[0x20];
    char str[0x20];
    void* result;
    void* p;

    sub_80245c(buf, &a1);
    *(void**)(buf + 0x1c) = (void*)a9;

    result = sub_561980();
    if (result == 0) {
        if (sub_560200(result)) {
            p = *(void**)((char*)result + 8);
            sub_80245c(str, p);
            sub_802468(str);
            return p;
        }
    }

    if (*(unsigned int*)(str + 0x14) >= 0x10)
        p = *(void**)(str + 0);
    else
        p = str;

    sub_509b10(buf, "Unable to load %s", p);
    sub_409d50(buf);
    sub_6a158c(buf, "tSVW");
    return 0;
}
