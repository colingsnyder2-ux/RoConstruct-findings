// from server: 38% by colin
struct S {
    char pad[0x40];
    char field_40[0x58];
    char field_98;
    char pad2[0xa4 - 0x99];
    void* field_a4;
    void* field_a8;
    void destroy();
};

extern "C" void __stdcall sub_802378(void*, void*);
extern "C" void __stdcall sub_802544(void*);
void sub_5f3740(void*);

void S::destroy()
{
    if (field_a4) {
        sub_802378(field_a4, field_a8);
    }
    if (field_98) {
        sub_5f3740(field_40);
        field_40[0x58] = 0;
    }
    sub_802544(this);
}
