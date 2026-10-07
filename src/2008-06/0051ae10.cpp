// roc 2008-06 0051ae10  unit: G3D::_internal::DialogTemplate  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ae10
//
// 0051ae10  53                   push ebx
// 0051ae11  55                   push ebp
// 0051ae12  56                   push esi
// 0051ae13  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051ae17  57                   push edi
// 0051ae18  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0051ae1b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0051ae1e  8b1f                 mov ebx, dword ptr [edi]
// 0051ae20  85ed                 test ebp, ebp
// 0051ae22  7519                 jne 0x51ae3d
// 0051ae24  8b470c               mov eax, dword ptr [edi + 0xc]
// 0051ae27  56                   push esi
// 0051ae28  ffd0                 call eax
// 0051ae2a  83c404               add esp, 4
// 0051ae2d  84c0                 test al, al
// 0051ae2f  7507                 jne 0x51ae38
// 0051ae31  5f                   pop edi
// 0051ae32  5e                   pop esi
// 0051ae33  5d                   pop ebp
// 0051ae34  32c0                 xor al, al
// 0051ae36  5b                   pop ebx
// 0051ae37  c3                   ret 
// 0051ae38  8b1f                 mov ebx, dword ptr [edi]
// 0051ae3a  8b6f04               mov ebp, dword ptr [edi + 4]
// 0051ae3d  0fb603               movzx eax, byte ptr [ebx]
// 0051ae40  4d                   dec ebp
// 0051ae41  c1e008               shl eax, 8
// 0051ae44  43                   inc ebx
// 0051ae45  89442414             mov dword ptr [esp + 0x14], eax
// 0051ae49  85ed                 test ebp, ebp
// 0051ae4b  7516                 jne 0x51ae63
// 0051ae4d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0051ae50  56                   push esi
// 0051ae51  ffd1                 call ecx
// 0051ae53  83c404               add esp, 4
// 0051ae56  84c0                 test al, al
// 0051ae58  74d7                 je 0x51ae31
// 0051ae5a  8b1f                 mov ebx, dword ptr [edi]
// 0051ae5c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0051ae5f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051ae63  0fb613               movzx edx, byte ptr [ebx]
// 0051ae66  8b0e                 mov ecx, dword ptr [esi]
// 0051ae68  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 0051ae6f  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0051ae75  8d4410fe             lea eax, [eax + edx - 2]
// 0051ae79  8b16                 mov edx, dword ptr [esi]
// 0051ae7b  894a18               mov dword ptr [edx + 0x18], ecx
// 0051ae7e  8b16                 mov edx, dword ptr [esi]
// 0051ae80  89421c               mov dword ptr [edx + 0x1c], eax
// 0051ae83  89442414             mov dword ptr [esp + 0x14], eax
// 0051ae87  8b06                 mov eax, dword ptr [esi]
// 0051ae89  8b4804               mov ecx, dword ptr [eax + 4]
// 0051ae8c  6a01                 push 1
// 0051ae8e  56                   push esi
// 0051ae8f  ffd1                 call ecx
// 0051ae91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051ae95  43                   inc ebx
// 0051ae96  4d                   dec ebp
// 0051ae97  83c408               add esp, 8
// 0051ae9a  891f                 mov dword ptr [edi], ebx
// 0051ae9c  896f04               mov dword ptr [edi + 4], ebp
// 0051ae9f  85c0                 test eax, eax
// 0051aea1  7e0d                 jle 0x51aeb0
// 0051aea3  8b5618               mov edx, dword ptr [esi + 0x18]
// 0051aea6  50                   push eax
// 0051aea7  8b4210               mov eax, dword ptr [edx + 0x10]
// 0051aeaa  56                   push esi
// 0051aeab  ffd0                 call eax
// 0051aead  83c408               add esp, 8
// 0051aeb0  5f                   pop edi
// 0051aeb1  5e                   pop esi
// 0051aeb2  5d                   pop ebp
// 0051aeb3  b001                 mov al, 1
// 0051aeb5  5b                   pop ebx
// 0051aeb6  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
