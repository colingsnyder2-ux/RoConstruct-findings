// from server: 100% by colin
// roc 2007-08 0069e240  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e240
//
// 0069e240  8b442404             mov eax, dword ptr [esp + 4]
// 0069e244  85c0                 test eax, eax
// 0069e246  898104010000         mov dword ptr [ecx + 0x104], eax
// 0069e24c  7408                 je 0x69e256
// 0069e24e  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0069e254  8908                 mov dword ptr [eax], ecx
// 0069e256  c20400               ret 4

struct CPropertyGridItemBrickColor {
    char pad[0x100];
    int field_100;
    int field_104;
    void Set(void* p);
};

void CPropertyGridItemBrickColor::Set(void* p) {
    field_104 = (int)p;
    if (p != 0) {
        *(int*)p = field_100;
    }
}
