// from server: 65% by colin
// roc 2007-08 00692080  unit: CXTThemeManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692080
//
// 00692080  56                   push esi
// 00692081  8bf1                 mov esi, ecx
// 00692083  8b4610               mov eax, dword ptr [esi + 0x10]
// 00692086  85c0                 test eax, eax
// 00692088  7409                 je 0x692093
// 0069208a  56                   push esi
// 0069208b  8d4808               lea ecx, [eax + 8]
// 0069208e  e89f6a0a00           call 0x738b32
// 00692093  8b442408             mov eax, dword ptr [esp + 8]
// 00692097  50                   push eax
// 00692098  894608               mov dword ptr [esi + 8], eax
// 0069209b  e800ffffff           call 0x691fa0
// 006920a0  8bc8                 mov ecx, eax
// 006920a2  e869fcffff           call 0x691d10
// 006920a7  56                   push esi
// 006920a8  8d4808               lea ecx, [eax + 8]
// 006920ab  894610               mov dword ptr [esi + 0x10], eax
// 006920ae  e8796a0a00           call 0x738b2c
// 006920b3  5e                   pop esi
// 006920b4  c20400               ret 4

struct CXTThemeManager {
    char pad[8];
    int field_8;
    char pad2[4];
    int field_10;
    void Method(int);
};

extern "C" void __stdcall sub_738b32(int);
extern "C" void __stdcall sub_738b2c(int);
extern "C" int __stdcall sub_691fa0(int);
extern "C" void __stdcall sub_691d10(int);

void CXTThemeManager::Method(int arg) {
    int v = field_10;
    if (v != 0) {
        sub_738b32(v + 8);
    }
    field_8 = arg;
    int r = sub_691fa0(arg);
    sub_691d10(r);
    field_10 = r;
    sub_738b2c(r + 8);
}
