// roc 2009-12 00637830  unit: RBX::VInstance::?$EventDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00637830
//
// 00637830  53                   push ebx
// 00637831  57                   push edi
// 00637832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00637836  8bd9                 mov ebx, ecx
// 00637838  85ff                 test edi, edi
// 0063783a  7432                 je 0x63786e
// 0063783c  a1100cb900           mov eax, dword ptr [0xb90c10]
// 00637841  56                   push esi
// 00637842  50                   push eax
// 00637843  8bcf                 mov ecx, edi
// 00637845  e8c6f50300           call 0x676e10
// 0063784a  8bf0                 mov esi, eax
// 0063784c  85f6                 test esi, esi
// 0063784e  741d                 je 0x63786d
// 00637850  55                   push ebp
// 00637851  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00637855  55                   push ebp
// 00637856  56                   push esi
// 00637857  8bcb                 mov ecx, ebx
// 00637859  e8d2feffff           call 0x637730
// 0063785e  56                   push esi
// 0063785f  8bcf                 mov ecx, edi
// 00637861  e8caf50300           call 0x676e30
// 00637866  8bf0                 mov esi, eax
// 00637868  85f6                 test esi, esi
// 0063786a  75e9                 jne 0x637855
// 0063786c  5d                   pop ebp
// 0063786d  5e                   pop esi
// 0063786e  5f                   pop edi
// 0063786f  5b                   pop ebx
// 00637870  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
