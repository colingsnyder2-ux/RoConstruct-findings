// from server: 78% by colin
struct SoundService {
    void sub_58B7E0();
    void sub_588C50();

    int sub_58BA00(int a1, int a2, int a3, int a4, int a5);
};

extern "C" int __cdecl sub_62FC3E(void*, void*);

int SoundService::sub_58BA00(int a1, int a2, int a3, int a4, int a5)
{
    sub_62FC3E(&a1, &a1);
    int p = a1;
    if (p != 0) {
        SoundService* s = (SoundService*)p;
        s->sub_588C50();
        s->sub_58B7E0();
    }
    return 0;
}
