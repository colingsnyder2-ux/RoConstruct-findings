// from server: 80% by colin
// roc 2007-08 0059fce0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059fce0
//
// 0059fce0  8b8980020000         mov ecx, dword ptr [ecx + 0x280]
// 0059fce6  8b442404             mov eax, dword ptr [esp + 4]
// 0059fcea  8908                 mov dword ptr [eax], ecx
// 0059fcec  c20400               ret 4

struct S
{
    char pad[0x280];
    int value;
    void setValue(int* out);
};

void S::setValue(int* out)
{
    *out = value;
}
