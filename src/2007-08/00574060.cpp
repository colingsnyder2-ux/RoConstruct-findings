// from server: 100% by colin
// roc 2007-08 00574060  unit: RBX::PartInstance  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574060
//
// 00574060  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00574066  80787000             cmp byte ptr [eax + 0x70], 0
// 0057406a  7509                 jne 0x574075
// 0057406c  80787200             cmp byte ptr [eax + 0x72], 0
// 00574070  7403                 je 0x574075
// 00574072  b001                 mov al, 1
// 00574074  c3                   ret 
// 00574075  32c0                 xor al, al
// 00574077  c3                   ret 

struct PartInstance {
    char pad[0x1d8];
    void* field_1d8;
    bool getSomething() const;
};

bool PartInstance::getSomething() const
{
    char* p = (char*)field_1d8;
    if (p[0x70] == 0 && p[0x72] != 0)
        return true;
    return false;
}
