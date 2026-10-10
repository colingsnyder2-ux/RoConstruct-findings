// from server: 51% by colin
struct CXTPToolBar {
    char pad[0xf8];
    int field_f8;
    char pad2[0x168 - 0xf8 - 4];
    int field_168;
    int field_16c;
    int field_170;
    int field_174;
    CXTPToolBar* CControlButtonExpand();
};

extern "C" void __fastcall sub_6CA460(CXTPToolBar*);
extern "C" void __fastcall sub_738334(CXTPToolBar*);

CXTPToolBar* CXTPToolBar::CControlButtonExpand()
{
    sub_6CA460(this);
    this->field_168 = 0;
    *(void**)this = (void*)0x7cb524;
    *(void**)((char*)this + 0x20) = (void*)0x7cb4c4;
    sub_738334(this);
    this->field_f8 = 2;
    this->field_168 = 0;
    this->field_16c = 0;
    this->field_170 = 0;
    this->field_174 = 1;
    return this;
}
