// from server: 100% by king_originala
// roc 2008-06 0046eae0  unit: RBX::LDraw2Lua::LDrawCommand  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046eae0
//
// 0046eae0  6aff                 push -1
// 0046eae2  68583f7c00           push 0x7c3f58
// 0046eae7  64a100000000         mov eax, dword ptr fs:[0]
// 0046eaed  50                   push eax
// 0046eaee  64892500000000       mov dword ptr fs:[0], esp
// 0046eaf5  51                   push ecx
// 0046eaf6  56                   push esi
// 0046eaf7  8bf1                 mov esi, ecx
// 0046eaf9  89742404             mov dword ptr [esp + 4], esi
// 0046eafd  c7060cca8100         mov dword ptr [esi], 0x81ca0c
// 0046eb03  8d4e70               lea ecx, [esi + 0x70]
// 0046eb06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046eb0e  ff1568248000         call dword ptr [0x802468]
// 0046eb14  f644241801           test byte ptr [esp + 0x18], 1
// 0046eb19  c70600ca8100         mov dword ptr [esi], 0x81ca00
// 0046eb1f  7409                 je 0x46eb2a
// 0046eb21  56                   push esi
// 0046eb22  e8531b2300           call 0x6a067a
// 0046eb27  83c404               add esp, 4
// 0046eb2a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046eb2e  8bc6                 mov eax, esi
// 0046eb30  5e                   pop esi
// 0046eb31  64890d00000000       mov dword ptr fs:[0], ecx
// 0046eb38  83c410               add esp, 0x10
// 0046eb3b  c20400               ret 4

extern void (__thiscall *destroyString)(void *);
void __cdecl operator delete(void *) throw();

struct VTableCleanup {
    unsigned long *slot;
    VTableCleanup(unsigned long *p);
    ~VTableCleanup();
};

inline VTableCleanup::VTableCleanup(unsigned long *p) : slot(p)
{
    *slot = 0x0081ca0c;
}

inline VTableCleanup::~VTableCleanup()
{
    *slot = 0x0081ca00;
}

struct S {
    unsigned long vtable;
    char padding[108];
    char stringStorage[28];

    void *destroy(unsigned int flags);
};

void *S::destroy(unsigned int flags)
{
    {
        VTableCleanup cleanup(&vtable);
        destroyString(stringStorage);
    }

    if (flags & 1)
        operator delete(this);

    return this;
}
