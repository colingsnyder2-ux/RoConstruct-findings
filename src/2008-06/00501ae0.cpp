// from server: 91% by colin
// from server: 86% by king_originala
// roc 2008-06 00501ae0  unit: boost::bad_lexical_cast  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501ae0
//
// 00501ae0  6aff                 push -1
// 00501ae2  6808b47c00           push 0x7cb408
// 00501ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00501aed  50                   push eax
// 00501aee  64892500000000       mov dword ptr fs:[0], esp
// 00501af5  83ec44               sub esp, 0x44
// 00501af8  53                   push ebx
// 00501af9  33db                 xor ebx, ebx
// 00501afb  56                   push esi
// 00501afc  8bf1                 mov esi, ecx
// 00501afe  895c2408             mov dword ptr [esp + 8], ebx
// 00501b02  8974240c             mov dword ptr [esp + 0xc], esi
// 00501b06  381d88289700         cmp byte ptr [0x972888], bl
// 00501b0c  7407                 je 0x501b15
// 00501b0e  e8bdf6ffff           call 0x5011d0
// 00501b13  eb02                 jmp 0x501b17
// 00501b15  d9ee                 fldz 
// 00501b17  d91e                 fstp dword ptr [esi]
// 00501b19  e85249f7ff           call 0x476470
// 00501b1e  0facd014             shrd eax, edx, 0x14
// 00501b22  c1ea14               shr edx, 0x14
// 00501b25  894604               mov dword ptr [esi + 4], eax
// 00501b28  e8c3fbffff           call 0x5016f0
// 00501b2d  894608               mov dword ptr [esi + 8], eax
// 00501b30  e81bfbffff           call 0x501650
// 00501b35  89460c               mov dword ptr [esi + 0xc], eax
// 00501b38  381d88289700         cmp byte ptr [0x972888], bl
// 00501b3e  7407                 je 0x501b47
// 00501b40  e83bedf6ff           call 0x470880
// 00501b45  eb1c                 jmp 0x501b63
// 00501b47  68109e8100           push 0x819e10
// 00501b4c  8d4c2414             lea ecx, [esp + 0x14]
// 00501b50  ff1558248000         call dword ptr [0x802458]
// 00501b56  895c2454             mov dword ptr [esp + 0x54], ebx
// 00501b5a  bb01000000           mov ebx, 1
// 00501b5f  895c2408             mov dword ptr [esp + 8], ebx
// 00501b63  50                   push eax
// 00501b64  8d4e10               lea ecx, [esi + 0x10]
// 00501b67  ff155c248000         call dword ptr [0x80245c]
// 00501b6d  c744245402000000     mov dword ptr [esp + 0x54], 2
// 00501b75  f6c301               test bl, 1
// 00501b78  7411                 je 0x501b8b
// 00501b7a  83e3fe               and ebx, 0xfffffffe
// 00501b7d  8d4c2410             lea ecx, [esp + 0x10]
// 00501b81  895c2408             mov dword ptr [esp + 8], ebx
// 00501b85  ff1568248000         call dword ptr [0x802468]
// 00501b8b  803d8828970000       cmp byte ptr [0x972888], 0
// 00501b92  7407                 je 0x501b9b
// 00501b94  e807eef6ff           call 0x4709a0
// 00501b99  eb1b                 jmp 0x501bb6
// 00501b9b  68109e8100           push 0x819e10
// 00501ba0  8d4c2430             lea ecx, [esp + 0x30]
// 00501ba4  ff1558248000         call dword ptr [0x802458]
// 00501baa  83cb02               or ebx, 2
// 00501bad  c644245403           mov byte ptr [esp + 0x54], 3
// 00501bb2  895c2408             mov dword ptr [esp + 8], ebx
// 00501bb6  50                   push eax
// 00501bb7  8d4e2c               lea ecx, [esi + 0x2c]
// 00501bba  ff155c248000         call dword ptr [0x80245c]
// 00501bc0  c744245405000000     mov dword ptr [esp + 0x54], 5
// 00501bc8  f6c302               test bl, 2
// 00501bcb  740a                 je 0x501bd7
// 00501bcd  8d4c242c             lea ecx, [esp + 0x2c]
// 00501bd1  ff1568248000         call dword ptr [0x802468]
// 00501bd7  8d4648               lea eax, [esi + 0x48]
// 00501bda  50                   push eax
// 00501bdb  e8b0f9ffff           call 0x501590
// 00501be0  83c404               add esp, 4
// 00501be3  8d4c242c             lea ecx, [esp + 0x2c]
// 00501be7  51                   push ecx
// 00501be8  c644245806           mov byte ptr [esp + 0x58], 6
// 00501bed  ff1568228000         call dword ptr [0x802268]
// 00501bf3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00501bf7  99                   cdq 
// 00501bf8  81e2ffff0f00         and edx, 0xfffff
// 00501bfe  03c2                 add eax, edx
// 00501c00  8d5668               lea edx, [esi + 0x68]
// 00501c03  c1f814               sar eax, 0x14
// 00501c06  52                   push edx
// 00501c07  894664               mov dword ptr [esi + 0x64], eax
// 00501c0a  e8e1fdffff           call 0x5019f0
// 00501c0f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00501c13  83c404               add esp, 4
// 00501c16  8bc6                 mov eax, esi
// 00501c18  5e                   pop esi
// 00501c19  5b                   pop ebx
// 00501c1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00501c21  83c450               add esp, 0x50
// 00501c24  c3                   ret 

