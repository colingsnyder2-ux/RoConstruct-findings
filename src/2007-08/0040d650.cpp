// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void __stdcall sub_77DCD0(void*);
extern "C" void __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77E698(void*);

extern "C" void __cdecl sub_63023E();
extern "C" void __cdecl sub_630016(void*);
extern "C" void __cdecl sub_630004();
extern "C" void __cdecl sub_630250(void*, void*);
extern "C" void __cdecl sub_4980B0(void*, void*);
extern "C" void __cdecl sub_5595A0(void*);
extern "C" void __cdecl sub_40D550(void*);

extern void* dword_881DD8;

struct ChatEnter {
    char pad[0x88];
    void* field_88;
    char pad2[0x9c - 0x8c];
    void* field_9c;
    void* field_a0;
    void* field_a4;

    void method(int code, void* arg1, void* arg2);
};

void ChatEnter::method(int code, void* arg1, void* arg2)
{
    if (code != 0xd) {
        sub_77DDAC(&code);
        sub_630250(this, &code);
        if (field_a4 != 0) {
            sub_77DCD0(&code);
            if (*(unsigned char*)&code == 0) {
                void* p9c = field_9c;
                void* pa0 = field_a0;
                void* local[2];
                local[0] = p9c;
                local[1] = pa0;
                if (pa0 != 0) {
                    _InterlockedExchangeAdd((volatile long*)((char*)pa0 + 4), 1);
                }
                sub_40D550(&local);
                sub_77DD98(&code);
                sub_77E698(&code);
                sub_4980B0(field_a4, &code);
                sub_5595A0(&local);
                sub_630016(dword_881DD8);
            }
        }
    } else if (code == 0x1b) {
        sub_630016(dword_881DD8);
        sub_630004();
    } else {
        sub_63023E();
    }
}
