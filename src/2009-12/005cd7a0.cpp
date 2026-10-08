// roc 2009-12 005cd7a0  unit: RBX::MaterialBaseRefMaterialAdapter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cd7a0
//
// 005cd7a0  a1982fb800           mov eax, dword ptr [0xb82f98]
// 005cd7a5  85c0                 test eax, eax
// 005cd7a7  7435                 je 0x5cd7de
// 005cd7a9  83c004               add eax, 4
// 005cd7ac  50                   push eax
// 005cd7ad  ff1508b29800         call dword ptr [0x98b208]
// 005cd7b3  85c0                 test eax, eax
// 005cd7b5  751d                 jne 0x5cd7d4
// 005cd7b7  8b0d982fb800         mov ecx, dword ptr [0xb82f98]
// 005cd7bd  e85ed8e7ff           call 0x44b020
// 005cd7c2  8b0d982fb800         mov ecx, dword ptr [0xb82f98]
// 005cd7c8  85c9                 test ecx, ecx
// 005cd7ca  7408                 je 0x5cd7d4
// 005cd7cc  8b01                 mov eax, dword ptr [ecx]
// 005cd7ce  8b10                 mov edx, dword ptr [eax]
// 005cd7d0  6a01                 push 1
// 005cd7d2  ffd2                 call edx
// 005cd7d4  c705982fb80000000000 mov dword ptr [0xb82f98], 0
// 005cd7de  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__FfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
