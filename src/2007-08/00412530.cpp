// from server: 57% by colin
// roc 2007-08 00412530  unit: VCContent::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412530
//
// 00412530  8b442418             mov eax, dword ptr [esp + 0x18]
// 00412534  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00412538  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041253c  50                   push eax
// 0041253d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00412541  51                   push ecx
// 00412542  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00412546  52                   push edx
// 00412547  50                   push eax
// 00412548  51                   push ecx
// 00412549  b9c82a8800           mov ecx, 0x882ac8
// 0041254e  e8cd37ffff           call 0x405d20
// 00412553  c21800               ret 0x18

struct VCContent;

struct CComObject {
    void __stdcall CreateInstance(void*, void*, void*, void*, void*, void*);
};

extern CComObject g_comObject;

void __stdcall CreateInstanceHelper(void*, void*, void*, void*, void*, void*);

void CComObject::CreateInstance(void* a, void* b, void* c, void* d, void* e, void* f) {
    CreateInstanceHelper(a, b, c, d, e, f);
}
