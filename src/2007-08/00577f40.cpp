// from server: 83% by colin
struct VPartInstance {
    char pad[0x1d8];
    void* field1d8;
    void method00577f40(const float* arg);
};

extern "C" void __stdcall sub_530100(void*);
extern "C" void __stdcall sub_5e1f00(void*, const float*);
extern "C" void __stdcall sub_444710(void*, const char*);

void VPartInstance::method00577f40(const float* arg)
{
    float local[6];
    void* p = field1d8;
    void* q = *(void**)((char*)p + 0x64);
    sub_530100(q);
    local[0] = *(float*)((char*)q + 0xb4);
    local[1] = *(float*)((char*)q + 0xb8);
    local[2] = *(float*)((char*)q + 0xbc);
    local[3] = *(float*)((char*)q + 0xc0);
    local[4] = *(float*)((char*)q + 0xc4);
    local[5] = *(float*)((char*)q + 0xc8);
    if (arg[0] != local[0] || arg[1] != local[1] || arg[2] != local[2]) {
        local[0] = arg[0];
        local[1] = arg[1];
        local[2] = arg[2];
        void* r = *(void**)((char*)field1d8 + 0x64);
        sub_5e1f00(r, local);
        sub_444710(this, (const char*)0x8c2ad4);
    }
}
