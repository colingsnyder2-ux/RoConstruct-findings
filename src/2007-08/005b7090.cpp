// from server: 88% by colin
struct SurfaceGetSet {
    int (__stdcall *get)(int);
    int (__stdcall *set)(int, int);
    void setValue(int);
};

extern "C" int __fastcall sub_573890(int);

void SurfaceGetSet::setValue(int instance)
{
    int p;
    if (instance != 0) {
        p = sub_573890(instance - 4);
    } else {
        p = sub_573890(0);
    }
    int (__stdcall *f)(int) = *(int (__stdcall **)(int))((char*)this + 4);
    f(p + 0x20);
}
