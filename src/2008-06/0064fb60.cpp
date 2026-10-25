// from server: 100% by king_originala
// roc 2008-06 0064fb60  unit: RBX::ImageKeyButton  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064fb60
//
// 0064fb60  6aff                 push -1
// 0064fb62  6826b57d00           push 0x7db526
// 0064fb67  64a100000000         mov eax, dword ptr fs:[0]
// 0064fb6d  50                   push eax
// 0064fb6e  64892500000000       mov dword ptr fs:[0], esp
// 0064fb75  51                   push ecx
// 0064fb76  53                   push ebx
// 0064fb77  56                   push esi
// 0064fb78  8bf1                 mov esi, ecx
// 0064fb7a  57                   push edi
// 0064fb7b  8974240c             mov dword ptr [esp + 0xc], esi
// 0064fb7f  e84c3ef2ff           call 0x5739d0
// 0064fb84  33db                 xor ebx, ebx
// 0064fb86  8d8e54010000         lea ecx, [esi + 0x154]
// 0064fb8c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0064fb90  c70684bb8400         mov dword ptr [esi], 0x84bb84
// 0064fb96  c7461078bb8400       mov dword ptr [esi + 0x10], 0x84bb78
// 0064fb9d  c7461470bb8400       mov dword ptr [esi + 0x14], 0x84bb70
// 0064fba4  c7462068bb8400       mov dword ptr [esi + 0x20], 0x84bb68
// 0064fbab  c7462458bb8400       mov dword ptr [esi + 0x24], 0x84bb58
// 0064fbb2  c7464448bb8400       mov dword ptr [esi + 0x44], 0x84bb48
// 0064fbb9  c7466438bb8400       mov dword ptr [esi + 0x64], 0x84bb38
// 0064fbc0  c7868400000028bb8400 mov dword ptr [esi + 0x84], 0x84bb28
// 0064fbca  c786a400000018bb8400 mov dword ptr [esi + 0xa4], 0x84bb18
// 0064fbd4  c786c400000008bb8400 mov dword ptr [esi + 0xc4], 0x84bb08
// 0064fbde  c7863001000000bb8400 mov dword ptr [esi + 0x130], 0x84bb00
// 0064fbe8  c78644010000f4ba8400 mov dword ptr [esi + 0x144], 0x84baf4
// 0064fbf2  c78648010000e8ba8400 mov dword ptr [esi + 0x148], 0x84bae8
// 0064fbfc  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 0064fc02  899e50010000         mov dword ptr [esi + 0x150], ebx
// 0064fc08  e833a70100           call 0x66a340
// 0064fc0d  6a04                 push 4
// 0064fc0f  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0064fc14  8dbe74010000         lea edi, [esi + 0x174]
// 0064fc1a  e8010d0500           call 0x6a0920
// 0064fc1f  83c404               add esp, 4
// 0064fc22  3bc3                 cmp eax, ebx
// 0064fc24  7404                 je 0x64fc2a
// 0064fc26  8938                 mov dword ptr [eax], edi
// 0064fc28  eb02                 jmp 0x64fc2c
// 0064fc2a  33c0                 xor eax, eax
// 0064fc2c  d9ee                 fldz 
// 0064fc2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064fc32  8907                 mov dword ptr [edi], eax
// 0064fc34  895f10               mov dword ptr [edi + 0x10], ebx
// 0064fc37  895f14               mov dword ptr [edi + 0x14], ebx
// 0064fc3a  895f18               mov dword ptr [edi + 0x18], ebx
// 0064fc3d  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0064fc40  d99e94010000         fstp dword ptr [esi + 0x194]
// 0064fc46  5f                   pop edi
// 0064fc47  8bc6                 mov eax, esi
// 0064fc49  5e                   pop esi
// 0064fc4a  5b                   pop ebx
// 0064fc4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0064fc52  83c410               add esp, 0x10
// 0064fc55  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base
{
    unsigned int words[83];
    Base();
    ~Base();
};

struct Tree
{
    unsigned char storage[32];
    Tree();
    ~Tree();
};

struct Tail
{
    void** anchor;
    unsigned int unused[3];
    unsigned int count;
    unsigned int first;
    unsigned int second;
    unsigned int third;

    Tail();
};

__forceinline Tail::Tail()
    : anchor(new void*(this)),
      count(0),
      first(0),
      second(0),
      third(0)
{
}

struct ImageKeyButton : Base
{
    unsigned int field14c;
    unsigned int field150;
    Tree tree;
    Tail tail;
    float value;

    ImageKeyButton();
};

ImageKeyButton::ImageKeyButton()
    : Base(),
      field14c((
          words[0] = 0x84bb84,
          words[4] = 0x84bb78,
          words[5] = 0x84bb70,
          words[8] = 0x84bb68,
          words[9] = 0x84bb58,
          words[17] = 0x84bb48,
          words[25] = 0x84bb38,
          words[33] = 0x84bb28,
          words[41] = 0x84bb18,
          words[49] = 0x84bb08,
          words[76] = 0x84bb00,
          words[81] = 0x84baf4,
          words[82] = 0x84bae8,
          0)),
      field150(0),
      tree(),
      tail(),
      value(0.0f)
{
}
