// from server: 63% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct AggregatingSceneManager {
    int field0;
    unsigned int field4;
    int field8;
    int fieldC;
    int field10;
    void method(int a, int b, int c, int d);
};

void AggregatingSceneManager::method(int a, int b, int c, int d) {
    int local10;
    int local14;
    int local18;
    unsigned int ebp = 0;
    int* esi;
    int* ebx;
    int* edi = (int*)this;

    for (;;) {
        esi = (int*)a;
        if (esi != 0) {
            if (esi != (int*)c) {
                _invalid_parameter_noinfo();
            }
        } else {
            _invalid_parameter_noinfo();
        }

        ebx = (int*)b;
        if (ebx == (int*)d) {
            break;
        }

        if (esi == 0) {
            _invalid_parameter_noinfo();
        }

        if ((unsigned int)ebx < (unsigned int)esi[2]) {
            _invalid_parameter_noinfo();
        }

        int* ecx = (int*)edi[3];
        local10 = *ebx;

        if (ecx == 0) {
            _invalid_parameter_noinfo();
        } else {
            int eax = edi[4];
            eax -= (int)ecx;
            eax >>= 5;
            if (ebp >= (unsigned int)eax) {
                _invalid_parameter_noinfo();
            }
        }

        int* edx = (int*)edi[3];
        int ecx2 = ebp << 5;
        int* eax2 = (int*)(ecx2 + (int)edx + 0x10);
        int* esi2 = (int*)(ecx2 + (int)edx + 0xc);

        int edx2;
        if (*eax2 == 0) {
            edx2 = 0;
        } else {
            edx2 = esi2[2];
            edx2 -= *eax2;
            edx2 >>= 2;
        }

        if (*eax2 != 0) {
            int ecx3 = esi2[3];
            ecx3 -= *eax2;
            ecx3 >>= 2;
            if ((unsigned int)edx2 < (unsigned int)ecx3) {
                int* eax3 = (int*)esi2[2];
                *eax3 = local10;
                eax3++;
                esi2[2] = (int)eax3;
                goto next;
            }
        }

        {
            int* ebx2 = (int*)esi2[2];
            if (*eax2 > (int)ebx2) {
                _invalid_parameter_noinfo();
            }
            int* edx3 = &local10;
            int* eax4 = &local14;
            // call 0x4ee620
            extern void __stdcall sub_4ee620(int*, int*, int*, int*);
            sub_4ee620(eax4, esi2, ebx2, edx3);
            ebx = (int*)local14;
        }

    next:
        {
            unsigned int eax5 = ebp + 1;
            unsigned int edx4 = 0;
            unsigned int div = (unsigned int)edi[1];
            edx4 = eax5 % div;
            int* ecx4 = (int*)local18;
            edi[0] += 1;
            if ((unsigned int)ebx >= (unsigned int)ecx4[2]) {
                _invalid_parameter_noinfo();
            }
            ebp = edx4;
            ebx++;
            local14 = (int)ebx;
        }
    }
}
