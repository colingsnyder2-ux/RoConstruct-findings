// roc 2011-06 004a70a0  unit: RBX::VBrickColor::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a70a0
//
// 004a70a0  8b442404             mov eax, dword ptr [esp + 4]
// 004a70a4  8b08                 mov ecx, dword ptr [eax]
// 004a70a6  85c9                 test ecx, ecx
// 004a70a8  740e                 je 0x4a70b8
// 004a70aa  8b11                 mov edx, dword ptr [ecx]
// 004a70ac  8b02                 mov eax, dword ptr [edx]
// 004a70ae  c744240401000000     mov dword ptr [esp + 4], 1
// 004a70b6  ffe0                 jmp eax
// 004a70b8  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
