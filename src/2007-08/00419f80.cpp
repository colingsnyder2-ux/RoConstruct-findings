// from server: 35% by colin
struct VDHTMLWindowService_BoundFuncDesc
{
    char pad0[0x14];
    void* field14;
    char pad18[0x10];
    void* field28;
    void* field2c;
    void* field30;
    void* field34;
    char pad38[0x18];
    void* field50;
    void* field54;
    void* field58;
    void* field5c;

    VDHTMLWindowService_BoundFuncDesc* construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i, void* j, void* k, void* l);
};

extern "C" void* __stdcall sub_419110(void* a, void* b);
extern "C" void __stdcall sub_570DB0(void* a, void* b);
extern "C" void* __stdcall sub_56DA00(void);
extern "C" void __stdcall sub_4141A0(void* a, void* b);
extern "C" void* __stdcall sub_56D350(void);
extern "C" void* __stdcall sub_52C940(void* a, void* b, void* c);
extern "C" void __stdcall sub_56D400(void* a, void* b);
extern "C" void __stdcall sub_77E6AC(void* a);

VDHTMLWindowService_BoundFuncDesc* VDHTMLWindowService_BoundFuncDesc::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i, void* j, void* k, void* l)
{
    void* v = sub_419110(a, b);
    sub_570DB0(this, v);
    this->field28 = c;
    this->field2c = d;
    *(void**)this = (void*)0x787850;
    void* p = sub_56DA00();
    this->field30 = p;
    sub_4141A0(&this->field34, e);
    void* q = sub_56D350();
    this->field14 = q;
    void* r = sub_56DA00();
    void* s = sub_52C940(f, g, h);
    sub_56D400(&this->field14, s);
    sub_77E6AC(&this->field34);
    return this;
}
