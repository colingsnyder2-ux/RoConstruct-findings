// from server: 57% by colin
struct S
{
    char padding[12];
    char fieldC;
    char fieldD;

    int getType();
    void copy(S*);
    void* getPayload();
    void copyFrom(S* other);
};

extern "C" int __cdecl sub_574fe0(S*);
extern "C" S* __cdecl sub_577690();
extern "C" void* __cdecl sub_49ac80(S*);
struct PayloadA { __declspec(noreturn) void call(); };
struct PayloadB { __declspec(noreturn) void call(); };

void S::copyFrom(S* other)
{
    int t = sub_574fe0(this);
    if ((unsigned)t > 4)
        return;

    switch (t)
    {
    case 3:
    case 4:
        {
            S* tmp = sub_577690();
            S* dst = other;
            dst->copy(tmp);
            dst->fieldC = tmp->fieldC;
            dst->fieldD = tmp->fieldD;
        }
        return;
    case 0:
        {
            if (this == 0)
                return;
            void* p = getPayload();
            if (p == 0)
                return;
            return ((PayloadA*)p)->call();
        }
        return;
    case 1:
    case 2:
        {
            void* p = sub_49ac80(this);
            if (p == 0)
                return;
            return ((PayloadB*)p)->call();
        }
        return;
    default:
        return;
    }
}


