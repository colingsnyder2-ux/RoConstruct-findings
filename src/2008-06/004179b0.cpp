// from server: 100% by colin
// roc 2008-06 004179b0  unit: VCLuaFunction::?$CComContainedObject  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004179b0
//
// 004179b0  8bc1                 mov eax, ecx
// 004179b2  33c9                 xor ecx, ecx
// 004179b4  894808               mov dword ptr [eax + 8], ecx
// 004179b7  89480c               mov dword ptr [eax + 0xc], ecx
// 004179ba  894810               mov dword ptr [eax + 0x10], ecx
// 004179bd  c74014c8eb8000       mov dword ptr [eax + 0x14], 0x80ebc8
// 004179c4  8b156c5c9700         mov edx, dword ptr [0x975c6c]
// 004179ca  895018               mov dword ptr [eax + 0x18], edx
// 004179cd  8b15705c9700         mov edx, dword ptr [0x975c70]
// 004179d3  89501c               mov dword ptr [eax + 0x1c], edx
// 004179d6  3bd1                 cmp edx, ecx
// 004179d8  740e                 je 0x4179e8
// 004179da  56                   push esi
// 004179db  83c204               add edx, 4
// 004179de  be01000000           mov esi, 1
// 004179e3  f00fc132             lock xadd dword ptr [edx], esi
// 004179e7  5e                   pop esi
// 004179e8  894820               mov dword ptr [eax + 0x20], ecx
// 004179eb  894824               mov dword ptr [eax + 0x24], ecx
// 004179ee  894828               mov dword ptr [eax + 0x28], ecx
// 004179f1  89482c               mov dword ptr [eax + 0x2c], ecx
// 004179f4  894830               mov dword ptr [eax + 0x30], ecx
// 004179f7  c74014d0eb8000       mov dword ptr [eax + 0x14], 0x80ebd0
// 004179fe  894834               mov dword ptr [eax + 0x34], ecx
// 00417a01  894838               mov dword ptr [eax + 0x38], ecx
// 00417a04  c3                   ret 

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    long reserved;
    volatile long references;
};

extern char table1[];
extern char table2[];
extern void* sharedObject;
extern Control* sharedControl;

struct S
{
    char reserved[8];
    long field08;
    long field0C;
    long field10;
    void* table;
    void* object;
    Control* control;
    long field20;
    long field24;
    long field28;
    long field2C;
    long field30;
    long field34;
    long field38;

    S();
};

S::S()
{
    field08 = 0;
    field0C = 0;
    field10 = 0;
    table = table1;
    object = sharedObject;
    control = sharedControl;
    if (control)
        _InterlockedIncrement(&control->references);
    field20 = 0;
    field24 = 0;
    field28 = 0;
    field2C = 0;
    field30 = 0;
    table = table2;
    field34 = 0;
    field38 = 0;
}
