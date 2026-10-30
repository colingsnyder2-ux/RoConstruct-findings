// roc 2009-06 005b9830  unit: seg_005b0000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9830
//
// 005b9830  55                   push ebp
// 005b9831  8bec                 mov ebp, esp
// 005b9833  6aff                 push -1
// 005b9835  6880188600           push 0x861880
// 005b983a  64a100000000         mov eax, dword ptr fs:[0]
// 005b9840  50                   push eax
// 005b9841  64892500000000       mov dword ptr fs:[0], esp
// 005b9848  51                   push ecx
// 005b9849  51                   push ecx
// 005b984a  53                   push ebx
// 005b984b  56                   push esi
// 005b984c  57                   push edi
// 005b984d  8965f0               mov dword ptr [ebp - 0x10], esp
// 005b9850  8b4508               mov eax, dword ptr [ebp + 8]
// 005b9853  8945ec               mov dword ptr [ebp - 0x14], eax
// 005b9856  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005b985d  eb12                 jmp 0x5b9871
// 005b985f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b9862  83e901               sub ecx, 1
// 005b9865  894d0c               mov dword ptr [ebp + 0xc], ecx
// 005b9868  8b5508               mov edx, dword ptr [ebp + 8]
// 005b986b  83c248               add edx, 0x48
// 005b986e  895508               mov dword ptr [ebp + 8], edx
// 005b9871  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 005b9875  7612                 jbe 0x5b9889
// 005b9877  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b987a  50                   push eax
// 005b987b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b987e  51                   push ecx
// 005b987f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005b9882  e8c9030000           call 0x5b9c50
// 005b9887  ebd6                 jmp 0x5b985f
// 005b9889  eb37                 jmp 0x5b98c2
// 005b988b  eb09                 jmp 0x5b9896
// 005b988d  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005b9890  83c248               add edx, 0x48
// 005b9893  8955ec               mov dword ptr [ebp - 0x14], edx
// 005b9896  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005b9899  3b4508               cmp eax, dword ptr [ebp + 8]
// 005b989c  740e                 je 0x5b98ac
// 005b989e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005b98a1  51                   push ecx
// 005b98a2  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005b98a5  e8d6acffff           call 0x5b4580
// 005b98aa  ebe1                 jmp 0x5b988d
// 005b98ac  6a00                 push 0
// 005b98ae  6a00                 push 0
// 005b98b0  e895011600           call 0x719a4a
// 005b98b5  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005b98bc  b8c9985b00           mov eax, 0x5b98c9
// 005b98c1  c3                   ret 
// 005b98c2  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005b98c9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005b98cc  64890d00000000       mov dword ptr fs:[0], ecx
// 005b98d3  5f                   pop edi
// 005b98d4  5e                   pop esi
// 005b98d5  5b                   pop ebx
// 005b98d6  8be5                 mov esp, ebp
// 005b98d8  5d                   pop ebp
// 005b98d9  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAVFace@?$ConvexClipper@N@Wml@@IV123@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@N@Wml@@IABV123@AAV?$allocator@VFace@?$ConvexClipper@N@Wml@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp