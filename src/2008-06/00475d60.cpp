// from server: 100% by king_originala
// roc 2008-06 00475d60  unit: G3D::Texture  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00475d60
//
// 00475d60  6aff                 push -1
// 00475d62  68ad487c00           push 0x7c48ad
// 00475d67  64a100000000         mov eax, dword ptr fs:[0]
// 00475d6d  50                   push eax
// 00475d6e  64892500000000       mov dword ptr fs:[0], esp
// 00475d75  83ec24               sub esp, 0x24
// 00475d78  53                   push ebx
// 00475d79  55                   push ebp
// 00475d7a  56                   push esi
// 00475d7b  8bf1                 mov esi, ecx
// 00475d7d  33ed                 xor ebp, ebp
// 00475d7f  896c240c             mov dword ptr [esp + 0xc], ebp
// 00475d83  89742410             mov dword ptr [esp + 0x10], esi
// 00475d87  c7063ce48100         mov dword ptr [esi], 0x81e43c
// 00475d8d  8b4628               mov eax, dword ptr [esi + 0x28]
// 00475d90  2905d0ef9600         sub dword ptr [0x96efd0], eax
// 00475d96  bb01000000           mov ebx, 1
// 00475d9b  895c2438             mov dword ptr [esp + 0x38], ebx
// 00475d9f  396e28               cmp dword ptr [esi + 0x28], ebp
// 00475da2  0f84c4000000         je 0x475e6c
// 00475da8  a1ccef9600           mov eax, dword ptr [0x96efcc]
// 00475dad  2bc3                 sub eax, ebx
// 00475daf  0f84a5000000         je 0x475e5a
// 00475db5  2bc3                 sub eax, ebx
// 00475db7  0f848b000000         je 0x475e48
// 00475dbd  803de1ef960000       cmp byte ptr [0x96efe1], 0
// 00475dc4  0f859f000000         jne 0x475e69
// 00475dca  e8714b0900           call 0x50a940
// 00475dcf  392d8c279400         cmp dword ptr [0x94278c], ebp
// 00475dd5  7443                 je 0x475e1a
// 00475dd7  6820e48100           push 0x81e420
// 00475ddc  8d4c2418             lea ecx, [esp + 0x18]
// 00475de0  ff1558248000         call dword ptr [0x802458]
// 00475de6  53                   push ebx
// 00475de7  68e1ef9600           push 0x96efe1
// 00475dec  6888000000           push 0x88
// 00475df1  6808e48100           push 0x81e408
// 00475df6  8d4c2424             lea ecx, [esp + 0x24]
// 00475dfa  51                   push ecx
// 00475dfb  681ce28100           push 0x81e21c
// 00475e00  c644245002           mov byte ptr [esp + 0x50], 2
// 00475e05  895c2424             mov dword ptr [esp + 0x24], ebx
// 00475e09  ff158c279400         call dword ptr [0x94278c]
// 00475e0f  83c418               add esp, 0x18
// 00475e12  84c0                 test al, al
// 00475e14  7404                 je 0x475e1a
// 00475e16  8adb                 mov bl, bl
// 00475e18  eb02                 jmp 0x475e1c
// 00475e1a  32db                 xor bl, bl
// 00475e1c  f644240c01           test byte ptr [esp + 0xc], 1
// 00475e21  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00475e29  740a                 je 0x475e35
// 00475e2b  8d4c2414             lea ecx, [esp + 0x14]
// 00475e2f  ff1568248000         call dword ptr [0x802468]
// 00475e35  84db                 test bl, bl
// 00475e37  7408                 je 0x475e41
// 00475e39  6aff                 push -1
// 00475e3b  ff15f4278000         call dword ptr [0x8027f4]
// 00475e41  e86a4b0900           call 0x50a9b0
// 00475e46  eb21                 jmp 0x475e69
// 00475e48  8b5630               mov edx, dword ptr [esi + 0x30]
// 00475e4b  52                   push edx
// 00475e4c  ff15c0288000         call dword ptr [0x8028c0]
// 00475e52  83c404               add esp, 4
// 00475e55  896e30               mov dword ptr [esi + 0x30], ebp
// 00475e58  eb0f                 jmp 0x475e69
// 00475e5a  57                   push edi
// 00475e5b  8d7e2c               lea edi, [esi + 0x2c]
// 00475e5e  57                   push edi
// 00475e5f  53                   push ebx
// 00475e60  ff15e8f89600         call dword ptr [0x96f8e8]
// 00475e66  892f                 mov dword ptr [edi], ebp
// 00475e68  5f                   pop edi
// 00475e69  896e28               mov dword ptr [esi + 0x28], ebp
// 00475e6c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00475e6f  c644243800           mov byte ptr [esp + 0x38], 0
// 00475e74  3bc5                 cmp eax, ebp
// 00475e76  7428                 je 0x475ea0
// 00475e78  83c004               add eax, 4
// 00475e7b  50                   push eax
// 00475e7c  ff15ac218000         call dword ptr [0x8021ac]
// 00475e82  85c0                 test eax, eax
// 00475e84  7517                 jne 0x475e9d
// 00475e86  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00475e89  e8024ffeff           call 0x45ad90
// 00475e8e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00475e91  3bcd                 cmp ecx, ebp
// 00475e93  7408                 je 0x475e9d
// 00475e95  8b01                 mov eax, dword ptr [ecx]
// 00475e97  8b10                 mov edx, dword ptr [eax]
// 00475e99  6a01                 push 1
// 00475e9b  ffd2                 call edx
// 00475e9d  896e0c               mov dword ptr [esi + 0xc], ebp
// 00475ea0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00475ea4  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00475eaa  5e                   pop esi
// 00475eab  5d                   pop ebp
// 00475eac  5b                   pop ebx
// 00475ead  64890d00000000       mov dword ptr fs:[0], ecx
// 00475eb4  83c430               add esp, 0x30
// 00475eb7  c3                   ret 

