// from server: 80% by colin
// roc 2007-08 005603f0  unit: RBX::VModelInstance::?$FilteredSelection  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005603f0
//
// 005603f0  53                   push ebx
// 005603f1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005603f5  55                   push ebp
// 005603f6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005603fa  56                   push esi
// 005603fb  8b742418             mov esi, dword ptr [esp + 0x18]
// 005603ff  57                   push edi
// 00560400  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00560404  3bf7                 cmp esi, edi
// 00560406  7410                 je 0x560418
// 00560408  8b06                 mov eax, dword ptr [esi]
// 0056040a  50                   push eax
// 0056040b  53                   push ebx
// 0056040c  ffd5                 call ebp
// 0056040e  83c604               add esi, 4
// 00560411  83c408               add esp, 8
// 00560414  3bf7                 cmp esi, edi
// 00560416  75f0                 jne 0x560408
// 00560418  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056041c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00560420  5f                   pop edi
// 00560421  8928                 mov dword ptr [eax], ebp
// 00560423  5e                   pop esi
// 00560424  895804               mov dword ptr [eax + 4], ebx
// 00560427  5d                   pop ebp
// 00560428  894808               mov dword ptr [eax + 8], ecx
// 0056042b  5b                   pop ebx
// 0056042c  c3                   ret 

struct FilteredSelection {
    void for_each_impl(void (*fn)(void*, int), void* ctx, int* begin, int* end, int* out);
};

void FilteredSelection::for_each_impl(void (*fn)(void*, int), void* ctx, int* begin, int* end, int* out)
{
    int* it = begin;
    if (it != end) {
        do {
            fn(ctx, *it);
            ++it;
        } while (it != end);
    }
    out[0] = (int)fn;
    out[1] = (int)ctx;
    out[2] = (int)end;
}
