// from server: 75% by colin
// roc 2007-08 00544f40  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544f40
//
// 00544f40  56                   push esi
// 00544f41  8b742408             mov esi, dword ptr [esp + 8]
// 00544f45  6a07                 push 7
// 00544f47  6a00                 push 0
// 00544f49  68186f7a00           push 0x7a6f18
// 00544f4e  8bce                 mov ecx, esi
// 00544f50  ff157ce57700         call dword ptr [0x77e57c]
// 00544f56  85c0                 test eax, eax
// 00544f58  7504                 jne 0x544f5e
// 00544f5a  b001                 mov al, 1
// 00544f5c  5e                   pop esi
// 00544f5d  c3                   ret 
// 00544f5e  6a08                 push 8
// 00544f60  6a00                 push 0
// 00544f62  680c6f7a00           push 0x7a6f0c
// 00544f67  8bce                 mov ecx, esi
// 00544f69  ff157ce57700         call dword ptr [0x77e57c]
// 00544f6f  85c0                 test eax, eax
// 00544f71  0f94c0               sete al
// 00544f74  5e                   pop esi
// 00544f75  c3                   ret 

struct SettingsItem {
    bool isHttpUrl() const;
};

extern "C" int __stdcall std_string_find(const void*, const char*, unsigned int, unsigned int);

bool SettingsItem::isHttpUrl() const
{
    const char* self = reinterpret_cast<const char*>(this);
    if (std_string_find(self, "http://", 0, 7) == 0)
        return true;
    return std_string_find(self, "https://", 0, 8) == 0;
}
