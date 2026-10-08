// from server: 60% by colin
// roc 2007-08 005a8210  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8210
//
// 005a8210  8a8164010000         mov al, byte ptr [ecx + 0x164]
// 005a8216  8a542404             mov dl, byte ptr [esp + 4]
// 005a821a  53                   push ebx
// 005a821b  8ad8                 mov bl, al
// 005a821d  80e301               and bl, 1
// 005a8220  3ada                 cmp bl, dl
// 005a8222  741d                 je 0x5a8241
// 005a8224  8ad8                 mov bl, al
// 005a8226  32da                 xor bl, dl
// 005a8228  80e301               and bl, 1
// 005a822b  32d8                 xor bl, al
// 005a822d  889964010000         mov byte ptr [ecx + 0x164], bl
// 005a8233  5b                   pop ebx
// 005a8234  c744240464578c00     mov dword ptr [esp + 4], 0x8c5764
// 005a823c  e9cfc4e9ff           jmp 0x444710
// 005a8241  5b                   pop ebx
// 005a8242  c20400               ret 4

struct VHumanoid {
    char pad[0x164];
    unsigned char flags;
    void setFlag(bool value);
};

void VHumanoid::setFlag(bool value) {
    unsigned char old = flags;
    if ((old & 1) != (unsigned char)value) {
        flags = (unsigned char)((old ^ (unsigned char)value) & 1) ^ old;
        extern void notify();
        notify();
    }
}
