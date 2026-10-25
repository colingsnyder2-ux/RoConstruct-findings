// from server: 100% by king_originala
// roc 2008-06 0046df70  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046df70
//
// 0046df70  53                   push ebx
// 0046df71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046df75  56                   push esi
// 0046df76  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046df7a  3bde                 cmp ebx, esi
// 0046df7c  743a                 je 0x46dfb8
// 0046df7e  57                   push edi
// 0046df7f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0046df83  8b46c0               mov eax, dword ptr [esi - 0x40]
// 0046df86  83ee40               sub esi, 0x40
// 0046df89  83ef40               sub edi, 0x40
// 0046df8c  8907                 mov dword ptr [edi], eax
// 0046df8e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046df91  8d5608               lea edx, [esi + 8]
// 0046df94  894f04               mov dword ptr [edi + 4], ecx
// 0046df97  52                   push edx
// 0046df98  8d4f08               lea ecx, [edi + 8]
// 0046df9b  ff150c248000         call dword ptr [0x80240c]
// 0046dfa1  8d4624               lea eax, [esi + 0x24]
// 0046dfa4  50                   push eax
// 0046dfa5  8d4f24               lea ecx, [edi + 0x24]
// 0046dfa8  ff150c248000         call dword ptr [0x80240c]
// 0046dfae  3bf3                 cmp esi, ebx
// 0046dfb0  75d1                 jne 0x46df83
// 0046dfb2  8bc7                 mov eax, edi
// 0046dfb4  5f                   pop edi
// 0046dfb5  5e                   pop esi
// 0046dfb6  5b                   pop ebx
// 0046dfb7  c3                   ret 
// 0046dfb8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046dfbc  5e                   pop esi
// 0046dfbd  5b                   pop ebx
// 0046dfbe  c3                   ret 

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
