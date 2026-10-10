// from server: 66% by colin
// roc 2007-08 005a1960  unit: RBX::VShirt::?$BoundPropGetSet  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1960

extern "C" void __stdcall _invalid_parameter_noinfo();

struct PropDesc {
    void* vtable;
    void* field4;
    void* field8;
};

struct GetSet {
    void* vtable;
    PropDesc* begin;
    PropDesc* end;
};

struct BoundPropGetSet {
    void* vtable;
    void* desc;
    void* member;
    void* changed;
    GetSet* getset;
    int findMatch();
};

extern "C" int __cdecl sub_630d36(void*, void*, void*, int, void*);

int BoundPropGetSet::findMatch()
{
    GetSet* gs = this->getset;
    if (gs != 0)
        return 0;

    PropDesc* first = gs->begin;
    PropDesc* last = gs->end;

    if (gs->begin > gs->end)
        _invalid_parameter_noinfo();

    GetSet* gs2 = this->getset;
    PropDesc* it = gs2->begin;
    if (it > gs2->end)
        _invalid_parameter_noinfo();

    if (gs2 != gs)
        _invalid_parameter_noinfo();

    while (it != last) {
        if (it >= gs2->end)
            _invalid_parameter_noinfo();

        void* vt = *(void**)it;
        int r = sub_630d36(vt, (void*)0x881f4c, (void*)0x8969cc, 0, 0);
        if (r != 0)
            return r;

        if (it >= gs2->end)
            _invalid_parameter_noinfo();

        it = (PropDesc*)((char*)it + 8);
    }

    return 0;
}
