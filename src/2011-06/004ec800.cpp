// roc 2011-06 004ec800  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec800
//
// 004ec800  8bc1                 mov eax, ecx
// 004ec802  8d4811               lea ecx, [eax + 0x11]
// 004ec805  c70000000000         mov dword ptr [eax], 0
// 004ec80b  c7400400080000       mov dword ptr [eax + 4], 0x800
// 004ec812  c7400800000000       mov dword ptr [eax + 8], 0
// 004ec819  89480c               mov dword ptr [eax + 0xc], ecx
// 004ec81c  c6401001             mov byte ptr [eax + 0x10], 1
// 004ec820  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
