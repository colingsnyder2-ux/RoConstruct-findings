// from server: 100% by colin
// roc 2008-06 005ea880  unit: RBX::World  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ea880
//
// 005ea880  56                   push esi
// 005ea881  57                   push edi
// 005ea882  8bf1                 mov esi, ecx
// 005ea884  33ff                 xor edi, edi
// 005ea886  39beb0000000         cmp dword ptr [esi + 0xb0], edi
// 005ea88c  7e1e                 jle 0x5ea8ac
// 005ea88e  8bff                 mov edi, edi
// 005ea890  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005ea896  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005ea899  6a00                 push 0
// 005ea89b  51                   push ecx
// 005ea89c  8bce                 mov ecx, esi
// 005ea89e  e82dfcffff           call 0x5ea4d0
// 005ea8a3  47                   inc edi
// 005ea8a4  3bbeb0000000         cmp edi, dword ptr [esi + 0xb0]
// 005ea8aa  7ce4                 jl 0x5ea890
// 005ea8ac  5f                   pop edi
// 005ea8ad  5e                   pop esi
// 005ea8ae  c3                   ret 

struct World {
    int pad0[0x2b];
    int* items;
    int count;
    void removeItem(int, int);
    void clear();
};

void World::clear() {
    int i = 0;
    if (count > 0) {
        do {
            removeItem(items[i], 0);
            ++i;
        } while (i < count);
    }
}
