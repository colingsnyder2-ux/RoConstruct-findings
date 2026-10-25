// from server: 100% by king_originala
// roc 2008-06 005dc270  unit: RBX::VPartInstance::?$FilteredSelection  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc270
//
// 005dc270  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 005dc276  8a542404             mov dl, byte ptr [esp + 4]
// 005dc27a  53                   push ebx
// 005dc27b  8ad8                 mov bl, al
// 005dc27d  80e301               and bl, 1
// 005dc280  3ada                 cmp bl, dl
// 005dc282  741d                 je 0x5dc2a1
// 005dc284  8ad8                 mov bl, al
// 005dc286  32da                 xor bl, dl
// 005dc288  80e301               and bl, 1
// 005dc28b  32d8                 xor bl, al
// 005dc28d  8899e8010000         mov byte ptr [ecx + 0x1e8], bl
// 005dc293  5b                   pop ebx
// 005dc294  c74424046ca29700     mov dword ptr [esp + 4], 0x97a26c
// 005dc29c  e95f18e3ff           jmp 0x40db00
// 005dc2a1  5b                   pop ebx
// 005dc2a2  c20400               ret 4

extern char descriptor;

struct S {
    char padding[0x1e8];
    bool enabled : 1;

    void notify(const char&);
    void setEnabled(bool value);
};

void S::setEnabled(bool value)
{
    if (enabled != value) {
        enabled = value;
        notify(descriptor);
    }
}
