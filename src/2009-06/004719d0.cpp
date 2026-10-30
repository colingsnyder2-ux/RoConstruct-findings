// roc 2009-06 004719d0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004719d0
//
// 004719d0  56                   push esi
// 004719d1  8b742408             mov esi, dword ptr [esp + 8]
// 004719d5  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 004719d9  7437                 je 0x471a12
// 004719db  53                   push ebx
// 004719dc  55                   push ebp
// 004719dd  57                   push edi
// 004719de  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004719e2  8d5f08               lea ebx, [edi + 8]
// 004719e5  8d6f24               lea ebp, [edi + 0x24]
// 004719e8  8b07                 mov eax, dword ptr [edi]
// 004719ea  8906                 mov dword ptr [esi], eax
// 004719ec  8b4f04               mov ecx, dword ptr [edi + 4]
// 004719ef  894e04               mov dword ptr [esi + 4], ecx
// 004719f2  53                   push ebx
// 004719f3  8d4e08               lea ecx, [esi + 8]
// 004719f6  ff1564e48900         call dword ptr [0x89e464]
// 004719fc  55                   push ebp
// 004719fd  8d4e24               lea ecx, [esi + 0x24]
// 00471a00  ff1564e48900         call dword ptr [0x89e464]
// 00471a06  83c640               add esi, 0x40
// 00471a09  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00471a0d  75d9                 jne 0x4719e8
// 00471a0f  5f                   pop edi
// 00471a10  5d                   pop ebp
// 00471a11  5b                   pop ebx
// 00471a12  5e                   pop esi
// 00471a13  c3                   ret 
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