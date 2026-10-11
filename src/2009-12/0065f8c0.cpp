// from server: 24% by atomic.potato
struct ObjectValue {
    void* construct();
    void assign(void*);
};

extern "C" void __stdcall sub_41C610();
extern "C" void __stdcall sub_65DC10();

void* ObjectValue::construct() {
    char buf[0x18];
    sub_41C610();
    sub_65DC10();

    return this;
}
