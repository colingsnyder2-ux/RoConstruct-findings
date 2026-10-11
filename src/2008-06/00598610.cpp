// from server: 36% by colin
struct Decal {
    char pad[0x144];
    int field_144;
    char pad2[0x1c];
    int field_164;
    void construct(int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_55BD60(int*, int*);
extern "C" void __stdcall sub_80240C(int*, int*);
extern "C" void __stdcall sub_802468(int*);
extern "C" void __stdcall sub_40DB00(int, const char*);

void Decal::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int local = 0;
    if (sub_55BD60(&local, &field_144))
    {
        sub_80240C(&local, &field_144);
        field_164 = a8;
        sub_40DB00((int)this, (const char*)0x975f14);
    }
    sub_802468(&local);
}
