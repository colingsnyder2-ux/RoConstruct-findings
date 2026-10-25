// from server: 100% by king_originala
// roc 2008-06 00566720  unit: RBX::VTeam::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566720
//
// 00566720  8a442404             mov al, byte ptr [esp + 4]
// 00566724  388138010000         cmp byte ptr [ecx + 0x138], al
// 0056672a  7413                 je 0x56673f
// 0056672c  888138010000         mov byte ptr [ecx + 0x138], al
// 00566732  c7442404b0489700     mov dword ptr [esp + 4], 0x9748b0
// 0056673a  e9c173eaff           jmp 0x40db00
// 0056673f  c20400               ret 4

extern unsigned char notification;

struct S {
    unsigned char padding[0x138];
    bool value;
    void notify(void*);
    void setValue(bool);
};

void S::setValue(bool v)
{
    if (value != v) {
        value = v;
        notify(&notification);
    }
}
