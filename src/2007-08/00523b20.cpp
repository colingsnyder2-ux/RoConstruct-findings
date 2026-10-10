// from server: 56% by colin
// roc 2007-08 00523b20  unit: seg_00520000  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523b20

extern "C" {
    void __cdecl sub_514ec0(void*);
    void __cdecl sub_51d790(void*, void*, int);
    void __cdecl sub_51e8e0(void*, const char*);
    void __cdecl sub_51e990(void*, const char*);
    void __cdecl sub_51ebf0(void*, void*, int, int);
    void __cdecl sub_5206a0(void*, void*, int);
    int  __cdecl sub_521720(void*, void*);
    void __cdecl sub_521750(void*, int);
    void __cdecl sub_72d180(void*);
    int  __cdecl sub_72d3d0(void*, int);
}

struct S {
    char pad_000[0x68];
    unsigned int flags68;
    unsigned int flags6c;
    char pad_070[0x04];
    unsigned int field74;
    unsigned int field78;
    char pad_07c[0x04];
    unsigned int field80;
    unsigned int field84;
    char pad_088[0x04];
    unsigned int field8c;
    char pad_090[0x1c];
    unsigned int fieldac;
    unsigned int fieldb0;
    char pad_0b4[0x1c];
    unsigned int fieldd0;
    char pad_0d4[0x04];
    unsigned int fieldd8;
    unsigned int fielddc;
    unsigned int fielde0;
    unsigned int fielde4;
    unsigned int fielde8;
    char pad_0ec[0x20];
    unsigned int field10c;
    char pad_110[0x0c];
    unsigned char field11c[4];
    char pad_120[0x03];
    unsigned char field123;
    unsigned char field124;
    char pad_125[0x04];
    unsigned char field129;

    void func_523b20();
};

void S::func_523b20()
{
    unsigned int ebp = 1;
    this->fielde4 += ebp;
    if (this->fielde4 < this->fieldd0)
        return;

    if (this->field123 != 0) {
        sub_51ebf0(this, (void*)this->fielde8, 0, this->fieldd8 + ebp);
        this->fielde4 = 0;
        goto label_3b80;
    }

label_3c22:
    if (this->flags6c & 0x20) {
        goto label_3dc9;
    }

    this->field80 = (unsigned int)&this->field74;
    this->field84 = ebp;

label_3c40:
    if (this->field78 != 0) {
        goto label_3d72;
    }

    if (this->field10c != 0) {
        goto label_3d3a;
    }

    {
        unsigned char* ebp_ptr = this->field11c;
        do {
            sub_521750(this, 0);
            sub_51d790(this, &this->field74, 4);
            this->field10c = sub_521720(this, &this->field74);
            sub_514ec0(this);
            sub_5206a0(this, ebp_ptr, 4);

            {
                unsigned int* a = (unsigned int*)ebp_ptr;
                unsigned int* b = (unsigned int*)0x7a1584;
                if (a[0] != b[0]) {
                    sub_51e8e0(this, (const char*)0x7a2cf4);
                }
            }

            if (this->field10c != 0) {
                goto label_3d3a;
            }
        } while (true);
    }

label_3b80:
    this->field124++;
    if (this->field124 >= 7) {
        goto label_3c22;
    }

    {
        unsigned int edx = this->fieldd0;
        unsigned int edi = this->field124;
        edi += edi;
        edx -= *(unsigned int*)(edi + edi + 0x7a1624);
        unsigned int ecx = *(unsigned int*)(edi + edi + 0x7a1640);
        edi += edi;
        unsigned int eax = edx + ecx - 1;
        eax /= ecx;
        this->fielde0 = eax;

        unsigned char cl = this->field129;
        unsigned int ecx2 = cl;
        if (cl >= 8) {
            ecx2 >>= 3;
            ecx2 *= eax;
        } else {
            ecx2 *= eax;
            ecx2 += 7;
            ecx2 >>= 3;
        }
        ecx2 += ebp;
        this->fielddc = ecx2;

        if ((this->flags6c & 2) == 0) {
            unsigned int eax2 = this->fieldd0;
            eax2 -= *(unsigned int*)(edi + 0x7a165c);
            unsigned int ecx3 = *(unsigned int*)(edi + 0x7a1678);
            eax2 = eax2 + ecx3 - 1;
            eax2 /= ecx3;
            this->fieldd0 = eax2;
            if (this->fielde0 == 0) {
                goto label_3b80;
            }
        }
        if (this->field124 < 7) {
            goto label_3df3;
        }
    }

label_3dc9:
    if (this->field10c != 0 || this->field78 != 0) {
        sub_51e990(this, (const char*)0x7a4420);
    }
    sub_72d180(&this->field74);
    this->flags68 |= 8;
    return;

label_3d3a:
    {
        unsigned int eax = this->fieldb0;
        unsigned int ecx = this->field10c;
        unsigned int edx = this->fieldac;
        this->field78 = eax;
        this->field74 = edx;
        if (eax > ecx) {
            this->field78 = ecx;
        }
        sub_5206a0(this, (void*)edx, this->field78);
        this->field10c -= this->field78;
    }

label_3d72:
    {
        int r = sub_72d3d0(&this->field74, 1);
        if (r == 1) {
            goto label_3df9;
        }
        if (r != 0) {
            unsigned int eax = this->field8c;
            if (eax == 0) {
                eax = 0x7a4450;
            }
            sub_51e8e0(this, (const char*)eax);
        }
        if (this->field84 != 0) {
            goto label_3c40;
        }
        sub_51e990(this, (const char*)0x7a4438);
        this->flags68 |= 8;
        this->flags6c |= 0x20;
        this->field84 = 0;
    }

    goto label_3dc9;

label_3df9:
    if (this->field84 != 0 && this->field78 == 0 && this->field10c == 0) {
        this->flags68 |= 8;
        this->flags6c |= 0x20;
        this->field84 = 0;
        goto label_3dc9;
    }
    sub_51e990(this, (const char*)0x7a2cc8);
    goto label_3dc9;

label_3df3:
    return;
}
