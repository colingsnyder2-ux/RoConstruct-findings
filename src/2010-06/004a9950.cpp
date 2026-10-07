// roc 2010-06 004a9950  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a9950
//
// 004a9950  51                   push ecx
// 004a9951  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a9955  56                   push esi
// 004a9956  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a995a  57                   push edi
// 004a995b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a995f  c644240800           mov byte ptr [esp + 8], 0
// 004a9964  8b442408             mov eax, dword ptr [esp + 8]
// 004a9968  50                   push eax
// 004a9969  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a996d  52                   push edx
// 004a996e  83c108               add ecx, 8
// 004a9971  51                   push ecx
// 004a9972  50                   push eax
// 004a9973  56                   push esi
// 004a9974  57                   push edi
// 004a9975  e846ddffff           call 0x4a76c0
// 004a997a  83c418               add esp, 0x18
// 004a997d  8d04b7               lea eax, [edi + esi*4]
// 004a9980  5f                   pop edi
// 004a9981  5e                   pop esi
// 004a9982  59                   pop ecx
// 004a9983  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
