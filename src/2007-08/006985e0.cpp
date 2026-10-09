// from server: 83% by colin
// roc 2007-08 006985e0  unit: CXTPPropertyGridItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006985e0
//
// 006985e0  57                   push edi
// 006985e1  8bf9                 mov edi, ecx
// 006985e3  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 006985ea  7432                 je 0x69861e
// 006985ec  8b07                 mov eax, dword ptr [edi]
// 006985ee  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 006985f4  56                   push esi
// 006985f5  ffd2                 call edx
// 006985f7  8bf0                 mov esi, eax
// 006985f9  85f6                 test esi, esi
// 006985fb  7420                 je 0x69861d
// 006985fd  837e2000             cmp dword ptr [esi + 0x20], 0
// 00698601  741a                 je 0x69861d
// 00698603  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00698609  7512                 jne 0x69861d
// 0069860b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069860f  ff1598dd7700         call dword ptr [0x77dd98]
// 00698615  50                   push eax
// 00698616  8bce                 mov ecx, esi
// 00698618  e8f979f9ff           call 0x630016
// 0069861d  5e                   pop esi
// 0069861e  5f                   pop edi
// 0069861f  c20400               ret 4

struct CXTPPropertyGridItem {
    void f(int);
};

extern "C" int __stdcall sub_77DD98();

struct Helper {
    void g(int);
};

void CXTPPropertyGridItem::f(int a) {
    if (*(int*)((char*)this + 0xb4) != 0) {
        int (__thiscall *fn)(void*) = *(int (__thiscall **)(void*))((char*)(*(void**)this) + 0x84);
        void* p = (void*)fn(this);
        if (p != 0) {
            if (*(int*)((char*)p + 0x20) != 0) {
                if (*(void**)((char*)p + 0xa0) == this) {
                    int r = sub_77DD98();
                    ((Helper*)p)->g(r);
                }
            }
        }
    }
}
