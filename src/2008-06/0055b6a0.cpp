// roc 2008-06 0055b6a0  unit: RBX::VInstance::?$SignalDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055b6a0
//
// 0055b6a0  53                   push ebx
// 0055b6a1  57                   push edi
// 0055b6a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055b6a6  8bd9                 mov ebx, ecx
// 0055b6a8  85ff                 test edi, edi
// 0055b6aa  7432                 je 0x55b6de
// 0055b6ac  a15c539700           mov eax, dword ptr [0x97535c]
// 0055b6b1  56                   push esi
// 0055b6b2  50                   push eax
// 0055b6b3  8bcf                 mov ecx, edi
// 0055b6b5  e8760b0200           call 0x57c230
// 0055b6ba  8bf0                 mov esi, eax
// 0055b6bc  85f6                 test esi, esi
// 0055b6be  741d                 je 0x55b6dd
// 0055b6c0  55                   push ebp
// 0055b6c1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0055b6c5  55                   push ebp
// 0055b6c6  56                   push esi
// 0055b6c7  8bcb                 mov ecx, ebx
// 0055b6c9  e8d2feffff           call 0x55b5a0
// 0055b6ce  56                   push esi
// 0055b6cf  8bcf                 mov ecx, edi
// 0055b6d1  e87a0b0200           call 0x57c250
// 0055b6d6  8bf0                 mov esi, eax
// 0055b6d8  85f6                 test esi, esi
// 0055b6da  75e9                 jne 0x55b6c5
// 0055b6dc  5d                   pop ebp
// 0055b6dd  5e                   pop esi
// 0055b6de  5f                   pop edi
// 0055b6df  5b                   pop ebx
// 0055b6e0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
