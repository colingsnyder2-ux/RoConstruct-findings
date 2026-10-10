// from server: 86% by colin
struct CNameItem {
    void* vtable;
    void convert(int, int, int*);
};

void CNameItem_convert(CNameItem* self, int a, int b, int* out)
{
    CNameItem* p = *(CNameItem**)&self;
    void (__thiscall *fn)(CNameItem*, int, int, int*) = *(void (__thiscall **)(CNameItem*, int, int, int*))((char*)p->vtable + 0x58);
    int local;
    fn(p, 0x64, b, &local);
}
