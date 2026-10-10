// roc 2008-06 00717bf0  unit: CXTPPropertyGridItemBool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717bf0
//
// 00717bf0  83ec10               sub esp, 0x10
// 00717bf3  56                   push esi
// 00717bf4  8bf1                 mov esi, ecx
// 00717bf6  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 00717bfd  745c                 je 0x717c5b
// 00717bff  8b06                 mov eax, dword ptr [esi]
// 00717c01  8b5058               mov edx, dword ptr [eax + 0x58]
// 00717c04  ffd2                 call edx
// 00717c06  85c0                 test eax, eax
// 00717c08  7551                 jne 0x717c5b
// 00717c0a  837c241820           cmp dword ptr [esp + 0x18], 0x20
// 00717c0f  754a                 jne 0x717c5b
// 00717c11  8b06                 mov eax, dword ptr [esi]
// 00717c13  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00717c16  8d4c2404             lea ecx, [esp + 4]
// 00717c1a  51                   push ecx
// 00717c1b  8bce                 mov ecx, esi
// 00717c1d  ffd2                 call edx
// 00717c1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00717c23  8b442404             mov eax, dword ptr [esp + 4]
// 00717c27  03c1                 add eax, ecx
// 00717c29  99                   cdq 
// 00717c2a  2bc2                 sub eax, edx
// 00717c2c  8b542408             mov edx, dword ptr [esp + 8]
// 00717c30  8bc8                 mov ecx, eax
// 00717c32  8b442410             mov eax, dword ptr [esp + 0x10]
// 00717c36  03c2                 add eax, edx
// 00717c38  99                   cdq 
// 00717c39  2bc2                 sub eax, edx
// 00717c3b  8b16                 mov edx, dword ptr [esi]
// 00717c3d  d1f8                 sar eax, 1
// 00717c3f  50                   push eax
// 00717c40  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00717c46  d1f9                 sar ecx, 1
// 00717c48  51                   push ecx
// 00717c49  6a00                 push 0
// 00717c4b  8bce                 mov ecx, esi
// 00717c4d  ffd0                 call eax
// 00717c4f  b801000000           mov eax, 1
// 00717c54  5e                   pop esi
// 00717c55  83c410               add esp, 0x10
// 00717c58  c20400               ret 4
// 00717c5b  33c0                 xor eax, eax
// 00717c5d  5e                   pop esi
// 00717c5e  83c410               add esp, 0x10
// 00717c61  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?OnKeyDown@CXTPPropertyGridItemBool@@MAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
