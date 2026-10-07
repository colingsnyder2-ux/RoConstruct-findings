// roc 2008-06 0051afe0  unit: G3D::_internal::DialogTemplate  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051afe0
//
// 0051afe0  53                   push ebx
// 0051afe1  55                   push ebp
// 0051afe2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051afe6  56                   push esi
// 0051afe7  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0051afea  8b1e                 mov ebx, dword ptr [esi]
// 0051afec  57                   push edi
// 0051afed  8b7e04               mov edi, dword ptr [esi + 4]
// 0051aff0  85ff                 test edi, edi
// 0051aff2  7519                 jne 0x51b00d
// 0051aff4  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051aff7  55                   push ebp
// 0051aff8  ffd0                 call eax
// 0051affa  83c404               add esp, 4
// 0051affd  84c0                 test al, al
// 0051afff  7507                 jne 0x51b008
// 0051b001  5f                   pop edi
// 0051b002  5e                   pop esi
// 0051b003  5d                   pop ebp
// 0051b004  32c0                 xor al, al
// 0051b006  5b                   pop ebx
// 0051b007  c3                   ret 
// 0051b008  8b1e                 mov ebx, dword ptr [esi]
// 0051b00a  8b7e04               mov edi, dword ptr [esi + 4]
// 0051b00d  0fb60b               movzx ecx, byte ptr [ebx]
// 0051b010  4f                   dec edi
// 0051b011  43                   inc ebx
// 0051b012  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051b016  85ff                 test edi, edi
// 0051b018  7516                 jne 0x51b030
// 0051b01a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051b01d  55                   push ebp
// 0051b01e  ffd1                 call ecx
// 0051b020  83c404               add esp, 4
// 0051b023  84c0                 test al, al
// 0051b025  74da                 je 0x51b001
// 0051b027  8b1e                 mov ebx, dword ptr [esi]
// 0051b029  8b7e04               mov edi, dword ptr [esi + 4]
// 0051b02c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051b030  0fb603               movzx eax, byte ptr [ebx]
// 0051b033  4f                   dec edi
// 0051b034  43                   inc ebx
// 0051b035  89442414             mov dword ptr [esp + 0x14], eax
// 0051b039  81f9ff000000         cmp ecx, 0xff
// 0051b03f  7507                 jne 0x51b048
// 0051b041  3dd8000000           cmp eax, 0xd8
// 0051b046  7425                 je 0x51b06d
// 0051b048  8b5500               mov edx, dword ptr [ebp]
// 0051b04b  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 0051b052  8b5500               mov edx, dword ptr [ebp]
// 0051b055  894a18               mov dword ptr [edx + 0x18], ecx
// 0051b058  8b4d00               mov ecx, dword ptr [ebp]
// 0051b05b  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051b05e  8b5500               mov edx, dword ptr [ebp]
// 0051b061  8b02                 mov eax, dword ptr [edx]
// 0051b063  55                   push ebp
// 0051b064  ffd0                 call eax
// 0051b066  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051b06a  83c404               add esp, 4
// 0051b06d  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 0051b073  897e04               mov dword ptr [esi + 4], edi
// 0051b076  5f                   pop edi
// 0051b077  891e                 mov dword ptr [esi], ebx
// 0051b079  5e                   pop esi
// 0051b07a  5d                   pop ebp
// 0051b07b  b001                 mov al, 1
// 0051b07d  5b                   pop ebx
// 0051b07e  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
