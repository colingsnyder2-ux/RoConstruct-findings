// from server: 81% by king_originala
// roc 2008-06 0042e8f0  unit: CRobloxControlColorSelector  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e8f0
//
// 0042e8f0  6aff                 push -1
// 0042e8f2  6884f97b00           push 0x7bf984
// 0042e8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0042e8fd  50                   push eax
// 0042e8fe  64892500000000       mov dword ptr fs:[0], esp
// 0042e905  83ec0c               sub esp, 0xc
// 0042e908  53                   push ebx
// 0042e909  56                   push esi
// 0042e90a  8bf1                 mov esi, ecx
// 0042e90c  57                   push edi
// 0042e90d  8dbedc000000         lea edi, [esi + 0xdc]
// 0042e913  33db                 xor ebx, ebx
// 0042e915  8bcf                 mov ecx, edi
// 0042e917  895c240c             mov dword ptr [esp + 0xc], ebx
// 0042e91b  ff15d82f8000         call dword ptr [0x802fd8]
// 0042e921  84c0                 test al, al
// 0042e923  7457                 je 0x42e97c
// 0042e925  8dbed8000000         lea edi, [esi + 0xd8]
// 0042e92b  8bcf                 mov ecx, edi
// 0042e92d  ff15d82f8000         call dword ptr [0x802fd8]
// 0042e933  84c0                 test al, al
// 0042e935  7504                 jne 0x42e93b
// 0042e937  8bc7                 mov eax, edi
// 0042e939  eb3f                 jmp 0x42e97a
// 0042e93b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0042e941  3bcb                 cmp ecx, ebx
// 0042e943  7415                 je 0x42e95a
// 0042e945  8d442414             lea eax, [esp + 0x14]
// 0042e949  50                   push eax
// 0042e94a  e8e1fdffff           call 0x42e730
// 0042e94f  895c2420             mov dword ptr [esp + 0x20], ebx
// 0042e953  bb01000000           mov ebx, 1
// 0042e958  eb1c                 jmp 0x42e976
// 0042e95a  6816b78000           push 0x80b716
// 0042e95f  8d4c2414             lea ecx, [esp + 0x14]
// 0042e963  ff15103f8000         call dword ptr [0x803f10]
// 0042e969  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0042e971  bb02000000           mov ebx, 2
// 0042e976  895c240c             mov dword ptr [esp + 0xc], ebx
// 0042e97a  8bf8                 mov edi, eax
// 0042e97c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0042e980  57                   push edi
// 0042e981  8bce                 mov ecx, esi
// 0042e983  ff15d43e8000         call dword ptr [0x803ed4]
// 0042e989  83cb04               or ebx, 4
// 0042e98c  f6c302               test bl, 2
// 0042e98f  740d                 je 0x42e99e
// 0042e991  8d4c2410             lea ecx, [esp + 0x10]
// 0042e995  83e3fd               and ebx, 0xfffffffd
// 0042e998  ff15143f8000         call dword ptr [0x803f14]
// 0042e99e  f6c301               test bl, 1
// 0042e9a1  740a                 je 0x42e9ad
// 0042e9a3  8d4c2414             lea ecx, [esp + 0x14]
// 0042e9a7  ff15143f8000         call dword ptr [0x803f14]
// 0042e9ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042e9b1  5f                   pop edi
// 0042e9b2  8bc6                 mov eax, esi
// 0042e9b4  5e                   pop esi
// 0042e9b5  5b                   pop ebx
// 0042e9b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0042e9bd  83c418               add esp, 0x18
// 0042e9c0  c20400               ret 4

struct String;

extern bool (__thiscall *stringEmpty)(const String *);
extern String *(__thiscall *stringFromText)(String *, const char *);
extern String *(__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    void *data;

    String(const char *);
    String(const String &);
    ~String() throw();
    bool empty() const;
};

inline String::String(const char *text) {
    stringFromText(this, text);
}

inline String::String(const String &other) {
    stringCopy(this, other);
}

inline String::~String() throw() {
    stringDestroy(this);
}

inline bool String::empty() const {
    return stringEmpty(this);
}

struct Provider {
    String getText();
};

struct S {
    char padding0[0xd8];
    String primary;
    String secondary;
    char padding1[0x7c];
    Provider *provider;

    String getText();
};

String S::getText() {
    return !secondary.empty() ? secondary :
           !primary.empty() ? primary :
           provider ? provider->getText() : String(">Authoring");
}
