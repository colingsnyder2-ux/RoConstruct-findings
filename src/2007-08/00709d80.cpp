// from server: 29% by colin
struct CXTColorHex_PAUHEXCOLOR_CELL_CList
{
    char pad[0x54];
    void sub_7383DC();
    char pad2[0x24];
    void sub_709CD0();
    char pad3[4];
    int field_88;
    void sub_709C90();
    void sub_73872A();
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_7383DC() {}
void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_709CD0() {}
void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_709C90() {}
void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_73872A() {}

extern "C" void __cdecl sub_62FF26(void*);
extern "C" void __cdecl sub_62FC62(void*);

struct CXTColorHex_PAUHEXCOLOR_CELL_CList_Dtor
{
    void f();
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList_Dtor::f()
{
    CXTColorHex_PAUHEXCOLOR_CELL_CList* self = (CXTColorHex_PAUHEXCOLOR_CELL_CList*)this;
    *(void**)self = (void*)0x7DD5BC;
    while (self->field_88 != 0)
    {
        self->sub_709C90();
        void* p = *(void**)((char*)self + 0x90);
        if (p != 0)
        {
            sub_62FF26(p);
            *(void**)((char*)self + 0x90) = 0;
        }
        sub_62FC62(p);
    }
    self->sub_709CD0();
    self->sub_7383DC();
    self->sub_73872A();
}
