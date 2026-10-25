// from server: 100% by king_originala
// roc 2008-06 005e9dd0  unit: RBX::PhysicsService  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9dd0
//
// 005e9dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005e9dd4  56                   push esi
// 005e9dd5  8bf1                 mov esi, ecx
// 005e9dd7  50                   push eax
// 005e9dd8  8d4e20               lea ecx, [esi + 0x20]
// 005e9ddb  c686a500000001       mov byte ptr [esi + 0xa5], 1
// 005e9de2  e8e9fbffff           call 0x5e99d0
// 005e9de7  c686a500000000       mov byte ptr [esi + 0xa5], 0
// 005e9dee  5e                   pop esi
// 005e9def  c20400               ret 4

struct Collection {
    char storage[0x85];
    void update(void* value);
};

struct PhysicsService {
    char padding[0x20];
    Collection collection;
    bool updating;

    void update(void* value);
};

void PhysicsService::update(void* value) {
    updating = true;
    collection.update(value);
    updating = false;
}
