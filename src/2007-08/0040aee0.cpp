// from server: 36% by colin
struct CNullDoc {
    char pad[0x104];
    void* field_104;
    bool method(void* arg);
};

extern "C" void* __cdecl sub_64EA60(void*);
extern "C" int __cdecl sub_630202(void*, void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __fastcall sub_636A70(void*);
extern "C" void __fastcall sub_635F20(void*, int);
extern "C" void __fastcall sub_63A700(void*, const char*);
extern "C" void __fastcall sub_639DB0(void*);
extern "C" void __fastcall sub_63A120(void*, int);

bool CNullDoc::method(void* arg)
{
    int* p = (int*)arg;
    if (p[2] == 0)
        return false;
    void* a = sub_64EA60((void*)p[5]);
    if (sub_630202(a, 0) == 0)
        return false;
    if (*p != 0x80c9)
        return false;
    if (field_104 == 0) {
        void* mem = sub_62FEF6(0x1d4);
        if (mem != 0) {
            sub_636A70(mem);
            field_104 = mem;
        } else {
            field_104 = 0;
        }
    }
    sub_635F20(field_104, 1);
    sub_63A700(field_104, (const char*)0x78594c);
    if (*(int*)((char*)field_104 + 0x144) != 1) {
        *(int*)((char*)field_104 + 0x144) = 1;
        sub_639DB0(field_104);
    }
    sub_63A120(field_104, 0x28);
    void** vt = *(void***)field_104;
    void (*fn)(void*, int) = (void (*)(void*, int))vt[0x68/4];
    fn(field_104, 1);
    p[1] = (int)field_104;
    return true;
}
