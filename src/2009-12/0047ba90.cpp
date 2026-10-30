// roc 2009-12 0047ba90  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047ba90
//
// 0047ba90  56                   push esi
// 0047ba91  8b742408             mov esi, dword ptr [esp + 8]
// 0047ba95  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0047ba99  7437                 je 0x47bad2
// 0047ba9b  53                   push ebx
// 0047ba9c  55                   push ebp
// 0047ba9d  57                   push edi
// 0047ba9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047baa2  8d5f08               lea ebx, [edi + 8]
// 0047baa5  8d6f24               lea ebp, [edi + 0x24]
// 0047baa8  8b07                 mov eax, dword ptr [edi]
// 0047baaa  8906                 mov dword ptr [esi], eax
// 0047baac  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047baaf  894e04               mov dword ptr [esi + 4], ecx
// 0047bab2  53                   push ebx
// 0047bab3  8d4e08               lea ecx, [esi + 8]
// 0047bab6  ff159cb69800         call dword ptr [0x98b69c]
// 0047babc  55                   push ebp
// 0047babd  8d4e24               lea ecx, [esi + 0x24]
// 0047bac0  ff159cb69800         call dword ptr [0x98b69c]
// 0047bac6  83c640               add esi, 0x40
// 0047bac9  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0047bacd  75d9                 jne 0x47baa8
// 0047bacf  5f                   pop edi
// 0047bad0  5d                   pop ebp
// 0047bad1  5b                   pop ebx
// 0047bad2  5e                   pop esi
// 0047bad3  c3                   ret 
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