// from server: 36% by colin
// roc 2008-06 00588780  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 357 bytes

extern "C" {
    void __stdcall sub_802458();
    void __stdcall sub_802890();
    void __stdcall sub_6a158c(void*, void*);
}

struct RBX_String {
    void ctor(const char*);
};

struct RBX_ChangeHistory {
    void* p0;
    void* p4;
};

struct RBX_VChangeHistoryService {
    char pad_000[0x138];
    void* field_138;
    char pad_13c[0x10];
    void* field_14c;
    char pad_150[0x4];
    RBX_ChangeHistory field_154;
    void* field_15c;
    void* field_160;
    char field_164;
    char field_165;
    char pad_166[0x2];

    void method_00588780();
};

void RBX_VChangeHistoryService::method_00588780() {
    if (this->field_164) {
        RBX_String s;
        s.ctor("ChangeHistoryService is currently playing");
        sub_6a158c(&s, (void*)0x8d1bc8);
    }
    if (!this->field_165) {
        RBX_String s;
        s.ctor("ChangeHistoryService is disabled");
        sub_6a158c(&s, (void*)0x8d1bc8);
    }
    void* a = this->field_154.p0;
    void* b = this->field_138;
    void* c = this->field_14c;
    if (a != 0 && a != b) {
        sub_802890();
    }
    if (this->field_154.p4 != c) {
        RBX_String s;
        s.ctor("Attempt to play beyond change history");
        sub_6a158c(&s, (void*)0x8d1bc8);
    }
    char old = this->field_164;
    this->field_164 = 1;
    void* r = ((void* (__thiscall*)(void*))0x42a8f0)(&this->field_154);
    ((void (__thiscall*)(void*))0x588710)(*(void**)r);
    this->field_160 = this->field_154.p4;
    this->field_15c = this->field_154.p0;
    ((void (__thiscall*)(void*))0x5872d0)(&this->field_154);
    this->field_164 = old;
}
