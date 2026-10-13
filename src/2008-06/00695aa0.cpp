// from server: 85% by king_originala
// from server: 83% by king_originala
// roc 2008-06 00695aa0  unit: Ogre::RbxSceneManager  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00695aa0
//
// 00695aa0  6aff                 push -1
// 00695aa2  68a9e77d00           push 0x7de7a9
// 00695aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00695aad  50                   push eax
// 00695aae  64892500000000       mov dword ptr fs:[0], esp
// 00695ab5  83ec48               sub esp, 0x48
// 00695ab8  53                   push ebx
// 00695ab9  55                   push ebp
// 00695aba  56                   push esi
// 00695abb  57                   push edi
// 00695abc  8d442418             lea eax, [esp + 0x18]
// 00695ac0  8bf9                 mov edi, ecx
// 00695ac2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00695ac6  50                   push eax
// 00695ac7  ff15784d8000         call dword ptr [0x804d78]
// 00695acd  8d4c2428             lea ecx, [esp + 0x28]
// 00695ad1  ff157c4e8000         call dword ptr [0x804e7c]
// 00695ad7  8b1d804e8000         mov ebx, dword ptr [0x804e80]
// 00695add  8b2d604d8000         mov ebp, dword ptr [0x804d60]
// 00695ae3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00695aeb  eb03                 jmp 0x695af0
// 00695aed  8d4900               lea ecx, [ecx]
// 00695af0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00695af4  85c0                 test eax, eax
// 00695af6  7406                 je 0x695afe
// 00695af8  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00695afc  740a                 je 0x695b08
// 00695afe  ff1590288000         call dword ptr [0x802890]
// 00695b04  8b442418             mov eax, dword ptr [esp + 0x18]
// 00695b08  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00695b0c  3b742424             cmp esi, dword ptr [esp + 0x24]
// 00695b10  0f8493000000         je 0x695ba9
// 00695b16  8d4c2418             lea ecx, [esp + 0x18]
// 00695b1a  89442410             mov dword ptr [esp + 0x10], eax
// 00695b1e  e87d84ffff           call 0x68dfa0
// 00695b23  8b442410             mov eax, dword ptr [esp + 0x10]
// 00695b27  85c0                 test eax, eax
// 00695b29  757a                 jne 0x695ba5
// 00695b2b  ff1590288000         call dword ptr [0x802890]
// 00695b31  33c0                 xor eax, eax
// 00695b33  3b7018               cmp esi, dword ptr [eax + 0x18]
// 00695b36  7506                 jne 0x695b3e
// 00695b38  ff1590288000         call dword ptr [0x802890]
// 00695b3e  8b7610               mov esi, dword ptr [esi + 0x10]
// 00695b41  8d4c2428             lea ecx, [esp + 0x28]
// 00695b45  ffd3                 call ebx
// 00695b47  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 00695b4d  51                   push ecx
// 00695b4e  8bce                 mov ecx, esi
// 00695b50  ff157c4d8000         call dword ptr [0x804d7c]
// 00695b56  8d4c2428             lea ecx, [esp + 0x28]
// 00695b5a  ffd5                 call ebp
// 00695b5c  8d4c2428             lea ecx, [esp + 0x28]
// 00695b60  ffd3                 call ebx
// 00695b62  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00695b66  8b17                 mov edx, dword ptr [edi]
// 00695b68  8b5254               mov edx, dword ptr [edx + 0x54]
// 00695b6b  6a00                 push 0
// 00695b6d  6a01                 push 1
// 00695b6f  50                   push eax
// 00695b70  8d4e08               lea ecx, [esi + 8]
// 00695b73  51                   push ecx
// 00695b74  8bcf                 mov ecx, edi
// 00695b76  ffd2                 call edx
// 00695b78  8d4c2428             lea ecx, [esp + 0x28]
// 00695b7c  ffd5                 call ebp
// 00695b7e  8d4c2428             lea ecx, [esp + 0x28]
// 00695b82  ffd3                 call ebx
// 00695b84  8b07                 mov eax, dword ptr [edi]
// 00695b86  8b5054               mov edx, dword ptr [eax + 0x54]
// 00695b89  6a00                 push 0
// 00695b8b  6a01                 push 1
// 00695b8d  6a02                 push 2
// 00695b8f  81c6f8000000         add esi, 0xf8
// 00695b95  56                   push esi
// 00695b96  8bcf                 mov ecx, edi
// 00695b98  ffd2                 call edx
// 00695b9a  8d4c2428             lea ecx, [esp + 0x28]
// 00695b9e  ffd5                 call ebp
// 00695ba0  e94bffffff           jmp 0x695af0
// 00695ba5  8b00                 mov eax, dword ptr [eax]
// 00695ba7  eb8a                 jmp 0x695b33
// 00695ba9  8d4c2428             lea ecx, [esp + 0x28]
// 00695bad  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00695bb5  ff15884e8000         call dword ptr [0x804e88]
// 00695bbb  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00695bbf  5f                   pop edi
// 00695bc0  5e                   pop esi
// 00695bc1  5d                   pop ebp
// 00695bc2  5b                   pop ebx
// 00695bc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00695bca  83c454               add esp, 0x54
// 00695bcd  c20800               ret 8

struct Camera;
struct RenderPriorityGroup;
struct RenderQueueGroup;
struct Timer;

extern "C" {
    extern void (__cdecl *invalidParameter)();
}

struct Node {
    char unused[16];
    RenderPriorityGroup* value;
};

struct Container {
    char unused[24];
    Node* head;
};

struct Iterator {
    Container** owner;
    Node* current;
    Container** endOwner;
    Node* end;

    void advance();
};

extern Iterator* (__thiscall *getIterator)(RenderQueueGroup*, Iterator*);
extern void (__thiscall *constructTimer)(Timer*);
extern void (__thiscall *destroyTimer)(Timer*);
extern unsigned long (__thiscall *getMicroseconds)(Timer*);
extern void (__thiscall *resetTimer)(Timer*);
extern void (__thiscall *sortPriorityGroup)(RenderPriorityGroup*, const Camera*);

struct Timer {
    char storage[56];

    Timer();
    ~Timer();
};

inline Timer::Timer()
{
    constructTimer(this);
}

inline Timer::~Timer()
{
    destroyTimer(this);
}

struct SceneManager {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void renderObjects(void*, int, bool, bool);

    char unused[180];
    Camera* camera;

    void renderQueueGroup(RenderQueueGroup*, int);
};

void SceneManager::renderQueueGroup(RenderQueueGroup* group, int mode)
{
    Iterator iterator;
    getIterator(group, &iterator);
    Timer timer;
    unsigned long (__thiscall *measure)(Timer*) = getMicroseconds;
    void (__thiscall *reset)(Timer*) = resetTimer;

    for (;;) {
        if (!iterator.owner || iterator.owner != iterator.endOwner)
            invalidParameter();

        Node* node = iterator.current;
        if (node == iterator.end)
            break;

        Container** owner = iterator.owner;
        iterator.advance();

        Container* container;
        if (!owner) {
            invalidParameter();
            container = 0;
        } else {
            container = *owner;
        }

        if (node == container->head)
            invalidParameter();

        RenderPriorityGroup* priority = node->value;

        measure(&timer);
        sortPriorityGroup(priority, camera);
        reset(&timer);

        measure(&timer);
        renderObjects(reinterpret_cast<char*>(priority) + 8, mode, true, false);
        reset(&timer);

        measure(&timer);
        renderObjects(reinterpret_cast<char*>(priority) + 248, 2, true, false);
        reset(&timer);
    }
}
