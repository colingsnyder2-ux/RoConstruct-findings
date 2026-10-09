// from server: 40% by colin
// roc 2007-08 006967d0  unit: CXTPToolTipContext::COffice2007ToolTip  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006967d0
//
// 006967d0  6aff                 push -1
// 006967d2  68d8347600           push 0x7634d8
// 006967d7  64a100000000         mov eax, dword ptr fs:[0]
// 006967dd  50                   push eax
// 006967de  51                   push ecx
// 006967df  56                   push esi
// 006967e0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006967e5  33c4                 xor eax, esp
// 006967e7  50                   push eax
// 006967e8  8d44240c             lea eax, [esp + 0xc]
// 006967ec  64a300000000         mov dword ptr fs:[0], eax
// 006967f2  8bf1                 mov esi, ecx
// 006967f4  89742408             mov dword ptr [esp + 8], esi
// 006967f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006967fc  50                   push eax
// 006967fd  e8dee6ffff           call 0x694ee0
// 00696802  8d8e30010000         lea ecx, [esi + 0x130]
// 00696808  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00696810  c70664147d00         mov dword ptr [esi], 0x7d1464
// 00696816  e8a58a0700           call 0x70f2c0
// 0069681b  8bc6                 mov eax, esi
// 0069681d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00696821  64890d00000000       mov dword ptr fs:[0], ecx
// 00696828  59                   pop ecx
// 00696829  5e                   pop esi
// 0069682a  83c410               add esp, 0x10
// 0069682d  c20400               ret 4

struct CXTPToolTipContext_Office2007ToolTip
{
    char pad[0x130];
    int field130;
    void construct(int arg);
};

extern "C" void __cdecl sub_694EE0(int arg);
extern "C" void __cdecl sub_70F2C0(int arg);

void CXTPToolTipContext_Office2007ToolTip::construct(int arg)
{
    sub_694EE0(arg);
    field130 = 0;
    *(int*)this = 0x7d1464;
    sub_70F2C0(field130);
}
