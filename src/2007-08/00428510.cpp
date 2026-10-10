// from server: 37% by colin
// roc 2007-08 00428510  unit: COleException  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00428510

extern "C" {
    void __stdcall sub_77ddac(void*);
    void __stdcall sub_77ddbc(void*);
    void* __stdcall sub_77dd98(void*);
    void __stdcall sub_77dd94(void*, const char*, ...);
    void* __stdcall sub_77e6a8(void*, void*);
    void __cdecl sub_427c40(const char*, int);
}

struct COleException {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    void ReportError();
};

void COleException::ReportError()
{
    char buf[4];
    sub_77ddac(buf);
    if (this->field_14 > 0) {
        void* p = sub_77e6a8((void*)this->field_20, (void*)this->field_24);
        sub_77dd94(buf, (const char*)0x78a0c0, p, (void*)this->field_20);
    } else {
        sub_77dd94(buf, (const char*)0x78a0a4, (void*)this->field_18, (void*)this->field_20, (void*)this->field_24);
    }
    const char* s = (const char*)sub_77dd98(buf);
    sub_427c40(s, 2);
    sub_77ddbc(buf);
}
