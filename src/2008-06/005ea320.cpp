// from server: 100% by king_originala
// roc 2008-06 005ea320  unit: RBX::PhysicsService  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ea320
//
// 005ea320  83ec0c               sub esp, 0xc
// 005ea323  56                   push esi
// 005ea324  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ea328  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ea32b  57                   push edi
// 005ea32c  8bf9                 mov edi, ecx
// 005ea32e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005ea331  85c0                 test eax, eax
// 005ea333  741e                 je 0x5ea353
// 005ea335  85c9                 test ecx, ecx
// 005ea337  741a                 je 0x5ea353
// 005ea339  3bc1                 cmp eax, ecx
// 005ea33b  7416                 je 0x5ea353
// 005ea33d  51                   push ecx
// 005ea33e  50                   push eax
// 005ea33f  e89cd9ffff           call 0x5e7ce0
// 005ea344  83c408               add esp, 8
// 005ea347  85c0                 test eax, eax
// 005ea349  7408                 je 0x5ea353
// 005ea34b  50                   push eax
// 005ea34c  8bcf                 mov ecx, edi
// 005ea34e  e87dfaffff           call 0x5e9dd0
// 005ea353  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 005ea359  8b01                 mov eax, dword ptr [ecx]
// 005ea35b  8b5010               mov edx, dword ptr [eax + 0x10]
// 005ea35e  56                   push esi
// 005ea35f  ffd2                 call edx
// 005ea361  ff87e4000000         inc dword ptr [edi + 0xe4]
// 005ea367  8b06                 mov eax, dword ptr [esi]
// 005ea369  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ea36c  8bce                 mov ecx, esi
// 005ea36e  ffd2                 call edx
// 005ea370  84c0                 test al, al
// 005ea372  7415                 je 0x5ea389
// 005ea374  8d442418             lea eax, [esp + 0x18]
// 005ea378  50                   push eax
// 005ea379  8d4c240c             lea ecx, [esp + 0xc]
// 005ea37d  51                   push ecx
// 005ea37e  8d8fc4000000         lea ecx, [edi + 0xc4]
// 005ea384  e8b7e8ffff           call 0x5e8c40
// 005ea389  5f                   pop edi
// 005ea38a  5e                   pop esi
// 005ea38b  83c40c               add esp, 0xc
// 005ea38e  c20400               ret 4

struct Geometry;
struct Object;

void* __cdecl findConnection(Geometry* a, Geometry* b);

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual bool active();

    char padding[8];
    Geometry* first;
    Geometry* second;
};

struct Handler {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void remove(Object* object);
};

struct Result {
    unsigned long words[3];
};

struct Collection {
    char storage[0x20];
    void insert(Result* result, Object* volatile* object);
};

struct S {
    char padding0[0x88];
    Handler* handler;
    char padding1[0x38];
    Collection collection;
    unsigned long count;

    void removeConnection(void* connection);
    void f(Object* volatile object);
};

void S::f(Object* volatile object)
{
    Object* current = object;
    Geometry* a = current->first;
    Geometry* b = current->second;
    if (a && b && a != b) {
        void* connection = findConnection(a, b);
        if (connection)
            removeConnection(connection);
    }

    handler->remove(current);
    ++count;

    if (current->active()) {
        Result result;
        collection.insert(&result, &object);
    }
}
