// from server: 56% by tester
struct CXTPPropertyGridInplaceEdit {
    char pad0[0x20];
    void* field20;
    char pad24[0x5c - 0x24];
    void* field5c;
    char pad60[0x70 - 0x60];
    char field70[1];
    int method();
};

extern "C" int __stdcall sub_7bc00a();
extern "C" char __stdcall sub_802fd8(void*);
extern "C" void __fastcall sub_774f00(CXTPPropertyGridInplaceEdit*);
extern "C" void __fastcall sub_775510(CXTPPropertyGridInplaceEdit*);

int CXTPPropertyGridInplaceEdit::method()
{
    if (this->field5c != 0 && this->field20 != 0)
    {
        if ((sub_7bc00a() & 0x800) == 0)
        {
            if (!sub_802fd8(this->field70))
            {
                sub_774f00(this);
                sub_775510(this);
                return 1;
            }
        }
    }
    void** vt = *(void***)this;
    void (__stdcall *fn)(CXTPPropertyGridInplaceEdit*, int, int, int) =
        (void (__stdcall *)(CXTPPropertyGridInplaceEdit*, int, int, int))vt[0x120 / 4];
    fn(this, 0x300, 0, 0);
    return 0;
}
