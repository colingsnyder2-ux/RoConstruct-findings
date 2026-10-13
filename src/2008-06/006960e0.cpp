// from server: 99% by king_originala
// from server: 97% by king_originala
// roc 2008-06 006960e0  unit: Ogre::RbxSceneManager  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006960e0
//
// 006960e0  64a100000000         mov eax, dword ptr fs:[0]
// 006960e6  6aff                 push -1
// 006960e8  68d2e77d00           push 0x7de7d2
// 006960ed  50                   push eax
// 006960ee  64892500000000       mov dword ptr fs:[0], esp
// 006960f5  83ec38               sub esp, 0x38
// 006960f8  803d38dc970001       cmp byte ptr [0x97dc38], 1
// 006960ff  53                   push ebx
// 00696100  8bd9                 mov ebx, ecx
// 00696102  7526                 jne 0x69612a
// 00696104  8d44244c             lea eax, [esp + 0x4c]
// 00696108  50                   push eax
// 00696109  8d4c2408             lea ecx, [esp + 8]
// 0069610d  c74424503cf58400     mov dword ptr [esp + 0x50], 0x84f53c
// 00696115  ff15a4288000         call dword ptr [0x8028a4]
// 0069611b  687c998d00           push 0x8d997c
// 00696120  8d4c2408             lea ecx, [esp + 8]
// 00696124  51                   push ecx
// 00696125  e862b40000           call 0x6a158c
// 0069612a  56                   push esi
// 0069612b  8db3c48a0000         lea esi, [ebx + 0x8ac4]
// 00696131  c60538dc970001       mov byte ptr [0x97dc38], 1
// 00696138  57                   push edi
// 00696139  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0069613c  397e0c               cmp dword ptr [esi + 0xc], edi
// 0069613f  7606                 jbe 0x696147
// 00696141  ff1590288000         call dword ptr [0x802890]
// 00696147  8b16                 mov edx, dword ptr [esi]
// 00696149  55                   push ebp
// 0069614a  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0069614d  89542410             mov dword ptr [esp + 0x10], edx
// 00696151  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 00696154  7606                 jbe 0x69615c
// 00696156  ff1590288000         call dword ptr [0x802890]
// 0069615c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00696160  8b06                 mov eax, dword ptr [esi]
// 00696162  57                   push edi
// 00696163  51                   push ecx
// 00696164  55                   push ebp
// 00696165  50                   push eax
// 00696166  8d542420             lea edx, [esp + 0x20]
// 0069616a  52                   push edx
// 0069616b  8bce                 mov ecx, esi
// 0069616d  e84efcdaff           call 0x445dc0
// 00696172  6834f58400           push 0x84f534
// 00696177  8d4c2430             lea ecx, [esp + 0x30]
// 0069617b  ff1558248000         call dword ptr [0x802458]
// 00696181  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 00696187  8b01                 mov eax, dword ptr [ecx]
// 00696189  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0069618f  6a00                 push 0
// 00696191  68282e9600           push 0x962e28
// 00696196  68ec2c9300           push 0x932cec
// 0069619b  6a00                 push 0
// 0069619d  8d54243c             lea edx, [esp + 0x3c]
// 006961a1  52                   push edx
// 006961a2  c744246400000000     mov dword ptr [esp + 0x64], 0
// 006961aa  ffd0                 call eax
// 006961ac  50                   push eax
// 006961ad  e814b60000           call 0x6a17c6
// 006961b2  83cbff               or ebx, 0xffffffff
// 006961b5  83c414               add esp, 0x14
// 006961b8  8d4c242c             lea ecx, [esp + 0x2c]
// 006961bc  8bf8                 mov edi, eax
// 006961be  895c2450             mov dword ptr [esp + 0x50], ebx
// 006961c2  ff1568248000         call dword ptr [0x802468]
// 006961c8  5d                   pop ebp
// 006961c9  85ff                 test edi, edi
// 006961cb  753e                 jne 0x69620b
// 006961cd  6810f58400           push 0x84f510
// 006961d2  8d4c242c             lea ecx, [esp + 0x2c]
// 006961d6  ff1558248000         call dword ptr [0x802458]
// 006961dc  6a00                 push 0
// 006961de  8d4c242c             lea ecx, [esp + 0x2c]
// 006961e2  6a02                 push 2
// 006961e4  51                   push ecx
// 006961e5  c744245801000000     mov dword ptr [esp + 0x58], 1
// 006961ed  ff15744e8000         call dword ptr [0x804e74]
// 006961f3  8bc8                 mov ecx, eax
// 006961f5  ff15784e8000         call dword ptr [0x804e78]
// 006961fb  8d4c2428             lea ecx, [esp + 0x28]
// 006961ff  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00696203  ff1568248000         call dword ptr [0x802468]
// 00696209  eb63                 jmp 0x69626e
// 0069620b  8b17                 mov edx, dword ptr [edi]
// 0069620d  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 00696213  8d442418             lea eax, [esp + 0x18]
// 00696217  50                   push eax
// 00696218  8bcf                 mov ecx, edi
// 0069621a  ffd2                 call edx
// 0069621c  8bd8                 mov ebx, eax
// 0069621e  8b03                 mov eax, dword ptr [ebx]
// 00696220  85c0                 test eax, eax
// 00696222  7405                 je 0x696229
// 00696224  3b4308               cmp eax, dword ptr [ebx + 8]
// 00696227  7406                 je 0x69622f
// 00696229  ff1590288000         call dword ptr [0x802890]
// 0069622f  8b4304               mov eax, dword ptr [ebx + 4]
// 00696232  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 00696235  7437                 je 0x69626e
// 00696237  8b17                 mov edx, dword ptr [edi]
// 00696239  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 0069623f  6a00                 push 0
// 00696241  68cc2c9300           push 0x932ccc
// 00696246  68a82c9300           push 0x932ca8
// 0069624b  6a00                 push 0
// 0069624d  6a00                 push 0
// 0069624f  8bcf                 mov ecx, edi
// 00696251  ffd0                 call eax
// 00696253  50                   push eax
// 00696254  e86db50000           call 0x6a17c6
// 00696259  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0069625d  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00696261  83c414               add esp, 0x14
// 00696264  56                   push esi
// 00696265  51                   push ecx
// 00696266  52                   push edx
// 00696267  8bc8                 mov ecx, eax
// 00696269  e88280feff           call 0x67e2f0
// 0069626e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00696272  5f                   pop edi
// 00696273  8bc6                 mov eax, esi
// 00696275  5e                   pop esi
// 00696276  5b                   pop ebx
// 00696277  64890d00000000       mov dword ptr fs:[0], ecx
// 0069627e  83c444               add esp, 0x44
// 00696281  c20800               ret 8

