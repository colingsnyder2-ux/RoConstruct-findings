// from server: 100% by king_originala
// roc 2008-06 005e7ca0  unit: RBX::Geometry  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7ca0
//
// 005e7ca0  8b442404             mov eax, dword ptr [esp + 4]
// 005e7ca4  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 005e7ca7  7505                 jne 0x5e7cae
// 005e7ca9  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e7cac  eb03                 jmp 0x5e7cb1
// 005e7cae  8b4018               mov eax, dword ptr [eax + 0x18]
// 005e7cb1  40                   inc eax
// 005e7cb2  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005e7cb5  7d0f                 jge 0x5e7cc6
// 005e7cb7  8b5138               mov edx, dword ptr [ecx + 0x38]
// 005e7cba  8b0482               mov eax, dword ptr [edx + eax*4]
// 005e7cbd  89442404             mov dword ptr [esp + 4], eax
// 005e7cc1  e94affffff           jmp 0x5e7c10
// 005e7cc6  33c0                 xor eax, eax
// 005e7cc8  89442404             mov dword ptr [esp + 4], eax
// 005e7ccc  e93fffffff           jmp 0x5e7c10

struct Geometry {
    int next(void* item);
    int resolve(void* item);
};

int Geometry::next(void* item) {
    int index;
    if (this == *(Geometry**)((char*)item + 0x0c))
        index = *(int*)((char*)item + 0x14);
    else
        index = *(int*)((char*)item + 0x18);

    ++index;
    if (index < *(int*)((char*)this + 0x3c))
        item = (*(void***)((char*)this + 0x38))[index];
    else
        item = 0;

    return resolve(item);
}
