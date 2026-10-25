// from server: 100% by king_originala
// roc 2008-06 004aada0  unit: RBX::VNetworkSettings::?$GlobalSettingsItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aada0
//
// 004aada0  8b442404             mov eax, dword ptr [esp + 4]
// 004aada4  8b00                 mov eax, dword ptr [eax]
// 004aada6  3b8138010000         cmp eax, dword ptr [ecx + 0x138]
// 004aadac  7413                 je 0x4aadc1
// 004aadae  898138010000         mov dword ptr [ecx + 0x138], eax
// 004aadb4  c74424049c129700     mov dword ptr [esp + 4], 0x97129c
// 004aadbc  e93f2df6ff           jmp 0x40db00
// 004aadc1  c20400               ret 4

extern char property;

struct S
{
    char padding[0x138];
    int value;
    void notify(const void *);
    void set(const int *);
};

void S::set(const int *v)
{
    if (*v != value)
    {
        value = *v;
        notify(&property);
    }
}
