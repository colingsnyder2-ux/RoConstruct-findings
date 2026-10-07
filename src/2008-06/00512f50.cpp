// roc 2008-06 00512f50  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512f50
//
// 00512f50  8b442404             mov eax, dword ptr [esp + 4]
// 00512f54  50                   push eax
// 00512f55  6804888200           push 0x828804
// 00512f5a  51                   push ecx
// 00512f5b  e850ffffff           call 0x512eb0
// 00512f60  83c40c               add esp, 0xc
// 00512f63  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
