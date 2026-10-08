// from server: 85% by colin
// roc 2007-08 0058b9c0  unit: RBX::SoundService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058b9c0
//
// 0058b9c0  8a442404             mov al, byte ptr [esp + 4]
// 0058b9c4  56                   push esi
// 0058b9c5  8bf1                 mov esi, ecx
// 0058b9c7  8a8e1d010000         mov cl, byte ptr [esi + 0x11d]
// 0058b9cd  8ad1                 mov dl, cl
// 0058b9cf  d0ea                 shr dl, 1
// 0058b9d1  80e201               and dl, 1
// 0058b9d4  3ad0                 cmp dl, al
// 0058b9d6  7421                 je 0x58b9f9
// 0058b9d8  02c0                 add al, al
// 0058b9da  32c1                 xor al, cl
// 0058b9dc  2402                 and al, 2
// 0058b9de  32c1                 xor al, cl
// 0058b9e0  8bce                 mov ecx, esi
// 0058b9e2  88861d010000         mov byte ptr [esi + 0x11d], al
// 0058b9e8  e8d3beffff           call 0x5878c0
// 0058b9ed  6888348c00           push 0x8c3488
// 0058b9f2  8bce                 mov ecx, esi
// 0058b9f4  e8178debff           call 0x444710
// 0058b9f9  5e                   pop esi
// 0058b9fa  c20400               ret 4

struct SoundService {
    char pad[0x11d];
    unsigned char flags;
    void setPublic(bool value);
    void notifyChanged();
};

void SoundService::setPublic(bool value) {
    unsigned char oldFlags = flags;
    unsigned char oldBit = (oldFlags >> 1) & 1;
    if (oldBit != (unsigned char)value) {
        unsigned char newFlags = ((unsigned char)value + (unsigned char)value) ^ oldFlags;
        newFlags &= 2;
        newFlags ^= oldFlags;
        flags = newFlags;
        this->notifyChanged();
        extern void signalServiceChanged(SoundService*);
        signalServiceChanged(this);
    }
}
