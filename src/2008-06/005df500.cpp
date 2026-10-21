// from server: 100% by colin
// roc 2008-06 005df500  unit: RBX::Message  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df500
//
// 005df500  80b97c01000000       cmp byte ptr [ecx + 0x17c], 0
// 005df507  7408                 je 0x5df511
// 005df509  81c180010000         add ecx, 0x180
// 005df50f  eb06                 jmp 0x5df517
// 005df511  81c18c010000         add ecx, 0x18c
// 005df517  8b442404             mov eax, dword ptr [esp + 4]
// 005df51b  d901                 fld dword ptr [ecx]
// 005df51d  d918                 fstp dword ptr [eax]
// 005df51f  d94104               fld dword ptr [ecx + 4]
// 005df522  d95804               fstp dword ptr [eax + 4]
// 005df525  d94108               fld dword ptr [ecx + 8]
// 005df528  d95808               fstp dword ptr [eax + 8]
// 005df52b  c20400               ret 4

// from server: 80% by colin
struct Message {
    char padding[0x17c];
    unsigned char flag;
    char alignment[3];
    char first[0xc];
    char second[0xc];
    struct Cost { float x, y, z; };
    Cost getPtr() const;
};

Message::Cost Message::getPtr() const {
    const Cost* source;
    if (flag)
        source = reinterpret_cast<const Cost*>(first);
    else
        source = reinterpret_cast<const Cost*>(second);
    Cost result;
    result.x = source->x;
    result.y = source->y;
    result.z = source->z;
    return result;
}
