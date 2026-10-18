// from server: 51% by colin
struct String {
    const char* c_str() const;
};

struct Base {
    void construct(const String* name, const String* caption);
};

struct S_func_00710e30 {
    char pad0[140];
    int m_x;
    int f();
};

struct CXTPPropertyGridItem {
    char pad0[0x8c];
    int m_nId;
    char pad1[0xd4 - 0x90];
    void* m_pGrid;
    void SetId(int id);
    int GetFlags();
    void SetFlags(int flags);
    void SetCaption(const String* caption);
    void SetExpanded(int expanded);
};

struct RefItem : Base {
    char pad0[0x20 - 4];
    char pad1[0x10c - 0x20];
    void method(const String* name, const String* caption);
};

extern "C" void* __stdcall sub_803f10(void*, const char*);

void RefItem::method(const String* name, const String* caption) {
    Base::construct(name, caption);
    *(void**)this = (void*)0x814dbc;
    *(void**)((char*)this + 0x20) = (void*)0x814d5c;
    *(void**)((char*)this + 0x10c) = (void*)0x814d54;
    CXTPPropertyGridItem* item = (CXTPPropertyGridItem*)this;
    item->SetFlags(item->GetFlags() | 2);
    item->SetFlags(item->GetFlags() & ~1);
    String s;
    sub_803f10(&s, "(Script)");
    item->SetCaption(&s);
}
