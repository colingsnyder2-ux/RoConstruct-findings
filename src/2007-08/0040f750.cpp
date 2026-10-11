// from server: 93% by colin
// roc 2007-08 0040f750  unit: seg_00400000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f750
//
// 0040f750  53                   push ebx
// 0040f751  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040f755  56                   push esi
// 0040f756  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040f75a  3bf3                 cmp esi, ebx
// 0040f75c  7422                 je 0x40f780
// 0040f75e  57                   push edi
// 0040f75f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0040f763  57                   push edi
// 0040f764  8bce                 mov ecx, esi
// 0040f766  ff1590e67700         call dword ptr [0x77e690]
// 0040f76c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0040f76f  89461c               mov dword ptr [esi + 0x1c], eax
// 0040f772  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0040f775  894e20               mov dword ptr [esi + 0x20], ecx
// 0040f778  83c624               add esi, 0x24
// 0040f77b  3bf3                 cmp esi, ebx
// 0040f77d  75e4                 jne 0x40f763
// 0040f77f  5f                   pop edi
// 0040f780  5e                   pop esi
// 0040f781  5b                   pop ebx
// 0040f782  c3                   ret 
// library MSVCP80.dll (function ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z)

struct Elem {
    char pad[0x1c];
    int a;
    int b;
};

struct String {
    void assign(const String& other);
};

void copy_elems(Elem* first, Elem* last, const Elem* src)
{
    while (first != last) {
        ((String*)first)->assign(*(const String*)src);
        first->a = src->a;
        first->b = src->b;
        ++first;
    }
}
