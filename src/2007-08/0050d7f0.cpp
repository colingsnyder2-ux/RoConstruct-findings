// from server: 28% by colin
struct TokenException {
    char pad0[0x28];
    void* field28;
    char pad2c[0x18];
    void* field44;
    char pad48[0x18];
    void* field60;
    char pad64[0x18];
    void* field7c;

    TokenException(const void* a, const void* b, const void* c, const void* d, const void* e);
};

extern "C" {
    void __stdcall sub_50D5D0();
    void __stdcall sub_5017C0();
    void __stdcall sub_77E69C();
    void __stdcall sub_77E664();
    void __stdcall sub_77E6AC();
    void __stdcall sub_77E6AC2();
}

TokenException::TokenException(const void* a, const void* b, const void* c, const void* d, const void* e)
{
    sub_50D5D0();
    field44 = 0;
    *(void**)this = (void*)0x7A0DE8;
    sub_77E69C();
    sub_77E69C();
    sub_5017C0();
    sub_77E664();
    sub_77E6AC();
}
