// from server: 46% by colin
struct VerbContainer;

struct Verb {
    Verb(VerbContainer* container, const char* name, bool blacklisted);
    virtual ~Verb();
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual bool isSelected() const;
    virtual void getText();
    virtual void doIt(void* dataState);
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(VerbContainer* container, bool toggle, bool blacklisted);
};

void* __cdecl sub_62FEF6(unsigned int size);
void __fastcall sub_5FC300(void* self, void* unused, void* a, int b, int c);

struct DataModel {
    char pad[0x188];
    void* field188;
};

struct TToolVerb_impl : Verb {
    bool toggle;
    TToolVerb_impl(VerbContainer* container, bool toggle, bool blacklisted);
};

TToolVerb_impl::TToolVerb_impl(VerbContainer* container, bool toggle, bool blacklisted)
    : Verb(container, "Tool", blacklisted)
{
    this->toggle = toggle;
}

void* __fastcall TToolVerb_ctor(void* self, void* unused, void* dataModel, bool toggle, bool blacklisted)
{
    void* mem = sub_62FEF6(0x34);
    if (mem) {
        void* field188 = *(void**)((char*)dataModel + 0x188);
        sub_5FC300(mem, 0, field188, 1, 5);
        *(void**)mem = (void*)0x7b0dc4;
        *(void**)((char*)mem + 4) = (void*)0x7b0da8;
    }
    return mem;
}
