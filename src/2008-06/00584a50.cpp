// from server: 100% by king_originala
// roc 2008-06 00584a50  unit: RBX::ModelInstance  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584a50
//
// 00584a50  83ec18               sub esp, 0x18
// 00584a53  8d0424               lea eax, [esp]
// 00584a56  50                   push eax
// 00584a57  81c158020000         add ecx, 0x258
// 00584a5d  e8deebffff           call 0x583640
// 00584a62  d90424               fld dword ptr [esp]
// 00584a65  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00584a69  d918                 fstp dword ptr [eax]
// 00584a6b  d9442404             fld dword ptr [esp + 4]
// 00584a6f  d95804               fstp dword ptr [eax + 4]
// 00584a72  d9442408             fld dword ptr [esp + 8]
// 00584a76  d95808               fstp dword ptr [eax + 8]
// 00584a79  d944240c             fld dword ptr [esp + 0xc]
// 00584a7d  d9580c               fstp dword ptr [eax + 0xc]
// 00584a80  d9442410             fld dword ptr [esp + 0x10]
// 00584a84  d95810               fstp dword ptr [eax + 0x10]
// 00584a87  d9442414             fld dword ptr [esp + 0x14]
// 00584a8b  d95814               fstp dword ptr [eax + 0x14]
// 00584a8e  83c418               add esp, 0x18
// 00584a91  c20400               ret 4

struct Bounds {
    float x0, y0, z0;
    float x1, y1, z1;
};

struct BoundsCache {
    Bounds get();
};

struct ModelInstance {
    char pad[0x258];
    BoundsCache cache;
    Bounds getBounds();
};

Bounds ModelInstance::getBounds() {
    Bounds temporary = cache.get();
    Bounds result;
    result.x0 = temporary.x0;
    result.y0 = temporary.y0;
    result.z0 = temporary.z0;
    result.x1 = temporary.x1;
    result.y1 = temporary.y1;
    result.z1 = temporary.z1;
    return result;
}
