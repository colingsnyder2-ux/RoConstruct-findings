// from server: 81% by colin
struct PartChunk {
    void* vtable;
    unsigned char padding[0xb8];
    char* field_bc;
    void method_4e6740();
    void method_4e68b0();
    void method_4e6a30(void* arg);
};

extern "C" bool __cdecl is_type(void* type);

extern float g_819bac;
extern float g_827494;

void PartChunk::method_4e6a30(void* arg)
{
    if (arg == (void*)0x976148) {
        method_4e6740();
        method_4e68b0();
        return;
    }
    if (arg == (void*)0x976128) {
        method_4e68b0();
        return;
    }
    if (arg == (void*)0x9760a8) {
        method_4e6740();
        return;
    }
    if (is_type(arg)) {
        method_4e6740();
        return;
    }
    if (arg == (void*)0x97626c) {
        char* f = field_bc;
        float v = *(float*)(f + 0x224);
        typedef void (__thiscall *SetFn)(PartChunk*, float);
        SetFn set = *(SetFn*)(*(char**)this + 0x20);
        set(this, v);

        char* f2 = field_bc;
        if (*(int*)(f2 + 0x1c8) != 0) {
            typedef float (__thiscall *GetFn)(PartChunk*);
            GetFn get = *(GetFn*)(*(char**)this + 0x24);
            float r = get(this);
            if (r < g_819bac) {
                typedef void (__thiscall *SetFn2)(PartChunk*, float);
                SetFn2 set2 = *(SetFn2*)(*(char**)this + 0x20);
                set2(this, r);
            }
        } else {
            typedef float (__thiscall *GetFn)(PartChunk*);
            GetFn get = *(GetFn*)(*(char**)this + 0x24);
            float r = get(this);
            if (r == g_827494) {
                typedef void (__thiscall *SetFn2)(PartChunk*, float);
                SetFn2 set2 = *(SetFn2*)(*(char**)this + 0x20);
                set2(this, 0.0f);
            }
        }
    }
}
