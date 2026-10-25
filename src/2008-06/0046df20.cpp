// from server: 100% by king_originala
// roc 2008-06 0046df20  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046df20
//
// 0046df20  56                   push esi
// 0046df21  8b742408             mov esi, dword ptr [esp + 8]
// 0046df25  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0046df29  7437                 je 0x46df62
// 0046df2b  53                   push ebx
// 0046df2c  55                   push ebp
// 0046df2d  57                   push edi
// 0046df2e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046df32  8d5f08               lea ebx, [edi + 8]
// 0046df35  8d6f24               lea ebp, [edi + 0x24]
// 0046df38  8b07                 mov eax, dword ptr [edi]
// 0046df3a  8906                 mov dword ptr [esi], eax
// 0046df3c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0046df3f  894e04               mov dword ptr [esi + 4], ecx
// 0046df42  53                   push ebx
// 0046df43  8d4e08               lea ecx, [esi + 8]
// 0046df46  ff150c248000         call dword ptr [0x80240c]
// 0046df4c  55                   push ebp
// 0046df4d  8d4e24               lea ecx, [esi + 0x24]
// 0046df50  ff150c248000         call dword ptr [0x80240c]
// 0046df56  83c640               add esi, 0x40
// 0046df59  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0046df5d  75d9                 jne 0x46df38
// 0046df5f  5f                   pop edi
// 0046df60  5d                   pop ebp
// 0046df61  5b                   pop ebx
// 0046df62  5e                   pop esi
// 0046df63  c3                   ret 

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
