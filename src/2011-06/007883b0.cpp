// from server: 70% by atomic.potato
extern "C" int __cdecl sub_0080bbc2(int);

typedef int (__cdecl *FunctionType)(int);

struct TToolVerb
{
    int f();
    int unused;
    int field_0c;
};

int TToolVerb::f()
{
    int* p = reinterpret_cast<int*>(field_0c);
    int value = *reinterpret_cast<int*>(reinterpret_cast<char*>(p) + 0xACC);
    value = *reinterpret_cast<int*>(reinterpret_cast<char*>(value) + 0x188);
    if (!value)
        return 0;

    value = sub_0080bbc2(value);
    return reinterpret_cast<FunctionType>(0xA40A50)(value);
}
