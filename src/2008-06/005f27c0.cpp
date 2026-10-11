// from server: 42% by colin




extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

struct Str {
    char pad[0x1c];
    void ctor(const char*);
    void dtor();
};

struct Base {
    void init(void*);
};

struct Derived : Base {
    void* vtable;
    void construct();
};

void Derived::construct()
{
    Str s;
    s.ctor("no read access");
    Base::init(&s);
    this->vtable = (void*)0x840854;
    s.dtor();
}
