// roc 2010-06 00481d50  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00481d50
//
// 00481d50  56                   push esi
// 00481d51  8b742408             mov esi, dword ptr [esp + 8]
// 00481d55  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00481d59  7437                 je 0x481d92
// 00481d5b  53                   push ebx
// 00481d5c  55                   push ebp
// 00481d5d  57                   push edi
// 00481d5e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00481d62  8d5f08               lea ebx, [edi + 8]
// 00481d65  8d6f24               lea ebp, [edi + 0x24]
// 00481d68  8b07                 mov eax, dword ptr [edi]
// 00481d6a  8906                 mov dword ptr [esi], eax
// 00481d6c  8b4f04               mov ecx, dword ptr [edi + 4]
// 00481d6f  894e04               mov dword ptr [esi + 4], ecx
// 00481d72  53                   push ebx
// 00481d73  8d4e08               lea ecx, [esi + 8]
// 00481d76  ff1568a49e00         call dword ptr [0x9ea468]
// 00481d7c  55                   push ebp
// 00481d7d  8d4e24               lea ecx, [esi + 0x24]
// 00481d80  ff1568a49e00         call dword ptr [0x9ea468]
// 00481d86  83c640               add esi, 0x40
// 00481d89  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00481d8d  75d9                 jne 0x481d68
// 00481d8f  5f                   pop edi
// 00481d90  5d                   pop ebp
// 00481d91  5b                   pop ebx
// 00481d92  5e                   pop esi
// 00481d93  c3                   ret 
// copied from an identical function in another client (function ?fillEntries@@YAXPAUEntry@@0PBU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String {
    char storage[28];
};

typedef String& (__thiscall *StringAssign)(String*, const String&);
extern StringAssign assignString;

struct Entry {
    unsigned int first;
    unsigned int second;
    String name;
    String value;
};

void __cdecl fillEntries(Entry* first, Entry* last, const Entry* source)
{
    for (; first != last; ++first) {
        first->first = source->first;
        first->second = source->second;
        assignString(&first->name, source->name);
        assignString(&first->value, source->value);
    }
}