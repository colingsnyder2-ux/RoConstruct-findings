// roc 2010-06 00523490  unit: RBX::MeshGen  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523490
//
// 00523490  6aff                 push -1
// 00523492  6889e19800           push 0x98e189
// 00523497  64a100000000         mov eax, dword ptr fs:[0]
// 0052349d  50                   push eax
// 0052349e  64892500000000       mov dword ptr fs:[0], esp
// 005234a5  51                   push ecx
// 005234a6  53                   push ebx
// 005234a7  56                   push esi
// 005234a8  8bf1                 mov esi, ecx
// 005234aa  89742408             mov dword ptr [esp + 8], esi
// 005234ae  8b4630               mov eax, dword ptr [esi + 0x30]
// 005234b1  33db                 xor ebx, ebx
// 005234b3  c744241403000000     mov dword ptr [esp + 0x14], 3
// 005234bb  3bc3                 cmp eax, ebx
// 005234bd  7428                 je 0x5234e7
// 005234bf  83c004               add eax, 4
// 005234c2  50                   push eax
// 005234c3  ff157ca39e00         call dword ptr [0x9ea37c]
// 005234c9  85c0                 test eax, eax
// 005234cb  7517                 jne 0x5234e4
// 005234cd  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005234d0  e84b06f6ff           call 0x483b20
// 005234d5  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005234d8  3bcb                 cmp ecx, ebx
// 005234da  7408                 je 0x5234e4
// 005234dc  8b01                 mov eax, dword ptr [ecx]
// 005234de  8b10                 mov edx, dword ptr [eax]
// 005234e0  6a01                 push 1
// 005234e2  ffd2                 call edx
// 005234e4  895e30               mov dword ptr [esi + 0x30], ebx
// 005234e7  8b4624               mov eax, dword ptr [esi + 0x24]
// 005234ea  50                   push eax
// 005234eb  c644241802           mov byte ptr [esp + 0x18], 2
// 005234f0  e8cba40200           call 0x54d9c0
// 005234f5  895e24               mov dword ptr [esi + 0x24], ebx
// 005234f8  895e28               mov dword ptr [esi + 0x28], ebx
// 005234fb  895e2c               mov dword ptr [esi + 0x2c], ebx
// 005234fe  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00523501  51                   push ecx
// 00523502  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00523507  e8b4a40200           call 0x54d9c0
// 0052350c  895e18               mov dword ptr [esi + 0x18], ebx
// 0052350f  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00523512  895e20               mov dword ptr [esi + 0x20], ebx
// 00523515  8b560c               mov edx, dword ptr [esi + 0xc]
// 00523518  52                   push edx
// 00523519  885c2420             mov byte ptr [esp + 0x20], bl
// 0052351d  e89ea40200           call 0x54d9c0
// 00523522  895e0c               mov dword ptr [esi + 0xc], ebx
// 00523525  895e10               mov dword ptr [esi + 0x10], ebx
// 00523528  895e14               mov dword ptr [esi + 0x14], ebx
// 0052352b  8b06                 mov eax, dword ptr [esi]
// 0052352d  50                   push eax
// 0052352e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00523536  e885a40200           call 0x54d9c0
// 0052353b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052353f  83c410               add esp, 0x10
// 00523542  891e                 mov dword ptr [esi], ebx
// 00523544  895e04               mov dword ptr [esi + 4], ebx
// 00523547  895e08               mov dword ptr [esi + 8], ebx
// 0052354a  5e                   pop esi
// 0052354b  5b                   pop ebx
// 0052354c  64890d00000000       mov dword ptr fs:[0], ecx
// 00523553  83c410               add esp, 0x10
// 00523556  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ??1ShadowSurface@Mesh@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp
