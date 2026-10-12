// from server: 73% by colin
struct S {
    char pad[0x44];
    void* field_44;
    char pad2[0x0c];
    unsigned char field_54;
    void imbue(const void* loc);
};

extern "C" void* __stdcall sub_802568(void* buf, const void* loc);
extern "C" void __stdcall sub_802564(void* loc);

void S::imbue(const void* loc)
{
    if ((field_54 & 1) && field_44) {
        char buf[4];
        sub_802568(buf, loc);
        sub_802564(buf);
    }
}
