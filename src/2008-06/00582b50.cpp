// from server: 65% by colin
struct Selection;

struct EditSelectionVerb {
    char pad[0x14];
    int getSelection();
};

struct UngroupSelectionVerb {
    char pad0[0x14];
    EditSelectionVerb verb;
    char pad1[0x8];
    void* field20;

    bool isEnabled() const;
};

struct Sel {
    char pad[0xc];
    void* begin;
    void* end;
};

struct SelHolder {
    char pad[0x154];
    Sel* sel;
};

extern "C" int __stdcall sub_581cc0(void*, int);
extern "C" void* __stdcall sub_5806c0(void*);
extern "C" int __stdcall sub_57edb0(void*, const char*);

extern const char str_57e110[];

bool UngroupSelectionVerb::isEnabled() const
{
    SelHolder* h = (SelHolder*)sub_581cc0((void*)&this->verb, 1);
    Sel* s = h->sel;
    int count = (int)((char*)s->end - (char*)s->begin) >> 3;
    if (count <= 0)
        return false;

    void* p = this->field20;
    int r;
    if (p != 0) {
        void* q = sub_5806c0(p);
        r = sub_57edb0(q, str_57e110);
    } else {
        r = sub_57edb0(0, str_57e110);
    }
    return r != 0;
}
