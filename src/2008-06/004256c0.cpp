// from server: 77% by colin
// from server: 73% by king_originala
// roc 2008-06 004256c0  unit: CRobloxTreeCtrlNode  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004256c0
//
// 004256c0  6aff                 push -1
// 004256c2  68e0eb7b00           push 0x7bebe0
// 004256c7  64a100000000         mov eax, dword ptr fs:[0]
// 004256cd  50                   push eax
// 004256ce  64892500000000       mov dword ptr fs:[0], esp
// 004256d5  83ec18               sub esp, 0x18
// 004256d8  53                   push ebx
// 004256d9  55                   push ebp
// 004256da  56                   push esi
// 004256db  57                   push edi
// 004256dc  8bf1                 mov esi, ecx
// 004256de  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 004256e1  81c5c4000000         add ebp, 0xc4
// 004256e7  8bcd                 mov ecx, ebp
// 004256e9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004256f1  896c2420             mov dword ptr [esp + 0x20], ebp
// 004256f5  e896d91300           call 0x563090
// 004256fa  b001                 mov al, 1
// 004256fc  88442424             mov byte ptr [esp + 0x24], al
// 00425700  8d4c2410             lea ecx, [esp + 0x10]
// 00425704  51                   push ecx
// 00425705  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00425708  88442434             mov byte ptr [esp + 0x34], al
// 0042570c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00425710  81c198000000         add ecx, 0x98
// 00425716  89442414             mov dword ptr [esp + 0x14], eax
// 0042571a  e8c105feff           call 0x405ce0
// 0042571f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00425723  8d442410             lea eax, [esp + 0x10]
// 00425727  50                   push eax
// 00425728  8d4c2418             lea ecx, [esp + 0x18]
// 0042572c  8d7e0c               lea edi, [esi + 0xc]
// 0042572f  51                   push ecx
// 00425730  8bcf                 mov ecx, edi
// 00425732  89542418             mov dword ptr [esp + 0x18], edx
// 00425736  e8c5be0200           call 0x451600
// 0042573b  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 0042573e  8b07                 mov eax, dword ptr [edi]
// 00425740  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00425744  85ff                 test edi, edi
// 00425746  7404                 je 0x42574c
// 00425748  3bf8                 cmp edi, eax
// 0042574a  7406                 je 0x425752
// 0042574c  ff1590288000         call dword ptr [0x802890]
// 00425752  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00425756  7432                 je 0x42578a
// 00425758  85ff                 test edi, edi
// 0042575a  0f85a5000000         jne 0x425805
// 00425760  ff1590288000         call dword ptr [0x802890]
// 00425766  8b542418             mov edx, dword ptr [esp + 0x18]
// 0042576a  3b5718               cmp edx, dword ptr [edi + 0x18]
// 0042576d  7506                 jne 0x425775
// 0042576f  ff1590288000         call dword ptr [0x802890]
// 00425775  8b442418             mov eax, dword ptr [esp + 0x18]
// 00425779  83c010               add eax, 0x10
// 0042577c  50                   push eax
// 0042577d  8d4c2418             lea ecx, [esp + 0x18]
// 00425781  51                   push ecx
// 00425782  8d4e2c               lea ecx, [esi + 0x2c]
// 00425785  e8b6341c00           call 0x5e8c40
// 0042578a  8d54243c             lea edx, [esp + 0x3c]
// 0042578e  52                   push edx
// 0042578f  8d4e58               lea ecx, [esi + 0x58]
// 00425792  e899f0ffff           call 0x424830
// 00425797  8bcd                 mov ecx, ebp
// 00425799  c644243000           mov byte ptr [esp + 0x30], 0
// 0042579e  e83dd91300           call 0x5630e0
// 004257a3  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 004257a6  8b01                 mov eax, dword ptr [ecx]
// 004257a8  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 004257ae  83c6f8               add esi, -8
// 004257b1  56                   push esi
// 004257b2  ffd2                 call edx
// 004257b4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004257b8  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004257c0  85c0                 test eax, eax
// 004257c2  742c                 je 0x4257f0
// 004257c4  8bf0                 mov esi, eax
// 004257c6  83c004               add eax, 4
// 004257c9  83c9ff               or ecx, 0xffffffff
// 004257cc  f00fc108             lock xadd dword ptr [eax], ecx
// 004257d0  751e                 jne 0x4257f0
// 004257d2  8b16                 mov edx, dword ptr [esi]
// 004257d4  8b4204               mov eax, dword ptr [edx + 4]
// 004257d7  8bce                 mov ecx, esi
// 004257d9  ffd0                 call eax
// 004257db  8d4e08               lea ecx, [esi + 8]
// 004257de  83caff               or edx, 0xffffffff
// 004257e1  f00fc111             lock xadd dword ptr [ecx], edx
// 004257e5  7509                 jne 0x4257f0
// 004257e7  8b06                 mov eax, dword ptr [esi]
// 004257e9  8b5008               mov edx, dword ptr [eax + 8]
// 004257ec  8bce                 mov ecx, esi
// 004257ee  ffd2                 call edx
// 004257f0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004257f4  5f                   pop edi
// 004257f5  5e                   pop esi
// 004257f6  5d                   pop ebp
// 004257f7  5b                   pop ebx
// 004257f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004257ff  83c424               add esp, 0x24
// 00425802  c20c00               ret 0xc
// 00425805  8b3f                 mov edi, dword ptr [edi]
// 00425807  e95affffff           jmp 0x425766

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    __forceinline void release() {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Shared {
    void* value;
    Control* control;

    ~Shared()
    {
    if (control)
        control->release();
}
};

struct Lock {
    void acquire();
    void release();
};

struct Guard {
    Lock* lock;
    bool held;

    Guard(Lock* p) : lock(p), held(false)
    {
        lock->acquire();
        held = true;
    }

    ~Guard()
    {
        if (held)
            lock->release();
    }
};

struct Entry {
    char padding[16];
    char value;
};

struct Container;

struct Iterator {
    Container* owner;
    Entry* entry;
};

struct Container {
    Container* owner;
    char padding[20];
    Entry* end;
    char tail[4];

    Iterator find(void* const* key);
};

struct Collection {
    Iterator insert(const void* value);
};

struct Index {
    void erase(void* const* key);
};

struct Selection {
    void erase(const Shared* value);
};

struct Parent;
typedef void (__thiscall* Notify)(Parent*, void*);

struct Parent {
    Notify* table;
    char padding[148];
    Index index;
    char gap[43];
    Lock lock;
};

struct Node {
    char padding[12];
    Container entries;
    Collection collection;
    char gap[35];
    Parent* parent;
    char gap2[4];
    Selection selection;

    void update(Shared value, int unused);
};

void Node::update(Shared value, int unused)
{
    {
        Guard guard(&parent->lock);

        void* key = value.value;
        parent->index.erase(&key);

        key = value.value;
        Iterator position = entries.find(&key);
        Entry* end = entries.end;
        Container* owner = position.owner;

        if (!owner || owner != entries.owner)
            invalid_parameter_noinfo();

        if (position.entry != end) {
            if (!owner)
                invalid_parameter_noinfo();
            else
                owner = owner->owner;

            if (position.entry == owner->end)
                invalid_parameter_noinfo();

            collection.insert(&position.entry->value);
        }

        selection.erase(&value);
    }

    parent->table[87](parent, reinterpret_cast<char*>(this) - 8);
}
