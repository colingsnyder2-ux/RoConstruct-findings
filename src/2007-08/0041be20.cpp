// from server: 58% by colin
struct SignalDesc {
    void* construct(const char* name, int flags);
    char pad[0x40];
};

extern "C" void* __stdcall sub_55FC40(void* self, const char* name);

void* SignalDesc::construct(const char* name, int flags) {
    char buf[0x1c];
    void* p = buf;
    sub_55FC40(this, name);
    *(void**)this = (void*)0x787a4c;

    return this;
}
