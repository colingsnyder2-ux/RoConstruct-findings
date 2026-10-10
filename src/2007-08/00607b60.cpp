// from server: 83% by colin
struct ClumpStage {
    char pad[0x44];
    int field44;
    void sub_607190(int);
    void sub_5E29B0(int*, int*);
    void sub_607B60(int, int);
};

extern "C" int __cdecl sub_60B240(int);
extern "C" char __cdecl sub_60B600(int, int);

void ClumpStage::sub_607B60(int a, int b)
{
    int* p = (int*)a;
    int v = sub_60B240(a);
    if (v != 0) {
        int ecx = p[2];
        int edi;
        if (v == ecx) {
            edi = p[3];
        } else {
            edi = ecx;
        }
        int eax = *(int*)(v + 0x20);
        if (sub_60B600(eax, a) != 0) {
            goto label;
        }
        sub_607190(edi);
        return;
    }
label:
    int tmp1;
    int tmp2;
    tmp2 = a;
    ((ClumpStage*)((char*)this + 0x44))->sub_5E29B0(&tmp1, &tmp2);
}
