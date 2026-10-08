// from server: 100% by colin
// roc 2007-08 004472e0  unit: VCRenderSettings::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004472e0
//
// 004472e0  8b442404             mov eax, dword ptr [esp + 4]
// 004472e4  3b8118010000         cmp eax, dword ptr [ecx + 0x118]
// 004472ea  7413                 je 0x4472ff
// 004472ec  898118010000         mov dword ptr [ecx + 0x118], eax
// 004472f2  c744240434bc8b00     mov dword ptr [esp + 4], 0x8bbc34
// 004472fa  e911d4ffff           jmp 0x444710
// 004472ff  c20400               ret 4

struct CRenderSettings {
    char pad[0x118];
    int field_0x118;
    void setSomething(int value);
};

void CRenderSettings::setSomething(int value) {
    if (value != this->field_0x118) {
        this->field_0x118 = value;
        extern void __stdcall someFunction(int);
        someFunction(0x8bbc34);
    }
}
