// from server: 100% by colin
// roc 2007-08 0059b6c0  unit: RBX::VCamera::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b6c0
//
// 0059b6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0059b6c4  56                   push esi
// 0059b6c5  8bf1                 mov esi, ecx
// 0059b6c7  39868c010000         cmp dword ptr [esi + 0x18c], eax
// 0059b6cd  7424                 je 0x59b6f3
// 0059b6cf  685c508c00           push 0x8c505c
// 0059b6d4  89868c010000         mov dword ptr [esi + 0x18c], eax
// 0059b6da  e83190eaff           call 0x444710
// 0059b6df  8bce                 mov ecx, esi
// 0059b6e1  e89addffff           call 0x599480
// 0059b6e6  85c0                 test eax, eax
// 0059b6e8  7409                 je 0x59b6f3
// 0059b6ea  8b10                 mov edx, dword ptr [eax]
// 0059b6ec  8bc8                 mov ecx, eax
// 0059b6ee  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059b6f1  ffd0                 call eax
// 0059b6f3  5e                   pop esi
// 0059b6f4  c20400               ret 4

struct FactoryProduct {
    char pad[0x18c];
    int field_18c;
    void setValue(int value);
};

void FactoryProduct::setValue(int value) {
    if (field_18c != value) {
        field_18c = value;
        extern void __stdcall sub_444710(int);
        sub_444710(0x8c505c);
        extern void* __fastcall sub_599480(FactoryProduct*);
        void* p = sub_599480(this);
        if (p) {
            void** vtbl = *(void***)p;
            void (__fastcall *fn)(void*) = (void (__fastcall *)(void*))vtbl[3];
            fn(p);
        }
    }
}
