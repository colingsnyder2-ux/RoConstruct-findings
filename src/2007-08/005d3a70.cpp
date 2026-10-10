// from server: 38% by colin
struct Tool {
    char pad[0x174];
    char grip[0x24];
    int field_0x1a8;
    void copyFrom(Tool* other);
};

extern "C" int __stdcall sub_4730E0(void*, void*);
extern "C" int __stdcall sub_48E0D0(void*);
extern "C" void __stdcall sub_558B60(void*, int);
extern "C" void __stdcall sub_444710(void*, void*);
extern "C" void __stdcall sub_5B1020(void*, void*);

extern char g_var_8c69b8;

void Tool::copyFrom(Tool* other) {
    if (sub_4730E0(other, this->pad + 0x174)) {
        int* src = (int*)other;
        int* dst = (int*)(this->pad + 0x174);
        for (int i = 0; i < 9; i++) {
            dst[i] = src[i];
        }
        *(float*)(this->pad + 0x174 + 0x24) = *(float*)((char*)other + 0x24);
        *(float*)(this->pad + 0x174 + 0x28) = *(float*)((char*)other + 0x28);
        *(float*)(this->pad + 0x174 + 0x2c) = *(float*)((char*)other + 0x2c);

        int result = sub_48E0D0(other);
        if (result != 0) {
            char local = 0;
            sub_558B60((void*)(result + 0x2d4), local);
        }
        sub_444710(other, &g_var_8c69b8);
        int ecx = this->field_0x1a8;
        if (ecx != 0) {
            sub_5B1020((void*)ecx, this->pad + 0x174);
        }
    }
}
