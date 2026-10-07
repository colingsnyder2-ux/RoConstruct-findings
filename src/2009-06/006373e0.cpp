// roc 2009-06 006373e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006373e0
//
// 006373e0  55                   push ebp
// 006373e1  8bec                 mov ebp, esp
// 006373e3  6aff                 push -1
// 006373e5  68389d8600           push 0x869d38
// 006373ea  64a100000000         mov eax, dword ptr fs:[0]
// 006373f0  50                   push eax
// 006373f1  64892500000000       mov dword ptr fs:[0], esp
// 006373f8  83ec08               sub esp, 8
// 006373fb  53                   push ebx
// 006373fc  56                   push esi
// 006373fd  57                   push edi
// 006373fe  8965f0               mov dword ptr [ebp - 0x10], esp
// 00637401  8bf1                 mov esi, ecx
// 00637403  6a04                 push 4
// 00637405  8975ec               mov dword ptr [ebp - 0x14], esi
// 00637408  e82b160e00           call 0x718a38
// 0063740d  83c404               add esp, 4
// 00637410  85c0                 test eax, eax
// 00637412  7404                 je 0x637418
// 00637414  8930                 mov dword ptr [eax], esi
// 00637416  eb02                 jmp 0x63741a
// 00637418  33c0                 xor eax, eax
// 0063741a  8906                 mov dword ptr [esi], eax
// 0063741c  8bce                 mov ecx, esi
// 0063741e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00637425  e816780400           call 0x67ec40
// 0063742a  894618               mov dword ptr [esi + 0x18], eax
// 0063742d  b101                 mov cl, 1
// 0063742f  884811               mov byte ptr [eax + 0x11], cl
// 00637432  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637435  894004               mov dword ptr [eax + 4], eax
// 00637438  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063743b  8900                 mov dword ptr [eax], eax
// 0063743d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637440  894008               mov dword ptr [eax + 8], eax
// 00637443  8b4508               mov eax, dword ptr [ebp + 8]
// 00637446  884dfc               mov byte ptr [ebp - 4], cl
// 00637449  50                   push eax
// 0063744a  8bce                 mov ecx, esi
// 0063744c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00637453  e8c8b5dfff           call 0x432a20
// 00637458  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063745b  5f                   pop edi
// 0063745c  8bc6                 mov eax, esi
// 0063745e  5e                   pop esi
// 0063745f  64890d00000000       mov dword ptr fs:[0], ecx
// 00637466  5b                   pop ebx
// 00637467  8be5                 mov esp, ebp
// 00637469  5d                   pop ebp
// 0063746a  c20400               ret 4
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ??0?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
