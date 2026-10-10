// from server: 87% by colin
struct CXTPPropertyGridItemConstraint {
    int GetValue();
};

extern "C" int __stdcall sub_69AB40(int, int, int);
extern "C" int __stdcall sub_64D9B0(int);

int CXTPPropertyGridItemConstraint::GetValue()
{
    int* p = *(int**)((char*)this + 0x30);
    if (p == 0)
        return 0;
    int idx = *(int*)((char*)this + 0x28);
    if (idx == -1)
        return 0;
    int v = *(int*)((char*)p + 0xb4);
    int r = sub_69AB40(v, idx, 0);
    return sub_64D9B0(r);
}
