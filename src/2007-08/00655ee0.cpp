// from server: 100% by colin
// roc 2007-08 00655ee0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655ee0
//
// 00655ee0  8bc1                 mov eax, ecx
// 00655ee2  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 00655ee8  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00655eeb  56                   push esi
// 00655eec  8bb000020000         mov esi, dword ptr [eax + 0x200]
// 00655ef2  e84956e2ff           call 0x47b540
// 00655ef7  898694000000         mov dword ptr [esi + 0x94], eax
// 00655efd  5e                   pop esi
// 00655efe  c3                   ret 

struct Sub {
    char pad[0x20];
    int field_20;
};

struct Target {
    char pad[0x94];
    int field_94;
};

struct CXTPReportControl {
    char pad[0xac];
    Sub* field_ac;
    char pad2[0x200 - 0xac - 4];
    Target* field_200;
    void func();
};

extern "C" int __fastcall sub_47b540(int);

void CXTPReportControl::func()
{
    CXTPReportControl* self = this;
    Sub* s = self->field_ac;
    int arg = s->field_20;
    Target* t = self->field_200;
    t->field_94 = sub_47b540(arg);
}
