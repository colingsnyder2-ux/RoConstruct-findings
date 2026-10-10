// from server: 98% by colin
struct VPlayers {
    void f(int);
};

extern "C" void __stdcall sub_4935F0(int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_4940F0(void*, int);

void VPlayers::f(int a) {
    if (*(unsigned int*)((char*)this + 8) <= *(unsigned int*)((char*)this + 0x10) + 1) {
        sub_4935F0(1);
    }
    unsigned int edi = *(unsigned int*)((char*)this + 0xc) + *(unsigned int*)((char*)this + 0x10);
    unsigned int eax = *(unsigned int*)((char*)this + 8);
    if (eax <= edi) {
        edi -= eax;
    }
    int* ecx = *(int**)((char*)this + 4);
    if (ecx[edi] == 0) {
        void* p = sub_62FEF6(0x30);
        int* edx = *(int**)((char*)this + 4);
        edx[edi] = (int)p;
    }
    int* ecx2 = *(int**)((char*)this + 4);
    int edx2 = ecx2[edi];
    sub_4940F0((void*)edx2, a);
    *(int*)((char*)this + 0x10) += 1;
}
