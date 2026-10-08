// roc 2007-03 004ef400  unit: seg_004e0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ef400
//
// 004ef400  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004ef403  56                   push esi
// 004ef404  8d710c               lea esi, [ecx + 0xc]
// 004ef407  6a00                 push 0
// 004ef409  83c001               add eax, 1
// 004ef40c  50                   push eax
// 004ef40d  8bce                 mov ecx, esi
// 004ef40f  e8ccfcffff           call 0x4ef0e0
// 004ef414  8b4604               mov eax, dword ptr [esi + 4]
// 004ef417  8b16                 mov edx, dword ptr [esi]
// 004ef419  8d0c80               lea ecx, [eax + eax*4]
// 004ef41c  8d44cad8             lea eax, [edx + ecx*8 - 0x28]
// 004ef420  5e                   pop esi
// 004ef421  c3                   ret 
// library rbxgs-render/Material.cpp (function ?appendEmptyLevel@Material@Render@RBX@@QAEABVLevel@123@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
