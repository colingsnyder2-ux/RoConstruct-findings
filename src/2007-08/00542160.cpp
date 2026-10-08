// roc 2007-08 00542160  unit: RBX::VInstance::?$NonFactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542160
//
// 00542160  53                   push ebx
// 00542161  57                   push edi
// 00542162  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00542166  85ff                 test edi, edi
// 00542168  8bd9                 mov ebx, ecx
// 0054216a  7432                 je 0x54219e
// 0054216c  a1bc228c00           mov eax, dword ptr [0x8c22bc]
// 00542171  56                   push esi
// 00542172  50                   push eax
// 00542173  8bcf                 mov ecx, edi
// 00542175  e8b6b10100           call 0x55d330
// 0054217a  8bf0                 mov esi, eax
// 0054217c  85f6                 test esi, esi
// 0054217e  741d                 je 0x54219d
// 00542180  55                   push ebp
// 00542181  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00542185  55                   push ebp
// 00542186  56                   push esi
// 00542187  8bcb                 mov ecx, ebx
// 00542189  e8d2feffff           call 0x542060
// 0054218e  56                   push esi
// 0054218f  8bcf                 mov ecx, edi
// 00542191  e8bab10100           call 0x55d350
// 00542196  8bf0                 mov esi, eax
// 00542198  85f6                 test esi, esi
// 0054219a  75e9                 jne 0x542185
// 0054219c  5d                   pop ebp
// 0054219d  5e                   pop esi
// 0054219e  5f                   pop edi
// 0054219f  5b                   pop ebx
// 005421a0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
