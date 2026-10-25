// from server: 100% by king_originala
// roc 2008-06 0044dee0  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044dee0
//
// 0044dee0  53                   push ebx
// 0044dee1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044dee5  56                   push esi
// 0044dee6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044deea  3bde                 cmp ebx, esi
// 0044deec  742d                 je 0x44df1b
// 0044deee  57                   push edi
// 0044deef  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0044def3  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0044def6  83ee0c               sub esi, 0xc
// 0044def9  83ef0c               sub edi, 0xc
// 0044defc  8907                 mov dword ptr [edi], eax
// 0044defe  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044df01  8d5608               lea edx, [esi + 8]
// 0044df04  894f04               mov dword ptr [edi + 4], ecx
// 0044df07  52                   push edx
// 0044df08  8d4f08               lea ecx, [edi + 8]
// 0044df0b  ff1544318000         call dword ptr [0x803144]
// 0044df11  3bf3                 cmp esi, ebx
// 0044df13  75de                 jne 0x44def3
// 0044df15  8bc7                 mov eax, edi
// 0044df17  5f                   pop edi
// 0044df18  5e                   pop esi
// 0044df19  5b                   pop ebx
// 0044df1a  c3                   ret 
// 0044df1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044df1f  5e                   pop esi
// 0044df20  5b                   pop ebx
// 0044df21  c3                   ret 

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
