// roc 2012-06 008544b0  unit: lua_exception  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008544b0
//
// 008544b0  56                   push esi
// 008544b1  8bf1                 mov esi, ecx
// 008544b3  807e1400             cmp byte ptr [esi + 0x14], 0
// 008544b7  c706fc38bd00         mov dword ptr [esi], 0xbd38fc
// 008544bd  7518                 jne 0x8544d7
// 008544bf  8b4610               mov eax, dword ptr [esi + 0x10]
// 008544c2  c7400800000000       mov dword ptr [eax + 8], 0
// 008544c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008544cc  6afe                 push -2
// 008544ce  51                   push ecx
// 008544cf  e82cd6fdff           call 0x831b00
// 008544d4  83c408               add esp, 8
// 008544d7  8bce                 mov ecx, esi
// 008544d9  5e                   pop esi
// 008544da  ff25d829b200         jmp dword ptr [0xb229d8]
// copied from an identical function in another client (function ??1lua_exception@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp