// from server: 86% by colin
struct CXTPPrintPageHeaderFooter
{
    char pad[0x60];
    int field60;
    int field64;
    int field68;
    int field6c;
    void Destruct();
};

extern "C" void __fastcall sub_77ddbc(int*);
extern "C" void __fastcall sub_63069a(CXTPPrintPageHeaderFooter*);

void CXTPPrintPageHeaderFooter::Destruct()
{
    *(int*)this = 0x7ceb3c;
    sub_77ddbc(&field6c);
    sub_77ddbc(&field68);
    sub_77ddbc(&field64);
    sub_77ddbc(&field60);
    sub_63069a(this);
}
