// from server: 90% by colin
// roc 2007-08 0061e700  unit: RBX::ScoreHud  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e700
//
// 0061e700  57                   push edi
// 0061e701  8b7c2408             mov edi, dword ptr [esp + 8]
// 0061e705  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 0061e709  7445                 je 0x61e750
// 0061e70b  53                   push ebx
// 0061e70c  55                   push ebp
// 0061e70d  56                   push esi
// 0061e70e  33ed                 xor ebp, ebp
// 0061e710  8b7704               mov esi, dword ptr [edi + 4]
// 0061e713  3bf5                 cmp esi, ebp
// 0061e715  7424                 je 0x61e73b
// 0061e717  8b5f08               mov ebx, dword ptr [edi + 8]
// 0061e71a  3bf3                 cmp esi, ebx
// 0061e71c  7411                 je 0x61e72f
// 0061e71e  8bff                 mov edi, edi
// 0061e720  8bce                 mov ecx, esi
// 0061e722  ff15ace67700         call dword ptr [0x77e6ac]
// 0061e728  83c61c               add esi, 0x1c
// 0061e72b  3bf3                 cmp esi, ebx
// 0061e72d  75f1                 jne 0x61e720
// 0061e72f  8b4704               mov eax, dword ptr [edi + 4]
// 0061e732  50                   push eax
// 0061e733  e82a150100           call 0x62fc62
// 0061e738  83c404               add esp, 4
// 0061e73b  896f04               mov dword ptr [edi + 4], ebp
// 0061e73e  896f08               mov dword ptr [edi + 8], ebp
// 0061e741  896f0c               mov dword ptr [edi + 0xc], ebp
// 0061e744  83c710               add edi, 0x10
// 0061e747  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0061e74b  75c3                 jne 0x61e710
// 0061e74d  5e                   pop esi
// 0061e74e  5d                   pop ebp
// 0061e74f  5b                   pop ebx
// 0061e750  5f                   pop edi
// 0061e751  c3                   ret 

struct ScoreHud
{
    char pad0[4];
    char* begin;
    char* end;
    char* capacity;
};

extern "C" void __cdecl free(void*);

struct StringElem
{
    void dtor();
};

void ScoreHud_clear(ScoreHud* first, ScoreHud* last)
{
    while (first != last)
    {
        char* p = first->begin;
        if (p != 0)
        {
            char* e = first->end;
            while (p != e)
            {
                ((StringElem*)p)->dtor();
                p += 0x1c;
            }
            free(first->begin);
        }
        first->begin = 0;
        first->end = 0;
        first->capacity = 0;
        first++;
    }
}