extern bool enabled;
extern const char emptyText[];

struct String;

extern String *(__thiscall *constructText)(String *, const char *);
extern String *(__thiscall *copyText)(String *, const String &);
extern void (__thiscall *destroyText)(String *);

struct String {
    unsigned char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

__declspec(noinline) String::String(const char *text)
{
    constructText(this, text);
}

inline String::String(const String &text)
{
    copyText(this, text);
}

inline String::~String()
{
    destroyText(this);
}

extern double __cdecl queryFloat();
extern unsigned __int64 __cdecl queryCounter();
extern unsigned __cdecl queryFirst();
extern unsigned __cdecl querySecond();
extern const String &__cdecl queryFirstString();
extern const String &__cdecl querySecondString();

struct MemoryStatus {
    unsigned length;
    unsigned load;
    int totalPhysical;
    unsigned availablePhysical;
    unsigned totalPageFile;
    unsigned availablePageFile;
    unsigned totalVirtual;
    unsigned availableVirtual;
};

extern "C" void (__stdcall *GlobalMemoryStatus)(MemoryStatus *);

inline int queryPhysicalMegabytes()
{
    MemoryStatus status;
    GlobalMemoryStatus(&status);
    return status.totalPhysical / 1048576;
}

extern void __cdecl initializeBlock(void *);
extern void __cdecl destroyBlock(void *);
extern void __cdecl initializeTail(void *);

struct Block {
    unsigned char storage[28];
    Block();
    ~Block();
};

inline Block::Block()
{
    initializeBlock(this);
}

inline Block::~Block()
{
    destroyBlock(this);
}

struct Tail {
    unsigned char storage[4];
    Tail();
};

inline Tail::Tail()
{
    initializeTail(this);
}

struct S {
    float value;
    unsigned counter;
    unsigned first;
    unsigned second;
    String firstString;
    String secondString;
    Block block;
    int physicalMegabytes;
    Tail tail;

    S();
};

S::S()
    : value(enabled ? queryFloat() : 0.0),
      counter(static_cast<unsigned>(queryCounter() >> 20)),
      first(queryFirst()),
      second(querySecond()),
      firstString(enabled ? queryFirstString() : String(emptyText)),
      secondString(enabled ? querySecondString() : String(emptyText)),
      block(),
      physicalMegabytes(queryPhysicalMegabytes()),
      tail()
{
}
