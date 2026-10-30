// roc 2009-06 00471a20  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471a20
//
// 00471a20  53                   push ebx
// 00471a21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00471a25  56                   push esi
// 00471a26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00471a2a  3bde                 cmp ebx, esi
// 00471a2c  743a                 je 0x471a68
// 00471a2e  57                   push edi
// 00471a2f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00471a33  8b46c0               mov eax, dword ptr [esi - 0x40]
// 00471a36  83ee40               sub esi, 0x40
// 00471a39  83ef40               sub edi, 0x40
// 00471a3c  8907                 mov dword ptr [edi], eax
// 00471a3e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00471a41  8d5608               lea edx, [esi + 8]
// 00471a44  894f04               mov dword ptr [edi + 4], ecx
// 00471a47  52                   push edx
// 00471a48  8d4f08               lea ecx, [edi + 8]
// 00471a4b  ff1564e48900         call dword ptr [0x89e464]
// 00471a51  8d4624               lea eax, [esi + 0x24]
// 00471a54  50                   push eax
// 00471a55  8d4f24               lea ecx, [edi + 0x24]
// 00471a58  ff1564e48900         call dword ptr [0x89e464]
// 00471a5e  3bf3                 cmp esi, ebx
// 00471a60  75d1                 jne 0x471a33
// 00471a62  8bc7                 mov eax, edi
// 00471a64  5f                   pop edi
// 00471a65  5e                   pop esi
// 00471a66  5b                   pop ebx
// 00471a67  c3                   ret 
// 00471a68  8b442414             mov eax, dword ptr [esp + 0x14]
// 00471a6c  5e                   pop esi
// 00471a6d  5b                   pop ebx
// 00471a6e  c3                   ret 
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