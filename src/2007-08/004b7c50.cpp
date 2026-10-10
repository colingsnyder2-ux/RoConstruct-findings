// from server: 48% by colin
// roc 2007-08 004b7c50  unit: Exposer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7c50

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_4cff40(void*);
extern "C" void __cdecl sub_4c4300(void*, const void*);

struct Exposer {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    unsigned char field_14;
    void construct();
    void sub_4b7bb0(void*, void*);
};

void Exposer::construct()
{
    void* p;
    void* q;
    void* r;

    this->field_8 = 0;
    this->field_0 = 0;
    this->field_4 = 0;
    this->field_14 = 0;

    p = sub_62fef6(0x804);
    if (p == 0) {
        sub_4cff40(p);
    } else {
        p = 0;
    }
    sub_4c4300(p, (const void*)0x892ad0);

    r = 0;
    q = 0;
    this->sub_4b7bb0(&q, &r);
}
