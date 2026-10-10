// from server: 80% by colin
extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

struct CXTPControlColorSelector
{
    int sub_6724a0();
    int sub_672e00(int* out, int index);
    int sub_672e50(int x, int y);
};

int CXTPControlColorSelector::sub_672e50(int x, int y)
{
    int count = sub_6724a0();
    if (!PtInRect((char*)this + 0xc0, x, y))
        return -1;
    for (int i = 0; i < count; ++i)
    {
        int value;
        int result = sub_672e00(&value, i);
        if (PtInRect((const void*)result, x, y))
            return i;
    }
    return -1;
}
