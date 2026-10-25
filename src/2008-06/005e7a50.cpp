// from server: 100% by king_originala
// roc 2008-06 005e7a50  unit: RBX::Geometry  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7a50
//
// 005e7a50  83ec18               sub esp, 0x18
// 005e7a53  56                   push esi
// 005e7a54  8bf1                 mov esi, ecx
// 005e7a56  57                   push edi
// 005e7a57  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 005e7a5d  8bcf                 mov ecx, edi
// 005e7a5f  e8fc18fbff           call 0x599360
// 005e7a64  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 005e7a6a  3b8790000000         cmp eax, dword ptr [edi + 0x90]
// 005e7a70  745a                 je 0x5e7acc
// 005e7a72  8d4c2408             lea ecx, [esp + 8]
// 005e7a76  51                   push ecx
// 005e7a77  8bce                 mov ecx, esi
// 005e7a79  e802ffffff           call 0x5e7980
// 005e7a7e  d900                 fld dword ptr [eax]
// 005e7a80  d99e80000000         fstp dword ptr [esi + 0x80]
// 005e7a86  d94004               fld dword ptr [eax + 4]
// 005e7a89  d99e84000000         fstp dword ptr [esi + 0x84]
// 005e7a8f  d94008               fld dword ptr [eax + 8]
// 005e7a92  d99e88000000         fstp dword ptr [esi + 0x88]
// 005e7a98  d9400c               fld dword ptr [eax + 0xc]
// 005e7a9b  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 005e7aa1  d94010               fld dword ptr [eax + 0x10]
// 005e7aa4  d99e90000000         fstp dword ptr [esi + 0x90]
// 005e7aaa  d94014               fld dword ptr [eax + 0x14]
// 005e7aad  d99e94000000         fstp dword ptr [esi + 0x94]
// 005e7ab3  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 005e7ab9  8bcf                 mov ecx, edi
// 005e7abb  e8a018fbff           call 0x599360
// 005e7ac0  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 005e7ac6  899698000000         mov dword ptr [esi + 0x98], edx
// 005e7acc  5f                   pop edi
// 005e7acd  8d8680000000         lea eax, [esi + 0x80]
// 005e7ad3  5e                   pop esi
// 005e7ad4  83c418               add esp, 0x18
// 005e7ad7  c3                   ret 

struct Box {
    float x0, y0, z0;
    float x1, y1, z1;
};

struct Source {
    char reserved[0x90];
    unsigned int version;
    const void* get();
};

struct Geometry {
    char reserved0[0x80];
    volatile Box bounds;
    unsigned int version;
    char reserved1[4];
    Source* volatile source;

    Box* calculate(Box* result);
    const Box& getBounds();
};

const Box& Geometry::getBounds() {
    Source* current = source;
    current->get();
    if (version != current->version) {
        Box temporary;
        const Box* result = calculate(&temporary);
        bounds.x0 = result->x0;
        bounds.y0 = result->y0;
        bounds.z0 = result->z0;
        bounds.x1 = result->x1;
        bounds.y1 = result->y1;
        bounds.z1 = result->z1;
        current = source;
        current->get();
        version = current->version;
    }
    return const_cast<const Box&>(bounds);
}
