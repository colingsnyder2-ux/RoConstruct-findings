// roc 2009-06 0057e7b0  unit: G3D::_internal::DialogTemplate  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e7b0
//
// 0057e7b0  53                   push ebx
// 0057e7b1  55                   push ebp
// 0057e7b2  56                   push esi
// 0057e7b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e7b7  57                   push edi
// 0057e7b8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057e7bb  8b6f04               mov ebp, dword ptr [edi + 4]
// 0057e7be  8b1f                 mov ebx, dword ptr [edi]
// 0057e7c0  85ed                 test ebp, ebp
// 0057e7c2  7519                 jne 0x57e7dd
// 0057e7c4  8b470c               mov eax, dword ptr [edi + 0xc]
// 0057e7c7  56                   push esi
// 0057e7c8  ffd0                 call eax
// 0057e7ca  83c404               add esp, 4
// 0057e7cd  84c0                 test al, al
// 0057e7cf  7507                 jne 0x57e7d8
// 0057e7d1  5f                   pop edi
// 0057e7d2  5e                   pop esi
// 0057e7d3  5d                   pop ebp
// 0057e7d4  32c0                 xor al, al
// 0057e7d6  5b                   pop ebx
// 0057e7d7  c3                   ret 
// 0057e7d8  8b1f                 mov ebx, dword ptr [edi]
// 0057e7da  8b6f04               mov ebp, dword ptr [edi + 4]
// 0057e7dd  0fb603               movzx eax, byte ptr [ebx]
// 0057e7e0  4d                   dec ebp
// 0057e7e1  c1e008               shl eax, 8
// 0057e7e4  43                   inc ebx
// 0057e7e5  89442414             mov dword ptr [esp + 0x14], eax
// 0057e7e9  85ed                 test ebp, ebp
// 0057e7eb  7516                 jne 0x57e803
// 0057e7ed  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0057e7f0  56                   push esi
// 0057e7f1  ffd1                 call ecx
// 0057e7f3  83c404               add esp, 4
// 0057e7f6  84c0                 test al, al
// 0057e7f8  74d7                 je 0x57e7d1
// 0057e7fa  8b1f                 mov ebx, dword ptr [edi]
// 0057e7fc  8b6f04               mov ebp, dword ptr [edi + 4]
// 0057e7ff  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e803  0fb613               movzx edx, byte ptr [ebx]
// 0057e806  8b0e                 mov ecx, dword ptr [esi]
// 0057e808  c741145b000000       mov dword ptr [ecx + 0x14], 0x5b
// 0057e80f  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0057e815  8d4410fe             lea eax, [eax + edx - 2]
// 0057e819  8b16                 mov edx, dword ptr [esi]
// 0057e81b  894a18               mov dword ptr [edx + 0x18], ecx
// 0057e81e  8b16                 mov edx, dword ptr [esi]
// 0057e820  89421c               mov dword ptr [edx + 0x1c], eax
// 0057e823  89442414             mov dword ptr [esp + 0x14], eax
// 0057e827  8b06                 mov eax, dword ptr [esi]
// 0057e829  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e82c  6a01                 push 1
// 0057e82e  56                   push esi
// 0057e82f  ffd1                 call ecx
// 0057e831  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057e835  43                   inc ebx
// 0057e836  4d                   dec ebp
// 0057e837  83c408               add esp, 8
// 0057e83a  891f                 mov dword ptr [edi], ebx
// 0057e83c  896f04               mov dword ptr [edi + 4], ebp
// 0057e83f  85c0                 test eax, eax
// 0057e841  7e0d                 jle 0x57e850
// 0057e843  8b5618               mov edx, dword ptr [esi + 0x18]
// 0057e846  50                   push eax
// 0057e847  8b4210               mov eax, dword ptr [edx + 0x10]
// 0057e84a  56                   push esi
// 0057e84b  ffd0                 call eax
// 0057e84d  83c408               add esp, 8
// 0057e850  5f                   pop edi
// 0057e851  5e                   pop esi
// 0057e852  5d                   pop ebp
// 0057e853  b001                 mov al, 1
// 0057e855  5b                   pop ebx
// 0057e856  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
