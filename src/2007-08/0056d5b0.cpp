// from server: 34% by colin
struct Holder {
    void* vtable;
    char pad[0x1c];
    void* field_20;
    Holder(const Holder& other);
};

extern "C" void* __stdcall sub_77E69C(void*, const void*);

Holder::Holder(const Holder& other)
{
    this->vtable = (void*)0x7a9fc4;
    sub_77E69C((char*)this + 4, (char*)&other + 4);
    *(void**)((char*)this + 0x20) = *(void**)((char*)&other + 0x1c);
}
