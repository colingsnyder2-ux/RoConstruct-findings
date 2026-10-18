// from server: 67% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct VModelInstance;

struct FilteredSelection {
    char pad0[0xc];
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;

    void method(void* arg);
};

struct Sub4213a0 {
    void* method(void** arg);
};

struct Sub459830 {
    void method(void** a, void* b, void* c);
};

extern "C" void* __cdecl sub_6a17c6(void* a, void* b, void* c, void* d, void* e);

void FilteredSelection::method(void* arg)
{
    void* v = *(void**)arg;
    void* r = sub_6a17c6(v, 0, (void*)0x92907c, (void*)0x932a40, 0);
    void* tmp = r;
    if (tmp != 0) {
        ((Sub4213a0*)((char*)this + 0xc))->method(&tmp);
    }

    void* item = *((void**)arg + 2);
    tmp = item;
    if (item == 0)
        return;

    char* base = (char*)this + 0xc;

    void* end = *(void**)(base + 0x10);
    if (*(void**)(base + 0xc) > end)
        _invalid_parameter_noinfo();

    void* it = *(void**)(base + 0xc);
    if (it > *(void**)(base + 0x10))
        _invalid_parameter_noinfo();

    void* begin = *(void**)base;
    tmp = it;
    while (it != end) {
        if (*(void**)it == item)
            break;
        it = (char*)it + 4;
        if (it == end)
            break;
    }

    void* end2 = *(void**)(base + 0x10);
    if (*(void**)(base + 0xc) > end2)
        _invalid_parameter_noinfo();

    void* begin2 = *(void**)base;
    if (begin != 0 && begin != begin2)
        _invalid_parameter_noinfo();

    if (it != end2) {
        void* p = it;
        ((Sub459830*)base)->method(&tmp, begin, p);
    }
}
