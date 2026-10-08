// from server: 100% by auto
// roc 2010-06 004a8540  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a8540
//
// 004a8540  56                   push esi
// 004a8541  8bf1                 mov esi, ecx
// 004a8543  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 004a8547  7469                 je 0x4a85b2
// 004a8549  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a854c  8b5610               mov edx, dword ptr [esi + 0x10]
// 004a854f  8bc8                 mov ecx, eax
// 004a8551  d1e9                 shr ecx, 1
// 004a8553  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004a8556  83e001               and eax, 1
// 004a8559  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004a855d  57                   push edi
// 004a855e  8b38                 mov edi, dword ptr [eax]
// 004a8560  85ff                 test edi, edi
// 004a8562  742a                 je 0x4a858e
// 004a8564  8d5704               lea edx, [edi + 4]
// 004a8567  83c8ff               or eax, 0xffffffff
// 004a856a  f00fc102             lock xadd dword ptr [edx], eax
// 004a856e  751e                 jne 0x4a858e
// 004a8570  8b17                 mov edx, dword ptr [edi]
// 004a8572  8b4204               mov eax, dword ptr [edx + 4]
// 004a8575  8bcf                 mov ecx, edi
// 004a8577  ffd0                 call eax
// 004a8579  8d4f08               lea ecx, [edi + 8]
// 004a857c  83caff               or edx, 0xffffffff
// 004a857f  f00fc111             lock xadd dword ptr [ecx], edx
// 004a8583  7509                 jne 0x4a858e
// 004a8585  8b07                 mov eax, dword ptr [edi]
// 004a8587  8b5008               mov edx, dword ptr [eax + 8]
// 004a858a  8bcf                 mov ecx, edi
// 004a858c  ffd2                 call edx
// 004a858e  ff4618               inc dword ptr [esi + 0x18]
// 004a8591  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004a8594  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a8597  03c9                 add ecx, ecx
// 004a8599  5f                   pop edi
// 004a859a  3bc8                 cmp ecx, eax
// 004a859c  7707                 ja 0x4a85a5
// 004a859e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004a85a5  83461cff             add dword ptr [esi + 0x1c], -1
// 004a85a9  7507                 jne 0x4a85b2
// 004a85ab  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004a85b2  5e                   pop esi
// 004a85b3  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?pop_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
