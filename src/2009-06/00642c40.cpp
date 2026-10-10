// from server: 73% by atomic.potato
struct S
{
    int __cdecl f(int);
};

extern "C" int __cdecl sub_00642580(int);
extern "C" int __cdecl sub_006400d0(int);

int S::f(int value)
{
    return sub_006400d0(sub_00642580(value));
}
