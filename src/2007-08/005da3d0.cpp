// from server: 53% by colin
struct Instance {
    void* vtable;
    char pad[0xf8 - 4];
    void* field_f8;
};

struct JointInstance {
    char pad[0xbc];
    void* field_bc;
    char pad2[0xf8 - 0xc0];
    void* field_f8;
};

struct VelocityMotor {
    char pad[0xbc];
    void* field_bc;
    char pad2[0xf8 - 0xc0];
    void* field_f8;
    void sub_5da300(int, int);
    void func(int);
};

extern "C" void __stdcall sub_541960(int);
extern "C" void* __cdecl sub_630d36(void*, int, const char*, const char*, int);
extern "C" void* __cdecl sub_57d530(void*);
extern "C" void __cdecl sub_5aa3a0(void*, void*);
extern "C" void __cdecl sub_475050(void*);
extern "C" void __cdecl sub_5095d0(void*, void*);
extern "C" void __cdecl sub_5a9f00(void*, void*);

void VelocityMotor::func(int arg) {
    char buf[0x64];
    sub_541960(arg);
    void* p = sub_630d36(field_bc, 0, (const char*)0x881f4c, (const char*)0x8ad4ac, 0);
    sub_5da300(0, (int)p);
    void* edi = field_f8;
    if (*(int*)((char*)edi + 4) != 0) {
        edi = 0;
    } else {
        void* ecx = *(void**)((char*)edi + 4);
        void** vt = *(void***)ecx;
        int (*fn)(void*) = (int (*)(void*))vt[1];
        int r = fn(ecx);
        if (r == 8) {
            void* ecx2 = *(void**)((char*)edi + 4);
            edi = *(void**)((char*)ecx2 + 4);
        } else {
            edi = *(void**)((char*)edi + 4);
        }
        edi = *(void**)((char*)edi + 0xc);
    }
    void* ebx = sub_57d530(this);
    if (edi != ebx) {
        if (edi != 0) {
            sub_5aa3a0(edi, field_f8);
            sub_475050(buf);
            void* eax = buf;
            sub_5095d0(buf, eax);
            float f1 = *(float*)((char*)eax + 0x24);
            void* ecx = field_f8;
            *(float*)(buf + 0x34) = f1;
            float f2 = *(float*)((char*)eax + 0x28);
            *(float*)(buf + 0x38) = f2;
            float f3 = *(float*)((char*)eax + 0x2c);
            *(float*)(buf + 0x3c) = f3;
            if (*(int*)((char*)ecx + 8) != 0) {
                void** vt = *(void***)ecx;
                void (*fn)(void*, int, int) = (void (*)(void*, int, int))vt[4];
                fn(ecx, 0, 0);
            }
            sub_475050(buf);
            void* eax2 = buf;
            sub_5095d0(buf, eax2);
            float f4 = *(float*)((char*)eax2 + 0x24);
            void* ecx2 = field_f8;
            *(float*)(buf + 0x34) = f4;
            float f5 = *(float*)((char*)eax2 + 0x28);
            *(float*)(buf + 0x38) = f5;
            float f6 = *(float*)((char*)eax2 + 0x2c);
            *(float*)(buf + 0x3c) = f6;
            if (*(int*)((char*)ecx2 + 0xc) != 0) {
                void** vt = *(void***)ecx2;
                void (*fn)(void*, int, int) = (void (*)(void*, int, int))vt[4];
                fn(ecx2, 1, 0);
            }
        }
        if (ebx != 0) {
            sub_5a9f00(ebx, field_f8);
        }
    }
}
