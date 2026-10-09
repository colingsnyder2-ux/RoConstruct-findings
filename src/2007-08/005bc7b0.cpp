// from server: 69% by colin
// roc 2007-08 005bc7b0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc7b0
//
// 005bc7b0  8b542404             mov edx, dword ptr [esp + 4]
// 005bc7b4  d9420c               fld dword ptr [edx + 0xc]
// 005bc7b7  d819                 fcomp dword ptr [ecx]
// 005bc7b9  dfe0                 fnstsw ax
// 005bc7bb  f6c405               test ah, 5
// 005bc7be  7b45                 jnp 0x5bc805
// 005bc7c0  d94210               fld dword ptr [edx + 0x10]
// 005bc7c3  d85904               fcomp dword ptr [ecx + 4]
// 005bc7c6  dfe0                 fnstsw ax
// 005bc7c8  f6c405               test ah, 5
// 005bc7cb  7b38                 jnp 0x5bc805
// 005bc7cd  d94214               fld dword ptr [edx + 0x14]
// 005bc7d0  d85908               fcomp dword ptr [ecx + 8]
// 005bc7d3  dfe0                 fnstsw ax
// 005bc7d5  f6c405               test ah, 5
// 005bc7d8  7b2b                 jnp 0x5bc805
// 005bc7da  d94204               fld dword ptr [edx + 4]
// 005bc7dd  d85910               fcomp dword ptr [ecx + 0x10]
// 005bc7e0  dfe0                 fnstsw ax
// 005bc7e2  f6c441               test ah, 0x41
// 005bc7e5  741e                 je 0x5bc805
// 005bc7e7  d902                 fld dword ptr [edx]
// 005bc7e9  d8590c               fcomp dword ptr [ecx + 0xc]
// 005bc7ec  dfe0                 fnstsw ax
// 005bc7ee  f6c441               test ah, 0x41
// 005bc7f1  7412                 je 0x5bc805
// 005bc7f3  d94208               fld dword ptr [edx + 8]
// 005bc7f6  d85914               fcomp dword ptr [ecx + 0x14]
// 005bc7f9  dfe0                 fnstsw ax
// 005bc7fb  f6c441               test ah, 0x41
// 005bc7fe  7405                 je 0x5bc805
// 005bc800  b001                 mov al, 1
// 005bc802  c20400               ret 4
// 005bc805  32c0                 xor al, al
// 005bc807  c20400               ret 4

struct EnumPropDescriptor
{
    float field_0;
    float field_4;
    float field_8;
    float field_c;
    float field_10;
    float field_14;
    bool compare(const void* other);
};

bool EnumPropDescriptor::compare(const void* other)
{
    const float* o = (const float*)other;
    if (o[3] != field_0 &&
        o[4] != field_4 &&
        o[5] != field_8 &&
        o[1] >= field_10 &&
        o[0] >= field_c &&
        o[2] >= field_14)
    {
        return true;
    }
    return false;
}
