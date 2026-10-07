// roc 2010-06 00561f00  unit: G3D::_internal::DialogTemplate  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561f00
//
// 00561f00  53                   push ebx
// 00561f01  55                   push ebp
// 00561f02  56                   push esi
// 00561f03  8b742410             mov esi, dword ptr [esp + 0x10]
// 00561f07  57                   push edi
// 00561f08  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00561f0b  8b6f04               mov ebp, dword ptr [edi + 4]
// 00561f0e  8b1f                 mov ebx, dword ptr [edi]
// 00561f10  85ed                 test ebp, ebp
// 00561f12  7519                 jne 0x561f2d
// 00561f14  8b470c               mov eax, dword ptr [edi + 0xc]
// 00561f17  56                   push esi
// 00561f18  ffd0                 call eax
// 00561f1a  83c404               add esp, 4
// 00561f1d  84c0                 test al, al
// 00561f1f  7507                 jne 0x561f28
// 00561f21  5f                   pop edi
// 00561f22  5e                   pop esi
// 00561f23  5d                   pop ebp
// 00561f24  32c0                 xor al, al
// 00561f26  5b                   pop ebx
// 00561f27  c3                   ret 
// 00561f28  8b1f                 mov ebx, dword ptr [edi]
// 00561f2a  8b6f04               mov ebp, dword ptr [edi + 4]
// 00561f2d  0fb603               movzx eax, byte ptr [ebx]
// 00561f30  4d                   dec ebp
// 00561f31  c1e008               shl eax, 8
// 00561f34  43                   inc ebx
// 00561f35  89442414             mov dword ptr [esp + 0x14], eax
// 00561f39  85ed                 test ebp, ebp
// 00561f3b  7516                 jne 0x561f53
// 00561f3d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00561f40  56                   push esi
// 00561f41  ffd1                 call ecx
// 00561f43  83c404               add esp, 4
// 00561f46  84c0                 test al, al
// 00561f48  74d7                 je 0x561f21
// 00561f4a  8b1f                 mov ebx, dword ptr [edi]
// 00561f4c  8b6f04               mov ebp, dword ptr [edi + 4]
// 00561f4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00561f53  0fb613               movzx edx, byte ptr [ebx]
// 00561f56  8b0e                 mov ecx, dword ptr [esi]
// 00561f58  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 00561f5f  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00561f65  8d4410fe             lea eax, [eax + edx - 2]
// 00561f69  8b16                 mov edx, dword ptr [esi]
// 00561f6b  894a18               mov dword ptr [edx + 0x18], ecx
// 00561f6e  8b16                 mov edx, dword ptr [esi]
// 00561f70  89421c               mov dword ptr [edx + 0x1c], eax
// 00561f73  89442414             mov dword ptr [esp + 0x14], eax
// 00561f77  8b06                 mov eax, dword ptr [esi]
// 00561f79  8b4804               mov ecx, dword ptr [eax + 4]
// 00561f7c  6a01                 push 1
// 00561f7e  56                   push esi
// 00561f7f  ffd1                 call ecx
// 00561f81  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00561f85  43                   inc ebx
// 00561f86  4d                   dec ebp
// 00561f87  83c408               add esp, 8
// 00561f8a  891f                 mov dword ptr [edi], ebx
// 00561f8c  896f04               mov dword ptr [edi + 4], ebp
// 00561f8f  85c0                 test eax, eax
// 00561f91  7e0d                 jle 0x561fa0
// 00561f93  8b5618               mov edx, dword ptr [esi + 0x18]
// 00561f96  50                   push eax
// 00561f97  8b4210               mov eax, dword ptr [edx + 0x10]
// 00561f9a  56                   push esi
// 00561f9b  ffd0                 call eax
// 00561f9d  83c408               add esp, 8
// 00561fa0  5f                   pop edi
// 00561fa1  5e                   pop esi
// 00561fa2  5d                   pop ebp
// 00561fa3  b001                 mov al, 1
// 00561fa5  5b                   pop ebx
// 00561fa6  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
