// from server: 93% by colin
// from server: 91% by king_originala
// roc 2008-06 00426a80  unit: CSelectionTreeCtrl  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426a80
//
// 00426a80  6aff                 push -1
// 00426a82  64a100000000         mov eax, dword ptr fs:[0]
// 00426a88  68f8ed7b00           push 0x7bedf8
// 00426a8d  50                   push eax
// 00426a8e  64892500000000       mov dword ptr fs:[0], esp
// 00426a95  83ec10               sub esp, 0x10
// 00426a98  53                   push ebx
// 00426a99  55                   push ebp
// 00426a9a  56                   push esi
// 00426a9b  8bd9                 mov ebx, ecx
// 00426a9d  57                   push edi
// 00426a9e  8dbbc4000000         lea edi, [ebx + 0xc4]
// 00426aa4  8bcf                 mov ecx, edi
// 00426aa6  33f6                 xor esi, esi
// 00426aa8  e8e3c51300           call 0x563090
// 00426aad  39b320010000         cmp dword ptr [ebx + 0x120], esi
// 00426ab3  762a                 jbe 0x426adf
// 00426ab5  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 00426abb  8b30                 mov esi, dword ptr [eax]
// 00426abd  8b8304010000         mov eax, dword ptr [ebx + 0x104]
// 00426ac3  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00426ac9  85c0                 test eax, eax
// 00426acb  0f85f4000000         jne 0x426bc5
// 00426ad1  ffd5                 call ebp
// 00426ad3  33c0                 xor eax, eax
// 00426ad5  3b7018               cmp esi, dword ptr [eax + 0x18]
// 00426ad8  7502                 jne 0x426adc
// 00426ada  ffd5                 call ebp
// 00426adc  8b760c               mov esi, dword ptr [esi + 0xc]
// 00426adf  8bcf                 mov ecx, edi
// 00426ae1  e8fac51300           call 0x5630e0
// 00426ae6  85f6                 test esi, esi
// 00426ae8  0f84ae000000         je 0x426b9c
// 00426aee  8a83e1000000         mov al, byte ptr [ebx + 0xe1]
// 00426af4  8dabe1000000         lea ebp, [ebx + 0xe1]
// 00426afa  896c2418             mov dword ptr [esp + 0x18], ebp
// 00426afe  8844241c             mov byte ptr [esp + 0x1c], al
// 00426b02  c6450001             mov byte ptr [ebp], 1
// 00426b06  8bce                 mov ecx, esi
// 00426b08  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00426b10  e83bbbffff           call 0x422650
// 00426b15  8b16                 mov edx, dword ptr [esi]
// 00426b17  8b4208               mov eax, dword ptr [edx + 8]
// 00426b1a  8bce                 mov ecx, esi
// 00426b1c  ffd0                 call eax
// 00426b1e  8a8be0000000         mov cl, byte ptr [ebx + 0xe0]
// 00426b24  8dbbe0000000         lea edi, [ebx + 0xe0]
// 00426b2a  897c2410             mov dword ptr [esp + 0x10], edi
// 00426b2e  884c2414             mov byte ptr [esp + 0x14], cl
// 00426b32  c60701               mov byte ptr [edi], 1
// 00426b35  8bce                 mov ecx, esi
// 00426b37  c644242801           mov byte ptr [esp + 0x28], 1
// 00426b3c  e8dfe9ffff           call 0x425520
// 00426b41  8a542414             mov dl, byte ptr [esp + 0x14]
// 00426b45  8bce                 mov ecx, esi
// 00426b47  c644242800           mov byte ptr [esp + 0x28], 0
// 00426b4c  8817                 mov byte ptr [edi], dl
// 00426b4e  e8fdf8ffff           call 0x426450
// 00426b53  8dbbc4000000         lea edi, [ebx + 0xc4]
// 00426b59  8bcf                 mov ecx, edi
// 00426b5b  897c2410             mov dword ptr [esp + 0x10], edi
// 00426b5f  e82cc51300           call 0x563090
// 00426b64  c644241401           mov byte ptr [esp + 0x14], 1
// 00426b69  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00426b6d  c644242802           mov byte ptr [esp + 0x28], 2
// 00426b72  750d                 jne 0x426b81
// 00426b74  8b03                 mov eax, dword ptr [ebx]
// 00426b76  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00426b7c  56                   push esi
// 00426b7d  8bcb                 mov ecx, ebx
// 00426b7f  ffd2                 call edx
// 00426b81  8bcf                 mov ecx, edi
// 00426b83  c644242800           mov byte ptr [esp + 0x28], 0
// 00426b88  e853c51300           call 0x5630e0
// 00426b8d  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00426b91  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00426b99  884500               mov byte ptr [ebp], al
// 00426b9c  8bcb                 mov ecx, ebx
// 00426b9e  e85dfdffff           call 0x426900
// 00426ba3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00426ba7  51                   push ecx
// 00426ba8  8d4b54               lea ecx, [ebx + 0x54]
// 00426bab  e8606c2b00           call 0x6dd810
// 00426bb0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00426bb4  5f                   pop edi
// 00426bb5  5e                   pop esi
// 00426bb6  5d                   pop ebp
// 00426bb7  5b                   pop ebx
// 00426bb8  64890d00000000       mov dword ptr fs:[0], ecx
// 00426bbf  83c41c               add esp, 0x1c
// 00426bc2  c20400               ret 4
// 00426bc5  8b00                 mov eax, dword ptr [eax]
// 00426bc7  e909ffffff           jmp 0x426ad5

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct Mutex {
    unsigned char storage[0x1c];
    void lock();
    void unlock();
};

