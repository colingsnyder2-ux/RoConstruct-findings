// roc 2009-06 00432670  unit: IIHAAH::?$CMap  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00432670
//
// 00432670  55                   push ebp
// 00432671  8bec                 mov ebp, esp
// 00432673  6aff                 push -1
// 00432675  6880f98400           push 0x84f980
// 0043267a  64a100000000         mov eax, dword ptr fs:[0]
// 00432680  50                   push eax
// 00432681  64892500000000       mov dword ptr fs:[0], esp
// 00432688  83ec0c               sub esp, 0xc
// 0043268b  53                   push ebx
// 0043268c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0043268f  807b1100             cmp byte ptr [ebx + 0x11], 0
// 00432693  56                   push esi
// 00432694  8bf1                 mov esi, ecx
// 00432696  8b4618               mov eax, dword ptr [esi + 0x18]
// 00432699  57                   push edi
// 0043269a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043269d  8975e8               mov dword ptr [ebp - 0x18], esi
// 004326a0  8945ec               mov dword ptr [ebp - 0x14], eax
// 004326a3  7547                 jne 0x4326ec
// 004326a5  0fb64b10             movzx ecx, byte ptr [ebx + 0x10]
// 004326a9  51                   push ecx
// 004326aa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004326ad  8d530c               lea edx, [ebx + 0xc]
// 004326b0  52                   push edx
// 004326b1  50                   push eax
// 004326b2  51                   push ecx
// 004326b3  50                   push eax
// 004326b4  8bce                 mov ecx, esi
// 004326b6  e845c52400           call 0x67ec00
// 004326bb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004326be  807a1100             cmp byte ptr [edx + 0x11], 0
// 004326c2  8bf8                 mov edi, eax
// 004326c4  7403                 je 0x4326c9
// 004326c6  897dec               mov dword ptr [ebp - 0x14], edi
// 004326c9  8b03                 mov eax, dword ptr [ebx]
// 004326cb  57                   push edi
// 004326cc  50                   push eax
// 004326cd  8bce                 mov ecx, esi
// 004326cf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004326d6  e895ffffff           call 0x432670
// 004326db  8907                 mov dword ptr [edi], eax
// 004326dd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004326e0  57                   push edi
// 004326e1  51                   push ecx
// 004326e2  8bce                 mov ecx, esi
// 004326e4  e887ffffff           call 0x432670
// 004326e9  894708               mov dword ptr [edi + 8], eax
// 004326ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004326ef  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004326f2  5f                   pop edi
// 004326f3  5e                   pop esi
// 004326f4  64890d00000000       mov dword ptr fs:[0], ecx
// 004326fb  5b                   pop ebx
// 004326fc  8be5                 mov esp, ebp
// 004326fe  5d                   pop ebp
// 004326ff  c20800               ret 8
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVPMVertex@ProgressiveMesh@Ogre@@U?$less@PAVPMVertex@ProgressiveMesh@Ogre@@@std@@V?$allocator@PAVPMVertex@ProgressiveMesh@Ogre@@@5@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
