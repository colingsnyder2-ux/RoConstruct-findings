// roc 2009-06 006beff0  unit: RBX::Lua::LuaArguments  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006beff0
//
// 006beff0  83ec38               sub esp, 0x38
// 006beff3  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006beff8  53                   push ebx
// 006beff9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006beffd  55                   push ebp
// 006beffe  56                   push esi
// 006befff  57                   push edi
// 006bf000  50                   push eax
// 006bf001  6a01                 push 1
// 006bf003  53                   push ebx
// 006bf004  e8a7bbffff           call 0x6babb0
// 006bf009  53                   push ebx
// 006bf00a  8be8                 mov ebp, eax
// 006bf00c  e86f9dffff           call 0x6b8d80
// 006bf011  83c410               add esp, 0x10
// 006bf014  83e801               sub eax, 1
// 006bf017  89442410             mov dword ptr [esp + 0x10], eax
// 006bf01b  755f                 jne 0x6bf07c
// 006bf01d  55                   push ebp
// 006bf01e  8d4c241c             lea ecx, [esp + 0x1c]
// 006bf022  e859afddff           call 0x499f80
// 006bf027  d94524               fld dword ptr [ebp + 0x24]
// 006bf02a  d95c243c             fstp dword ptr [esp + 0x3c]
// 006bf02e  83ec30               sub esp, 0x30
// 006bf031  d94528               fld dword ptr [ebp + 0x28]
// 006bf034  8bf4                 mov esi, esp
// 006bf036  d95c2470             fstp dword ptr [esp + 0x70]
// 006bf03a  8d4c2448             lea ecx, [esp + 0x48]
// 006bf03e  d9452c               fld dword ptr [ebp + 0x2c]
// 006bf041  89642440             mov dword ptr [esp + 0x40], esp
// 006bf045  51                   push ecx
// 006bf046  d95c2478             fstp dword ptr [esp + 0x78]
// 006bf04a  8bce                 mov ecx, esi
// 006bf04c  e82fafddff           call 0x499f80
// 006bf051  d944246c             fld dword ptr [esp + 0x6c]
// 006bf055  d95e24               fstp dword ptr [esi + 0x24]
// 006bf058  53                   push ebx
// 006bf059  d9442474             fld dword ptr [esp + 0x74]
// 006bf05d  d95e28               fstp dword ptr [esi + 0x28]
// 006bf060  d9442478             fld dword ptr [esp + 0x78]
// 006bf064  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bf067  e82446f7ff           call 0x633690
// 006bf06c  83c434               add esp, 0x34
// 006bf06f  b801000000           mov eax, 1
// 006bf074  5f                   pop edi
// 006bf075  5e                   pop esi
// 006bf076  5d                   pop ebp
// 006bf077  5b                   pop ebx
// 006bf078  83c438               add esp, 0x38
// 006bf07b  c3                   ret 
// 006bf07c  33ff                 xor edi, edi
// 006bf07e  85c0                 test eax, eax
// 006bf080  7e5f                 jle 0x6bf0e1
// 006bf082  8b15fc2aa200         mov edx, dword ptr [0xa22afc]
// 006bf088  52                   push edx
// 006bf089  8d4702               lea eax, [edi + 2]
// 006bf08c  50                   push eax
// 006bf08d  53                   push ebx
// 006bf08e  e81dbbffff           call 0x6babb0
// 006bf093  83c40c               add esp, 0xc
// 006bf096  50                   push eax
// 006bf097  8d4c241c             lea ecx, [esp + 0x1c]
// 006bf09b  51                   push ecx
// 006bf09c  8bcd                 mov ecx, ebp
// 006bf09e  e8cdecddff           call 0x49dd70
// 006bf0a3  83ec30               sub esp, 0x30
// 006bf0a6  8bf4                 mov esi, esp
// 006bf0a8  8d542448             lea edx, [esp + 0x48]
// 006bf0ac  89642444             mov dword ptr [esp + 0x44], esp
// 006bf0b0  52                   push edx
// 006bf0b1  8bce                 mov ecx, esi
// 006bf0b3  e8c8aeddff           call 0x499f80
// 006bf0b8  d944246c             fld dword ptr [esp + 0x6c]
// 006bf0bc  d95e24               fstp dword ptr [esi + 0x24]
// 006bf0bf  53                   push ebx
// 006bf0c0  d9442474             fld dword ptr [esp + 0x74]
// 006bf0c4  d95e28               fstp dword ptr [esi + 0x28]
// 006bf0c7  d9442478             fld dword ptr [esp + 0x78]
// 006bf0cb  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bf0ce  e8bd45f7ff           call 0x633690
// 006bf0d3  47                   inc edi
// 006bf0d4  83c434               add esp, 0x34
// 006bf0d7  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 006bf0db  7ca5                 jl 0x6bf082
// 006bf0dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bf0e1  5f                   pop edi
// 006bf0e2  5e                   pop esi
// 006bf0e3  5d                   pop ebp
// 006bf0e4  5b                   pop ebx
// 006bf0e5  83c438               add esp, 0x38
// 006bf0e8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toWorldSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
