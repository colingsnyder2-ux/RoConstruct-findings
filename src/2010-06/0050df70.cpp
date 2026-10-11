// from server: 73% by atomic.potato
struct NetworkOwnerJob {
    void sub_50DF70(int);
};

extern "C" void __stdcall sub_50C900(int, int, int, int);
extern "C" void __stdcall sub_50DB90(int);

void NetworkOwnerJob::sub_50DF70(int a) {
    int* p = (int*)this;
    int* base;
    if (p) {
        base = (int*)((char*)p - 0xc);
    } else {
        base = 0;
    }
    int ebx = base[1];
    int* base2;
    if (p) {
        base2 = (int*)((char*)p - 0xc);
    } else {
        base2 = 0;
    }
    int edx = base2[1];
    int* base3;
    if (p) {
        base3 = (int*)((char*)p - 0xc);
    } else {
        base3 = 0;
    }
    int eax = base3[1];
    int edi = a;
    eax += 0x60;
    int ecx;
    if (edi) {
        ecx = edi + 0x60;
    } else {
        ecx = 0;
    }
    ebx += 0x68;
    sub_50C900(ecx, eax, edx + 0x64, ebx);
    sub_50DB90(edi);
}
