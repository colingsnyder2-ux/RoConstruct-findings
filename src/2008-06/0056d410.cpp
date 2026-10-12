// from server: 37% by colin
struct S {
    int f();
    int sub_56cbc0();
};

extern "C" int __stdcall sub_6a158c(int, int);
extern "C" int __stdcall sub_509b10(int, int, int, int);
extern "C" int __stdcall sub_5be5a0(int, int);

extern "C" int __stdcall sub_415c90(int, int);
extern "C" int __stdcall sub_415b90(int);
extern "C" int __stdcall sub_443320(int, int);
extern "C" int __stdcall sub_409d50(int, int);

extern int G_802878;
extern int G_929614;
extern int G_92bed0;
extern int G_92bef8;
extern int G_82f71c;
extern int G_8d1bc8;

int S::f()
{
    int* p = (int*)this;
    int* esi = p + 1;
    int result;
    if (esi != 0) {
        int ecx = *esi;
        int eax;
        if (ecx != 0) {
            eax = *(int*)ecx;
            eax = *(int*)(eax + 4);
            eax = ((int (__thiscall*)(int))eax)(ecx);
        } else {
            eax = (int)&G_929614;
        }
        if (((int (__stdcall*)(int, int))G_802878)(eax, (int)&G_92bed0)) {
            eax = *esi;
            eax += 4;
            if (eax != 0) {
                goto done;
            }
        }
    }
    {
        int eax = *p;
        eax = *(int*)(eax + 8);
        if (!((int (__stdcall*)(int, int))G_802878)(eax, (int)&G_92bef8)) {
            goto else_branch;
        }
        {
            int tmp;
            sub_415c90((int)&tmp, (int)esi);
            if (!sub_5be5a0((int)&tmp, 0)) {
                goto else_branch;
            }
            sub_443320((int)esi, (int)&tmp);
            result = sub_56cbc0();
            *p = result;
            sub_415b90((int)esi);
            goto done;
        }
    }
else_branch:
    {
        int eax = sub_56cbc0();
        eax = *(int*)(eax + 0xc);
        int edx = 0x10;
        int ecx;
        if (*(int*)(eax + 0x1c) < edx) {
            ecx = eax + 8;
        } else {
            ecx = *(int*)(eax + 8);
        }
        eax = *p;
        eax = *(int*)(eax + 0xc);
        eax += 4;
        if (*(int*)(eax + 0x18) < edx) {
            eax += 4;
        } else {
            eax = *(int*)(eax + 4);
        }
        sub_509b10((int)&G_82f71c, (int)&G_82f71c, ecx, eax);
        sub_409d50((int)&G_82f71c, 0);
        sub_6a158c((int)&G_8d1bc8, (int)&G_82f71c);
    }
done:
    return 0;
}
