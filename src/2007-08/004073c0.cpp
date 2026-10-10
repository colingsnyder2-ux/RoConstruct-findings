// from server: 81% by colin
struct CComEnumObject {
    void* vtable;
    void* construct();
};

extern "C" void __stdcall helper_4a9660(void*, void*);

void* CComEnumObject::construct() {
    void* local1;
    void* local2;
    this->vtable = (void*)0x785054;
    local2 = this;
    helper_4a9660(&local1, &local2);
    return this;
}
