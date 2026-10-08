// from server: 100% by auto
// roc 2010-06 00660550  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00660550
//
// 00660550  55                   push ebp
// 00660551  8bec                 mov ebp, esp
// 00660553  6aff                 push -1
// 00660555  6880e89900           push 0x99e880
// 0066055a  64a100000000         mov eax, dword ptr fs:[0]
// 00660560  50                   push eax
// 00660561  64892500000000       mov dword ptr fs:[0], esp
// 00660568  83ec0c               sub esp, 0xc
// 0066056b  53                   push ebx
// 0066056c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0066056f  807b1500             cmp byte ptr [ebx + 0x15], 0
// 00660573  56                   push esi
// 00660574  8bf1                 mov esi, ecx
// 00660576  8b4618               mov eax, dword ptr [esi + 0x18]
// 00660579  57                   push edi
// 0066057a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0066057d  8975e8               mov dword ptr [ebp - 0x18], esi
// 00660580  8945ec               mov dword ptr [ebp - 0x14], eax
// 00660583  7547                 jne 0x6605cc
// 00660585  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 00660589  51                   push ecx
// 0066058a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0066058d  8d530c               lea edx, [ebx + 0xc]
// 00660590  52                   push edx
// 00660591  50                   push eax
// 00660592  51                   push ecx
// 00660593  50                   push eax
// 00660594  8bce                 mov ecx, esi
// 00660596  e845f1ffff           call 0x65f6e0
// 0066059b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0066059e  807a1500             cmp byte ptr [edx + 0x15], 0
// 006605a2  8bf8                 mov edi, eax
// 006605a4  7403                 je 0x6605a9
// 006605a6  897dec               mov dword ptr [ebp - 0x14], edi
// 006605a9  8b03                 mov eax, dword ptr [ebx]
// 006605ab  57                   push edi
// 006605ac  50                   push eax
// 006605ad  8bce                 mov ecx, esi
// 006605af  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006605b6  e895ffffff           call 0x660550
// 006605bb  8907                 mov dword ptr [edi], eax
// 006605bd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006605c0  57                   push edi
// 006605c1  51                   push ecx
// 006605c2  8bce                 mov ecx, esi
// 006605c4  e887ffffff           call 0x660550
// 006605c9  894708               mov dword ptr [edi + 8], eax
// 006605cc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006605cf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006605d2  5f                   pop edi
// 006605d3  5e                   pop esi
// 006605d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006605db  5b                   pop ebx
// 006605dc  8be5                 mov esp, ebp
// 006605de  5d                   pop ebp
// 006605df  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
