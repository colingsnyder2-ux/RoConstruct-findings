// from server: 75% by colin
// roc 2007-08 00613c10  unit: seg_00610000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613c10

extern "C" void* __stdcall sub_613A40(void* a, void* b, void* c, int d, int e, void* f);
extern "C" void __stdcall sub_60FEF0(void* a, void* b, void* c);

struct C {
    char pad[0x30];
    unsigned short count;
    char pad2[2];
    void* field34;
    int method(void* arg);
};

int C::method(void* arg) {
    void* ebp = *(void**)((char*)this + 0x30);
    int eax = *(short*)((char*)ebp + 0x30);
    void* edi = *(void**)ebp;
    int esi = *(int*)((char*)edi + 0x38);
    void* ebx = (char*)edi + 0x38;
    eax += 1;
    if (eax > esi) {
        void* edx = *(void**)((char*)edi + 0x18);
        void* eax2 = *(void**)((char*)this + 0x34);
        *(void**)((char*)edi + 0x18) = sub_613A40(eax2, edx, ebx, 0xc, 0x7fff, (void*)0x7c33f8);
    }
    if (esi < *(int*)ebx) {
        int eax3 = esi + esi * 2;
        eax3 += eax3;
        eax3 += eax3;
        do {
            void* edx = *(void**)((char*)edi + 0x18);
            *(int*)((char*)edx + eax3) = 0;
            esi += 1;
            eax3 += 0xc;
        } while (esi < *(int*)ebx);
    }
    eax = *(short*)((char*)ebp + 0x30);
    void* esi2 = *(void**)((char*)edi + 0x18);
    int edx = eax + eax * 2;
    void* eax4 = arg;
    *(void**)((char*)esi2 + edx * 4) = eax4;
    if ((*(unsigned char*)((char*)eax4 + 5) & 3) != 0) {
        if ((*(unsigned char*)((char*)edi + 5) & 4) != 0) {
            void* eax5 = *(void**)((char*)this + 0x34);
            sub_60FEF0(eax5, edi, eax4);
        }
    }
    unsigned short cx = *(unsigned short*)((char*)ebp + 0x30);
    eax = (short)cx;
    cx += 1;
    *(unsigned short*)((char*)ebp + 0x30) = cx;
    return eax;
}
