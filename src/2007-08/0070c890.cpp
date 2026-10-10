// from server: 37% by colin
struct CSpinButtonCtrl {
    void* vftable;
    char pad[0x50];
    void* field54;
    int field58;
    char field5c;
    int field60;
    double field68;
    double field70;
    double field78;
    int field80;
    int field84;
    CSpinButtonCtrl();
};

extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_70C650(void*, void*, void*, void*);

CSpinButtonCtrl::CSpinButtonCtrl()
{
    sub_6305DA();
    this->vftable = (void*)0x7ddaac;
    this->field58 = 0;
    this->field54 = (void*)0x788300;
    this->field68 = 0.0;
    this->field70 = 0.0;
    this->field78 = 0.0;
    this->field80 = 0;
    this->field84 = 0;
    this->field60 = 0;
    this->field5c = 1;
    sub_70C650(&this->field68, &this->field70, &this->field78, 0);
}
