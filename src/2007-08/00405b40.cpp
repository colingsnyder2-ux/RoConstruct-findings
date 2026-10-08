// from server: 79% by colin
// roc 2007-08 00405b40  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405b40
//
// 00405b40  56                   push esi
// 00405b41  8bf1                 mov esi, ecx
// 00405b43  c706a84f7800         mov dword ptr [esi], 0x784fa8
// 00405b49  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 00405b50  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 00405b56  8b01                 mov eax, dword ptr [ecx]
// 00405b58  8b5008               mov edx, dword ptr [eax + 8]
// 00405b5b  ffd2                 call edx
// 00405b5d  8bce                 mov ecx, esi
// 00405b5f  e87cd4ffff           call 0x402fe0
// 00405b64  f644240801           test byte ptr [esp + 8], 1
// 00405b69  7409                 je 0x405b74
// 00405b6b  56                   push esi
// 00405b6c  e8f1a02200           call 0x62fc62
// 00405b71  83c404               add esp, 4
// 00405b74  8bc6                 mov eax, esi
// 00405b76  5e                   pop esi
// 00405b77  c20400               ret 4

struct UIEnumConnectionPoints_CComEnum_CComObject {
    void* vtable;
    char pad[0x14];
    int field_18;
    void Destroy(char flag);
};

struct GlobalObject {
    void* vtable;
};

extern GlobalObject* g_object_8bae44;

extern "C" void __stdcall sub_402fe0();
extern "C" void __stdcall sub_62fc62(void* p);

void UIEnumConnectionPoints_CComEnum_CComObject::Destroy(char flag) {
    this->vtable = (void*)0x784fa8;
    this->field_18 = 0xc0000001;
    GlobalObject* g = g_object_8bae44;
    void (__stdcall *fn)() = *(void (__stdcall**)())((char*)g->vtable + 8);
    fn();
    sub_402fe0();
    if (flag & 1) {
        sub_62fc62(this);
    }
}
