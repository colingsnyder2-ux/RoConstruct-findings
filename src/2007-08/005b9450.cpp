// from server: 67% by colin
struct EnumPropDescriptor {
    void* getset;
    void* enumDesc;
    void setValue(void* object, const float& value);
};

extern float g_7b54f0;
extern float g_797e9c;
extern int g_8c5ebc;
extern float g_8c5eb4;
extern float g_8c5eb8;
extern int g_8c5eb0;

extern "C" void __stdcall sub_5b4a30(void* a, int b, void* c);
extern "C" void __stdcall sub_573ea0(void* a, int b);
extern "C" void* __stdcall sub_573890(void* a, int b);
extern "C" void __stdcall sub_5b6c00(void* a);
extern "C" void __stdcall sub_444710(void* a, void* b);

void EnumPropDescriptor::setValue(void* object, const float& value)
{
    int* vtable = *(int**)this;
    int idx = *(int*)((char*)this + 4);
    int* desc = (int*)(*(int*)((char*)vtable + 0x1d8) + idx * 4 + 0x94);
    if (!desc) {
        if (!(g_8c5ebc & 1)) {
            g_8c5ebc |= 1;
            g_8c5eb4 = g_7b54f0;
            g_8c5eb0 = 0;
            g_8c5eb8 = g_797e9c;
        }
        desc = &g_8c5eb0;
    }
    float local[3];
    local[0] = *(float*)&desc[0];
    local[1] = *(float*)&desc[1];
    local[2] = *(float*)&desc[2];
    if (value != local[2]) {
        local[2] = value;
        int* vt = *(int**)this;
        int (*fn2)(void*, int, void*) = (int (*)(void*, int, void*))*(int*)((char*)vt + 0x1d8);
        fn2(this, *(int*)((char*)this + 4), local);
        sub_573ea0(this, *(int*)((char*)this + 4));
        void* r = sub_573890(this, *(int*)((char*)this + 4));
        sub_5b6c00(r);
        sub_444710(this, r);
    }
}
