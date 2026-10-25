// from server: 31% by colin
// roc 2008-06 004dc040  unit: RBX::ViewNew::ViewG3D  size: 560 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc040
//
// 004dc040  55                   push ebp
// 004dc041  8bec                 mov ebp, esp
// 004dc043  6aff                 push -1
// 004dc045  6830a27c00           push 0x7ca230
// 004dc04a  64a100000000         mov eax, dword ptr fs:[0]
// 004dc050  50                   push eax
// 004dc051  64892500000000       mov dword ptr fs:[0], esp
// 004dc058  83ec20               sub esp, 0x20
// 004dc05b  53                   push ebx
// 004dc05c  56                   push esi
// 004dc05d  57                   push edi
// 004dc05e  33db                 xor ebx, ebx
// 004dc060  8bf9                 mov edi, ecx
// 004dc062  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004dc065  8965f0               mov dword ptr [ebp - 0x10], esp
// 004dc068  897de8               mov dword ptr [ebp - 0x18], edi
// 004dc06b  385f44               cmp byte ptr [edi + 0x44], bl
// 004dc06e  0f85eb010000         jne 0x4dc25f
// 004dc074  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 004dc077  3bcb                 cmp ecx, ebx
// 004dc079  740c                 je 0x4dc087
// 004dc07b  e8f077fdff           call 0x4b3870
// 004dc080  8bf0                 mov esi, eax
// 004dc082  8945ec               mov dword ptr [ebp - 0x14], eax
// 004dc085  eb05                 jmp 0x4dc08c
// 004dc087  33f6                 xor esi, esi
// 004dc089  8975ec               mov dword ptr [ebp - 0x14], esi
// 004dc08c  389e40020000         cmp byte ptr [esi + 0x240], bl
// 004dc092  7538                 jne 0x4dc0cc
// 004dc094  8b4748               mov eax, dword ptr [edi + 0x48]
// 004dc097  3bc3                 cmp eax, ebx
// 004dc099  0f8405010000         je 0x4dc1a4
// 004dc09f  83c004               add eax, 4
// 004dc0a2  50                   push eax
// 004dc0a3  ff15ac218000         call dword ptr [0x8021ac]
// 004dc0a9  85c0                 test eax, eax
// 004dc0ab  7517                 jne 0x4dc0c4
// 004dc0ad  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 004dc0b0  e8dbecf7ff           call 0x45ad90
// 004dc0b5  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 004dc0b8  3bcb                 cmp ecx, ebx
// 004dc0ba  7408                 je 0x4dc0c4
// 004dc0bc  8b01                 mov eax, dword ptr [ecx]
// 004dc0be  8b10                 mov edx, dword ptr [eax]
// 004dc0c0  6a01                 push 1
// 004dc0c2  ffd2                 call edx
// 004dc0c4  895f48               mov dword ptr [edi + 0x48], ebx
// 004dc0c7  e9d8000000           jmp 0x4dc1a4
// 004dc0cc  837f4800             cmp dword ptr [edi + 0x48], 0
// 004dc0d0  8d5f48               lea ebx, [edi + 0x48]
// 004dc0d3  0f85cb000000         jne 0x4dc1a4
// 004dc0d9  8b86d4020000         mov eax, dword ptr [esi + 0x2d4]
// 004dc0df  50                   push eax
// 004dc0e0  8d45e4               lea eax, [ebp - 0x1c]
// 004dc0e3  50                   push eax
// 004dc0e4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004dc0eb  e8c0fa1000           call 0x5ebbb0
// 004dc0f0  83c408               add esp, 8
// 004dc0f3  8b08                 mov ecx, dword ptr [eax]
// 004dc0f5  51                   push ecx
// 004dc0f6  8bcb                 mov ecx, ebx
// 004dc0f8  c645fc01             mov byte ptr [ebp - 4], 1
// 004dc0fc  e89fce0b00           call 0x598fa0
// 004dc101  8d4de4               lea ecx, [ebp - 0x1c]
// 004dc104  c645fc00             mov byte ptr [ebp - 4], 0
// 004dc108  e863690200           call 0x502a70
// 004dc10d  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dc114  e98b000000           jmp 0x4dc1a4
// 004dc119  8d55e0               lea edx, [ebp - 0x20]
// 004dc11c  52                   push edx
// 004dc11d  e8fed40800           call 0x569620
// 004dc122  83c404               add esp, 4
// 004dc125  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 004dc128  83794010             cmp dword ptr [ecx + 0x40], 0x10
// 004dc12c  c645fc03             mov byte ptr [ebp - 4], 3
// 004dc130  7205                 jb 0x4dc137
// 004dc132  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 004dc135  eb03                 jmp 0x4dc13a
// 004dc137  83c12c               add ecx, 0x2c
// 004dc13a  8b00                 mov eax, dword ptr [eax]
// 004dc13c  51                   push ecx
// 004dc13d  68c46d8200           push 0x826dc4
// 004dc142  6a03                 push 3
// 004dc144  50                   push eax
// 004dc145  e856d20800           call 0x5693a0
// 004dc14a  83c410               add esp, 0x10
// 004dc14d  8d4de0               lea ecx, [ebp - 0x20]
// 004dc150  c645fc02             mov byte ptr [ebp - 4], 2
// 004dc154  e807451200           call 0x600660
// 004dc159  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dc160  b89ec14d00           mov eax, 0x4dc19e
// 004dc165  c3                   ret 
// 004dc166  8d45d4               lea eax, [ebp - 0x2c]
// 004dc169  50                   push eax
// 004dc16a  e8b1d40800           call 0x569620
// 004dc16f  8b00                 mov eax, dword ptr [eax]
// 004dc171  68ac6d8200           push 0x826dac
// 004dc176  6a03                 push 3
// 004dc178  50                   push eax
// 004dc179  c645fc04             mov byte ptr [ebp - 4], 4
// 004dc17d  e81ed20800           call 0x5693a0
// 004dc182  83c410               add esp, 0x10
// 004dc185  8d4dd4               lea ecx, [ebp - 0x2c]
// 004dc188  c645fc02             mov byte ptr [ebp - 4], 2
// 004dc18c  e8cf441200           call 0x600660
// 004dc191  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dc198  b89ec14d00           mov eax, 0x4dc19e
// 004dc19d  c3                   ret 
// 004dc19e  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004dc1a1  8b7de8               mov edi, dword ptr [ebp - 0x18]
// 004dc1a4  d98634020000         fld dword ptr [esi + 0x234]
// 004dc1aa  8b5f08               mov ebx, dword ptr [edi + 8]
// 004dc1ad  83ec0c               sub esp, 0xc
// 004dc1b0  8bc4                 mov eax, esp
// 004dc1b2  d918                 fstp dword ptr [eax]
// 004dc1b4  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004dc1b7  d98638020000         fld dword ptr [esi + 0x238]
// 004dc1bd  83ec0c               sub esp, 0xc
// 004dc1c0  d95804               fstp dword ptr [eax + 4]
// 004dc1c3  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004dc1c6  d9863c020000         fld dword ptr [esi + 0x23c]
// 004dc1cc  8d9630010000         lea edx, [esi + 0x130]
// 004dc1d2  d95808               fstp dword ptr [eax + 8]
// 004dc1d5  8bc4                 mov eax, esp
// 004dc1d7  d98628020000         fld dword ptr [esi + 0x228]
// 004dc1dd  81ecf8000000         sub esp, 0xf8
// 004dc1e3  d918                 fstp dword ptr [eax]
// 004dc1e5  8bcc                 mov ecx, esp
// 004dc1e7  d9862c020000         fld dword ptr [esi + 0x22c]
// 004dc1ed  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004dc1f0  d95804               fstp dword ptr [eax + 4]
// 004dc1f3  52                   push edx
// 004dc1f4  d98630020000         fld dword ptr [esi + 0x230]
// 004dc1fa  d95808               fstp dword ptr [eax + 8]
// 004dc1fd  e81eaeffff           call 0x4d7020
// 004dc202  51                   push ecx
// 004dc203  8bcc                 mov ecx, esp
// 004dc205  c70100000000         mov dword ptr [ecx], 0
// 004dc20b  8b4748               mov eax, dword ptr [edi + 0x48]
// 004dc20e  8965e8               mov dword ptr [ebp - 0x18], esp
// 004dc211  50                   push eax
// 004dc212  c745fc05000000       mov dword ptr [ebp - 4], 5
// 004dc219  e882cd0b00           call 0x598fa0
// 004dc21e  8b03                 mov eax, dword ptr [ebx]
// 004dc220  8b5004               mov edx, dword ptr [eax + 4]
// 004dc223  8bcb                 mov ecx, ebx
// 004dc225  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dc22c  ffd2                 call edx
// 004dc22e  d98644020000         fld dword ptr [esi + 0x244]
// 004dc234  d98648020000         fld dword ptr [esi + 0x248]
// 004dc23a  8b4708               mov eax, dword ptr [edi + 8]
// 004dc23d  d9864c020000         fld dword ptr [esi + 0x24c]
// 004dc243  83c014               add eax, 0x14
// 004dc246  d98650020000         fld dword ptr [esi + 0x250]
// 004dc24c  d9cb                 fxch st(3)
// 004dc24e  d918                 fstp dword ptr [eax]
// 004dc250  d9c9                 fxch st(1)
// 004dc252  d95804               fstp dword ptr [eax + 4]
// 004dc255  d95808               fstp dword ptr [eax + 8]
// 004dc258  d9580c               fstp dword ptr [eax + 0xc]
// 004dc25b  c6474401             mov byte ptr [edi + 0x44], 1
// 004dc25f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004dc262  5f                   pop edi
// 004dc263  5e                   pop esi
// 004dc264  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc26b  5b                   pop ebx
// 004dc26c  8be5                 mov esp, ebp
// 004dc26e  5d                   pop ebp
// 004dc26f  c3                   ret 

// from server: 49% by colin
// roc-cl: 21022
// roc-flags: /GS- /EHsc /MD /O2 /Ob1 /Oy-
// from server: 100% by king_originala
extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Interface {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void close();
};

struct Auxiliary {
    void destroy();
};

struct Image {
    virtual ~Image();
    volatile long references;
    void releaseResources();
};

struct ImageReference {
    Image *pointer;
    ~ImageReference();
};

inline ImageReference::~ImageReference() {
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->releaseResources();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Resource {
    ~Resource();
};

struct Base {
    virtual ~Base();
};

void shutdown1();
void shutdown2();
void shutdown3();
void shutdown4();
void shutdown5();
void shutdown6();
void shutdown7();

struct S : Base {
    Interface *interfacePointer;
    unsigned char padding08[12];
    Auxiliary *auxiliary;
    unsigned char padding18[48];
    ImageReference image;
    Resource resource;

    virtual ~S();
};

S::~S() {
    interfacePointer->close();
    if (auxiliary)
        auxiliary->destroy();
    shutdown1();
    shutdown2();
    shutdown3();
    shutdown4();
    shutdown5();
    shutdown6();
    shutdown7();
}
