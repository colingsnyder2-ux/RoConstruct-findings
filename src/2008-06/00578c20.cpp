// from server: 57% by colin
struct S
{
    char padding[12];
    char fieldC;
    char fieldD;

    int getType();
    void copyFrom(S* other);
};

extern "C" int __cdecl sub_574fe0(S*);
extern "C" S* __cdecl sub_577690();
extern "C" void __cdecl sub_576f90(S*, S*);
extern "C" void* __cdecl sub_4125d0(S*);
extern "C" void* __cdecl sub_49ac80(S*);
extern "C" void __cdecl sub_4995d0(void*);
extern "C" void __cdecl sub_4930d0(void*);

void S::copyFrom(S* other)
{
    int t = sub_574fe0(this);
    if ((unsigned)t > 4)
        return;

    switch (t)
    {
    case 0:
        {
            S* tmp = sub_577690();
            S* dst = other;
            sub_576f90(dst, tmp);
            dst->fieldC = tmp->fieldC;
            dst->fieldD = tmp->fieldD;
        }
        return;
    case 1:
        {
            if (this == 0)
                return;
            void* p = sub_4125d0(this);
            if (p == 0)
                return;
            sub_4995d0(p);
        }
        return;
    case 2:
        {
            void* p = sub_49ac80(this);
            if (p == 0)
                return;
            sub_4930d0(p);
        }
        return;
    default:
        return;
    }
}
