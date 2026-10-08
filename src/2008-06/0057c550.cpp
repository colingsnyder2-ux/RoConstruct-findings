// roc 2008-06 0057c550  unit: RBX::VInstance::?$SignalDesc  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c550
//
// 0057c550  56                   push esi
// 0057c551  8bf1                 mov esi, ecx
// 0057c553  8b4604               mov eax, dword ptr [esi + 4]
// 0057c556  83f806               cmp eax, 6
// 0057c559  750f                 jne 0x57c56a
// 0057c55b  8b4608               mov eax, dword ptr [esi + 8]
// 0057c55e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c562  8901                 mov dword ptr [ecx], eax
// 0057c564  b001                 mov al, 1
// 0057c566  5e                   pop esi
// 0057c567  c20400               ret 4
// 0057c56a  57                   push edi
// 0057c56b  83f802               cmp eax, 2
// 0057c56e  752f                 jne 0x57c59f
// 0057c570  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057c574  8b5608               mov edx, dword ptr [esi + 8]
// 0057c577  57                   push edi
// 0057c578  52                   push edx
// 0057c579  e892200400           call 0x5be610
// 0057c57e  83c408               add esp, 8
// 0057c581  84c0                 test al, al
// 0057c583  741a                 je 0x57c59f
// 0057c585  8bce                 mov ecx, esi
// 0057c587  e844fdffff           call 0x57c2d0
// 0057c58c  8b07                 mov eax, dword ptr [edi]
// 0057c58e  894608               mov dword ptr [esi + 8], eax
// 0057c591  5f                   pop edi
// 0057c592  c7460406000000       mov dword ptr [esi + 4], 6
// 0057c599  b001                 mov al, 1
// 0057c59b  5e                   pop esi
// 0057c59c  c20400               ret 4
// 0057c59f  5f                   pop edi
// 0057c5a0  32c0                 xor al, al
// 0057c5a2  5e                   pop esi
// 0057c5a3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
