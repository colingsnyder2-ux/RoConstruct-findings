// roc 2007-03 005be600  unit: seg_005b0000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be600
//
// 005be600  a150828a00           mov eax, dword ptr [0x8a8250]
// 005be605  81ec84000000         sub esp, 0x84
// 005be60b  56                   push esi
// 005be60c  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 005be613  57                   push edi
// 005be614  50                   push eax
// 005be615  6a01                 push 1
// 005be617  56                   push esi
// 005be618  e893beffff           call 0x5ba4b0
// 005be61d  83c40c               add esp, 0xc
// 005be620  8d4c245c             lea ecx, [esp + 0x5c]
// 005be624  8bf8                 mov edi, eax
// 005be626  e8456bebff           call 0x475170
// 005be62b  8d4c245c             lea ecx, [esp + 0x5c]
// 005be62f  51                   push ecx
// 005be630  6a02                 push 2
// 005be632  56                   push esi
// 005be633  e838ffffff           call 0x5be570
// 005be638  83c40c               add esp, 0xc
// 005be63b  84c0                 test al, al
// 005be63d  7452                 je 0x5be691
// 005be63f  8d54245c             lea edx, [esp + 0x5c]
// 005be643  52                   push edx
// 005be644  8d442420             lea eax, [esp + 0x20]
// 005be648  50                   push eax
// 005be649  8bcf                 mov ecx, edi
// 005be64b  e8a04cebff           call 0x4732f0
// 005be650  83ec30               sub esp, 0x30
// 005be653  8bfc                 mov edi, esp
// 005be655  8d4c244c             lea ecx, [esp + 0x4c]
// 005be659  89642438             mov dword ptr [esp + 0x38], esp
// 005be65d  51                   push ecx
// 005be65e  8bcf                 mov ecx, edi
// 005be660  e81b03f4ff           call 0x4fe980
// 005be665  d9442470             fld dword ptr [esp + 0x70]
// 005be669  d95f24               fstp dword ptr [edi + 0x24]
// 005be66c  56                   push esi
// 005be66d  d9442478             fld dword ptr [esp + 0x78]
// 005be671  d95f28               fstp dword ptr [edi + 0x28]
// 005be674  d944247c             fld dword ptr [esp + 0x7c]
// 005be678  d95f2c               fstp dword ptr [edi + 0x2c]
// 005be67b  e8b084f7ff           call 0x536b30
// 005be680  83c434               add esp, 0x34
// 005be683  b801000000           mov eax, 1
// 005be688  5f                   pop edi
// 005be689  5e                   pop esi
// 005be68a  81c484000000         add esp, 0x84
// 005be690  c3                   ret 
// 005be691  8b1548828a00         mov edx, dword ptr [0x8a8248]
// 005be697  52                   push edx
// 005be698  6a02                 push 2
// 005be69a  56                   push esi
// 005be69b  e810beffff           call 0x5ba4b0
// 005be6a0  d900                 fld dword ptr [eax]
// 005be6a2  d95c2418             fstp dword ptr [esp + 0x18]
// 005be6a6  89642414             mov dword ptr [esp + 0x14], esp
// 005be6aa  d94004               fld dword ptr [eax + 4]
// 005be6ad  8d4c2418             lea ecx, [esp + 0x18]
// 005be6b1  d95c241c             fstp dword ptr [esp + 0x1c]
// 005be6b5  8d542458             lea edx, [esp + 0x58]
// 005be6b9  d94008               fld dword ptr [eax + 8]
// 005be6bc  8bc4                 mov eax, esp
// 005be6be  50                   push eax
// 005be6bf  d95c2424             fstp dword ptr [esp + 0x24]
// 005be6c3  d9e8                 fld1 
// 005be6c5  51                   push ecx
// 005be6c6  52                   push edx
// 005be6c7  d95c2430             fstp dword ptr [esp + 0x30]
// 005be6cb  8bcf                 mov ecx, edi
// 005be6cd  e83e1eecff           call 0x480510
// 005be6d2  8bc8                 mov ecx, eax
// 005be6d4  e87720f4ff           call 0x500750
// 005be6d9  56                   push esi
// 005be6da  e88189f7ff           call 0x537060
// 005be6df  83c410               add esp, 0x10
// 005be6e2  5f                   pop edi
// 005be6e3  b801000000           mov eax, 1
// 005be6e8  5e                   pop esi
// 005be6e9  81c484000000         add esp, 0x84
// 005be6ef  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_mul@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
