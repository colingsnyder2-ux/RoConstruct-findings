// from server: 53% by tester




extern "C" {
    typedef unsigned int DWORD;
    typedef void* HMODULE;
}

struct std_string {
    void* data[4];
    std_string(const char*);
    ~std_string();
};

struct chain_client {
    void* vtable;
    void construct(std_string*);
};

extern "C" void* __stdcall get_module_handle(const char*);
extern "C" void* __stdcall get_proc_address(void*, const char*);

void chain_client::construct(std_string* s) {
    std_string local("no read access");
    this->vtable = (void*)0x7a783c;
    local.~std_string();
}
