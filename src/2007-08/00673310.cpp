// from server: 43% by colin
struct CXTPCustomizeSheet {
    void *vtable;
    char pad[0xa8];
    void *field_ac;
    void *field_b0;
    char pad2[8];
    void *field_bc;
    void *field_c0;
    void destruct();
};

extern "C" void __stdcall sub_6301E4(void *p);
extern "C" void __stdcall sub_7386FA(void *p);

void CXTPCustomizeSheet::destruct()
{
    this->vtable = (void*)0x7cbdb4;
    if (this->field_ac) {
        void **vt = *(void***)this->field_ac;
        ((void (__thiscall*)(void*, int))vt[1])(this->field_ac, 1);
    }
    if (this->field_b0) {
        void **vt = *(void***)this->field_b0;
        ((void (__thiscall*)(void*, int))vt[1])(this->field_b0, 1);
    }
    sub_6301E4(this->field_bc);
    sub_6301E4(this->field_c0);
    sub_7386FA(this);
}
