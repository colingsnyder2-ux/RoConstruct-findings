// from server: 100% by king_originala
// roc 2008-06 005e9b80  unit: RBX::PhysicsService  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9b80
//
// 005e9b80  807c240800           cmp byte ptr [esp + 8], 0
// 005e9b85  8b442404             mov eax, dword ptr [esp + 4]
// 005e9b89  8b5024               mov edx, dword ptr [eax + 0x24]
// 005e9b8c  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005e9b8f  50                   push eax
// 005e9b90  740b                 je 0x5e9b9d
// 005e9b92  83c140               add ecx, 0x40
// 005e9b95  e8c6feffff           call 0x5e9a60
// 005e9b9a  c20800               ret 8
// 005e9b9d  83c160               add ecx, 0x60
// 005e9ba0  e84bffffff           call 0x5e9af0
// 005e9ba5  c20800               ret 8

struct Node {
    char padding[28];
    void* value;
};

struct Object {
    char padding[36];
    Node* node;
};

struct Collection {
    char storage[32];
    void insertItem(void*);
    void eraseItem(void*);
};

struct PhysicsService {
    char padding[64];
    Collection active;
    Collection inactive;
    void update(Object*, bool);
};

void PhysicsService::update(Object* object, bool enabled)
{
    void* value = object->node->value;
    if (enabled)
        active.insertItem(value);
    else
        inactive.eraseItem(value);
}
