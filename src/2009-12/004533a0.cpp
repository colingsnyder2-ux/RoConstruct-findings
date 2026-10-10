// from server: 67% by atomic.potato
extern "C" void sub_0098de94(void*, void*);

struct CRobloxControlMaterialSelector
{
    int first;
    int second;
    int third;
    int f(CRobloxControlMaterialSelector*);
};

int CRobloxControlMaterialSelector::f(CRobloxControlMaterialSelector* value)
{
    first = value->first;
    second = value->second;
    sub_0098de94(this, &value->third);
    return 0;
}
