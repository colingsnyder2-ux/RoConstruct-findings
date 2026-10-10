// from server: 44% by colin
struct UserInputBase {
    char pad0[4];
    char field4[0x1c];
    int field20;
    char pad24[4];
    int field24;
    void func(int a, int b);
};

extern "C" int __stdcall sub_544FC0(void*, void*);
extern "C" void __stdcall sub_77E690(void*);
extern "C" void* __stdcall sub_62F460(void*, void*, void*);
extern "C" void __stdcall sub_474F70(void*, int);
extern "C" int __stdcall sub_77D2E8(void*);
extern "C" void __stdcall sub_457DD0(void*);
extern "C" void __stdcall sub_77E698(void*);
extern "C" void __stdcall sub_5450B0(void*, void*);
extern "C" void __stdcall sub_77E6AC(void*);

void UserInputBase::func(int a, int b)
{
    if (!sub_544FC0(&field4, (void*)a))
        return;

    sub_77E690(&field4);
    field20 = *(int*)(a + 0x1c);

    int local;
    sub_62F460(&local, (void*)a, (void*)b);
    sub_474F70(&field24, *(int*)&local);

    if (local != 0) {
        if (sub_77D2E8((void*)(local + 4)) == 0) {
            sub_457DD0((void*)local);
            if (local != 0) {
                void** vt = *(void***)local;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
    }

    if (field24 != 0)
        return;

    char buf[0x1c];
    sub_77E698(buf);
    int tmp1, tmp2;
    sub_5450B0(&tmp2, &tmp1);
    sub_62F460(&tmp1, (void*)a, (void*)b);
    sub_474F70(&field24, *(int*)&tmp1);

    if (tmp1 != 0) {
        if (sub_77D2E8((void*)(tmp1 + 4)) == 0) {
            sub_457DD0((void*)tmp1);
            if (tmp1 != 0) {
                void** vt = *(void***)tmp1;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
        tmp1 = 0;
    }

    sub_77E6AC(&tmp2);
    sub_77E6AC(buf);
}
