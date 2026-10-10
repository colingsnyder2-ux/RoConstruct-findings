// from server: 29% by colin
struct CXTPControlLabel {
    void* construct();
};

extern "C" void* __cdecl sub_0062fef6(unsigned int);
extern "C" void __fastcall sub_0067d9e0(void*);

void* CXTPControlLabel::construct()
{
    void* p = sub_0062fef6(0x168);
    if (p == 0) {
        sub_0067d9e0(p);
    }
    return p;
}
