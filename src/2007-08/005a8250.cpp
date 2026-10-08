// from server: 81% by colin
// roc 2007-08 005a8250  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8250
//
// 005a8250  8a9164010000         mov dl, byte ptr [ecx + 0x164]
// 005a8256  8a442404             mov al, byte ptr [esp + 4]
// 005a825a  53                   push ebx
// 005a825b  8ada                 mov bl, dl
// 005a825d  c0eb03               shr bl, 3
// 005a8260  80e301               and bl, 1
// 005a8263  3ad8                 cmp bl, al
// 005a8265  5b                   pop ebx
// 005a8266  741f                 je 0x5a8287
// 005a8268  02c0                 add al, al
// 005a826a  02c0                 add al, al
// 005a826c  02c0                 add al, al
// 005a826e  32c2                 xor al, dl
// 005a8270  2408                 and al, 8
// 005a8272  32c2                 xor al, dl
// 005a8274  888164010000         mov byte ptr [ecx + 0x164], al
// 005a827a  c744240408588c00     mov dword ptr [esp + 4], 0x8c5808
// 005a8282  e989c4e9ff           jmp 0x444710
// 005a8287  c20400               ret 4

struct VHumanoidBoundFuncDesc {
    unsigned char flags;
    unsigned char pad[0x163];
    void setBool(bool value);
};

void VHumanoidBoundFuncDesc::setBool(bool value)
{
    unsigned char oldFlags = *(unsigned char*)((char*)this + 0x164);
    unsigned char oldBit = (oldFlags >> 3) & 1;
    if (oldBit != (unsigned char)value) {
        unsigned char newFlags = oldFlags ^ (((unsigned char)value << 3) & 8);
        *(unsigned char*)((char*)this + 0x164) = newFlags;
        extern void __stdcall sub_444710();
        sub_444710();
    }
}
