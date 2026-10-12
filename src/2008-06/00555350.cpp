// from server: 80% by king_originala
// roc 2008-06 00555350  unit: RBX::VRunService::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555350
//
// 00555350  6aff                 push -1
// 00555352  68d8dd7c00           push 0x7cddd8
// 00555357  64a100000000         mov eax, dword ptr fs:[0]
// 0055535d  50                   push eax
// 0055535e  64892500000000       mov dword ptr fs:[0], esp
// 00555365  83ec10               sub esp, 0x10
// 00555368  56                   push esi
// 00555369  57                   push edi
// 0055536a  8bf9                 mov edi, ecx
// 0055536c  8db780020000         lea esi, [edi + 0x280]
// 00555372  8bce                 mov ecx, esi
// 00555374  89742410             mov dword ptr [esp + 0x10], esi
// 00555378  e863f90300           call 0x594ce0
// 0055537d  c644241401           mov byte ptr [esp + 0x14], 1
// 00555382  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 00555389  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00555391  0f85b2000000         jne 0x555449
// 00555397  8b87a4020000         mov eax, dword ptr [edi + 0x2a4]
// 0055539d  8987a8020000         mov dword ptr [edi + 0x2a8], eax
// 005553a3  85c0                 test eax, eax
// 005553a5  0f8e9e000000         jle 0x555449
// 005553ab  8b87a0020000         mov eax, dword ptr [edi + 0x2a0]
// 005553b1  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 005553b7  53                   push ebx
// 005553b8  8b18                 mov ebx, dword ptr [eax]
// 005553ba  55                   push ebp
// 005553bb  895c2414             mov dword ptr [esp + 0x14], ebx
// 005553bf  89742410             mov dword ptr [esp + 0x10], esi
// 005553c3  eb0b                 jmp 0x5553d0
// 005553c5  8da42400000000       lea esp, [esp]
// 005553cc  8d642400             lea esp, [esp]
// 005553d0  8bafa0020000         mov ebp, dword ptr [edi + 0x2a0]
// 005553d6  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 005553dc  85f6                 test esi, esi
// 005553de  7404                 je 0x5553e4
// 005553e0  3bf0                 cmp esi, eax
// 005553e2  7406                 je 0x5553ea
// 005553e4  ff1590288000         call dword ptr [0x802890]
// 005553ea  3bdd                 cmp ebx, ebp
// 005553ec  744a                 je 0x555438
// 005553ee  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005553f4  85f6                 test esi, esi
// 005553f6  7538                 jne 0x555430
// 005553f8  ffd5                 call ebp
// 005553fa  33c0                 xor eax, eax
// 005553fc  3b5818               cmp ebx, dword ptr [eax + 0x18]
// 005553ff  7502                 jne 0x555403
// 00555401  ffd5                 call ebp
// 00555403  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00555406  8b01                 mov eax, dword ptr [ecx]
// 00555408  8b10                 mov edx, dword ptr [eax]
// 0055540a  ffd2                 call edx
// 0055540c  85f6                 test esi, esi
// 0055540e  7524                 jne 0x555434
// 00555410  ffd5                 call ebp
// 00555412  3b5e18               cmp ebx, dword ptr [esi + 0x18]
// 00555415  7502                 jne 0x555419
// 00555417  ffd5                 call ebp
// 00555419  8d4c2410             lea ecx, [esp + 0x10]
// 0055541d  c6431000             mov byte ptr [ebx + 0x10], 0
// 00555421  e87a8b1300           call 0x68dfa0
// 00555426  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0055542a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055542e  eba0                 jmp 0x5553d0
// 00555430  8b06                 mov eax, dword ptr [esi]
// 00555432  ebc8                 jmp 0x5553fc
// 00555434  8b36                 mov esi, dword ptr [esi]
// 00555436  ebda                 jmp 0x555412
// 00555438  8d8f4c020000         lea ecx, [edi + 0x24c]
// 0055543e  e8edc80900           call 0x5f1d30
// 00555443  8b742418             mov esi, dword ptr [esp + 0x18]
// 00555447  5d                   pop ebp
// 00555448  5b                   pop ebx
// 00555449  8bce                 mov ecx, esi
// 0055544b  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00555453  e8a8f80300           call 0x594d00
// 00555458  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055545c  5f                   pop edi
// 0055545d  5e                   pop esi
// 0055545e  64890d00000000       mov dword ptr fs:[0], ecx
// 00555465  83c41c               add esp, 0x1c
// 00555468  c3                   ret 

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct LockGuard {
    Mutex* mutex;
    bool locked;
    LockGuard(Mutex*);
    ~LockGuard();
};

inline LockGuard::LockGuard(Mutex* p) : mutex(p) {
    mutex->lock();
    locked = true;
}

inline LockGuard::~LockGuard() {
    if (locked)
        mutex->unlock();
}

struct Task {
    virtual void invoke() = 0;
};

struct Node {
    Node* next;
    Node* previous;
    void* unused;
    Task* task;
    unsigned char pending;
};

struct Container {
    char padding[0x18];
    Node* head;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    void increment();
};

struct Event {
    void signal();
};

struct S {
    char padding0[0x24c];
    Event event;
    char padding1[0x33];
    Mutex mutex;
    Proxy* proxy;
    char padding2[0x14];
    Node* head;
    int count;
    int active;
    void f();
};

void S::f() {
    LockGuard guard(&mutex);
    if (active == 0) {
        active = count;
        if (active > 0) {
            Node* first = head;
            Proxy* p = proxy;
            Node* n = first->next;
            Iterator it;
            it.node = n;
            it.owner = p;
            for (;;) {
                Node* last = head;
                Proxy* current = proxy;
                if (!p || p != current)
                    _invalid_parameter_noinfo();
                if (n == last)
                    break;

                void (__cdecl *invalid)() = _invalid_parameter_noinfo;
                Container* container;
                if (p) {
                    container = p->container;
                } else {
                    invalid();
                    container = 0;
                }
                if (n == container->head)
                    invalid();
                n->task->invoke();

                if (p) {
                    container = p->container;
                } else {
                    invalid();
                    container = 0;
                }
                if (n == container->head)
                    invalid();
                n->pending = 0;
                it.increment();
                n = it.node;
                p = it.owner;
            }
            event.signal();
        }
    }
}
