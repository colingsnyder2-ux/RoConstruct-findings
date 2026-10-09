// roc 2008-06 0041a7e0  unit: boost::X::U?$last_value::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a7e0
//
// 0041a7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0041a7e4  8b08                 mov ecx, dword ptr [eax]
// 0041a7e6  85c9                 test ecx, ecx
// 0041a7e8  740e                 je 0x41a7f8
// 0041a7ea  8b11                 mov edx, dword ptr [ecx]
// 0041a7ec  8b02                 mov eax, dword ptr [edx]
// 0041a7ee  c744240401000000     mov dword ptr [esp + 4], 1
// 0041a7f6  ffe0                 jmp eax
// 0041a7f8  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
