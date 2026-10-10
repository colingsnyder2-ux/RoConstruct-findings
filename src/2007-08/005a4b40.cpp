// from server: 54% by colin
// roc 2007-08 005a4b40  unit: RBX::VRunService::?$Listener  size: 136 bytes

struct std_string {
    char data[0x1c];
    std_string(const char*);
    ~std_string();
};

extern "C" {
    void* __stdcall sub_77e698();
    void* __stdcall sub_77e6ac();
}

struct Listener {
    char pad[0xbc];
    void* field_bc;
    void* get();
};

void* sub_53e7a0(void* a, void* b);

void* Listener::get()
{
    void* result = 0;
    if (field_bc != 0) {
        std_string s("Right Arm");
        result = sub_53e7a0(field_bc, &s);
        s.~std_string();
    }
    return result;
}
