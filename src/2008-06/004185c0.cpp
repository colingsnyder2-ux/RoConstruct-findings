// from server: 100% by king_originala
// roc 2008-06 004185c0  unit: VCContent::?$CComContainedObject  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004185c0
//
// 004185c0  6aff                 push -1
// 004185c2  6890dc7b00           push 0x7bdc90
// 004185c7  64a100000000         mov eax, dword ptr fs:[0]
// 004185cd  50                   push eax
// 004185ce  64892500000000       mov dword ptr fs:[0], esp
// 004185d5  83ec08               sub esp, 8
// 004185d8  56                   push esi
// 004185d9  57                   push edi
// 004185da  8bf1                 mov esi, ecx
// 004185dc  8dbe30010000         lea edi, [esi + 0x130]
// 004185e2  8bcf                 mov ecx, edi
// 004185e4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004185ec  897c2408             mov dword ptr [esp + 8], edi
// 004185f0  e89baa1400           call 0x563090
// 004185f5  c644240c01           mov byte ptr [esp + 0xc], 1
// 004185fa  8bb63c010000         mov esi, dword ptr [esi + 0x13c]
// 00418600  c644241801           mov byte ptr [esp + 0x18], 1
// 00418605  85f6                 test esi, esi
// 00418607  740a                 je 0x418613
// 00418609  56                   push esi
// 0041860a  8d4c2424             lea ecx, [esp + 0x24]
// 0041860e  e87dd51700           call 0x595b90
// 00418613  8bcf                 mov ecx, edi
// 00418615  c644241800           mov byte ptr [esp + 0x18], 0
// 0041861a  e8c1aa1400           call 0x5630e0
// 0041861f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00418623  5f                   pop edi
// 00418624  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0041862c  5e                   pop esi
// 0041862d  85c0                 test eax, eax
// 0041862f  7415                 je 0x418646
// 00418631  8b00                 mov eax, dword ptr [eax]
// 00418633  85c0                 test eax, eax
// 00418635  740f                 je 0x418646
// 00418637  8d4c2420             lea ecx, [esp + 0x20]
// 0041863b  6a01                 push 1
// 0041863d  51                   push ecx
// 0041863e  8bd1                 mov edx, ecx
// 00418640  52                   push edx
// 00418641  ffd0                 call eax
// 00418643  83c40c               add esp, 0xc
// 00418646  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041864a  64890d00000000       mov dword ptr fs:[0], ecx
// 00418651  83c414               add esp, 0x14
// 00418654  c22000               ret 0x20

struct ContentProvider {
    int value;
    unsigned char flag;
    int count;
    void enter();
    void f();
};

struct FunctionTable {
    void (__cdecl *manager)(void *, void *, int);
    void (__cdecl *invoke)(void *, void *);
};

struct Function {
    FunctionTable *table;
    unsigned int reserved;
    unsigned char storage[24];
    void f(void *);
    ~Function();
};

__forceinline Function::~Function()
{
    if (table) {
        void (__cdecl *manager)(void *, void *, int) = table->manager;
        if (manager)
            manager(storage, storage, 1);
    }
}

struct Guard {
    ContentProvider *provider;
    bool locked;
    Guard(ContentProvider *);
    ~Guard();
};

__forceinline Guard::Guard(ContentProvider *p)
    : provider(p)
{
    provider->enter();
    locked = true;
}

__forceinline Guard::~Guard()
{
    if (locked)
        provider->f();
}

struct S {
    unsigned char padding[0x130];
    ContentProvider provider;
    void *object;
    void f(Function callback);
};

void S::f(Function callback)
{
    Guard guard(&provider);
    void *p = object;
    if (p)
        callback.f(p);
}
