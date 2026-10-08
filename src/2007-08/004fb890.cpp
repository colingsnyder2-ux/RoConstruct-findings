// roc 2007-08 004fb890  unit: RBX::Render::Material  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb890
//
// 004fb890  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004fb893  56                   push esi
// 004fb894  8d710c               lea esi, [ecx + 0xc]
// 004fb897  6a00                 push 0
// 004fb899  83c001               add eax, 1
// 004fb89c  50                   push eax
// 004fb89d  8bce                 mov ecx, esi
// 004fb89f  e8ccfcffff           call 0x4fb570
// 004fb8a4  8b4604               mov eax, dword ptr [esi + 4]
// 004fb8a7  8b16                 mov edx, dword ptr [esi]
// 004fb8a9  8d0c80               lea ecx, [eax + eax*4]
// 004fb8ac  8d44cad8             lea eax, [edx + ecx*8 - 0x28]
// 004fb8b0  5e                   pop esi
// 004fb8b1  c3                   ret 
// library rbxgs-render/Material.cpp (function ?appendEmptyLevel@Material@Render@RBX@@QAEABVLevel@123@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
