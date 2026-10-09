// roc 2009-06 004bdb10  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bdb10
//
// 004bdb10  8b442404             mov eax, dword ptr [esp + 4]
// 004bdb14  8b08                 mov ecx, dword ptr [eax]
// 004bdb16  85c9                 test ecx, ecx
// 004bdb18  740e                 je 0x4bdb28
// 004bdb1a  8b11                 mov edx, dword ptr [ecx]
// 004bdb1c  8b02                 mov eax, dword ptr [edx]
// 004bdb1e  c744240401000000     mov dword ptr [esp + 4], 1
// 004bdb26  ffe0                 jmp eax
// 004bdb28  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ?destroy@?$allocator@Vany@boost@@@std@@QAEXPAVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
