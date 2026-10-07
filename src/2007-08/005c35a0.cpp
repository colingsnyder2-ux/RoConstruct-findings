// roc 2007-08 005c35a0  unit: RBX::Lua::LuaArguments  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c35a0
//
// 005c35a0  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c35a5  81ec84000000         sub esp, 0x84
// 005c35ab  56                   push esi
// 005c35ac  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 005c35b3  57                   push edi
// 005c35b4  50                   push eax
// 005c35b5  6a01                 push 1
// 005c35b7  56                   push esi
// 005c35b8  e883bcffff           call 0x5bf240
// 005c35bd  83c40c               add esp, 0xc
// 005c35c0  8d4c245c             lea ecx, [esp + 0x5c]
// 005c35c4  8bf8                 mov edi, eax
// 005c35c6  e8851aebff           call 0x475050
// 005c35cb  8d4c245c             lea ecx, [esp + 0x5c]
// 005c35cf  51                   push ecx
// 005c35d0  6a02                 push 2
// 005c35d2  56                   push esi
// 005c35d3  e838ffffff           call 0x5c3510
// 005c35d8  83c40c               add esp, 0xc
// 005c35db  84c0                 test al, al
// 005c35dd  7452                 je 0x5c3631
// 005c35df  8d54245c             lea edx, [esp + 0x5c]
// 005c35e3  52                   push edx
// 005c35e4  8d442420             lea eax, [esp + 0x20]
// 005c35e8  50                   push eax
// 005c35e9  8bcf                 mov ecx, edi
// 005c35eb  e810fceaff           call 0x473200
// 005c35f0  83ec30               sub esp, 0x30
// 005c35f3  8bfc                 mov edi, esp
// 005c35f5  8d4c244c             lea ecx, [esp + 0x4c]
// 005c35f9  89642438             mov dword ptr [esp + 0x38], esp
// 005c35fd  51                   push ecx
// 005c35fe  8bcf                 mov ecx, edi
// 005c3600  e8cb5ff4ff           call 0x5095d0
// 005c3605  d9442470             fld dword ptr [esp + 0x70]
// 005c3609  d95f24               fstp dword ptr [edi + 0x24]
// 005c360c  56                   push esi
// 005c360d  d9442478             fld dword ptr [esp + 0x78]
// 005c3611  d95f28               fstp dword ptr [edi + 0x28]
// 005c3614  d944247c             fld dword ptr [esp + 0x7c]
// 005c3618  d95f2c               fstp dword ptr [edi + 0x2c]
// 005c361b  e86011f7ff           call 0x534780
// 005c3620  83c434               add esp, 0x34
// 005c3623  b801000000           mov eax, 1
// 005c3628  5f                   pop edi
// 005c3629  5e                   pop esi
// 005c362a  81c484000000         add esp, 0x84
// 005c3630  c3                   ret 
// 005c3631  8b1578be8a00         mov edx, dword ptr [0x8abe78]
// 005c3637  52                   push edx
// 005c3638  6a02                 push 2
// 005c363a  56                   push esi
// 005c363b  e800bcffff           call 0x5bf240
// 005c3640  d900                 fld dword ptr [eax]
// 005c3642  d95c2418             fstp dword ptr [esp + 0x18]
// 005c3646  89642414             mov dword ptr [esp + 0x14], esp
// 005c364a  d94004               fld dword ptr [eax + 4]
// 005c364d  8d4c2418             lea ecx, [esp + 0x18]
// 005c3651  d95c241c             fstp dword ptr [esp + 0x1c]
// 005c3655  8d542458             lea edx, [esp + 0x58]
// 005c3659  d94008               fld dword ptr [eax + 8]
// 005c365c  8bc4                 mov eax, esp
// 005c365e  50                   push eax
// 005c365f  d95c2424             fstp dword ptr [esp + 0x24]
// 005c3663  d9e8                 fld1 
// 005c3665  51                   push ecx
// 005c3666  52                   push edx
// 005c3667  d95c2430             fstp dword ptr [esp + 0x30]
// 005c366b  8bcf                 mov ecx, edi
// 005c366d  e8eee9ebff           call 0x482060
// 005c3672  8bc8                 mov ecx, eax
// 005c3674  e8b779f4ff           call 0x50b030
// 005c3679  56                   push esi
// 005c367a  e8d116f7ff           call 0x534d50
// 005c367f  83c410               add esp, 0x10
// 005c3682  5f                   pop edi
// 005c3683  b801000000           mov eax, 1
// 005c3688  5e                   pop esi
// 005c3689  81c484000000         add esp, 0x84
// 005c368f  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_mul@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
