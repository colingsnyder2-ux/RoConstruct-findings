// roc 2008-06 0061dd60  unit: RBX::Lua::LuaArguments  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061dd60
//
// 0061dd60  83ec38               sub esp, 0x38
// 0061dd63  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061dd68  53                   push ebx
// 0061dd69  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061dd6d  55                   push ebp
// 0061dd6e  56                   push esi
// 0061dd6f  57                   push edi
// 0061dd70  50                   push eax
// 0061dd71  6a01                 push 1
// 0061dd73  53                   push ebx
// 0061dd74  e83738ffff           call 0x6115b0
// 0061dd79  53                   push ebx
// 0061dd7a  8be8                 mov ebp, eax
// 0061dd7c  e88f3effff           call 0x611c10
// 0061dd81  83c410               add esp, 0x10
// 0061dd84  83e801               sub eax, 1
// 0061dd87  89442410             mov dword ptr [esp + 0x10], eax
// 0061dd8b  755f                 jne 0x61ddec
// 0061dd8d  55                   push ebp
// 0061dd8e  8d4c241c             lea ecx, [esp + 0x1c]
// 0061dd92  e88954efff           call 0x513220
// 0061dd97  d94524               fld dword ptr [ebp + 0x24]
// 0061dd9a  d95c243c             fstp dword ptr [esp + 0x3c]
// 0061dd9e  83ec30               sub esp, 0x30
// 0061dda1  d94528               fld dword ptr [ebp + 0x28]
// 0061dda4  8bf4                 mov esi, esp
// 0061dda6  d95c2470             fstp dword ptr [esp + 0x70]
// 0061ddaa  8d4c2448             lea ecx, [esp + 0x48]
// 0061ddae  d9452c               fld dword ptr [ebp + 0x2c]
// 0061ddb1  89642440             mov dword ptr [esp + 0x40], esp
// 0061ddb5  51                   push ecx
// 0061ddb6  d95c2478             fstp dword ptr [esp + 0x78]
// 0061ddba  8bce                 mov ecx, esi
// 0061ddbc  e85f54efff           call 0x513220
// 0061ddc1  d944246c             fld dword ptr [esp + 0x6c]
// 0061ddc5  d95e24               fstp dword ptr [esi + 0x24]
// 0061ddc8  53                   push ebx
// 0061ddc9  d9442474             fld dword ptr [esp + 0x74]
// 0061ddcd  d95e28               fstp dword ptr [esi + 0x28]
// 0061ddd0  d9442478             fld dword ptr [esp + 0x78]
// 0061ddd4  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061ddd7  e874aef8ff           call 0x5a8c50
// 0061dddc  83c434               add esp, 0x34
// 0061dddf  b801000000           mov eax, 1
// 0061dde4  5f                   pop edi
// 0061dde5  5e                   pop esi
// 0061dde6  5d                   pop ebp
// 0061dde7  5b                   pop ebx
// 0061dde8  83c438               add esp, 0x38
// 0061ddeb  c3                   ret 
// 0061ddec  33ff                 xor edi, edi
// 0061ddee  85c0                 test eax, eax
// 0061ddf0  7e5f                 jle 0x61de51
// 0061ddf2  8b15c8b19500         mov edx, dword ptr [0x95b1c8]
// 0061ddf8  52                   push edx
// 0061ddf9  8d4702               lea eax, [edi + 2]
// 0061ddfc  50                   push eax
// 0061ddfd  53                   push ebx
// 0061ddfe  e8ad37ffff           call 0x6115b0
// 0061de03  83c40c               add esp, 0xc
// 0061de06  50                   push eax
// 0061de07  8d4c241c             lea ecx, [esp + 0x1c]
// 0061de0b  51                   push ecx
// 0061de0c  8bcd                 mov ecx, ebp
// 0061de0e  e8ed88e5ff           call 0x476700
// 0061de13  83ec30               sub esp, 0x30
// 0061de16  8bf4                 mov esi, esp
// 0061de18  8d542448             lea edx, [esp + 0x48]
// 0061de1c  89642444             mov dword ptr [esp + 0x44], esp
// 0061de20  52                   push edx
// 0061de21  8bce                 mov ecx, esi
// 0061de23  e8f853efff           call 0x513220
// 0061de28  d944246c             fld dword ptr [esp + 0x6c]
// 0061de2c  d95e24               fstp dword ptr [esi + 0x24]
// 0061de2f  53                   push ebx
// 0061de30  d9442474             fld dword ptr [esp + 0x74]
// 0061de34  d95e28               fstp dword ptr [esi + 0x28]
// 0061de37  d9442478             fld dword ptr [esp + 0x78]
// 0061de3b  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061de3e  e80daef8ff           call 0x5a8c50
// 0061de43  47                   inc edi
// 0061de44  83c434               add esp, 0x34
// 0061de47  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0061de4b  7ca5                 jl 0x61ddf2
// 0061de4d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061de51  5f                   pop edi
// 0061de52  5e                   pop esi
// 0061de53  5d                   pop ebp
// 0061de54  5b                   pop ebx
// 0061de55  83c438               add esp, 0x38
// 0061de58  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toWorldSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
