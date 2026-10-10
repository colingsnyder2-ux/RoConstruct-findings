// from server: 61% by colin
// roc 2007-08 00443240  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 127 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

struct PropDesc {
    int field0;
    int field4;
    int field8;
};

struct List {
    int field0;
    int field4;
    int field8;
};

struct Holder {
    char pad[0xc0];
    List* list;
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);

int Holder_lookup(Holder* self);

int Holder_lookup(Holder* self)
{
    List* ebx = self->list;
    if (ebx != 0)
        return 0;

    int ebp = ebx->field8;
    if (ebx->field4 > ebp)
        _invalid_parameter_noinfo();

    List* edi = self->list;
    int esi = edi->field4;
    if (esi > edi->field8)
        _invalid_parameter_noinfo();

    if (edi != ebx)
        _invalid_parameter_noinfo();

    while (esi != ebp) {
        if (esi >= edi->field8)
            _invalid_parameter_noinfo();

        int v = *(int*)esi;
        int r = sub_630d36(v, 0, (int)0x881f4c, (int)0x886090, 0);
        if (r != 0)
            return r;

        if (esi >= edi->field8)
            _invalid_parameter_noinfo();
        esi += 8;
    }
    return 0;
}
