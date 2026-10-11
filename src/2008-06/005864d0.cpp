// from server: 31% by colin
struct PropertyDescriptor {
    char pad[0x18];
    void* field_18;
    void setValue(void* value, unsigned attributes);
};

extern "C" void __stdcall string_dtor(void*);
extern "C" void __stdcall sub_5863e0(void*, void*);

void PropertyDescriptor::setValue(void* value, unsigned attributes)
{
    void* p = field_18;
    void* tmp;
    sub_5863e0(&tmp, value);
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[3];
    fn(p, value, &tmp);
    string_dtor(&tmp);
}
