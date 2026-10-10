// from server: 47% by colin
struct ScoreHud {
    char pad0[4];
    void* field4;
    char pad8[4];
    void* fieldC;
    void method(int* arg);
};

extern "C" void __stdcall sub_579890(void*);
extern "C" void __stdcall sub_61E090(void*);
extern "C" void __stdcall sub_620560(void*);
extern "C" void __stdcall sub_543460(void*);
extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_77E6D8(void);

void ScoreHud::method(int* arg) {
    void* ecx_val = this->field4;
    void* eax_val = *(void**)((char*)ecx_val + 4);
    char bl = 0;
    if (*(char*)((char*)eax_val + 0x1d) == bl) {
        do {
            int edx_val = *arg;
            if (*(int*)((char*)eax_val + 0xc) >= edx_val) {
                ecx_val = eax_val;
                eax_val = *(void**)eax_val;
            } else {
                eax_val = *(void**)((char*)eax_val + 8);
            }
        } while (*(char*)((char*)eax_val + 0x1d) == bl);
    }
    void* edi_val = ecx_val;
    if (ecx_val != this->field4) {
        int eax_val2 = *arg;
        if (eax_val2 < *(int*)((char*)ecx_val + 0xc)) {
            goto skip;
        }
    }
    {
        char local20[0x2c];
        sub_579890(local20);
        void* eax_val3 = *(void**)local20;
        *(char*)((char*)eax_val3 + 0x2d) = 1;
        eax_val3 = *(void**)local20;
        *(void**)((char*)eax_val3 + 4) = eax_val3;
        eax_val3 = *(void**)local20;
        *(void**)eax_val3 = eax_val3;
        eax_val3 = *(void**)local20;
        *(void**)((char*)eax_val3 + 8) = eax_val3;
        *(int*)(local20 + 8) = 0;
        void* ecx_val2 = arg;
        int edx_val2 = *(int*)ecx_val2;
        sub_61E090(local20);
        *(int*)(local20 + 0x28) = 0;
        *(int*)(local20 + 0x10) = edx_val2;
        sub_620560(local20);
        void* esi_val = *(void**)local20;
        void* edi_val2 = *(void**)(local20 + 4);
        void* eax_val4 = *(void**)(local20 + 0x14);
        int edx_val3 = *(int*)eax_val4;
        sub_543460(local20);
        sub_62FC62(*(void**)(local20 + 0x14));
        void* eax_val5 = *(void**)(local20 + 8);
        *(int*)(local20 + 0x1c) = 0;
        *(int*)(local20 + 0x20) = 0;
        int edx_val4 = *(int*)eax_val5;
        sub_543460(local20);
        sub_62FC62(*(void**)(local20 + 4));
        *(int*)(local20 + 4) = 0;
        *(int*)(local20 + 8) = 0;
        if (esi_val == 0) {
            sub_77E6D8();
        }
        if (edi_val2 == *(void**)((char*)esi_val + 4)) {
            sub_77E6D8();
        }
    }
skip:
    ;
}
