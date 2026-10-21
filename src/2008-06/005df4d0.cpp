// from server: 100% by colin
// roc 2008-06 005df4d0  unit: RBX::Message  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df4d0
//
// 005df4d0  80b97c01000000       cmp byte ptr [ecx + 0x17c], 0
// 005df4d7  7408                 je 0x5df4e1
// 005df4d9  81c198010000         add ecx, 0x198
// 005df4df  eb06                 jmp 0x5df4e7
// 005df4e1  81c1a4010000         add ecx, 0x1a4
// 005df4e7  8b442404             mov eax, dword ptr [esp + 4]
// 005df4eb  d901                 fld dword ptr [ecx]
// 005df4ed  d918                 fstp dword ptr [eax]
// 005df4ef  d94104               fld dword ptr [ecx + 4]
// 005df4f2  d95804               fstp dword ptr [eax + 4]
// 005df4f5  d94108               fld dword ptr [ecx + 8]
// 005df4f8  d95808               fstp dword ptr [eax + 8]
// 005df4fb  c20400               ret 4

// from server: 80% by colin




namespace RBX {

struct Message {
    char pad[0x17c];
    bool flag;
    char pad2[0x1a4 - 0x17d];
    struct Cost { float x, y, z; };
    Cost getPersistentDataCost() const;
};

Message::Cost Message::getPersistentDataCost() const {
    const Cost* source;
    if (flag)
        source = reinterpret_cast<const Cost*>((const char*)this + 0x198);
    else
        source = reinterpret_cast<const Cost*>((const char*)this + 0x1a4);
    Cost result;
    result.x = source->x;
    result.y = source->y;
    result.z = source->z;
    return result;
}

}
