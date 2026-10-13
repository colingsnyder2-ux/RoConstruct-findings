// from server: 88% by king_originala
// from server: 86% by king_originala
// roc 2008-06 0069df80  unit: Ogre::RbxSceneManager  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069df80
//
// 0069df80  83ec08               sub esp, 8
// 0069df83  53                   push ebx
// 0069df84  55                   push ebp
// 0069df85  56                   push esi
// 0069df86  57                   push edi
// 0069df87  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0069df8b  57                   push edi
// 0069df8c  e86ffdffff           call 0x69dd00
// 0069df91  57                   push edi
// 0069df92  8bf0                 mov esi, eax
// 0069df94  ff15e4438000         call dword ptr [0x8043e4]
// 0069df9a  8bc8                 mov ecx, eax
// 0069df9c  ff15044c8000         call dword ptr [0x804c04]
// 0069dfa2  8bd8                 mov ebx, eax
// 0069dfa4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069dfa8  50                   push eax
// 0069dfa9  8d4c2414             lea ecx, [esp + 0x14]
// 0069dfad  51                   push ecx
// 0069dfae  8bce                 mov ecx, esi
// 0069dfb0  e87b8fffff           call 0x696f30
// 0069dfb5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0069dfb9  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0069dfbc  8b06                 mov eax, dword ptr [esi]
// 0069dfbe  85ff                 test edi, edi
// 0069dfc0  7404                 je 0x69dfc6
// 0069dfc2  3bf8                 cmp edi, eax
// 0069dfc4  7406                 je 0x69dfcc
// 0069dfc6  ff1590288000         call dword ptr [0x802890]
// 0069dfcc  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0069dfd0  743e                 je 0x69e010
// 0069dfd2  85ff                 test edi, edi
// 0069dfd4  7544                 jne 0x69e01a
// 0069dfd6  ff1590288000         call dword ptr [0x802890]
// 0069dfdc  33c0                 xor eax, eax
// 0069dfde  8b542414             mov edx, dword ptr [esp + 0x14]
// 0069dfe2  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0069dfe5  7506                 jne 0x69dfed
// 0069dfe7  ff1590288000         call dword ptr [0x802890]
// 0069dfed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069dff1  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0069dff4  8b03                 mov eax, dword ptr [ebx]
// 0069dff6  8b4010               mov eax, dword ptr [eax + 0x10]
// 0069dff9  52                   push edx
// 0069dffa  8bcb                 mov ecx, ebx
// 0069dffc  ffd0                 call eax
// 0069dffe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069e002  51                   push ecx
// 0069e003  57                   push edi
// 0069e004  8d542418             lea edx, [esp + 0x18]
// 0069e008  52                   push edx
// 0069e009  8bce                 mov ecx, esi
// 0069e00b  e8408cffff           call 0x696c50
// 0069e010  5f                   pop edi
// 0069e011  5e                   pop esi
// 0069e012  5d                   pop ebp
// 0069e013  5b                   pop ebx
// 0069e014  83c408               add esp, 8
// 0069e017  c20800               ret 8
// 0069e01a  8b07                 mov eax, dword ptr [edi]
// 0069e01c  ebc0                 jmp 0x69dfde

struct String;
struct Map;
struct Node;

struct IteratorOwner {
    Map* container;
};

struct Iterator {
    IteratorOwner* owner;
    Node* node;
};

struct Node {
    char padding[40];
    void* object;
};

struct Map {
    IteratorOwner* owner;
    char padding[20];
    Node* endNode;

    Iterator find(const String& key);
    void erase(Iterator* result, IteratorOwner* owner, Node* node);
};

struct Factory {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void destroy(void* object);
};

struct Root;

extern "C" {
    extern void (__cdecl *invalidParameter)();
    extern Root& (__cdecl *getSingleton)();
    extern Factory* (__thiscall *getMovableObjectFactory)(Root*, const String&);
}

struct SceneManager {
    Map* getObjectMap(const String& type);
    void destroyObject(const String& name, const String& type);
};

void SceneManager::destroyObject(const String& name, const String& type)
{
    Map* objects = getObjectMap(type);
    Factory* factory = getMovableObjectFactory(&getSingleton(), type);
    Iterator position = objects->find(name);
    IteratorOwner* owner = position.owner;
    Node* endNode = objects->endNode;
    IteratorOwner* endOwner = objects->owner;

    if (!owner || owner != endOwner)
        invalidParameter();

    if (position.node != endNode) {
        Map* container;
        if (!owner) {
            invalidParameter();
            container = 0;
        } else {
            container = owner->container;
        }

        if (position.node == container->endNode)
            invalidParameter();

        factory->destroy(position.node->object);
        objects->erase(&position, owner, position.node);
    }
}
