// roc 2007-08 00418400  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00418400
//
// 00418400  6aff                 push -1
// 00418402  68bead7300           push 0x73adbe
// 00418407  64a100000000         mov eax, dword ptr fs:[0]
// 0041840d  50                   push eax
// 0041840e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00418413  33c4                 xor eax, esp
// 00418415  50                   push eax
// 00418416  8d442404             lea eax, [esp + 4]
// 0041841a  64a300000000         mov dword ptr fs:[0], eax
// 00418420  b801000000           mov eax, 1
// 00418425  8405a8b28b00         test byte ptr [0x8bb2a8], al
// 0041842b  7525                 jne 0x418452
// 0041842d  0905a8b28b00         or dword ptr [0x8bb2a8], eax
// 00418433  b920b28b00           mov ecx, 0x8bb220
// 00418438  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00418440  e8fb861500           call 0x570b40
// 00418445  68a0747700           push 0x7774a0
// 0041844a  e8d4882100           call 0x630d23
// 0041844f  83c404               add esp, 4
// 00418452  b820b28b00           mov eax, 0x8bb220
// 00418457  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041845b  64890d00000000       mov dword ptr fs:[0], ecx
// 00418462  59                   pop ecx
// 00418463  83c40c               add esp, 0xc
// 00418466  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
