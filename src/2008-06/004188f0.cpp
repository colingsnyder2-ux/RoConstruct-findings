// from server: 100% by king_originala
// roc 2008-06 004188f0  unit: VCLuaFunction::?$CComAggObject  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004188f0
//
// 004188f0  6aff                 push -1
// 004188f2  68bbdc7b00           push 0x7bdcbb
// 004188f7  64a100000000         mov eax, dword ptr fs:[0]
// 004188fd  50                   push eax
// 004188fe  64892500000000       mov dword ptr fs:[0], esp
// 00418905  51                   push ecx
// 00418906  56                   push esi
// 00418907  8bf1                 mov esi, ecx
// 00418909  89742404             mov dword ptr [esp + 4], esi
// 0041890d  c7069cec8000         mov dword ptr [esi], 0x80ec9c
// 00418913  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 0041891a  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00418920  8b01                 mov eax, dword ptr [ecx]
// 00418922  8b5008               mov edx, dword ptr [eax + 8]
// 00418925  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041892d  ffd2                 call edx
// 0041892f  8d4e08               lea ecx, [esi + 8]
// 00418932  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041893a  e8e1e7ffff           call 0x417120
// 0041893f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00418943  5e                   pop esi
// 00418944  64890d00000000       mov dword ptr fs:[0], ecx
// 0041894b  83c410               add esp, 0x10
// 0041894e  c3                   ret 

struct Global
{
    virtual void first();
    virtual void second();
    virtual unsigned long release();
};

extern Global* global;

struct Member
{
    ~Member();
};

struct S
{
    virtual ~S();
    unsigned long references;
    Member member;
};

S::~S()
{
    references = 0xC0000001UL;
    global->release();
}
