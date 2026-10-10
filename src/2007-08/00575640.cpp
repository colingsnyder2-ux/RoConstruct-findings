// from server: 27% by colin
struct S {
    char pad[0x20];
    int field_0x20;
    char pad2[0x3c];
    int field_0x5c;
    char pad3[0x8c];
    char field_0xec;
    char field_0xed;
    char pad4[0x2];
    int field_0xf0;
    int field_0xf4;
    int field_0xf8;
    int field_0xfc;
    char pad5[0x7c];
    float field_0x17c;
    char pad6[0x18];
    float field_0x198;
    char pad7[0x44];
    float field_0x1e0;

    void func(int a1);
};

extern "C" {
    int __cdecl sub_50B050();
    int __cdecl sub_50B120();
    int __cdecl sub_50B150();
    int __cdecl sub_50B1C0();
    void __cdecl sub_530100();
    int __cdecl sub_574900();
    int __cdecl sub_575460();
    int __cdecl sub_575510();
    int __cdecl sub_5ABA6B0();
    int __cdecl sub_5BAFA0();
    int __cdecl sub_5E2D20();
    int __cdecl sub_62E450();
    int __cdecl sub_62E730();
    int __cdecl sub_62E9E0();
}

extern char g_8c2799;
extern char g_8c279a;
extern char g_8c279b;
extern char g_8c279c;
extern char g_8c279d;
extern float g_79646c;

void S::func(int a1)
{
    if (field_0x20 != 2) {
        if (field_0xed != 0) {
            int eax = field_0xf0;
            int edx = field_0xfc;
            int ecx = *(int*)(eax + 0xec);
            ecx = *(int*)(ecx + edx);
            ecx += field_0xf8;
            edx = field_0xf4;
            ecx = ecx + eax + 0xec;
            ((void (__thiscall*)(int))edx)(ecx);
            field_0xec = (char)eax;
            field_0xed = 0;
        }
        if (field_0xec == 0) {
            goto skip1;
        }
    }
    {
        S* edi = (S*)((char*)this - 0x17c);
        int eax = sub_575460();
        int edx = *(int*)eax;
        int ecx = eax;
        eax = *(int*)(edx + 8);
        ((void (__thiscall*)(int))eax)(ecx);
        int tmp;
        sub_5E2D20();
        sub_575510();
        sub_62E730();
    }
skip1:
    if (g_8c2799 != 0) {
        int edx = *(int*)((char*)this + 0x5c);
        int eax = *(int*)(edx + 0x20);
        if (eax != 0) {
            if (*(int*)(eax + 0x28) == 0) {
                eax = *(int*)eax;
                if (eax != 0) {
                    if (eax == 1) {
                        sub_50B150();
                    } else {
                        sub_50B120();
                    }
                    float f0 = *(float*)eax;
                    float f1 = *(float*)(eax + 4);
                    float f2 = *(float*)(eax + 8);
                    float tmp[4];
                    tmp[0] = f2;
                    tmp[1] = f1;
                    tmp[2] = f0;
                    tmp[3] = 1.0f;
                    S* ecx = (S*)((char*)this - 0x17c);
                    sub_575510();
                    sub_62E450();
                }
            }
        }
    }
    if (g_8c279a != 0) {
        int ecx = *(int*)((char*)this + 0x5c);
        int eax = *(int*)(ecx + 0x20);
        if (eax != 0) {
            if (*(int*)(eax + 0x28) == 0) {
                if (*(int*)eax == 0) {
                    sub_50B050();
                    float f0 = *(float*)eax;
                    float f1 = *(float*)(eax + 4);
                    float f2 = *(float*)(eax + 8);
                    float tmp[4];
                    tmp[0] = f0;
                    tmp[1] = f1;
                    tmp[2] = f2;
                    tmp[3] = 1.0f;
                    S* ecx2 = (S*)((char*)this - 0x17c);
                    sub_575510();
                    sub_62E450();
                }
            }
        }
    }
    if (g_8c279c != 0) {
        S* ecx = (S*)((char*)this - 0x17c);
        sub_5BAFA0();
    }
    if (g_8c279b != 0) {
        int eax = *(int*)((char*)this + 0x5c);
        if (*(int*)(eax + 0x6c) != 0) {
            S* edi = (S*)((char*)this - 0x17c);
            float f = 1.0f - (1.0f - edi->field_0x198) * edi->field_0x1e0;
            float tmp = f;
            sub_50B1C0();
            float v[4];
            v[0] = *(float*)eax;
            v[1] = *(float*)(eax + 4);
            v[2] = *(float*)(eax + 8);
            v[3] = tmp;
            int ecx = *(int*)((char*)this + 0x5c);
            int ebx = *(int*)(ecx + 0x64);
            sub_530100();
            float tmp2[4];
            tmp2[0] = 0.0f;
            tmp2[1] = g_79646c;
            tmp2[2] = 0.0f;
            tmp2[3] = 0.0f;
            ebx += 0x84;
            sub_5ABA6B0();
            sub_575510();
            sub_62E9E0();
        }
    }
    if (g_8c279d != 0) {
        S* esi = (S*)((char*)this - 0x17c);
        if (!sub_574900()) {
            int eax = sub_50B120();
            float v[4];
            v[0] = *(float*)eax;
            v[1] = *(float*)(eax + 4);
            v[2] = *(float*)(eax + 8);
            v[3] = 1.0f;
            sub_575510();
            sub_62E450();
        }
    }
}
