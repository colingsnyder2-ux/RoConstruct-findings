// from server: 66% by colin
// roc 2007-08 005a1a60  unit: RBX::VShirt::?$BoundPropGetSet  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1a60

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int f0;
    int f4;
    int f8;
};

struct Outer {
    char pad[0xc0];
    Inner* ptr;
};

struct S {
    char pad[0xc0];
    Inner* field_c0;
    int find();
};

extern "C" int __cdecl sub_630d36(int a, int b, int c, int d, int e);

int S::find()
{
    Inner* ebx = this->field_c0;
    if (ebx != 0)
        return 0;

    int ebp = ebx->f8;
    if (ebx->f4 > ebp)
        _invalid_parameter_noinfo();

    Inner* edi = this->field_c0;
    int esi = edi->f4;
    if (esi > edi->f8)
        _invalid_parameter_noinfo();

    if (edi != ebx)
        _invalid_parameter_noinfo();

    while (esi != ebp) {
        if (esi >= edi->f8)
            _invalid_parameter_noinfo();

        int v = *(int*)esi;
        int r = sub_630d36(v, 0, 0x881f4c, 0x8a7d24, 0);
        if (r != 0)
            return r;

        if (esi >= edi->f8)
            _invalid_parameter_noinfo();
        esi += 8;
    }
    return 0;
}
