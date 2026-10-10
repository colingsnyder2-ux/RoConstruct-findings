// from server: 95% by colin
struct FlagStand {
    char pad[0x2ac];
    void* vtable_2ac;
    void* field_2b0;
    FlagStand* destroy(char);
};

extern "C" void __cdecl free(void*);

void __stdcall sub_5eae50();

FlagStand* FlagStand::destroy(char flags) {
    sub_5eae50();
    void* p = this->field_2b0;
    this->vtable_2ac = (void*)0x7a4cac;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x2b0) = (void*)0x7a4ca4;
    if (flags & 1) {
        free(this);
    }
    return this;
}
