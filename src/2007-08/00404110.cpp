// from server: 84% by colin
extern "C" __declspec(noreturn) void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);

struct CRegObject {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int Lookup(int* p);
    int Get(int* p);
};

int CRegObject::Get(int* p)
{
    int idx = Lookup(p);
    if (idx == -1)
        return 0;
    if (idx < 0 || idx >= field8)
        RaiseException(0xc000008c, 1, 0, 0);
    return ((int*)field4)[idx];
}
