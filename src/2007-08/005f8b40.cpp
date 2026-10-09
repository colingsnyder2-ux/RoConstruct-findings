// from server: 98% by colin
// roc 2007-08 005f8b40  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8b40
//
// 005f8b40  8b442404             mov eax, dword ptr [esp + 4]
// 005f8b44  56                   push esi
// 005f8b45  50                   push eax
// 005f8b46  8bf1                 mov esi, ecx
// 005f8b48  e8639bf4ff           call 0x5426b0
// 005f8b4d  c7063c1b7c00         mov dword ptr [esi], 0x7c1b3c
// 005f8b53  c74604341b7c00       mov dword ptr [esi + 4], 0x7c1b34
// 005f8b5a  c746102c1b7c00       mov dword ptr [esi + 0x10], 0x7c1b2c
// 005f8b61  c746141c1b7c00       mov dword ptr [esi + 0x14], 0x7c1b1c
// 005f8b68  c7462c0c1b7c00       mov dword ptr [esi + 0x2c], 0x7c1b0c
// 005f8b6f  c74644fc1a7c00       mov dword ptr [esi + 0x44], 0x7c1afc
// 005f8b76  c7465cec1a7c00       mov dword ptr [esi + 0x5c], 0x7c1aec
// 005f8b7d  c74674dc1a7c00       mov dword ptr [esi + 0x74], 0x7c1adc
// 005f8b84  c7868c000000cc1a7c00 mov dword ptr [esi + 0x8c], 0x7c1acc
// 005f8b8e  8bc6                 mov eax, esi
// 005f8b90  5e                   pop esi
// 005f8b91  c20400               ret 4

struct SignalDesc {
    SignalDesc* construct(int);
    void* vtbl0;
    void* vtbl4;
    char pad8[8];
    void* vtbl10;
    void* vtbl14;
    char pad18[0x14];
    void* vtbl2c;
    char pad30[0x14];
    void* vtbl44;
    char pad48[0x14];
    void* vtbl5c;
    char pad60[0x14];
    void* vtbl74;
    char pad78[0x14];
    void* vtbl8c;
};

struct Base {
    void sub_5426B0(int);
};

SignalDesc* SignalDesc::construct(int a)
{
    ((Base*)this)->sub_5426B0(a);
    vtbl0 = (void*)0x7c1b3c;
    vtbl4 = (void*)0x7c1b34;
    vtbl10 = (void*)0x7c1b2c;
    vtbl14 = (void*)0x7c1b1c;
    vtbl2c = (void*)0x7c1b0c;
    vtbl44 = (void*)0x7c1afc;
    vtbl5c = (void*)0x7c1aec;
    vtbl74 = (void*)0x7c1adc;
    vtbl8c = (void*)0x7c1acc;
    return this;
}
