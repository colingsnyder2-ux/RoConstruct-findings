// roc 2010-06 004a61d0  unit: RBX::VBrickColor::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a61d0
//
// 004a61d0  8b442404             mov eax, dword ptr [esp + 4]
// 004a61d4  8b08                 mov ecx, dword ptr [eax]
// 004a61d6  85c9                 test ecx, ecx
// 004a61d8  740e                 je 0x4a61e8
// 004a61da  8b11                 mov edx, dword ptr [ecx]
// 004a61dc  8b02                 mov eax, dword ptr [edx]
// 004a61de  c744240401000000     mov dword ptr [esp + 4], 1
// 004a61e6  ffe0                 jmp eax
// 004a61e8  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
