// roc 2012-06 00567ba0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567ba0
//
// 00567ba0  8b4108               mov eax, dword ptr [ecx + 8]
// 00567ba3  8d5008               lea edx, [eax + 8]
// 00567ba6  3b11                 cmp edx, dword ptr [ecx]
// 00567ba8  7605                 jbe 0x567baf
// 00567baa  32c0                 xor al, al
// 00567bac  c20400               ret 4
// 00567baf  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00567bb2  c1e803               shr eax, 3
// 00567bb5  8a0410               mov al, byte ptr [eax + edx]
// 00567bb8  8b542404             mov edx, dword ptr [esp + 4]
// 00567bbc  8802                 mov byte ptr [edx], al
// 00567bbe  83410808             add dword ptr [ecx + 8], 8
// 00567bc2  b001                 mov al, 1
// 00567bc4  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar8@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
