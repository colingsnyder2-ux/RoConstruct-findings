// from server: 93% by colin
// roc 2007-08 005b4770  unit: RBX::Geometry  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4770
//
// 005b4770  56                   push esi
// 005b4771  8bf1                 mov esi, ecx
// 005b4773  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b4777  3b7108               cmp esi, dword ptr [ecx + 8]
// 005b477a  7505                 jne 0x5b4781
// 005b477c  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005b477f  eb03                 jmp 0x5b4784
// 005b4781  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005b4784  85c0                 test eax, eax
// 005b4786  7514                 jne 0x5b479c
// 005b4788  8b01                 mov eax, dword ptr [ecx]
// 005b478a  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b478d  ffd2                 call edx
// 005b478f  85c0                 test eax, eax
// 005b4791  7507                 jne 0x5b479a
// 005b4793  8b4608               mov eax, dword ptr [esi + 8]
// 005b4796  5e                   pop esi
// 005b4797  c20400               ret 4
// 005b479a  33c0                 xor eax, eax
// 005b479c  5e                   pop esi
// 005b479d  c20400               ret 4

struct Geometry {
    char pad[8];
    int field8;
    char pad2[4];
    int field10;
    int field14;
    int getBulletCollisionObject(Geometry* other);
};

int Geometry::getBulletCollisionObject(Geometry* other) {
    int result;
    if (this == *(Geometry**)((char*)other + 8)) {
        result = *(int*)((char*)other + 0x10);
    } else {
        result = *(int*)((char*)other + 0x14);
    }
    if (result == 0) {
        int* vtable = *(int**)other;
        int (*fn)(void) = (int (*)(void))vtable[3];
        result = fn();
        if (result == 0) {
            return *(int*)((char*)this + 8);
        }
        return 0;
    }
    return result;
}
