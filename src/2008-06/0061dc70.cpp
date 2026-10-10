// from server: 100% by tester
// roc 2007-03 005bd840  unit: seg_005b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd840
//
// 005bd840  83ec34               sub esp, 0x34
// 005bd843  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bd848  56                   push esi
// 005bd849  57                   push edi
// 005bd84a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005bd84e  50                   push eax
// 005bd84f  6a01                 push 1
// 005bd851  57                   push edi
// 005bd852  e859ccffff           call 0x5ba4b0
// 005bd857  8b0d48828a00         mov ecx, dword ptr [0x8a8248]
// 005bd85d  51                   push ecx
// 005bd85e  6a02                 push 2
// 005bd860  57                   push edi
// 005bd861  8bf0                 mov esi, eax
// 005bd863  e848ccffff           call 0x5ba4b0
// 005bd868  83c418               add esp, 0x18
// 005bd86b  50                   push eax
// 005bd86c  8d542410             lea edx, [esp + 0x10]
// 005bd870  52                   push edx
// 005bd871  8bce                 mov ecx, esi
// 005bd873  e888eeffff           call 0x5bc700
// 005bd878  83ec30               sub esp, 0x30
// 005bd87b  8bf4                 mov esi, esp
// 005bd87d  8d44243c             lea eax, [esp + 0x3c]
// 005bd881  89642438             mov dword ptr [esp + 0x38], esp
// 005bd885  50                   push eax
// 005bd886  8bce                 mov ecx, esi
// 005bd888  e8f310f4ff           call 0x4fe980
// 005bd88d  d9442460             fld dword ptr [esp + 0x60]
// 005bd891  d95e24               fstp dword ptr [esi + 0x24]
// 005bd894  57                   push edi
// 005bd895  d9442468             fld dword ptr [esp + 0x68]
// 005bd899  d95e28               fstp dword ptr [esi + 0x28]
// 005bd89c  d944246c             fld dword ptr [esp + 0x6c]
// 005bd8a0  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bd8a3  e88892f7ff           call 0x536b30
// 005bd8a8  83c434               add esp, 0x34
// 005bd8ab  5f                   pop edi
// 005bd8ac  b801000000           mov eax, 1
// 005bd8b1  5e                   pop esi
// 005bd8b2  83c434               add esp, 0x34
// 005bd8b5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
