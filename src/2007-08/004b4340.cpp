// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ChangePropertyItem {
    char pad0[4];
    char* field4;
    char* field8;
    char* fieldC;
    void Process(int);
};

extern "C" {
    bool __cdecl sub_4ACEC0(char*, char*);
    void __cdecl sub_4A6150(int, char*);
    void __cdecl sub_4A0DF0(char*, char*, char*);
    void __cdecl sub_4A2070(char*, char*, char*);
    char* __cdecl sub_498F60();
    void __cdecl sub_56C3B0(char*);
    void __cdecl sub_4A41A0(char*, char*, char*);
    char* __cdecl sub_4A3510(char*, char*, int, char*);
    char* __cdecl sub_56C0A0(char*, int, char*, char*);
    void __cdecl sub_4B3F00(char*, char*, int, char*);
}

void ChangePropertyItem::Process(int a2)
{
    if (!sub_4ACEC0(field4, fieldC))
        return;

    sub_4A6150(3, (char*)a2);

    char* edi = *(char**)(field8 + 4);
    sub_4A0DF0(field4 + 0xec, (char*)a2, fieldC);
    edi += 4;
    sub_4A2070(field4 + 0xf4c, (char*)a2, edi);

    char* p = sub_498F60();
    if (p[0xf5] != 0) {
        char* ebx = fieldC;
        char* local20;
        sub_56C3B0((char*)&local20);
        char* local18 = local20;

        char* local14;
        if (*(int*)(edi + 0x18) >= 0x10)
            local14 = *(char**)(edi + 4);
        else
            local14 = edi + 4;

        char* eax = *(char**)ebx;
        char* ebp = fieldC;
        void* edx = *(void**)(eax + 4);
        char* r = ((char* (__thiscall*)(char*))edx)(ebx);

        char* edi2;
        if (*(int*)(r + 0x1c) >= 0x10)
            edi2 = *(char**)(r + 8);
        else
            edi2 = r + 8;

        char* edx2 = field4;
        char* eax2 = local18;
        char* ebx2 = *(char**)eax2;
        char* ecx2 = *(char**)(edx2 + 0xec);
        char* r2 = ((char* (__thiscall*)(char*, char*, char*))sub_4A41A0)(ecx2, ebp, local14);
        char* r3 = ((char* (__thiscall*)(char*, char*, int, char*))sub_4A3510)(field4 + 0x1e18, edi2, 1, r2);
        sub_56C0A0(ebx2, 1, (char*)0x79ddf8, r3);

        char* ref = (char*)a2;
        if (ref != 0) {
            char* edi3 = ref;
            char* cnt = ref + 4;
            if (_InterlockedExchangeAdd((volatile long*)cnt, -1) == 1) {
                char* vt = *(char**)edi3;
                void* fn = *(void**)(vt + 4);
                ((void (__thiscall*)(char*))fn)(edi3);
                char* cnt2 = edi3 + 8;
                if (_InterlockedExchangeAdd((volatile long*)cnt2, -1) == 1) {
                    char* vt2 = *(char**)edi3;
                    void* fn2 = *(void**)(vt2 + 8);
                    ((void (__thiscall*)(char*))fn2)(edi3);
                }
            }
        }
    }

    char* eax3;
    if (fieldC != 0)
        eax3 = fieldC + 4;
    else
        eax3 = 0;

    char* local[2];
    local[0] = field8;
    local[1] = eax3;
    sub_4B3F00(field4, (char*)local, 1, (char*)a2);
}
