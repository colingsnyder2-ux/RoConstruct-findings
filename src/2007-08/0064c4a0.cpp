// from server: 41% by colin
struct CXTPImageManagerIcon {
    char pad[0x2c];
    int field_2c;
    int field_30;
    char pad3[0x60 - 0x34];
    int field_60;
    int field_70;
    int field_80;
    int field_90;

    void sub_64a220(int* dst, int* src);
    void sub_64ada0(int* src);
    void sub_73842a();
    void sub_630688(int, int);

    void sub_64c4a0(int* arg);
};

extern "C" void* __stdcall sub_77dd98(void*);

void CXTPImageManagerIcon::sub_64a220(int* dst, int* src) {
    *dst = *src;
}

void CXTPImageManagerIcon::sub_64ada0(int* src) {
    int val = *src;
    int* p = (int*)((char*)this + 0x28);
    if ((char*)p + 4 > (char*)((char*)this + 0x2c)) {
        sub_73842a();
    }
    *(int*)((char*)this + 0x28) = val;
    *(int*)((char*)this + 0x28) += 4;
}

void CXTPImageManagerIcon::sub_73842a() {
}

void CXTPImageManagerIcon::sub_630688(int a, int b) {
}

void CXTPImageManagerIcon::sub_64c4a0(int* arg) {
    int* esi = arg;
    int eax = *(int*)((char*)esi + 0x18);
    eax = ~eax;
    int local = 0x17;
    if ((eax & 1) == 0) {
        goto label_64c515;
    }
    {
        int ecx = *(int*)((char*)esi + 0x28);
        int ebx = *(int*)((char*)this + 0x2c);
        ecx += 4;
        if (ecx > *(int*)((char*)esi + 0x2c)) {
            sub_73842a();
        }
        int edx = *(int*)((char*)esi + 0x28);
        *(int*)edx = ebx;
        int ecx2 = *(int*)((char*)esi + 0x18);
        *(int*)((char*)esi + 0x28) += 4;
        int eax2 = *(int*)((char*)esi + 0x28);
        ecx2 = ~ecx2;
        if ((ecx2 & 1) != 0) {
            goto label_64c4f7;
        }
        void* h = sub_77dd98((char*)esi + 0x14);
        sub_630688(2, (int)h);
    label_64c4f7:
        eax2 += 4;
        if (eax2 > *(int*)((char*)esi + 0x2c)) {
            sub_73842a();
        }
        int edx2 = *(int*)((char*)esi + 0x28);
        *(int*)edx2 = 0x17;
        *(int*)((char*)esi + 0x28) += 4;
        goto label_64c52c;
    }
label_64c515:
    sub_64ada0((int*)((char*)this + 0x2c));
    sub_64ada0(&local);
label_64c52c:
    sub_64a220((int*)((char*)this + 0x30), esi);
    sub_64a220((int*)((char*)this + 0x90), esi);
    sub_64a220((int*)((char*)this + 0x60), esi);
    int ebx2 = local;
    if (ebx2 > 7) {
        sub_64a220((int*)((char*)this + 0x70), esi);
    }
    if (ebx2 > 0x10) {
        sub_64a220((int*)((char*)this + 0x80), esi);
    }
}
