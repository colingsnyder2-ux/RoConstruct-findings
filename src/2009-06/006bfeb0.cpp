// roc 2009-06 006bfeb0  unit: RBX::Lua::LuaArguments  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bfeb0
//
// 006bfeb0  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bfeb5  81ec84000000         sub esp, 0x84
// 006bfebb  56                   push esi
// 006bfebc  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 006bfec3  57                   push edi
// 006bfec4  50                   push eax
// 006bfec5  6a01                 push 1
// 006bfec7  56                   push esi
// 006bfec8  e8e3acffff           call 0x6babb0
// 006bfecd  83c40c               add esp, 0xc
// 006bfed0  8d4c245c             lea ecx, [esp + 0x5c]
// 006bfed4  8bf8                 mov edi, eax
// 006bfed6  e8d5f9ddff           call 0x49f8b0
// 006bfedb  8d4c245c             lea ecx, [esp + 0x5c]
// 006bfedf  51                   push ecx
// 006bfee0  6a02                 push 2
// 006bfee2  56                   push esi
// 006bfee3  e838ffffff           call 0x6bfe20
// 006bfee8  83c40c               add esp, 0xc
// 006bfeeb  84c0                 test al, al
// 006bfeed  7452                 je 0x6bff41
// 006bfeef  8d54245c             lea edx, [esp + 0x5c]
// 006bfef3  52                   push edx
// 006bfef4  8d442420             lea eax, [esp + 0x20]
// 006bfef8  50                   push eax
// 006bfef9  8bcf                 mov ecx, edi
// 006bfefb  e870deddff           call 0x49dd70
// 006bff00  83ec30               sub esp, 0x30
// 006bff03  8bfc                 mov edi, esp
// 006bff05  8d4c244c             lea ecx, [esp + 0x4c]
// 006bff09  89642438             mov dword ptr [esp + 0x38], esp
// 006bff0d  51                   push ecx
// 006bff0e  8bcf                 mov ecx, edi
// 006bff10  e86ba0ddff           call 0x499f80
// 006bff15  d9442470             fld dword ptr [esp + 0x70]
// 006bff19  d95f24               fstp dword ptr [edi + 0x24]
// 006bff1c  56                   push esi
// 006bff1d  d9442478             fld dword ptr [esp + 0x78]
// 006bff21  d95f28               fstp dword ptr [edi + 0x28]
// 006bff24  d944247c             fld dword ptr [esp + 0x7c]
// 006bff28  d95f2c               fstp dword ptr [edi + 0x2c]
// 006bff2b  e86037f7ff           call 0x633690
// 006bff30  83c434               add esp, 0x34
// 006bff33  b801000000           mov eax, 1
// 006bff38  5f                   pop edi
// 006bff39  5e                   pop esi
// 006bff3a  81c484000000         add esp, 0x84
// 006bff40  c3                   ret 
// 006bff41  8b15f02aa200         mov edx, dword ptr [0xa22af0]
// 006bff47  52                   push edx
// 006bff48  6a02                 push 2
// 006bff4a  56                   push esi
// 006bff4b  e860acffff           call 0x6babb0
// 006bff50  d900                 fld dword ptr [eax]
// 006bff52  d95c2418             fstp dword ptr [esp + 0x18]
// 006bff56  89642414             mov dword ptr [esp + 0x14], esp
// 006bff5a  d94004               fld dword ptr [eax + 4]
// 006bff5d  8d4c2418             lea ecx, [esp + 0x18]
// 006bff61  d95c241c             fstp dword ptr [esp + 0x1c]
// 006bff65  8d542458             lea edx, [esp + 0x58]
// 006bff69  d94008               fld dword ptr [eax + 8]
// 006bff6c  8bc4                 mov eax, esp
// 006bff6e  50                   push eax
// 006bff6f  d95c2424             fstp dword ptr [esp + 0x24]
// 006bff73  d9e8                 fld1 
// 006bff75  51                   push ecx
// 006bff76  52                   push edx
// 006bff77  d95c2430             fstp dword ptr [esp + 0x30]
// 006bff7b  8bcf                 mov ecx, edi
// 006bff7d  e8fef2deff           call 0x4af280
// 006bff82  8bc8                 mov ecx, eax
// 006bff84  e8c7a1ecff           call 0x58a150
// 006bff89  56                   push esi
// 006bff8a  e8713df7ff           call 0x633d00
// 006bff8f  83c410               add esp, 0x10
// 006bff92  5f                   pop edi
// 006bff93  b801000000           mov eax, 1
// 006bff98  5e                   pop esi
// 006bff99  81c484000000         add esp, 0x84
// 006bff9f  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_mul@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