extern unsigned long totalSize;
extern int allocationMode;
extern bool ignoreAssertion;

void __cdecl lockLog();
void __cdecl unlockLog();

extern long (__stdcall *decrementReference)(long *);
extern void (__cdecl *releaseMemory)(void *);
extern void (__stdcall *terminateProcess)(int);
extern void (__stdcall *deleteTextures)(int, unsigned long *);

struct Image {
    virtual ~Image();
    long references;
    void release();
};

struct ImageRef {
    Image *p;
    ~ImageRef();
};

inline ImageRef::~ImageRef() {
    if (p) {
        if (decrementReference(&p->references) == 0) {
            p->release();
            if (p)
                delete p;
        }
        p = 0;
    }
}

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
};

extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);

inline String::String(const char *s) {
    constructString(this, s);
}

inline String::~String() {
    destroyString(this);
}

extern bool (__cdecl *assertionHandler)(
    const char *, const String &, const char *, int, bool *, bool);

struct Base {
    virtual ~Base();
};

inline Base::~Base() {
}

struct S : Base {
    unsigned long padding0[2];
    ImageRef image;
    unsigned long padding1[6];
    unsigned long size;
    unsigned long texture;
    void *memory;
    virtual ~S();
};

S::~S() {
    totalSize -= size;

    if (size) {
        switch (allocationMode) {
        case 1:
            deleteTextures(1, &texture);
            texture = 0;
            break;

        case 2:
            releaseMemory(memory);
            memory = 0;
            break;

        default:
            if (!ignoreAssertion) {
                lockLog();
                if (assertionHandler &&
                    assertionHandler(
                        (const char *)0x81e21c,
                        String((const char *)0x81e420),
                        (const char *)0x81e408,
                        136,
                        &ignoreAssertion,
                        true))
                    terminateProcess(-1);
                unlockLog();
            }
            break;
        }
        size = 0;
    }
}
