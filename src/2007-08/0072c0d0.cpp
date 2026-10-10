// from server: 75% by colin
// roc 2007-08 0072c0d0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 331 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072c0d0

extern "C" void __cdecl sub_630d4c(void*, void*, int);
extern "C" void* __cdecl sub_72ea00(void*, void*, int);
extern "C" void* __cdecl sub_72d160(void*, void*, int);

struct S {
    void* field0;
    char pad4[0x34];
    unsigned short* field38;
    char pad3c[4];
    unsigned short* field40;
    char pad44[4];
    int field48;
    char pad4c[8];
    int field54;
    int field58;
    char pad5c[0x10];
    int field6c;
    int field70;
    int field74;
    void f();
};

void S::f() {
    int saved;
    int ebp;
    int edi;
    int ebx;

    ebp = *(int*)((char*)this + 0x2c);
    for (;;) {
        edi = *(int*)((char*)this + 0x3c);
        edi -= *(int*)((char*)this + 0x74);
        int eax = *(int*)((char*)this + 0x6c);
        int ecx = *(int*)((char*)this + 0x2c);
        edi -= eax;
        int edx = ecx + ebp - 0x106;
        if (eax < edx) {
            saved = edi;
            goto label_160;
        }
        eax = *(int*)((char*)this + 0x38);
        sub_630d4c((void*)eax, (void*)(eax + ebp), ebp);
        edx = *(int*)((char*)this + 0x4c);
        eax = *(int*)((char*)this + 0x44);
        *(int*)((char*)this + 0x70) -= ebp;
        *(int*)((char*)this + 0x6c) -= ebp;
        *(int*)((char*)this + 0x5c) -= ebp;
        ecx = eax + edx * 2;
        {
            int n = edx;
            do {
                unsigned short ax = *(unsigned short*)((char*)ecx - 2);
                ecx -= 2;
                if (ax >= (unsigned)ebp) ax -= ebp;
                else ax = 0;
                n--;
                *(unsigned short*)ecx = ax;
            } while (n != 0);
        }
        ecx = *(int*)((char*)this + 0x40);
        edx = ebp;
        ecx = ecx + ebp * 2;
        do {
            unsigned short ax = *(unsigned short*)((char*)ecx - 2);
            ecx -= 2;
            if (ax >= (unsigned)ebp) ax -= ebp;
            else ax = 0;
            edx--;
            *(unsigned short*)ecx = ax;
        } while (edx != 0);
        edi += ebp;
        saved = edi;
    label_160:
        edi = *(int*)((char*)this);
        if (*(int*)((char*)edi + 4) != 0) goto label_214;
        eax = *(int*)((char*)this + 0x74);
        eax += *(int*)((char*)this + 0x6c);
        ecx = *(int*)((char*)edi + 4);
        eax += *(int*)((char*)this + 0x38);
        edx = saved;
        ebx = ecx;
        if (ebx > edx) ebx = edx;
        int esp10 = eax;
        if (ebx != 0) {
            edx = *(int*)((char*)edi + 0x1c);
            ecx -= ebx;
            *(int*)((char*)edi + 4) = ecx;
            ecx = *(int*)((char*)edx + 0x18);
            if (ecx == 1) {
                eax = *(int*)((char*)edi);
                ecx = *(int*)((char*)edi + 0x30);
                eax = (int)sub_72ea00((void*)ecx, (void*)eax, ebx);
                *(int*)((char*)edi + 0x30) = eax;
                eax = esp10;
            } else if (ecx == 2) {
                edx = *(int*)((char*)edi);
                eax = *(int*)((char*)edi + 0x30);
                eax = (int)sub_72d160((void*)eax, (void*)edx, ebx);
                *(int*)((char*)edi + 0x30) = eax;
                eax = esp10;
            }
            ecx = *(int*)((char*)edi);
            sub_630d4c((void*)eax, (void*)ecx, ebx);
            *(int*)((char*)edi) += ebx;
            *(int*)((char*)edi + 8) += ebx;
        }
        *(int*)((char*)this + 0x74) += ebx;
        edi = *(int*)((char*)this + 0x74);
        if (edi >= 3) {
            eax = *(int*)((char*)this + 0x38);
            edx = *(int*)((char*)this + 0x6c);
            ecx = *(int*)((char*)this + 0x58);
            edx += eax;
            eax = *(unsigned char*)edx;
            *(int*)((char*)this + 0x48) = eax;
            eax <<= ecx;
            ecx = *(unsigned char*)(edx + 1);
            eax ^= ecx;
            eax &= *(int*)((char*)this + 0x54);
            *(int*)((char*)this + 0x48) = eax;
        }
        if (edi >= 0x106) goto label_214;
        edx = *(int*)((char*)this);
        if (*(int*)((char*)edx + 4) != 0) continue;
    label_214:
        return;
    }
}
