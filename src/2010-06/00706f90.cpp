// roc 2010-06 00706f90  unit: RBX::PlayerHUD  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00706f90
//
// 00706f90  51                   push ecx
// 00706f91  8b542410             mov edx, dword ptr [esp + 0x10]
// 00706f95  56                   push esi
// 00706f96  8b742410             mov esi, dword ptr [esp + 0x10]
// 00706f9a  57                   push edi
// 00706f9b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00706f9f  c644240800           mov byte ptr [esp + 8], 0
// 00706fa4  8b442408             mov eax, dword ptr [esp + 8]
// 00706fa8  50                   push eax
// 00706fa9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00706fad  52                   push edx
// 00706fae  83c108               add ecx, 8
// 00706fb1  51                   push ecx
// 00706fb2  50                   push eax
// 00706fb3  56                   push esi
// 00706fb4  57                   push edi
// 00706fb5  e856320000           call 0x70a210
// 00706fba  83c418               add esp, 0x18
// 00706fbd  8d04b7               lea eax, [edi + esi*4]
// 00706fc0  5f                   pop edi
// 00706fc1  5e                   pop esi
// 00706fc2  59                   pop ecx
// 00706fc3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
