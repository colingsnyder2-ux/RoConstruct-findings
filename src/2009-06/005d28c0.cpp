// roc 2009-06 005d28c0  unit: VAuthoringSettings::?$FactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d28c0
//
// 005d28c0  53                   push ebx
// 005d28c1  57                   push edi
// 005d28c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005d28c6  8bd9                 mov ebx, ecx
// 005d28c8  85ff                 test edi, edi
// 005d28ca  7432                 je 0x5d28fe
// 005d28cc  a180b0a400           mov eax, dword ptr [0xa4b080]
// 005d28d1  56                   push esi
// 005d28d2  50                   push eax
// 005d28d3  8bcf                 mov ecx, edi
// 005d28d5  e856710300           call 0x609a30
// 005d28da  8bf0                 mov esi, eax
// 005d28dc  85f6                 test esi, esi
// 005d28de  741d                 je 0x5d28fd
// 005d28e0  55                   push ebp
// 005d28e1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005d28e5  55                   push ebp
// 005d28e6  56                   push esi
// 005d28e7  8bcb                 mov ecx, ebx
// 005d28e9  e8d2feffff           call 0x5d27c0
// 005d28ee  56                   push esi
// 005d28ef  8bcf                 mov ecx, edi
// 005d28f1  e85a710300           call 0x609a50
// 005d28f6  8bf0                 mov esi, eax
// 005d28f8  85f6                 test esi, esi
// 005d28fa  75e9                 jne 0x5d28e5
// 005d28fc  5d                   pop ebp
// 005d28fd  5e                   pop esi
// 005d28fe  5f                   pop edi
// 005d28ff  5b                   pop ebx
// 005d2900  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
