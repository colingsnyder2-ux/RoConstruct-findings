// from server: 95% by colin
// roc 2007-08 0040a820  unit: CBrowserView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a820
//
// 0040a820  56                   push esi
// 0040a821  57                   push edi
// 0040a822  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0040a826  57                   push edi
// 0040a827  8bf1                 mov esi, ecx
// 0040a829  e8ee572200           call 0x63001c
// 0040a82e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0040a831  85c9                 test ecx, ecx
// 0040a833  740d                 je 0x40a842
// 0040a835  8b01                 mov eax, dword ptr [ecx]
// 0040a837  8b5058               mov edx, dword ptr [eax + 0x58]
// 0040a83a  57                   push edi
// 0040a83b  ffd2                 call edx
// 0040a83d  5f                   pop edi
// 0040a83e  5e                   pop esi
// 0040a83f  c20400               ret 4
// 0040a842  8bce                 mov ecx, esi
// 0040a844  e807572200           call 0x62ff50
// 0040a849  85c0                 test eax, eax
// 0040a84b  740f                 je 0x40a85c
// 0040a84d  57                   push edi
// 0040a84e  8bce                 mov ecx, esi
// 0040a850  e8fb562200           call 0x62ff50
// 0040a855  8bc8                 mov ecx, eax
// 0040a857  e8ba572200           call 0x630016
// 0040a85c  5f                   pop edi
// 0040a85d  5e                   pop esi
// 0040a85e  c20400               ret 4

struct CBrowserView {
    char pad[0x54];
    void* field_54;
    void sub_63001C(void*);
    void* sub_62FF50();
    void sub_630016(void*);
    void func(void*);
};

void CBrowserView::func(void* arg) {
    sub_63001C(arg);
    void* p = field_54;
    if (p) {
        void** vtable = *(void***)p;
        void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x58 / 4];
        fn(p, arg);
        return;
    }
    if (sub_62FF50()) {
        void* q = sub_62FF50();
        sub_630016(q);
    }
}
