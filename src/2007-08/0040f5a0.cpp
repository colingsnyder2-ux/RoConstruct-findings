// from server: 42% by colin
// roc 2007-08 0040f5a0  unit: CutVerb  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f5a0
//
// 0040f5a0  53                   push ebx
// 0040f5a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0040f5a5  56                   push esi
// 0040f5a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040f5aa  3bde                 cmp ebx, esi
// 0040f5ac  742a                 je 0x40f5d8
// 0040f5ae  57                   push edi
// 0040f5af  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0040f5b3  83ee24               sub esi, 0x24
// 0040f5b6  83ef24               sub edi, 0x24
// 0040f5b9  56                   push esi
// 0040f5ba  8bcf                 mov ecx, edi
// 0040f5bc  ff1590e67700         call dword ptr [0x77e690]
// 0040f5c2  3bf3                 cmp esi, ebx
// 0040f5c4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0040f5c7  89471c               mov dword ptr [edi + 0x1c], eax
// 0040f5ca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0040f5cd  894f20               mov dword ptr [edi + 0x20], ecx
// 0040f5d0  75e1                 jne 0x40f5b3
// 0040f5d2  8bc7                 mov eax, edi
// 0040f5d4  5f                   pop edi
// 0040f5d5  5e                   pop esi
// 0040f5d6  5b                   pop ebx
// 0040f5d7  c3                   ret 
// 0040f5d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040f5dc  5e                   pop esi
// 0040f5dd  5b                   pop ebx
// 0040f5de  c3                   ret 

struct CutVerb
{
    char pad[0x1c];
    int field_1c;
    int field_20;
};

extern "C" void* __stdcall G1_func_0077e690();

CutVerb* func_0040f5a0(CutVerb* first, CutVerb* last, CutVerb* dest)
{
    if (first != last)
        return dest;
    CutVerb* src = last;
    CutVerb* dst = dest;
    do
    {
        src = (CutVerb*)((char*)src - 0x24);
        dst = (CutVerb*)((char*)dst - 0x24);
        G1_func_0077e690();
        dst->field_1c = src->field_1c;
        dst->field_20 = src->field_20;
    } while (src != first);
    return dst;
}
