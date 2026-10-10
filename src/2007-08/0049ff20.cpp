// from server: 59% by colin
struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    int fieldC;
    char pad10[1];
    char field11;
    void sub_49fe30(int);
    void sub_49fd90(int, int, void*);
    void sub_49fb40(int);
    void sub_49ff20(int, char*, char, char);
};

extern "C" void* __stdcall malloc(unsigned int);
extern "C" void* __stdcall realloc(void*, unsigned int);
extern "C" void __cdecl memcpy(void*, const void*, unsigned int);

void BoundFuncDesc::sub_49ff20(int a, char* b, char c, char d)
{
    int ebx = a >> 3;
    ebx -= 1;
    char al = (c != 0) ? 1 : 0;
    al = al - 1;
    al = al & 0xff;
    char local18 = al;
    if (ebx <= 0) {
        if (d == 0) {
            char v = b[ebx];
            ebx += (int)b;
            if ((v & 0xf0) == 0xf0) {
                goto loc_4a0066;
            }
            goto loc_49ff61;
        }
        ebx += (int)b;
        if ((*(unsigned char*)ebx & 0xf0) == 0) {
            goto loc_4a0066;
        }
    loc_49ff61:
        this->sub_49fe30(0);
        this->sub_49fd90(1, 8, (void*)ebx);
        return;
    }
loc_49ff80:
    if (b[ebx] != local18) {
        this->sub_49fe30(0);
        this->sub_49fd90(1, ebx * 8 + 8, b);
        return;
    }
    {
        int eax = this->field0;
        int edi = eax + 1;
        if (edi > 0) {
            int ecx = this->field4 - 1;
            int edx = edi - 1;
            ecx &= 0xfffffff8;
            edx &= 0xfffffff8;
            if (ecx < edx) {
                int ecx2 = this->fieldC;
                edi = eax + eax + 2;
                int eax2 = edi + 7;
                char* ebp = &this->field11;
                eax2 >>= 3;
                if (ecx2 == (int)ebp) {
                    if (eax2 > 0x100) {
                        void* p = malloc(eax2);
                        int ecx3 = this->field4 + 7;
                        ecx3 >>= 3;
                        this->fieldC = (int)p;
                        memcpy(p, ebp, ecx3);
                    }
                } else {
                    void* p = realloc((void*)ecx2, eax2);
                    this->fieldC = (int)p;
                }
            }
        }
        if (edi > this->field4) {
            this->field4 = edi;
        }
        {
            int eax3 = this->field0;
            int edx2 = this->fieldC;
            int ecx4 = eax3;
            eax3 >>= 3;
            ecx4 &= 7;
            if (ecx4 == 0) {
                *(unsigned char*)(eax3 + edx2) = 0x80;
            } else {
                eax3 += edx2;
                edx2 = 0x80;
                edx2 >>= (ecx4 & 0x1f);
                *(unsigned char*)eax3 |= (unsigned char)edx2;
            }
        }
        this->field0 += 1;
        ebx -= 1;
        if (ebx > 0) {
            goto loc_49ff80;
        }
        goto loc_49ff47;
    }
loc_49ff47:
    if (d == 0) {
        char v = b[ebx];
        ebx += (int)b;
        if ((v & 0xf0) == 0xf0) {
            goto loc_4a0066;
        }
        goto loc_49ff61;
    }
    ebx += (int)b;
    if ((*(unsigned char*)ebx & 0xf0) == 0) {
        goto loc_4a0066;
    }
    goto loc_49ff61;
loc_4a0066:
    this->sub_49fe30(1);
    this->sub_49fb40(4);
    {
        int ecx5 = this->field0;
        unsigned char dl = *(unsigned char*)ebx;
        int eax4 = ecx5;
        eax4 &= 7;
        dl <<= 4;
        ecx5 >>= 3;
        if (eax4 == 0) {
            int eax5 = this->fieldC;
            *(unsigned char*)(ecx5 + eax5) = dl;
            this->field0 += 4;
            return;
        }
        {
            int edi2 = this->fieldC;
            edi2 += ecx5;
            unsigned char cl = (unsigned char)eax4;
            unsigned char bl = dl;
            bl >>= (cl & 0x1f);
            int ecx6 = 8;
            ecx6 -= eax4;
            *(unsigned char*)edi2 |= bl;
            if (ecx6 < 8) {
                if (ecx6 < 4) {
                    int eax6 = this->fieldC;
                    dl <<= (ecx6 & 0x1f);
                    int ecx7 = this->field0;
                    ecx7 >>= 3;
                    *(unsigned char*)(ecx7 + eax6 + 1) = dl;
                }
            }
        }
        this->field0 += 4;
    }
}
