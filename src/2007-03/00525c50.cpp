// roc 2007-03 00525c50  unit: seg_00520000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525c50
//
// 00525c50  56                   push esi
// 00525c51  8b742408             mov esi, dword ptr [esp + 8]
// 00525c55  8b4604               mov eax, dword ptr [esi + 4]
// 00525c58  8b08                 mov ecx, dword ptr [eax]
// 00525c5a  6a40                 push 0x40
// 00525c5c  6a01                 push 1
// 00525c5e  56                   push esi
// 00525c5f  ffd1                 call ecx
// 00525c61  898640010000         mov dword ptr [esi + 0x140], eax
// 00525c67  83c40c               add esp, 0xc
// 00525c6a  c700005c5200         mov dword ptr [eax], 0x525c00
// 00525c70  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00525c77  7563                 jne 0x525cdc
// 00525c79  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00525c7e  7415                 je 0x525c95
// 00525c80  8b16                 mov edx, dword ptr [esi]
// 00525c82  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00525c89  8b06                 mov eax, dword ptr [esi]
// 00525c8b  8b08                 mov ecx, dword ptr [eax]
// 00525c8d  56                   push esi
// 00525c8e  ffd1                 call ecx
// 00525c90  83c404               add esp, 4
// 00525c93  5e                   pop esi
// 00525c94  c3                   ret 
// 00525c95  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00525c98  55                   push ebp
// 00525c99  33ed                 xor ebp, ebp
// 00525c9b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 00525c9e  7e3b                 jle 0x525cdb
// 00525ca0  53                   push ebx
// 00525ca1  57                   push edi
// 00525ca2  8d791c               lea edi, [ecx + 0x1c]
// 00525ca5  8d5818               lea ebx, [eax + 0x18]
// 00525ca8  8b47f0               mov eax, dword ptr [edi - 0x10]
// 00525cab  8b0f                 mov ecx, dword ptr [edi]
// 00525cad  8b5604               mov edx, dword ptr [esi + 4]
// 00525cb0  8b5208               mov edx, dword ptr [edx + 8]
// 00525cb3  03c0                 add eax, eax
// 00525cb5  03c9                 add ecx, ecx
// 00525cb7  03c0                 add eax, eax
// 00525cb9  03c0                 add eax, eax
// 00525cbb  50                   push eax
// 00525cbc  03c9                 add ecx, ecx
// 00525cbe  03c9                 add ecx, ecx
// 00525cc0  51                   push ecx
// 00525cc1  6a01                 push 1
// 00525cc3  56                   push esi
// 00525cc4  ffd2                 call edx
// 00525cc6  8903                 mov dword ptr [ebx], eax
// 00525cc8  83c501               add ebp, 1
// 00525ccb  83c410               add esp, 0x10
// 00525cce  83c304               add ebx, 4
// 00525cd1  83c754               add edi, 0x54
// 00525cd4  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00525cd7  7ccf                 jl 0x525ca8
// 00525cd9  5f                   pop edi
// 00525cda  5b                   pop ebx
// 00525cdb  5d                   pop ebp
// 00525cdc  5e                   pop esi
// 00525cdd  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
