// roc 2007-03 00418e80  unit: seg_00410000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00418e80
//
// 00418e80  8b442404             mov eax, dword ptr [esp + 4]
// 00418e84  8b08                 mov ecx, dword ptr [eax]
// 00418e86  85c9                 test ecx, ecx
// 00418e88  740e                 je 0x418e98
// 00418e8a  8b11                 mov edx, dword ptr [ecx]
// 00418e8c  8b02                 mov eax, dword ptr [edx]
// 00418e8e  c744240401000000     mov dword ptr [esp + 4], 1
// 00418e96  ffe0                 jmp eax
// 00418e98  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
