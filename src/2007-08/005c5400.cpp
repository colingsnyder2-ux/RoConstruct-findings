// roc 2007-08 005c5400  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5400
//
// 005c5400  8bc1                 mov eax, ecx
// 005c5402  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c5406  8908                 mov dword ptr [eax], ecx
// 005c5408  33c9                 xor ecx, ecx
// 005c540a  894808               mov dword ptr [eax + 8], ecx
// 005c540d  89480c               mov dword ptr [eax + 0xc], ecx
// 005c5410  894810               mov dword ptr [eax + 0x10], ecx
// 005c5413  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0?$fpos@H@std@@QAE@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
