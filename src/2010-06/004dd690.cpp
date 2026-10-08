// roc 2010-06 004dd690  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd690
//
// 004dd690  8b01                 mov eax, dword ptr [ecx]
// 004dd692  85c0                 test eax, eax
// 004dd694  740d                 je 0x4dd6a3
// 004dd696  8d50ff               lea edx, [eax - 1]
// 004dd699  83e207               and edx, 7
// 004dd69c  2bc2                 sub eax, edx
// 004dd69e  83c007               add eax, 7
// 004dd6a1  8901                 mov dword ptr [ecx], eax
// 004dd6a3  e978ffffff           jmp 0x4dd620
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
