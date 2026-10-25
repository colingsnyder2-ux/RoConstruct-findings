// from server: 100% by king_originala
// roc 2008-06 0040fb70  unit: VCBrowserViewExternal::?$CComAggObject  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fb70
//
// 0040fb70  6aff                 push -1
// 0040fb72  68fbd47b00           push 0x7bd4fb
// 0040fb77  64a100000000         mov eax, dword ptr fs:[0]
// 0040fb7d  50                   push eax
// 0040fb7e  64892500000000       mov dword ptr fs:[0], esp
// 0040fb85  51                   push ecx
// 0040fb86  56                   push esi
// 0040fb87  8bf1                 mov esi, ecx
// 0040fb89  89742404             mov dword ptr [esp + 4], esi
// 0040fb8d  c706dcd78000         mov dword ptr [esi], 0x80d7dc
// 0040fb93  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 0040fb9a  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040fba0  8b01                 mov eax, dword ptr [ecx]
// 0040fba2  8b5008               mov edx, dword ptr [eax + 8]
// 0040fba5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040fbad  ffd2                 call edx
// 0040fbaf  8d4e10               lea ecx, [esi + 0x10]
// 0040fbb2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040fbba  e8d1edffff           call 0x40e990
// 0040fbbf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040fbc3  5e                   pop esi
// 0040fbc4  64890d00000000       mov dword ptr fs:[0], ecx
// 0040fbcb  83c410               add esp, 0x10
// 0040fbce  c3                   ret 

struct Module {
    virtual void slot0();
    virtual void slot1();
    virtual void release();
};

extern Module* module;

struct Member {
    ~Member();
};

struct S {
    virtual ~S();
    unsigned long state;
    unsigned long reserved[2];
    Member member;
};

S::~S()
{
    state = 0xC0000001UL;
    module->release();
}
