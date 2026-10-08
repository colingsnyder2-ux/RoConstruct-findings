// roc 2007-08 00417920  unit: Marshaller  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417920
//
// 00417920  8b442404             mov eax, dword ptr [esp + 4]
// 00417924  8b08                 mov ecx, dword ptr [eax]
// 00417926  85c9                 test ecx, ecx
// 00417928  740e                 je 0x417938
// 0041792a  8b11                 mov edx, dword ptr [ecx]
// 0041792c  8b02                 mov eax, dword ptr [edx]
// 0041792e  c744240401000000     mov dword ptr [esp + 4], 1
// 00417936  ffe0                 jmp eax
// 00417938  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
