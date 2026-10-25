// from server: 100% by king_originala
// roc 2008-06 0042fd50  unit: CMainFrame  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042fd50
//
// 0042fd50  6aff                 push -1
// 0042fd52  681afa7b00           push 0x7bfa1a
// 0042fd57  64a100000000         mov eax, dword ptr fs:[0]
// 0042fd5d  50                   push eax
// 0042fd5e  64892500000000       mov dword ptr fs:[0], esp
// 0042fd65  51                   push ecx
// 0042fd66  56                   push esi
// 0042fd67  68e0010000           push 0x1e0
// 0042fd6c  e8af0b2700           call 0x6a0920
// 0042fd71  8bf0                 mov esi, eax
// 0042fd73  83c404               add esp, 4
// 0042fd76  89742404             mov dword ptr [esp + 4], esi
// 0042fd7a  33c0                 xor eax, eax
// 0042fd7c  89442410             mov dword ptr [esp + 0x10], eax
// 0042fd80  3bf0                 cmp esi, eax
// 0042fd82  7417                 je 0x42fd9b
// 0042fd84  50                   push eax
// 0042fd85  8bce                 mov ecx, esi
// 0042fd87  e8d47b2700           call 0x6a7960
// 0042fd8c  c70614098100         mov dword ptr [esi], 0x810914
// 0042fd92  c74620b4088100       mov dword ptr [esi + 0x20], 0x8108b4
// 0042fd99  8bc6                 mov eax, esi
// 0042fd9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042fd9f  5e                   pop esi
// 0042fda0  64890d00000000       mov dword ptr fs:[0], ecx
// 0042fda7  83c410               add esp, 0x10
// 0042fdaa  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Primary
{
    virtual void vf();
    char data[28];
};

struct Secondary
{
    virtual void vf();
    char data[444];
};

struct Base : Primary, Secondary
{
    Base(int value = 0);
};

struct Derived : Base
{
    virtual void vf();
};

Derived* __cdecl Create()
{
    return new Derived;
}
