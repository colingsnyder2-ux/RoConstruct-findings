// roc 2009-12 0047bae0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047bae0
//
// 0047bae0  53                   push ebx
// 0047bae1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0047bae5  56                   push esi
// 0047bae6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0047baea  3bde                 cmp ebx, esi
// 0047baec  743a                 je 0x47bb28
// 0047baee  57                   push edi
// 0047baef  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0047baf3  8b46c0               mov eax, dword ptr [esi - 0x40]
// 0047baf6  83ee40               sub esi, 0x40
// 0047baf9  83ef40               sub edi, 0x40
// 0047bafc  8907                 mov dword ptr [edi], eax
// 0047bafe  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047bb01  8d5608               lea edx, [esi + 8]
// 0047bb04  894f04               mov dword ptr [edi + 4], ecx
// 0047bb07  52                   push edx
// 0047bb08  8d4f08               lea ecx, [edi + 8]
// 0047bb0b  ff159cb69800         call dword ptr [0x98b69c]
// 0047bb11  8d4624               lea eax, [esi + 0x24]
// 0047bb14  50                   push eax
// 0047bb15  8d4f24               lea ecx, [edi + 0x24]
// 0047bb18  ff159cb69800         call dword ptr [0x98b69c]
// 0047bb1e  3bf3                 cmp esi, ebx
// 0047bb20  75d1                 jne 0x47baf3
// 0047bb22  8bc7                 mov eax, edi
// 0047bb24  5f                   pop edi
// 0047bb25  5e                   pop esi
// 0047bb26  5b                   pop ebx
// 0047bb27  c3                   ret 
// 0047bb28  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047bb2c  5e                   pop esi
// 0047bb2d  5b                   pop ebx
// 0047bb2e  c3                   ret 
// copied from an identical function in another client (function ?copyBackward@@YAPAUEntry@@PAU1@00@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct StringStorage {
    char data[28];
};

extern StringStorage& (__thiscall *assignString)(
    StringStorage*, const StringStorage*);

struct Entry {
    unsigned int first;
    unsigned int second;
    StringStorage name;
    StringStorage value;
};

Entry* __cdecl copyBackward(Entry* first, Entry* last, Entry* result)
{
    while (first != last) {
        --last;
        --result;
        result->first = last->first;
        result->second = last->second;
        assignString(&result->name, &last->name);
        assignString(&result->value, &last->value);
    }
    return result;
}