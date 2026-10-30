// from server: 100% by auto
// roc 2010-06 00584e70  unit: seg_00580000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584e70
//
// 00584e70  56                   push esi
// 00584e71  8b742408             mov esi, dword ptr [esp + 8]
// 00584e75  8b4604               mov eax, dword ptr [esi + 4]
// 00584e78  8b08                 mov ecx, dword ptr [eax]
// 00584e7a  6a40                 push 0x40
// 00584e7c  6a01                 push 1
// 00584e7e  56                   push esi
// 00584e7f  ffd1                 call ecx
// 00584e81  898640010000         mov dword ptr [esi + 0x140], eax
// 00584e87  83c40c               add esp, 0xc
// 00584e8a  c700204e5800         mov dword ptr [eax], 0x584e20
// 00584e90  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00584e97  7561                 jne 0x584efa
// 00584e99  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00584e9e  7415                 je 0x584eb5
// 00584ea0  8b16                 mov edx, dword ptr [esi]
// 00584ea2  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00584ea9  8b06                 mov eax, dword ptr [esi]
// 00584eab  8b08                 mov ecx, dword ptr [eax]
// 00584ead  56                   push esi
// 00584eae  ffd1                 call ecx
// 00584eb0  83c404               add esp, 4
// 00584eb3  5e                   pop esi
// 00584eb4  c3                   ret 
// 00584eb5  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00584eb8  55                   push ebp
// 00584eb9  33ed                 xor ebp, ebp
// 00584ebb  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 00584ebe  7e39                 jle 0x584ef9
// 00584ec0  53                   push ebx
// 00584ec1  57                   push edi
// 00584ec2  8d791c               lea edi, [ecx + 0x1c]
// 00584ec5  8d5818               lea ebx, [eax + 0x18]
// 00584ec8  8b47f0               mov eax, dword ptr [edi - 0x10]
// 00584ecb  8b0f                 mov ecx, dword ptr [edi]
// 00584ecd  8b5604               mov edx, dword ptr [esi + 4]
// 00584ed0  8b5208               mov edx, dword ptr [edx + 8]
// 00584ed3  03c0                 add eax, eax
// 00584ed5  03c9                 add ecx, ecx
// 00584ed7  03c0                 add eax, eax
// 00584ed9  03c0                 add eax, eax
// 00584edb  50                   push eax
// 00584edc  03c9                 add ecx, ecx
// 00584ede  03c9                 add ecx, ecx
// 00584ee0  51                   push ecx
// 00584ee1  6a01                 push 1
// 00584ee3  56                   push esi
// 00584ee4  ffd2                 call edx
// 00584ee6  8903                 mov dword ptr [ebx], eax
// 00584ee8  45                   inc ebp
// 00584ee9  83c410               add esp, 0x10
// 00584eec  83c304               add ebx, 4
// 00584eef  83c754               add edi, 0x54
// 00584ef2  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00584ef5  7cd1                 jl 0x584ec8
// 00584ef7  5f                   pop edi
// 00584ef8  5b                   pop ebx
// 00584ef9  5d                   pop ebp
// 00584efa  5e                   pop esi
// 00584efb  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
