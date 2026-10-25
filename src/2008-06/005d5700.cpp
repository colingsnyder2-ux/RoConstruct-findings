// from server: 100% by king_originala
// roc 2008-06 005d5700  unit: RBX::ShirtGraphic  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5700
//
// 005d5700  6aff                 push -1
// 005d5702  681f5b7d00           push 0x7d5b1f
// 005d5707  64a100000000         mov eax, dword ptr fs:[0]
// 005d570d  50                   push eax
// 005d570e  64892500000000       mov dword ptr fs:[0], esp
// 005d5715  83ec24               sub esp, 0x24
// 005d5718  56                   push esi
// 005d5719  8bf1                 mov esi, ecx
// 005d571b  57                   push edi
// 005d571c  89742408             mov dword ptr [esp + 8], esi
// 005d5720  e84bfbffff           call 0x5d5270
// 005d5725  8dbe34010000         lea edi, [esi + 0x134]
// 005d572b  8bcf                 mov ecx, edi
// 005d572d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d5735  c7066cca8300         mov dword ptr [esi], 0x83ca6c
// 005d573b  c7461060ca8300       mov dword ptr [esi + 0x10], 0x83ca60
// 005d5742  c7461458ca8300       mov dword ptr [esi + 0x14], 0x83ca58
// 005d5749  c7462050ca8300       mov dword ptr [esi + 0x20], 0x83ca50
// 005d5750  c7462440ca8300       mov dword ptr [esi + 0x24], 0x83ca40
// 005d5757  c7464430ca8300       mov dword ptr [esi + 0x44], 0x83ca30
// 005d575e  c7466420ca8300       mov dword ptr [esi + 0x64], 0x83ca20
// 005d5765  c7868400000010ca8300 mov dword ptr [esi + 0x84], 0x83ca10
// 005d576f  c786a400000000ca8300 mov dword ptr [esi + 0xa4], 0x83ca00
// 005d5779  c786c4000000f0c98300 mov dword ptr [esi + 0xc4], 0x83c9f0
// 005d5783  c78630010000e8c98300 mov dword ptr [esi + 0x130], 0x83c9e8
// 005d578d  897c240c             mov dword ptr [esp + 0xc], edi
// 005d5791  ff1560248000         call dword ptr [0x802460]
// 005d5797  c644243401           mov byte ptr [esp + 0x34], 1
// 005d579c  e8cfeaf7ff           call 0x554270
// 005d57a1  89471c               mov dword ptr [edi + 0x1c], eax
// 005d57a4  8dbe54010000         lea edi, [esi + 0x154]
// 005d57aa  8bcf                 mov ecx, edi
// 005d57ac  c644243402           mov byte ptr [esp + 0x34], 2
// 005d57b1  897c240c             mov dword ptr [esp + 0xc], edi
// 005d57b5  ff1560248000         call dword ptr [0x802460]
// 005d57bb  c644243403           mov byte ptr [esp + 0x34], 3
// 005d57c0  e8abeaf7ff           call 0x554270
// 005d57c5  89471c               mov dword ptr [edi + 0x1c], eax
// 005d57c8  68d8c98300           push 0x83c9d8
// 005d57cd  8d4c2414             lea ecx, [esp + 0x14]
// 005d57d1  c644243804           mov byte ptr [esp + 0x38], 4
// 005d57d6  ff1558248000         call dword ptr [0x802458]
// 005d57dc  8d442410             lea eax, [esp + 0x10]
// 005d57e0  50                   push eax
// 005d57e1  8bce                 mov ecx, esi
// 005d57e3  c644243805           mov byte ptr [esp + 0x38], 5
// 005d57e8  e8a357f8ff           call 0x55af90
// 005d57ed  8d4c2410             lea ecx, [esp + 0x10]
// 005d57f1  c644243404           mov byte ptr [esp + 0x34], 4
// 005d57f6  ff1568248000         call dword ptr [0x802468]
// 005d57fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d5800  5f                   pop edi
// 005d5801  8bc6                 mov eax, esi
// 005d5803  5e                   pop esi
// 005d5804  64890d00000000       mov dword ptr fs:[0], ecx
// 005d580b  83c430               add esp, 0x30
// 005d580e  c3                   ret 

struct String;
extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringConstructText)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String();
    String(const char*);
    ~String();
};

__forceinline String::String() { stringConstruct(this); }
__forceinline String::String(const char* text) { stringConstructText(this, text); }
__forceinline String::~String() { stringDestroy(this); }

struct Name;
extern const Name& __cdecl getLocalScope();

struct ScopedString {
    String text;
    const Name* scope;
    ScopedString(int = 0);
    ~ScopedString();
};

__forceinline ScopedString::ScopedString(int) : text(), scope(&getLocalScope()) {}
__forceinline ScopedString::~ScopedString() {}

struct Base {
    char storage[0x134];
    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    ScopedString first;
    ScopedString second;
    void installTables();
    S();
};

__forceinline void S::installTables()
{
    unsigned char* p = reinterpret_cast<unsigned char*>(this);
    *reinterpret_cast<unsigned long*>(p + 0x000) = 0x83ca6c;
    *reinterpret_cast<unsigned long*>(p + 0x010) = 0x83ca60;
    *reinterpret_cast<unsigned long*>(p + 0x014) = 0x83ca58;
    *reinterpret_cast<unsigned long*>(p + 0x020) = 0x83ca50;
    *reinterpret_cast<unsigned long*>(p + 0x024) = 0x83ca40;
    *reinterpret_cast<unsigned long*>(p + 0x044) = 0x83ca30;
    *reinterpret_cast<unsigned long*>(p + 0x064) = 0x83ca20;
    *reinterpret_cast<unsigned long*>(p + 0x084) = 0x83ca10;
    *reinterpret_cast<unsigned long*>(p + 0x0a4) = 0x83ca00;
    *reinterpret_cast<unsigned long*>(p + 0x0c4) = 0x83c9f0;
    *reinterpret_cast<unsigned long*>(p + 0x130) = 0x83c9e8;
}

S::S() : Base(), first((installTables(), 0)), second()
{
    setValue(String("Clothing"));
}
