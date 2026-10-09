// roc 2009-12 004f8200  unit: RBX::VBrickColor::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f8200
//
// 004f8200  8b442404             mov eax, dword ptr [esp + 4]
// 004f8204  8b08                 mov ecx, dword ptr [eax]
// 004f8206  85c9                 test ecx, ecx
// 004f8208  740e                 je 0x4f8218
// 004f820a  8b11                 mov edx, dword ptr [ecx]
// 004f820c  8b02                 mov eax, dword ptr [edx]
// 004f820e  c744240401000000     mov dword ptr [esp + 4], 1
// 004f8216  ffe0                 jmp eax
// 004f8218  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
