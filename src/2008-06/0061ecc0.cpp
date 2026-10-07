// roc 2008-06 0061ecc0  unit: RBX::Lua::LuaArguments  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ecc0
//
// 0061ecc0  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061ecc5  81ec84000000         sub esp, 0x84
// 0061eccb  56                   push esi
// 0061eccc  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 0061ecd3  57                   push edi
// 0061ecd4  50                   push eax
// 0061ecd5  6a01                 push 1
// 0061ecd7  56                   push esi
// 0061ecd8  e8d328ffff           call 0x6115b0
// 0061ecdd  83c40c               add esp, 0xc
// 0061ece0  8d4c245c             lea ecx, [esp + 0x5c]
// 0061ece4  8bf8                 mov edi, eax
// 0061ece6  e8e595e5ff           call 0x4782d0
// 0061eceb  8d4c245c             lea ecx, [esp + 0x5c]
// 0061ecef  51                   push ecx
// 0061ecf0  6a02                 push 2
// 0061ecf2  56                   push esi
// 0061ecf3  e838ffffff           call 0x61ec30
// 0061ecf8  83c40c               add esp, 0xc
// 0061ecfb  84c0                 test al, al
// 0061ecfd  7452                 je 0x61ed51
// 0061ecff  8d54245c             lea edx, [esp + 0x5c]
// 0061ed03  52                   push edx
// 0061ed04  8d442420             lea eax, [esp + 0x20]
// 0061ed08  50                   push eax
// 0061ed09  8bcf                 mov ecx, edi
// 0061ed0b  e8f079e5ff           call 0x476700
// 0061ed10  83ec30               sub esp, 0x30
// 0061ed13  8bfc                 mov edi, esp
// 0061ed15  8d4c244c             lea ecx, [esp + 0x4c]
// 0061ed19  89642438             mov dword ptr [esp + 0x38], esp
// 0061ed1d  51                   push ecx
// 0061ed1e  8bcf                 mov ecx, edi
// 0061ed20  e8fb44efff           call 0x513220
// 0061ed25  d9442470             fld dword ptr [esp + 0x70]
// 0061ed29  d95f24               fstp dword ptr [edi + 0x24]
// 0061ed2c  56                   push esi
// 0061ed2d  d9442478             fld dword ptr [esp + 0x78]
// 0061ed31  d95f28               fstp dword ptr [edi + 0x28]
// 0061ed34  d944247c             fld dword ptr [esp + 0x7c]
// 0061ed38  d95f2c               fstp dword ptr [edi + 0x2c]
// 0061ed3b  e8109ff8ff           call 0x5a8c50
// 0061ed40  83c434               add esp, 0x34
// 0061ed43  b801000000           mov eax, 1
// 0061ed48  5f                   pop edi
// 0061ed49  5e                   pop esi
// 0061ed4a  81c484000000         add esp, 0x84
// 0061ed50  c3                   ret 
// 0061ed51  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061ed57  52                   push edx
// 0061ed58  6a02                 push 2
// 0061ed5a  56                   push esi
// 0061ed5b  e85028ffff           call 0x6115b0
// 0061ed60  d900                 fld dword ptr [eax]
// 0061ed62  d95c2418             fstp dword ptr [esp + 0x18]
// 0061ed66  89642414             mov dword ptr [esp + 0x14], esp
// 0061ed6a  d94004               fld dword ptr [eax + 4]
// 0061ed6d  8d4c2418             lea ecx, [esp + 0x18]
// 0061ed71  d95c241c             fstp dword ptr [esp + 0x1c]
// 0061ed75  8d542458             lea edx, [esp + 0x58]
// 0061ed79  d94008               fld dword ptr [eax + 8]
// 0061ed7c  8bc4                 mov eax, esp
// 0061ed7e  50                   push eax
// 0061ed7f  d95c2424             fstp dword ptr [esp + 0x24]
// 0061ed83  d9e8                 fld1 
// 0061ed85  51                   push ecx
// 0061ed86  52                   push edx
// 0061ed87  d95c2430             fstp dword ptr [esp + 0x30]
// 0061ed8b  8bcf                 mov ecx, edi
// 0061ed8d  e8fe65e6ff           call 0x485390
// 0061ed92  8bc8                 mov ecx, eax
// 0061ed94  e8f75aefff           call 0x514890
// 0061ed99  56                   push esi
// 0061ed9a  e8a1a2f8ff           call 0x5a9040
// 0061ed9f  83c410               add esp, 0x10
// 0061eda2  5f                   pop edi
// 0061eda3  b801000000           mov eax, 1
// 0061eda8  5e                   pop esi
// 0061eda9  81c484000000         add esp, 0x84
// 0061edaf  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_mul@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
