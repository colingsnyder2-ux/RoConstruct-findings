// roc 2008-06 004a5090  unit: RBX::VHint::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5090
//
// 004a5090  8bc1                 mov eax, ecx
// 004a5092  8d4811               lea ecx, [eax + 0x11]
// 004a5095  c70000000000         mov dword ptr [eax], 0
// 004a509b  c7400400080000       mov dword ptr [eax + 4], 0x800
// 004a50a2  c7400800000000       mov dword ptr [eax + 8], 0
// 004a50a9  89480c               mov dword ptr [eax + 0xc], ecx
// 004a50ac  c6401001             mov byte ptr [eax + 0x10], 1
// 004a50b0  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
