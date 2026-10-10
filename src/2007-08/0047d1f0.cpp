// from server: 45% by colin
struct Win32Window {
    char pad0[4];
    void* field4;
    bool method(int a, int b, int c);
};

extern "C" void* __cdecl memset(void*, int, unsigned int);

struct Vtbl1 {
    char pad[0x1c];
    void (__stdcall* fn1c)(void*);
};

struct Vtbl2 {
    char pad[0x24];
    int (__stdcall* fn24)(void*, int, void*);
    char pad2[0x64 - 0x28];
    void (__stdcall* fn64)(void*);
};

struct Vtbl3 {
    char pad[0x1c];
    void (__stdcall* fn1c)(void*);
    char pad2[0x24 - 0x20];
    int (__stdcall* fn24)(void*, int, void*);
    char pad3[0x64 - 0x28];
    void (__stdcall* fn64)(void*);
};

struct Sub {
    char pad[0x24];
    unsigned int count24;
    unsigned int count28;
    int* arr2c;
};

struct Other {
    char pad[4];
    float* data;
};

bool Win32Window::method(int a, int b, int c) {
    unsigned char buf[0x50];
    memset(buf, 0, 0x50);

    int idx = c;
    int offset = idx * 8;
    offset -= idx;
    offset += offset;
    offset += offset;
    offset += offset;

    void* obj = *(void**)((char*)field4 + offset);
    Vtbl1* vt = *(Vtbl1**)obj;
    vt->fn1c(obj);

    obj = *(void**)((char*)field4 + offset);
    Vtbl2* vt2 = *(Vtbl2**)obj;
    vt2->fn64(obj);

    obj = *(void**)((char*)field4 + offset);
    Vtbl3* vt3 = *(Vtbl3**)obj;
    int r = vt3->fn24(obj, 0x50, buf);
    if (r != 0) {
        return false;
    }

    Sub* sub = (Sub*)((char*)field4 + offset);
    ((Win32Window*)b)->method(0, sub->count28, 0);

    unsigned int n = sub->count28;
    for (unsigned int i = 0; i < n && i < 0x20; i++) {
        unsigned char v = buf[i + 0x30];
        v >>= 7;
        ((unsigned char*)((Win32Window*)b)->field4)[i] = v;
    }

    Other* o = (Other*)b;
    ((Win32Window*)a)->method(0, sub->count24, 0);

    unsigned int m = sub->count24;
    for (unsigned int i = 0; i < m; i++) {
        int val = sub->arr2c[i];
        int raw = *(int*)(buf + val * 4);
        raw -= 0x8000;
        float f = (float)raw;
        f *= 1.52587890625e-05f;
        o->data[i] = f;
    }

    return true;
}
