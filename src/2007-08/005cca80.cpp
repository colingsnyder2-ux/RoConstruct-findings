// from server: 89% by colin
struct S {
    char pad0[4];
    char field4;
    void* field0;
    void method(void* arg1, char arg2, int arg3);
};

extern "C" void __stdcall sub_72CC90(int, int, int, int, int, int, int, int);
extern "C" void __stdcall sub_72D1F0(int, int, int, int);
extern "C" void __stdcall sub_5CC8E0(void*);

void S::method(void* arg1, char arg2, int arg3) {
    char* p = (char*)arg1;
    field4 = p[0x15];
    int* ecx = (int*)field0;
    ecx[0x20/4] = 0;
    ecx[0x24/4] = 0;
    ecx[0x28/4] = arg3;
    int edx = *(int*)(p + 8);
    if (p[0x14] != 0) {
        edx = -edx;
    }
    if (arg2 != 0) {
        int esi = *(int*)(p + 0x10);
        int esi2 = *(int*)(p + 0xc);
        sub_72CC90((int)ecx, *(int*)p, *(int*)(p + 4), edx, esi2, esi, 0x7a2c08, 0x38);
        sub_5CC8E0((void*)0);
    } else {
        sub_72D1F0((int)ecx, edx, 0x7a2c08, 0x38);
        sub_5CC8E0((void*)0);
    }
}
