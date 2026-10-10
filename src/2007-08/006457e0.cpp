// from server: 96% by colin
struct CXTPCommandBarList {
    int GetCount();
    void* GetAt(int index);
    void RemoveAll();
    char pad[0x24];
};

extern "C" void __fastcall sub_6301E4(void*);
extern "C" void __fastcall sub_6FFAB0(void*, int, int);

void CXTPCommandBarList::RemoveAll() {
    int i = 0;
    while (i < GetCount()) {
        void* p = GetAt(i);
        sub_6301E4(p);
        i++;
    }
    sub_6FFAB0((char*)this + 0x24, 0, -1);
}
