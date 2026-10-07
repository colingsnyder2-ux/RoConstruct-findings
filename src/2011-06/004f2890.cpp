// roc 2011-06 004f2890  unit: RBX::Network::IdSerializer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2890
//
// 004f2890  51                   push ecx
// 004f2891  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f2895  56                   push esi
// 004f2896  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f289a  57                   push edi
// 004f289b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f289f  c644240800           mov byte ptr [esp + 8], 0
// 004f28a4  8b442408             mov eax, dword ptr [esp + 8]
// 004f28a8  50                   push eax
// 004f28a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f28ad  52                   push edx
// 004f28ae  51                   push ecx
// 004f28af  50                   push eax
// 004f28b0  56                   push esi
// 004f28b1  57                   push edi
// 004f28b2  e879feffff           call 0x4f2730
// 004f28b7  8d0c76               lea ecx, [esi + esi*2]
// 004f28ba  83c418               add esp, 0x18
// 004f28bd  8d048f               lea eax, [edi + ecx*4]
// 004f28c0  5f                   pop edi
// 004f28c1  5e                   pop esi
// 004f28c2  59                   pop ecx
// 004f28c3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
