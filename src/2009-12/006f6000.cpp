// roc 2009-12 006f6000  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f6000
//
// 006f6000  55                   push ebp
// 006f6001  8bec                 mov ebp, esp
// 006f6003  6aff                 push -1
// 006f6005  6800be9400           push 0x94be00
// 006f600a  64a100000000         mov eax, dword ptr fs:[0]
// 006f6010  50                   push eax
// 006f6011  64892500000000       mov dword ptr fs:[0], esp
// 006f6018  83ec0c               sub esp, 0xc
// 006f601b  53                   push ebx
// 006f601c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006f601f  807b1500             cmp byte ptr [ebx + 0x15], 0
// 006f6023  56                   push esi
// 006f6024  8bf1                 mov esi, ecx
// 006f6026  8b4618               mov eax, dword ptr [esi + 0x18]
// 006f6029  57                   push edi
// 006f602a  8965f0               mov dword ptr [ebp - 0x10], esp
// 006f602d  8975e8               mov dword ptr [ebp - 0x18], esi
// 006f6030  8945ec               mov dword ptr [ebp - 0x14], eax
// 006f6033  7547                 jne 0x6f607c
// 006f6035  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 006f6039  51                   push ecx
// 006f603a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006f603d  8d530c               lea edx, [ebx + 0xc]
// 006f6040  52                   push edx
// 006f6041  50                   push eax
// 006f6042  51                   push ecx
// 006f6043  50                   push eax
// 006f6044  8bce                 mov ecx, esi
// 006f6046  e855edffff           call 0x6f4da0
// 006f604b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006f604e  807a1500             cmp byte ptr [edx + 0x15], 0
// 006f6052  8bf8                 mov edi, eax
// 006f6054  7403                 je 0x6f6059
// 006f6056  897dec               mov dword ptr [ebp - 0x14], edi
// 006f6059  8b03                 mov eax, dword ptr [ebx]
// 006f605b  57                   push edi
// 006f605c  50                   push eax
// 006f605d  8bce                 mov ecx, esi
// 006f605f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006f6066  e895ffffff           call 0x6f6000
// 006f606b  8907                 mov dword ptr [edi], eax
// 006f606d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006f6070  57                   push edi
// 006f6071  51                   push ecx
// 006f6072  8bce                 mov ecx, esi
// 006f6074  e887ffffff           call 0x6f6000
// 006f6079  894708               mov dword ptr [edi + 8], eax
// 006f607c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006f607f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006f6082  5f                   pop edi
// 006f6083  5e                   pop esi
// 006f6084  64890d00000000       mov dword ptr fs:[0], ecx
// 006f608b  5b                   pop ebx
// 006f608c  8be5                 mov esp, ebp
// 006f608e  5d                   pop ebp
// 006f608f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
