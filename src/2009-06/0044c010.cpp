// roc 2009-06 0044c010  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c010
//
// 0044c010  53                   push ebx
// 0044c011  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044c015  56                   push esi
// 0044c016  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044c01a  3bde                 cmp ebx, esi
// 0044c01c  742d                 je 0x44c04b
// 0044c01e  57                   push edi
// 0044c01f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0044c023  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0044c026  83ee0c               sub esi, 0xc
// 0044c029  83ef0c               sub edi, 0xc
// 0044c02c  8907                 mov dword ptr [edi], eax
// 0044c02e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044c031  8d5608               lea edx, [esi + 8]
// 0044c034  894f04               mov dword ptr [edi + 4], ecx
// 0044c037  52                   push edx
// 0044c038  8d4f08               lea ecx, [edi + 8]
// 0044c03b  ff1508fa8900         call dword ptr [0x89fa08]
// 0044c041  3bf3                 cmp esi, ebx
// 0044c043  75de                 jne 0x44c023
// 0044c045  8bc7                 mov eax, edi
// 0044c047  5f                   pop edi
// 0044c048  5e                   pop esi
// 0044c049  5b                   pop ebx
// 0044c04a  c3                   ret 
// 0044c04b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044c04f  5e                   pop esi
// 0044c050  5b                   pop ebx
// 0044c051  c3                   ret 
// copied from an identical function in another client (function ?copyBackward@@YAPAUItem@@PAU1@00@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Tail {
    unsigned int value;
};

struct Item {
    unsigned int first;
    unsigned int second;
    Tail tail;
};

extern Tail& (__thiscall *assignTail)(Tail*, const Tail*);

Item* __cdecl copyBackward(Item* first, Item* last, Item* result)
{
    if (first != last) {
        do {
            --last;
            --result;
            result->first = last->first;
            result->second = last->second;
            assignTail(&result->tail, &last->tail);
        } while (last != first);
    }
    return result;
}