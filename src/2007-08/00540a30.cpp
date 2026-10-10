// from server: 75% by colin
struct RBX_Reflection_PBVPropertyDescriptor_holder {
    void func_00540a30(void* arg);
};

extern "C" void* __cdecl sub_00630d36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_00630b9e(void*, void*);
extern "C" void* __stdcall sub_0077e710(void*);
extern char g_00881f4c[];
extern char g_0088209c[];
extern char g_00786e04[];
extern char g_00841e0c[];

void RBX_Reflection_PBVPropertyDescriptor_holder::func_00540a30(void* arg) {
    void* result = sub_00630d36(arg, 0, g_0088209c, g_00881f4c, 0);
    if (result == 0) {
        char buf[4];
        sub_0077e710(g_00786e04);
        sub_00630b9e(buf, g_00841e0c);
    }
}
