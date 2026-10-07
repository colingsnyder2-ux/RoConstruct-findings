// roc 2011-06 004522b0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004522b0
//
// 004522b0  51                   push ecx
// 004522b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004522b5  56                   push esi
// 004522b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004522ba  57                   push edi
// 004522bb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004522bf  c644240800           mov byte ptr [esp + 8], 0
// 004522c4  8b442408             mov eax, dword ptr [esp + 8]
// 004522c8  50                   push eax
// 004522c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004522cd  52                   push edx
// 004522ce  51                   push ecx
// 004522cf  50                   push eax
// 004522d0  56                   push esi
// 004522d1  57                   push edi
// 004522d2  e8b9fdffff           call 0x452090
// 004522d7  83c418               add esp, 0x18
// 004522da  8d04b7               lea eax, [edi + esi*4]
// 004522dd  5f                   pop edi
// 004522de  5e                   pop esi
// 004522df  59                   pop ecx
// 004522e0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
