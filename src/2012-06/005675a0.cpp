// roc 2012-06 005675a0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005675a0
//
// 005675a0  8bc1                 mov eax, ecx
// 005675a2  8d4811               lea ecx, [eax + 0x11]
// 005675a5  c70000000000         mov dword ptr [eax], 0
// 005675ab  c7400400080000       mov dword ptr [eax + 4], 0x800
// 005675b2  c7400800000000       mov dword ptr [eax + 8], 0
// 005675b9  89480c               mov dword ptr [eax + 0xc], ecx
// 005675bc  c6401001             mov byte ptr [eax + 0x10], 1
// 005675c0  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
