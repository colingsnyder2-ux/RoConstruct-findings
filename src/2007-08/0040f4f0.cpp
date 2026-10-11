// from server: 94% by colin
// roc 2007-08 0040f4f0  unit: CutVerb  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f4f0
//
// 0040f4f0  53                   push ebx
// 0040f4f1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040f4f5  56                   push esi
// 0040f4f6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040f4fa  3bf3                 cmp esi, ebx
// 0040f4fc  742a                 je 0x40f528
// 0040f4fe  57                   push edi
// 0040f4ff  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0040f503  56                   push esi
// 0040f504  8bcf                 mov ecx, edi
// 0040f506  ff1590e67700         call dword ptr [0x77e690]
// 0040f50c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0040f50f  89471c               mov dword ptr [edi + 0x1c], eax
// 0040f512  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0040f515  894f20               mov dword ptr [edi + 0x20], ecx
// 0040f518  83c624               add esi, 0x24
// 0040f51b  83c724               add edi, 0x24
// 0040f51e  3bf3                 cmp esi, ebx
// 0040f520  75e1                 jne 0x40f503
// 0040f522  8bc7                 mov eax, edi
// 0040f524  5f                   pop edi
// 0040f525  5e                   pop esi
// 0040f526  5b                   pop ebx
// 0040f527  c3                   ret 
// 0040f528  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040f52c  5e                   pop esi
// 0040f52d  5b                   pop ebx
// 0040f52e  c3                   ret 

struct CutVerb {
    char pad[0x1c];
    int field_1c;
    int field_20;
};

struct StringAssign {
    void assign(const StringAssign& other);
};

extern "C" void* __stdcall G1_func_0077e690();

CutVerb* func_0040f4f0(CutVerb* first, CutVerb* last, CutVerb* dest)
{
    if (first != last) {
        do {
            ((StringAssign*)dest)->assign(*(StringAssign*)first);
            dest->field_1c = first->field_1c;
            dest->field_20 = first->field_20;
            first = (CutVerb*)((char*)first + 0x24);
            dest = (CutVerb*)((char*)dest + 0x24);
        } while (first != last);
    }
    return dest;
}
