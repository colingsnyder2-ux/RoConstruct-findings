// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FlagStand {
    char pad[0x14];
    int field14;
    char pad2[0x3fc - 0x18];
    int field3fc;
    void func(int, int);
};

extern "C" int __cdecl sub_5D9A20(int);
extern "C" void* __cdecl sub_49ACD0(int);
extern "C" void __cdecl sub_600660(void*);
extern "C" int __cdecl sub_619450(int);
extern "C" void __cdecl sub_4116F0(void*, void*);
extern "C" void __cdecl sub_49D200(void*, int);
extern "C" int __cdecl sub_62BF20(int);
extern "C" void __cdecl sub_618380(int, void*);
extern "C" void __cdecl sub_618A40(void*, int, void*);
extern "C" int __cdecl sub_62C2E0(int, int);
extern "C" void __cdecl sub_62BDC0(int, int);

void FlagStand::func(int a, int b)
{
    int local2 = -1;
    int local3;

    int esi = *(int*)(a + 0x104);
    if (sub_5D9A20(esi) != 0) {
        int ebx = sub_62BF20(esi);
        if (ebx != 0) {
            int s = (int)sub_49ACD0(esi);
            if (s != 0) {
                if (*(char*)(s + 0x17c) == 0) {
                    int ebp = this->field3fc;
                    if (*(int*)(s + 0x178) == ebp) {
                        sub_618380(ebx, &local3);
                        if (*(int*)&local3 != ebp) {
                            void* tmp;
                            sub_618A40(&local3, s, &tmp);
                            sub_4116F0(&local3, &tmp);
                            sub_49D200((void*)0x97c060, (int)&this->field14);
                            local2 = 0;
                            sub_600660(&local3);
                            int r = sub_619450((int)this);
                            int r2 = sub_62C2E0(r, ebx);
                            if (r2 != 0) {
                                sub_62BDC0(r2, ebx);
                            }
                        }
                    }
                }
            }
        }
    }

    if (b != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(b + 4), -1) == 1) {
            (*(void(**)(int))(*(int*)b + 4))(b);
            if (_InterlockedExchangeAdd((volatile long*)(b + 8), -1) == 1) {
                (*(void(**)(int))(*(int*)b + 8))(b);
            }
        }
    }
}
