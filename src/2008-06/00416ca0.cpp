// from server: 100% by king_originala
// roc 2008-06 00416ca0  unit: VCContent::?$CComAggObject  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416ca0
//
// 00416ca0  6aff                 push -1
// 00416ca2  68fbda7b00           push 0x7bdafb
// 00416ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00416cad  50                   push eax
// 00416cae  64892500000000       mov dword ptr fs:[0], esp
// 00416cb5  51                   push ecx
// 00416cb6  56                   push esi
// 00416cb7  8bf1                 mov esi, ecx
// 00416cb9  89742404             mov dword ptr [esp + 4], esi
// 00416cbd  c7064ceb8000         mov dword ptr [esi], 0x80eb4c
// 00416cc3  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 00416cca  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00416cd0  8b01                 mov eax, dword ptr [ecx]
// 00416cd2  8b5008               mov edx, dword ptr [eax + 8]
// 00416cd5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00416cdd  ffd2                 call edx
// 00416cdf  8d4e14               lea ecx, [esi + 0x14]
// 00416ce2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00416cea  ff152c248000         call dword ptr [0x80242c]
// 00416cf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00416cf4  5e                   pop esi
// 00416cf5  64890d00000000       mov dword ptr fs:[0], ecx
// 00416cfc  83c410               add esp, 0x10
// 00416cff  c3                   ret 

extern void (__thiscall *destroyStream)(void *);

struct Stream
{
    ~Stream() { destroyStream(this); }
};

struct Module
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void release() = 0;
};

extern Module *module;

struct S
{
    virtual ~S();

    unsigned long references;
    unsigned char reserved[12];
    Stream stream;
};

S::~S()
{
    references = 0xC0000001UL;
    module->release();
}
