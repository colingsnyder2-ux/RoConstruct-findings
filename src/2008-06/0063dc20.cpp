// from server: 100% by king_originala
// roc 2008-06 0063dc20  unit: RBX::Sparkles  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063dc20
//
// 0063dc20  6aff                 push -1
// 0063dc22  6846a87d00           push 0x7da846
// 0063dc27  64a100000000         mov eax, dword ptr fs:[0]
// 0063dc2d  50                   push eax
// 0063dc2e  64892500000000       mov dword ptr fs:[0], esp
// 0063dc35  51                   push ecx
// 0063dc36  56                   push esi
// 0063dc37  8bf1                 mov esi, ecx
// 0063dc39  57                   push edi
// 0063dc3a  8dbe30010000         lea edi, [esi + 0x130]
// 0063dc40  8d8e40010000         lea ecx, [esi + 0x140]
// 0063dc46  89742408             mov dword ptr [esp + 8], esi
// 0063dc4a  c70634a28400         mov dword ptr [esi], 0x84a234
// 0063dc50  c7461028a28400       mov dword ptr [esi + 0x10], 0x84a228
// 0063dc57  c7461420a28400       mov dword ptr [esi + 0x14], 0x84a220
// 0063dc5e  c7462018a28400       mov dword ptr [esi + 0x20], 0x84a218
// 0063dc65  c7462408a28400       mov dword ptr [esi + 0x24], 0x84a208
// 0063dc6c  c74644f8a18400       mov dword ptr [esi + 0x44], 0x84a1f8
// 0063dc73  c74664e8a18400       mov dword ptr [esi + 0x64], 0x84a1e8
// 0063dc7a  c78684000000d8a18400 mov dword ptr [esi + 0x84], 0x84a1d8
// 0063dc84  c786a4000000c8a18400 mov dword ptr [esi + 0xa4], 0x84a1c8
// 0063dc8e  c786c4000000b8a18400 mov dword ptr [esi + 0xc4], 0x84a1b8
// 0063dc98  c707a0a18400         mov dword ptr [edi], 0x84a1a0
// 0063dc9e  c70198a18400         mov dword ptr [ecx], 0x84a198
// 0063dca4  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0063dcac  e8cf790200           call 0x665680
// 0063dcb1  8bcf                 mov ecx, edi
// 0063dcb3  c644241400           mov byte ptr [esp + 0x14], 0
// 0063dcb8  e853f7e3ff           call 0x47d410
// 0063dcbd  8bce                 mov ecx, esi
// 0063dcbf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0063dcc7  e8c4faffff           call 0x63d790
// 0063dccc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063dcd0  5f                   pop edi
// 0063dcd1  5e                   pop esi
// 0063dcd2  64890d00000000       mov dword ptr fs:[0], ecx
// 0063dcd9  83c410               add esp, 0x10
// 0063dcdc  c3                   ret 

struct Part0
{
    virtual ~Part0();
    char padding[12];
};

struct Part10
{
    virtual ~Part10();
};

struct Part14
{
    virtual ~Part14();
    char padding[8];
};

struct Part20
{
    virtual ~Part20();
};

struct Part24
{
    virtual ~Part24();
    char padding[28];
};

struct Part44
{
    virtual ~Part44();
    char padding[28];
};

struct Part64
{
    virtual ~Part64();
    char padding[28];
};

struct Part84
{
    virtual ~Part84();
    char padding[28];
};

struct PartA4
{
    virtual ~PartA4();
    char padding[28];
};

struct PartC4
{
    virtual ~PartC4();
    char padding[104];
};

struct Base : Part0, Part10, Part14, Part20, Part24,
              Part44, Part64, Part84, PartA4, PartC4
{
    virtual ~Base();
};

struct Member130
{
    virtual ~Member130();
    char padding[12];
};

struct Member140
{
    virtual ~Member140();
};

struct S : Base, Member130, Member140
{
    virtual ~S();
};

S::~S()
{
}
