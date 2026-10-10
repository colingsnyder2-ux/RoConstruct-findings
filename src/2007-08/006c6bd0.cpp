// from server: 86% by colin
// roc 2007-08 006c6bd0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6bd0

extern "C" int __stdcall sub_77dcd0();
extern "C" void __stdcall sub_77ddbc();

struct CXTPCustomizeSheet_CCustomizeEdit {
    int field_0;
    char pad[0xf8];
    void* field_fc;
    char pad2[0x6c];
    int field_16c;
    int method_639d80();
    int method_639d80_helper();
    int GetSomething();
    int Check();
};

int CXTPCustomizeSheet_CCustomizeEdit::Check() {
    if (*(int*)((char*)field_fc + 0xf4) == 2)
        return 1;
    void* p = 0;
    int (__stdcall *fn)(void**) = *(int (__stdcall **)(void**))((char*)(*(void**)this) + 0x58);
    fn(&p);
    char b = (char)sub_77dcd0();
    sub_77ddbc();
    if (b)
        return 0;
    int r = method_639d80();
    if (r == 1 || r == 3 || r == 4)
        return 1;
    return field_16c;
}
