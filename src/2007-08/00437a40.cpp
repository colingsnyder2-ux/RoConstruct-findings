// from server: 74% by colin
struct MarshaledListener {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void method(int* arg);
};

extern "C" void __cdecl sub_499F60();
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void MarshaledListener::method(int* arg)
{
    unsigned int eax = field10;
    unsigned int ecx = fieldC + eax;
    if ((ecx & 3) == 0) {
        eax += 4;
        eax >>= 2;
        if ((unsigned int)field8 > eax) {
            sub_499F60();
        }
    }

    unsigned int eax2 = field8;
    unsigned int ebx = fieldC + field10;
    unsigned int edi = ebx >> 2;
    if (eax2 <= edi) {
        edi -= eax2;
    }

    if (*(int**)(field4 + edi * 4) == 0) {
        *(int**)(field4 + edi * 4) = (int*)sub_62FEF6(0x10);
    }

    int* ecx2 = (int*)(*(int*)(field4 + edi * 4) + (ebx & 3) * 4);
    if (ecx2 != 0) {
        int eax3 = *arg;
        *ecx2 = eax3;
        if (eax3 != 0) {
            (*(void (__stdcall **)(int))(*(int*)eax3 + 4))(eax3);
        }
    }

    field10 += 1;
}