struct Event {
    unsigned char storage[0x70];
    void notify(unsigned int);
};

struct Node;

struct NodeVTable {
    void* reserved[2];
    void (__thiscall *update)(Node*);
};

struct Node {
    NodeVTable* vtable;
    unsigned char padding04[8];
    Node* value;
    unsigned char padding10[8];
    Node* sentinel;
    unsigned char padding1c[0x60];
    unsigned int state;

    void prepare();
    void select();
    void finish();
};

struct Container {
    Node* sentinel;
};

struct FlagGuard {
    bool& flag;
    bool previous;

    FlagGuard(bool&, bool);
    ~FlagGuard();
};

__forceinline FlagGuard::FlagGuard(bool& p, bool value)
    : flag(p)
{
    previous = p;
    p = value;
}

__forceinline FlagGuard::~FlagGuard()
{
    flag = previous;
}

struct LockGuard {
    Mutex* mutex;
    bool locked;

    LockGuard(Mutex*);
    ~LockGuard();
};

__forceinline LockGuard::LockGuard(Mutex* p)
    : mutex(p)
{
    mutex->lock();
    locked = true;
}

__forceinline LockGuard::~LockGuard()
{
    if (locked)
        mutex->unlock();
}

struct SelectionTree;

struct SelectionTreeVTable {
    void* reserved[0x58];
    void (__thiscall *apply)(SelectionTree*, Node*);
};

struct SelectionTree {
    SelectionTreeVTable* vtable;
    unsigned char padding04[0x50];
    Event event;
    Mutex mutex;
    bool flag0;
    bool flag1;
    unsigned char paddinge2[0x22];
    Container* container;
    unsigned char padding108[0x14];
    Node** entries;
    unsigned int count;

    void refresh();
    void process(unsigned int argument);
};

void SelectionTree::process(unsigned int argument)
{
    Node* selected = 0;

    mutex.lock();
    if (count > 0) {
        Node* entry = entries[0];
        Container* owner = container;
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        if (!owner)
            invalid();
        Node* sentinel = owner ? owner->sentinel : 0;
        if (entry == sentinel->sentinel)
            invalid();
        selected = entry->value;
    }
    mutex.unlock();

    if (selected) {
        FlagGuard outer(flag1, true);
        selected->prepare();
        selected->vtable->update(selected);
        {
            FlagGuard inner(flag0, true);
            selected->select();
        }
        selected->finish();
        {
            LockGuard lock(&mutex);
            if (selected->state == 0)
                vtable->apply(this, selected);
        }
    }

    refresh();
    event.notify(argument);
}
