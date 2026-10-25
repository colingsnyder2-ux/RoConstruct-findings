// from server: 100% by king_originala
// roc 2008-06 00659330  unit: RBX::BallBallContact  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659330
//
// 00659330  8b442404             mov eax, dword ptr [esp + 4]
// 00659334  8b10                 mov edx, dword ptr [eax]
// 00659336  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065933a  3b510c               cmp edx, dword ptr [ecx + 0xc]
// 0065933d  7f2a                 jg 0x659369
// 0065933f  8b5004               mov edx, dword ptr [eax + 4]
// 00659342  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 00659345  7f22                 jg 0x659369
// 00659347  8b5008               mov edx, dword ptr [eax + 8]
// 0065934a  3b5114               cmp edx, dword ptr [ecx + 0x14]
// 0065934d  7f1a                 jg 0x659369
// 0065934f  8b5010               mov edx, dword ptr [eax + 0x10]
// 00659352  3b5104               cmp edx, dword ptr [ecx + 4]
// 00659355  7c12                 jl 0x659369
// 00659357  8b500c               mov edx, dword ptr [eax + 0xc]
// 0065935a  3b11                 cmp edx, dword ptr [ecx]
// 0065935c  7c0b                 jl 0x659369
// 0065935e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00659361  3b4108               cmp eax, dword ptr [ecx + 8]
// 00659364  7c03                 jl 0x659369
// 00659366  b001                 mov al, 1
// 00659368  c3                   ret 
// 00659369  32c0                 xor al, al
// 0065936b  c3                   ret 

struct Box {
    int minX, minY, minZ;
    int maxX, maxY, maxZ;
};

bool __cdecl intersects(const Box* a, const Box* b)
{
    if (a->minX <= b->maxX &&
        a->minY <= b->maxY &&
        a->minZ <= b->maxZ &&
        a->maxY >= b->minY &&
        a->maxX >= b->minX &&
        a->maxZ >= b->minZ)
        return true;
    return false;
}
