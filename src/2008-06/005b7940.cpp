// from server: 91% by colin
// from server: 90% by colin
// roc 2008-06 005b7940  unit: VStockSound::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7940
//
// 005b7940  6aff                 push -1
// 005b7942  68283a7d00           push 0x7d3a28
// 005b7947  64a100000000         mov eax, dword ptr fs:[0]
// 005b794d  50                   push eax
// 005b794e  64892500000000       mov dword ptr fs:[0], esp
// 005b7955  83ec38               sub esp, 0x38
// 005b7958  8b442450             mov eax, dword ptr [esp + 0x50]
// 005b795c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005b7960  55                   push ebp
// 005b7961  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 005b7965  56                   push esi
// 005b7966  8b742450             mov esi, dword ptr [esp + 0x50]
// 005b796a  57                   push edi
// 005b796b  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 005b796f  8974240c             mov dword ptr [esp + 0xc], esi
// 005b7973  897c2410             mov dword ptr [esp + 0x10], edi
// 005b7977  89442414             mov dword ptr [esp + 0x14], eax
// 005b797b  894c2418             mov dword ptr [esp + 0x18], ecx
// 005b797f  90                   nop 
// 005b7980  85f6                 test esi, esi
// 005b7982  7406                 je 0x5b798a
// 005b7984  3b742414             cmp esi, dword ptr [esp + 0x14]
// 005b7988  7406                 je 0x5b7990
// 005b798a  ff1590288000         call dword ptr [0x802890]
// 005b7990  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 005b7994  0f8485000000         je 0x5b7a1f
// 005b799a  85f6                 test esi, esi
// 005b799c  757d                 jne 0x5b7a1b
// 005b799e  ff1590288000         call dword ptr [0x802890]
// 005b79a4  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005b79a7  7506                 jne 0x5b79af
// 005b79a9  ff1590288000         call dword ptr [0x802890]
// 005b79af  8d770c               lea esi, [edi + 0xc]
// 005b79b2  56                   push esi
// 005b79b3  8d4c2420             lea ecx, [esp + 0x20]
// 005b79b7  ff155c248000         call dword ptr [0x80245c]
// 005b79bd  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005b79c0  89542438             mov dword ptr [esp + 0x38], edx
// 005b79c4  8b4620               mov eax, dword ptr [esi + 0x20]
// 005b79c7  8944243c             mov dword ptr [esp + 0x3c], eax
// 005b79cb  8b7624               mov esi, dword ptr [esi + 0x24]
// 005b79ce  89742440             mov dword ptr [esp + 0x40], esi
// 005b79d2  85f6                 test esi, esi
// 005b79d4  740c                 je 0x5b79e2
// 005b79d6  83c604               add esi, 4
// 005b79d9  b901000000           mov ecx, 1
// 005b79de  f00fc10e             lock xadd dword ptr [esi], ecx
// 005b79e2  8d54241c             lea edx, [esp + 0x1c]
// 005b79e6  52                   push edx
// 005b79e7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005b79ef  ffd5                 call ebp
// 005b79f1  83c404               add esp, 4
// 005b79f4  8d4c241c             lea ecx, [esp + 0x1c]
// 005b79f8  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 005b7a00  e88bf7ffff           call 0x5b7190
// 005b7a05  8d4c240c             lea ecx, [esp + 0xc]
// 005b7a09  e85225e5ff           call 0x409f60
// 005b7a0e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b7a12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b7a16  e965ffffff           jmp 0x5b7980
// 005b7a1b  8b36                 mov esi, dword ptr [esi]
// 005b7a1d  eb85                 jmp 0x5b79a4
// 005b7a1f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b7a23  5f                   pop edi
// 005b7a24  5e                   pop esi
// 005b7a25  8bc5                 mov eax, ebp
// 005b7a27  5d                   pop ebp
// 005b7a28  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7a2f  83c444               add esp, 0x44
// 005b7a32  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    char storage[28];
};

typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copy_string;

struct Control {
    long unused;
    volatile long references;
};

struct Value {
    String name;
    unsigned long data;
    void* object;
    Control* control;

    Value(const Value&);
    ~Value();
};

struct Node {
    char links[12];
    Value value;
};

struct Tree {
    char padding[24];
    Node* sentinel;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;

    Iterator& operator++();
};

typedef void (__cdecl *Callback)(const Value&);

inline Value::Value(const Value& other)
{
    copy_string(&name, other.name);
    data = other.data;
    object = other.object;
    control = other.control;
    if (control)
        _InterlockedIncrement(&control->references);
}

Callback __cdecl process(Iterator first, Iterator last, Callback callback)
{
    Iterator current = first;
    Iterator finish = last;
    Owner* owner = current.owner;
    Node* node = current.node;

    for (;;) {
        if (!owner || owner != finish.owner)
            _invalid_parameter_noinfo();

        if (node == finish.node)
            break;

        Tree* tree;
        if (!owner) {
            _invalid_parameter_noinfo();
            tree = reinterpret_cast<Tree*>(owner);
        } else {
            tree = owner->tree;
        }

        if (node == tree->sentinel)
            _invalid_parameter_noinfo();

        {
            Value value(node->value);
            callback(value);
        }

        ++current;
        node = current.node;
        owner = current.owner;
    }

    return callback;
}