struct String;
struct Exception;
struct LogManager;

extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);
extern void (__thiscall *exceptionConstruct)(Exception *, const char *const &);
extern void (__cdecl *invalidParameter)();
extern LogManager &(__cdecl *getLogManager)();
extern void (__thiscall *logMessage)(LogManager *, const String &, int, bool);

extern unsigned char repeatedCall;
extern char exceptionType[];
extern char nodeType[];
extern char sceneNodeType[];
extern char movableObjectType[];
extern char entityType[];

extern "C" __declspec(noreturn) void __stdcall throwException(void *, void *);
extern "C" void *__cdecl dynamicCast(void *, int, const void *, const void *, int);

struct Exception {
    void *table;
    const char *message;
    int ownsMessage;
};

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Iterator {
    void *owner;
    unsigned position;
};

struct IteratorRange {
    Iterator first;
    Iterator last;
};

struct Vector {
    void *owner;
    unsigned unused[2];
    unsigned first;
    unsigned last;
    unsigned capacity;

    Iterator begin();
    Iterator end();
    Iterator erase(Iterator, Iterator);
};

inline Iterator Vector::begin() {
    unsigned position = first;
    if (position > last)
        invalidParameter();
    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

inline Iterator Vector::end() {
    unsigned position = last;
    if (first > position)
        invalidParameter();
    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

struct Object;
struct SceneNode;
struct Entity;

struct ObjectTable {
    void *unused[52];
    Object *(__thiscall *findNode)(Object *, const String &);
};

struct Object {
    ObjectTable *table;
};

struct SceneNodeTable {
    void *unused0[79];
    Object *(__thiscall *attachedObject)(SceneNode *, unsigned);
    void *unused1[10];
    IteratorRange *(__thiscall *children)(SceneNode *, IteratorRange *);
};

struct SceneNode {
    SceneNodeTable *table;
};

struct Entity {
    void collect(void *, void *, Vector *);
};

struct SceneManager {
    unsigned char unused0[0xc0];
    Object *scene;
    unsigned char unused1[0x8ac4 - 0xc4];
    Vector casters;

    Vector *findShadowCastersForLight(void *, void *);
};

Vector *SceneManager::findShadowCastersForLight(void *light, void *camera) {
    if (repeatedCall == 1) {
        light = const_cast<char *>("findShadowCastersForLight call repeated");
        Exception error;
        exceptionConstruct(&error, reinterpret_cast<const char *const &>(light));
        throwException(&error, exceptionType);
    }

    repeatedCall = 1;
    casters.erase(casters.begin(), casters.end());

    SceneNode *root;
    {
        String name("rbxroot");
        root = static_cast<SceneNode *>(
            dynamicCast(scene->table->findNode(scene, name),
                        0, nodeType, sceneNodeType, 0));
    }

    if (!root) {
        String message("RBX Missing or duplicate world node");
        logMessage(&getLogManager(), message, 2, false);
    } else {
        IteratorRange temporary;
        IteratorRange *range = root->table->children(root, &temporary);
        if (!range->first.owner ||
            range->first.owner != range->last.owner)
            invalidParameter();

        if (range->first.position != range->last.position) {
            Entity *entity = static_cast<Entity *>(
                dynamicCast(root->table->attachedObject(root, 0),
                            0, movableObjectType, entityType, 0));
            entity->collect(camera, light, &casters);
        }
    }

    return &casters;
}
