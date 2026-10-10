// from server: 39% by colin
struct Holder {
    void* vtable;
    char pad[4];
    void* string_obj;
    Holder(const Holder& other);
};

extern "C" void* __stdcall sub_77E69C(void*, const void*);

Holder::Holder(const Holder& other)
{
    this->vtable = (void*)0x7871a8;
    sub_77E69C(&this->string_obj, &other.string_obj);
}
