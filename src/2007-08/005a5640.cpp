// from server: 65% by colin
// roc 2007-08 005a5640  unit: RBX::Humanoid  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5640

struct Humanoid;

struct HumanoidArray
{
    int* data;
    int size;
};

extern "C" int* __fastcall sub_5A4760(Humanoid* self);
extern "C" void __fastcall sub_5A4BF0(HumanoidArray* self, int a, int b);

struct Humanoid
{
    char pad[0x40];
    HumanoidArray arr;
    void remove(int index);
};

void Humanoid::remove(int index)
{
    HumanoidArray* a = &arr;
    int* p = sub_5A4760(this);
    int old = *p;
    int* d = a->data;
    int n = a->size;
    d[old] = d[n - 1];
    p = sub_5A4760(this);
    *p = old;
    sub_5A4BF0(a, a->size - 1, 0);
    p = sub_5A4760(this);
    *p = -1;
}
