// roc 2009-06 006bf0f0  unit: RBX::Lua::LuaArguments  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bf0f0
//
// 006bf0f0  83ec38               sub esp, 0x38
// 006bf0f3  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bf0f8  53                   push ebx
// 006bf0f9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006bf0fd  55                   push ebp
// 006bf0fe  56                   push esi
// 006bf0ff  57                   push edi
// 006bf100  50                   push eax
// 006bf101  6a01                 push 1
// 006bf103  53                   push ebx
// 006bf104  e8a7baffff           call 0x6babb0
// 006bf109  8bf0                 mov esi, eax
// 006bf10b  53                   push ebx
// 006bf10c  89742420             mov dword ptr [esp + 0x20], esi
// 006bf110  e86b9cffff           call 0x6b8d80
// 006bf115  8be8                 mov ebp, eax
// 006bf117  83c410               add esp, 0x10
// 006bf11a  83ed01               sub ebp, 1
// 006bf11d  754a                 jne 0x6bf169
// 006bf11f  8d4c2418             lea ecx, [esp + 0x18]
// 006bf123  51                   push ecx
// 006bf124  8bce                 mov ecx, esi
// 006bf126  e8e507deff           call 0x49f910
// 006bf12b  83ec30               sub esp, 0x30
// 006bf12e  8bf4                 mov esi, esp
// 006bf130  8d542448             lea edx, [esp + 0x48]
// 006bf134  89642440             mov dword ptr [esp + 0x40], esp
// 006bf138  52                   push edx
// 006bf139  8bce                 mov ecx, esi
// 006bf13b  e840aeddff           call 0x499f80
// 006bf140  d944246c             fld dword ptr [esp + 0x6c]
// 006bf144  d95e24               fstp dword ptr [esi + 0x24]
// 006bf147  53                   push ebx
// 006bf148  d9442474             fld dword ptr [esp + 0x74]
// 006bf14c  d95e28               fstp dword ptr [esi + 0x28]
// 006bf14f  d9442478             fld dword ptr [esp + 0x78]
// 006bf153  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bf156  e83545f7ff           call 0x633690
// 006bf15b  83c434               add esp, 0x34
// 006bf15e  8d4501               lea eax, [ebp + 1]
// 006bf161  5f                   pop edi
// 006bf162  5e                   pop esi
// 006bf163  5d                   pop ebp
// 006bf164  5b                   pop ebx
// 006bf165  83c438               add esp, 0x38
// 006bf168  c3                   ret 
// 006bf169  33ff                 xor edi, edi
// 006bf16b  85ed                 test ebp, ebp
// 006bf16d  7e5e                 jle 0x6bf1cd
// 006bf16f  eb04                 jmp 0x6bf175
// 006bf171  8b742410             mov esi, dword ptr [esp + 0x10]
// 006bf175  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bf17a  50                   push eax
// 006bf17b  8d4f02               lea ecx, [edi + 2]
// 006bf17e  51                   push ecx
// 006bf17f  53                   push ebx
// 006bf180  e82bbaffff           call 0x6babb0
// 006bf185  83c40c               add esp, 0xc
// 006bf188  50                   push eax
// 006bf189  8d54241c             lea edx, [esp + 0x1c]
// 006bf18d  52                   push edx
// 006bf18e  8bce                 mov ecx, esi
// 006bf190  e87bcdf9ff           call 0x65bf10
// 006bf195  83ec30               sub esp, 0x30
// 006bf198  8bf4                 mov esi, esp
// 006bf19a  8d442448             lea eax, [esp + 0x48]
// 006bf19e  89642444             mov dword ptr [esp + 0x44], esp
// 006bf1a2  50                   push eax
// 006bf1a3  8bce                 mov ecx, esi
// 006bf1a5  e8d6adddff           call 0x499f80
// 006bf1aa  d944246c             fld dword ptr [esp + 0x6c]
// 006bf1ae  d95e24               fstp dword ptr [esi + 0x24]
// 006bf1b1  53                   push ebx
// 006bf1b2  d9442474             fld dword ptr [esp + 0x74]
// 006bf1b6  d95e28               fstp dword ptr [esi + 0x28]
// 006bf1b9  d9442478             fld dword ptr [esp + 0x78]
// 006bf1bd  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bf1c0  e8cb44f7ff           call 0x633690
// 006bf1c5  47                   inc edi
// 006bf1c6  83c434               add esp, 0x34
// 006bf1c9  3bfd                 cmp edi, ebp
// 006bf1cb  7ca4                 jl 0x6bf171
// 006bf1cd  5f                   pop edi
// 006bf1ce  5e                   pop esi
// 006bf1cf  8bc5                 mov eax, ebp
// 006bf1d1  5d                   pop ebp
// 006bf1d2  5b                   pop ebx
// 006bf1d3  83c438               add esp, 0x38
// 006bf1d6  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
