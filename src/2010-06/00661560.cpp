// from server: 100% by auto
// roc 2010-06 00661560  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00661560
//
// 00661560  55                   push ebp
// 00661561  8bec                 mov ebp, esp
// 00661563  6aff                 push -1
// 00661565  68e8e89900           push 0x99e8e8
// 0066156a  64a100000000         mov eax, dword ptr fs:[0]
// 00661570  50                   push eax
// 00661571  64892500000000       mov dword ptr fs:[0], esp
// 00661578  83ec08               sub esp, 8
// 0066157b  53                   push ebx
// 0066157c  56                   push esi
// 0066157d  57                   push edi
// 0066157e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00661581  8bf1                 mov esi, ecx
// 00661583  6a04                 push 4
// 00661585  8975ec               mov dword ptr [ebp - 0x14], esi
// 00661588  e813641400           call 0x7a79a0
// 0066158d  83c404               add esp, 4
// 00661590  85c0                 test eax, eax
// 00661592  7404                 je 0x661598
// 00661594  8930                 mov dword ptr [eax], esi
// 00661596  eb02                 jmp 0x66159a
// 00661598  33c0                 xor eax, eax
// 0066159a  8906                 mov dword ptr [esi], eax
// 0066159c  8bce                 mov ecx, esi
// 0066159e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006615a5  e80653e7ff           call 0x4d68b0
// 006615aa  894618               mov dword ptr [esi + 0x18], eax
// 006615ad  b101                 mov cl, 1
// 006615af  884815               mov byte ptr [eax + 0x15], cl
// 006615b2  8b4618               mov eax, dword ptr [esi + 0x18]
// 006615b5  894004               mov dword ptr [eax + 4], eax
// 006615b8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006615bb  8900                 mov dword ptr [eax], eax
// 006615bd  8b4618               mov eax, dword ptr [esi + 0x18]
// 006615c0  894008               mov dword ptr [eax + 8], eax
// 006615c3  8b4508               mov eax, dword ptr [ebp + 8]
// 006615c6  884dfc               mov byte ptr [ebp - 4], cl
// 006615c9  50                   push eax
// 006615ca  8bce                 mov ecx, esi
// 006615cc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006615d3  e8e8f5ffff           call 0x660bc0
// 006615d8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006615db  5f                   pop edi
// 006615dc  8bc6                 mov eax, esi
// 006615de  5e                   pop esi
// 006615df  64890d00000000       mov dword ptr fs:[0], ecx
// 006615e6  5b                   pop ebx
// 006615e7  8be5                 mov esp, ebp
// 006615e9  5d                   pop ebp
// 006615ea  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
