// roc 2009-12 00452630  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452630
//
// 00452630  53                   push ebx
// 00452631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00452635  56                   push esi
// 00452636  8b742410             mov esi, dword ptr [esp + 0x10]
// 0045263a  3bde                 cmp ebx, esi
// 0045263c  742d                 je 0x45266b
// 0045263e  57                   push edi
// 0045263f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00452643  8b46f4               mov eax, dword ptr [esi - 0xc]
// 00452646  83ee0c               sub esi, 0xc
// 00452649  83ef0c               sub edi, 0xc
// 0045264c  8907                 mov dword ptr [edi], eax
// 0045264e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00452651  8d5608               lea edx, [esi + 8]
// 00452654  894f04               mov dword ptr [edi + 4], ecx
// 00452657  52                   push edx
// 00452658  8d4f08               lea ecx, [edi + 8]
// 0045265b  ff1538d59800         call dword ptr [0x98d538]
// 00452661  3bf3                 cmp esi, ebx
// 00452663  75de                 jne 0x452643
// 00452665  8bc7                 mov eax, edi
// 00452667  5f                   pop edi
// 00452668  5e                   pop esi
// 00452669  5b                   pop ebx
// 0045266a  c3                   ret 
// 0045266b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045266f  5e                   pop esi
// 00452670  5b                   pop ebx
// 00452671  c3                   ret 
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