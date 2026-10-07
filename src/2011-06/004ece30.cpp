// roc 2011-06 004ece30  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ece30
//
// 004ece30  8b4108               mov eax, dword ptr [ecx + 8]
// 004ece33  8d5008               lea edx, [eax + 8]
// 004ece36  3b11                 cmp edx, dword ptr [ecx]
// 004ece38  7605                 jbe 0x4ece3f
// 004ece3a  32c0                 xor al, al
// 004ece3c  c20400               ret 4
// 004ece3f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004ece42  c1e803               shr eax, 3
// 004ece45  8a0410               mov al, byte ptr [eax + edx]
// 004ece48  8b542404             mov edx, dword ptr [esp + 4]
// 004ece4c  8802                 mov byte ptr [edx], al
// 004ece4e  83410808             add dword ptr [ecx + 8], 8
// 004ece52  b001                 mov al, 1
// 004ece54  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar8@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
