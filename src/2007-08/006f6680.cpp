// from server: 62% by colin
struct CXTMaskEditT {
    char pad[0x90];
    int field_90;
    int field_94;
    int field_98;
    int field_9c;
    int field_a0;
    int f(int, int);
};

extern "C" int __stdcall sub_69AB30(int);
extern "C" int __stdcall sub_63022C(int);
extern "C" int __stdcall sub_630238(int, int);
extern "C" void* __stdcall CreateSolidBrush(unsigned int);

int CXTMaskEditT::f(int a, int b) {
    int esi;
    if (field_9c != 0) {
        esi = sub_69AB30(field_9c);
    } else {
        esi = 0;
    }
    if (field_a0 == 0 || esi == 0) {
        return 0;
    }
    int* vtable = *(int**)esi;
    int* arg1 = (int*)a;
    int* arg1_vt = *(int**)arg1;
    int r1 = ((int (__thiscall*)(int, int, int))vtable[1])(esi, field_a0, 1);
    ((void (__thiscall*)(int*, int))arg1_vt[0x38/4])(arg1, r1);
    int r2 = ((int (__thiscall*)(int, int, int))vtable[2])(esi, field_a0, 1);
    if (r2 != field_98 || field_94 == 0) {
        sub_63022C((int)&field_90);
        void* brush = CreateSolidBrush((unsigned int)r2);
        sub_630238((int)&field_90, (int)brush);
        field_98 = r2;
    }
    int r3 = field_98;
    int* arg1_vt2 = *(int**)arg1;
    ((void (__thiscall*)(int*, int))arg1_vt2[0x34/4])(arg1, r3);
    if (field_94 != 0) {
        return field_94;
    }
    return 0;
}
