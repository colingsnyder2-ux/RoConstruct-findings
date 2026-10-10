// from server: 80% by colin
struct CNameItem {
    void construct(const char* name, int value, int index);
};

void CNameItem::construct(const char* name, int value, int index)
{
    void* p = *(void**)this;
    void (__thiscall *fn)(void*, const char*, int, int, int) = *(void (__thiscall **)(void*, const char*, int, int, int))((char*)p + 0x58);
    fn(this, name, 3, index, 0);
}
