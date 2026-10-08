// from server: 58% by colin
// roc 2011-06 006ae530  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ae530
//
// 006ae530  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006ae533  83e001               and eax, 1
// 006ae536  c3                   ret 

struct VPlayer {
    int flags;
};

int VPlayer_f(VPlayer* thisPtr) {
    return thisPtr->flags & 1;
}
