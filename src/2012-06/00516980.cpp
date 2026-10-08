// from server: 100% by auto
// roc 2012-06 00516980  unit: RBX::RbxParticleEmitter  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00516980
//
// 00516980  51                   push ecx
// 00516981  8b542410             mov edx, dword ptr [esp + 0x10]
// 00516985  56                   push esi
// 00516986  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051698a  57                   push edi
// 0051698b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051698f  c644240800           mov byte ptr [esp + 8], 0
// 00516994  8b442408             mov eax, dword ptr [esp + 8]
// 00516998  50                   push eax
// 00516999  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051699d  52                   push edx
// 0051699e  51                   push ecx
// 0051699f  50                   push eax
// 005169a0  56                   push esi
// 005169a1  57                   push edi
// 005169a2  e839ffffff           call 0x5168e0
// 005169a7  83c418               add esp, 0x18
// 005169aa  8d04b7               lea eax, [edi + esi*4]
// 005169ad  5f                   pop edi
// 005169ae  5e                   pop esi
// 005169af  59                   pop ecx
// 005169b0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
