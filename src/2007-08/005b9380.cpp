// from server: 63% by colin
struct EnumPropDescriptor {
    void* getset;
    void* enumDesc;
    void setValue(void* object, const float& value);
};

extern float g_7b54f0;
extern float g_797e9c;
extern int g_8c5eb0;
extern float g_8c5eb4;
extern float g_8c5eb8;
extern unsigned char g_8c5ebc;

extern "C" void __stdcall sub_5B4A30(void* a, int b, void* c);
extern "C" void __stdcall sub_573EA0(void* a, int b);
extern "C" void* __stdcall sub_573890(void* a, int b);
extern "C" void __stdcall sub_5B6BA0(void* a);
extern "C" void __stdcall sub_444710(void* a, void* b);

void EnumPropDescriptor::setValue(void* object, const float& value)
{
    int* vtable = *(int**)this;
    int* desc = *(int**)((char*)vtable + 0x1d8);
    int idx = *(int*)((char*)this + 4);
    int* entry = (int*)((char*)desc + idx * 4 + 0x94);
    int* data;
    if (*entry != 0) {
        if ((g_8c5ebc & 1) == 0) {
            g_8c5ebc |= 1;
            g_8c5eb4 = g_7b54f0;
            g_8c5eb0 = 0;
            g_8c5eb8 = g_797e9c;
        }
        data = &g_8c5eb0;
    } else {
        data = (int*)*entry;
    }
    float local[3];
    local[0] = *(float*)data;
    local[1] = *(float*)((char*)data + 4);
    local[2] = *(float*)((char*)data + 8);
    if (value != local[1]) {
        int* vt = *(int**)this;
        int idx2 = *(int*)((char*)this + 4);
        int* desc2 = *(int**)((char*)vt + 0x1d8);
        sub_5B4A30(desc2, idx2, local);
        int* vt2 = *(int**)this;
        int idx3 = *(int*)((char*)this + 4);
        sub_573EA0(vt2, idx3);
        int* vt3 = *(int**)this;
        int idx4 = *(int*)((char*)this + 4);
        void* r = sub_573890(vt3, idx4);
        sub_5B6BA0(r);
        int* vt4 = *(int**)this;
        sub_444710(vt4, r);
    }
}
