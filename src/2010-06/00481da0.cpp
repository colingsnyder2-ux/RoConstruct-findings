// roc 2010-06 00481da0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00481da0
//
// 00481da0  53                   push ebx
// 00481da1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00481da5  56                   push esi
// 00481da6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00481daa  3bde                 cmp ebx, esi
// 00481dac  743a                 je 0x481de8
// 00481dae  57                   push edi
// 00481daf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00481db3  8b46c0               mov eax, dword ptr [esi - 0x40]
// 00481db6  83ee40               sub esi, 0x40
// 00481db9  83ef40               sub edi, 0x40
// 00481dbc  8907                 mov dword ptr [edi], eax
// 00481dbe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00481dc1  8d5608               lea edx, [esi + 8]
// 00481dc4  894f04               mov dword ptr [edi + 4], ecx
// 00481dc7  52                   push edx
// 00481dc8  8d4f08               lea ecx, [edi + 8]
// 00481dcb  ff1568a49e00         call dword ptr [0x9ea468]
// 00481dd1  8d4624               lea eax, [esi + 0x24]
// 00481dd4  50                   push eax
// 00481dd5  8d4f24               lea ecx, [edi + 0x24]
// 00481dd8  ff1568a49e00         call dword ptr [0x9ea468]
// 00481dde  3bf3                 cmp esi, ebx
// 00481de0  75d1                 jne 0x481db3
// 00481de2  8bc7                 mov eax, edi
// 00481de4  5f                   pop edi
// 00481de5  5e                   pop esi
// 00481de6  5b                   pop ebx
// 00481de7  c3                   ret 
// 00481de8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00481dec  5e                   pop esi
// 00481ded  5b                   pop ebx
// 00481dee  c3                   ret 
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