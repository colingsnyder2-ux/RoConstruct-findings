// roc 2007-03 005bd8c0  unit: seg_005b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd8c0
//
// 005bd8c0  83ec34               sub esp, 0x34
// 005bd8c3  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bd8c8  56                   push esi
// 005bd8c9  57                   push edi
// 005bd8ca  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005bd8ce  50                   push eax
// 005bd8cf  6a01                 push 1
// 005bd8d1  57                   push edi
// 005bd8d2  e8d9cbffff           call 0x5ba4b0
// 005bd8d7  8b0d48828a00         mov ecx, dword ptr [0x8a8248]
// 005bd8dd  51                   push ecx
// 005bd8de  6a02                 push 2
// 005bd8e0  57                   push edi
// 005bd8e1  8bf0                 mov esi, eax
// 005bd8e3  e8c8cbffff           call 0x5ba4b0
// 005bd8e8  83c418               add esp, 0x18
// 005bd8eb  50                   push eax
// 005bd8ec  8d542410             lea edx, [esp + 0x10]
// 005bd8f0  52                   push edx
// 005bd8f1  8bce                 mov ecx, esi
// 005bd8f3  e858eeffff           call 0x5bc750
// 005bd8f8  83ec30               sub esp, 0x30
// 005bd8fb  8bf4                 mov esi, esp
// 005bd8fd  8d44243c             lea eax, [esp + 0x3c]
// 005bd901  89642438             mov dword ptr [esp + 0x38], esp
// 005bd905  50                   push eax
// 005bd906  8bce                 mov ecx, esi
// 005bd908  e87310f4ff           call 0x4fe980
// 005bd90d  d9442460             fld dword ptr [esp + 0x60]
// 005bd911  d95e24               fstp dword ptr [esi + 0x24]
// 005bd914  57                   push edi
// 005bd915  d9442468             fld dword ptr [esp + 0x68]
// 005bd919  d95e28               fstp dword ptr [esi + 0x28]
// 005bd91c  d944246c             fld dword ptr [esp + 0x6c]
// 005bd920  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bd923  e80892f7ff           call 0x536b30
// 005bd928  83c434               add esp, 0x34
// 005bd92b  5f                   pop edi
// 005bd92c  b801000000           mov eax, 1
// 005bd931  5e                   pop esi
// 005bd932  83c434               add esp, 0x34
// 005bd935  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
