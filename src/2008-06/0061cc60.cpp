// roc 2008-06 0061cc60  unit: RBX::Lua::LuaArguments  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cc60
//
// 0061cc60  83ec18               sub esp, 0x18
// 0061cc63  d9ee                 fldz 
// 0061cc65  56                   push esi
// 0061cc66  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061cc6a  d9542404             fst dword ptr [esp + 4]
// 0061cc6e  8d442404             lea eax, [esp + 4]
// 0061cc72  d9542408             fst dword ptr [esp + 8]
// 0061cc76  50                   push eax
// 0061cc77  d95c2410             fstp dword ptr [esp + 0x10]
// 0061cc7b  6a01                 push 1
// 0061cc7d  56                   push esi
// 0061cc7e  e8ddfdffff           call 0x61ca60
// 0061cc83  83c40c               add esp, 0xc
// 0061cc86  84c0                 test al, al
// 0061cc88  7451                 je 0x61ccdb
// 0061cc8a  d9ee                 fldz 
// 0061cc8c  8d4c2410             lea ecx, [esp + 0x10]
// 0061cc90  51                   push ecx
// 0061cc91  d9542414             fst dword ptr [esp + 0x14]
// 0061cc95  6a02                 push 2
// 0061cc97  d954241c             fst dword ptr [esp + 0x1c]
// 0061cc9b  56                   push esi
// 0061cc9c  d95c2424             fstp dword ptr [esp + 0x24]
// 0061cca0  e8bbfdffff           call 0x61ca60
// 0061cca5  83c40c               add esp, 0xc
// 0061cca8  84c0                 test al, al
// 0061ccaa  7424                 je 0x61ccd0
// 0061ccac  d9442410             fld dword ptr [esp + 0x10]
// 0061ccb0  83ec0c               sub esp, 0xc
// 0061ccb3  d84c2410             fmul dword ptr [esp + 0x10]
// 0061ccb7  8bc4                 mov eax, esp
// 0061ccb9  d918                 fstp dword ptr [eax]
// 0061ccbb  d9442420             fld dword ptr [esp + 0x20]
// 0061ccbf  d84c2414             fmul dword ptr [esp + 0x14]
// 0061ccc3  d95804               fstp dword ptr [eax + 4]
// 0061ccc6  d9442424             fld dword ptr [esp + 0x24]
// 0061ccca  d84c2418             fmul dword ptr [esp + 0x18]
// 0061ccce  eb50                 jmp 0x61cd20
// 0061ccd0  6a02                 push 2
// 0061ccd2  56                   push esi
// 0061ccd3  e858fbffff           call 0x61c830
// 0061ccd8  51                   push ecx
// 0061ccd9  eb2e                 jmp 0x61cd09
// 0061ccdb  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061cce1  52                   push edx
// 0061cce2  6a02                 push 2
// 0061cce4  56                   push esi
// 0061cce5  e8c648ffff           call 0x6115b0
// 0061ccea  d900                 fld dword ptr [eax]
// 0061ccec  d95c2410             fstp dword ptr [esp + 0x10]
// 0061ccf0  6a01                 push 1
// 0061ccf2  d94004               fld dword ptr [eax + 4]
// 0061ccf5  56                   push esi
// 0061ccf6  d95c241c             fstp dword ptr [esp + 0x1c]
// 0061ccfa  d94008               fld dword ptr [eax + 8]
// 0061ccfd  d95c2420             fstp dword ptr [esp + 0x20]
// 0061cd01  e82afbffff           call 0x61c830
// 0061cd06  83c408               add esp, 8
// 0061cd09  d9442410             fld dword ptr [esp + 0x10]
// 0061cd0d  8bc4                 mov eax, esp
// 0061cd0f  d8c9                 fmul st(1)
// 0061cd11  d918                 fstp dword ptr [eax]
// 0061cd13  d9442414             fld dword ptr [esp + 0x14]
// 0061cd17  d8c9                 fmul st(1)
// 0061cd19  d95804               fstp dword ptr [eax + 4]
// 0061cd1c  d84c2418             fmul dword ptr [esp + 0x18]
// 0061cd20  56                   push esi
// 0061cd21  d95808               fstp dword ptr [eax + 8]
// 0061cd24  e817c3f8ff           call 0x5a9040
// 0061cd29  83c410               add esp, 0x10
// 0061cd2c  b801000000           mov eax, 1
// 0061cd31  5e                   pop esi
// 0061cd32  83c418               add esp, 0x18
// 0061cd35  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_mul@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
