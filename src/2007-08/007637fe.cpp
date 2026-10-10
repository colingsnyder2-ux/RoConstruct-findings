// from server: 70% by colin
extern "C" void __cdecl sub_630A1E(int);
extern "C" void __cdecl sub_630A18(void);

struct seg_00760000 {
    void func(int);
};

void seg_00760000::func(int a)
{
    int* p = (int*)((char*)this + a);
    int v = *(int*)((char*)p - 4);
    sub_630A1E(v ^ (int)p);
    sub_630A18();
}
