// roc 2010-06 00599860  unit: RBX::VInstance::?$EventDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00599860
//
// 00599860  53                   push ebx
// 00599861  57                   push edi
// 00599862  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00599866  8bd9                 mov ebx, ecx
// 00599868  85ff                 test edi, edi
// 0059986a  7432                 je 0x59989e
// 0059986c  a14c93c100           mov eax, dword ptr [0xc1934c]
// 00599871  56                   push esi
// 00599872  50                   push eax
// 00599873  8bcf                 mov ecx, edi
// 00599875  e816640400           call 0x5dfc90
// 0059987a  8bf0                 mov esi, eax
// 0059987c  85f6                 test esi, esi
// 0059987e  741d                 je 0x59989d
// 00599880  55                   push ebp
// 00599881  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00599885  55                   push ebp
// 00599886  56                   push esi
// 00599887  8bcb                 mov ecx, ebx
// 00599889  e8d2feffff           call 0x599760
// 0059988e  56                   push esi
// 0059988f  8bcf                 mov ecx, edi
// 00599891  e81a640400           call 0x5dfcb0
// 00599896  8bf0                 mov esi, eax
// 00599898  85f6                 test esi, esi
// 0059989a  75e9                 jne 0x599885
// 0059989c  5d                   pop ebp
// 0059989d  5e                   pop esi
// 0059989e  5f                   pop edi
// 0059989f  5b                   pop ebx
// 005998a0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
