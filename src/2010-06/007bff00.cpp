// roc 2010-06 007bff00  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bff00
//
// 007bff00  56                   push esi
// 007bff01  57                   push edi
// 007bff02  8bf1                 mov esi, ecx
// 007bff04  33ff                 xor edi, edi
// 007bff06  397e38               cmp dword ptr [esi + 0x38], edi
// 007bff09  7e2b                 jle 0x7bff36
// 007bff0b  eb03                 jmp 0x7bff10
// 007bff0d  8d4900               lea ecx, [ecx]
// 007bff10  85ff                 test edi, edi
// 007bff12  0f8c99000000         jl 0x7bffb1
// 007bff18  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 007bff1b  0f8d90000000         jge 0x7bffb1
// 007bff21  8b4634               mov eax, dword ptr [esi + 0x34]
// 007bff24  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007bff27  51                   push ecx
// 007bff28  e86d7afeff           call 0x7a799a
// 007bff2d  47                   inc edi
// 007bff2e  83c404               add esp, 4
// 007bff31  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 007bff34  7cda                 jl 0x7bff10
// 007bff36  6aff                 push -1
// 007bff38  6a00                 push 0
// 007bff3a  8d4e30               lea ecx, [esi + 0x30]
// 007bff3d  e8be130200           call 0x7e1300
// 007bff42  33ff                 xor edi, edi
// 007bff44  397e4c               cmp dword ptr [esi + 0x4c], edi
// 007bff47  7e25                 jle 0x7bff6e
// 007bff49  8da42400000000       lea esp, [esp]
// 007bff50  85ff                 test edi, edi
// 007bff52  7c5d                 jl 0x7bffb1
// 007bff54  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 007bff57  7d58                 jge 0x7bffb1
// 007bff59  8b5648               mov edx, dword ptr [esi + 0x48]
// 007bff5c  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007bff5f  50                   push eax
// 007bff60  e8357afeff           call 0x7a799a
// 007bff65  47                   inc edi
// 007bff66  83c404               add esp, 4
// 007bff69  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 007bff6c  7ce2                 jl 0x7bff50
// 007bff6e  6aff                 push -1
// 007bff70  6a00                 push 0
// 007bff72  8d4e44               lea ecx, [esi + 0x44]
// 007bff75  e886130200           call 0x7e1300
// 007bff7a  8b06                 mov eax, dword ptr [esi]
// 007bff7c  8b3dd4a09e00         mov edi, dword ptr [0x9ea0d4]
// 007bff82  85c0                 test eax, eax
// 007bff84  7409                 je 0x7bff8f
// 007bff86  50                   push eax
// 007bff87  ffd7                 call edi
// 007bff89  c70600000000         mov dword ptr [esi], 0
// 007bff8f  8b4604               mov eax, dword ptr [esi + 4]
// 007bff92  85c0                 test eax, eax
// 007bff94  740a                 je 0x7bffa0
// 007bff96  50                   push eax
// 007bff97  ffd7                 call edi
// 007bff99  c7460400000000       mov dword ptr [esi + 4], 0
// 007bffa0  5f                   pop edi
// 007bffa1  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 007bffa8  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 007bffaf  5e                   pop esi
// 007bffb0  c3                   ret 
// 007bffb1  e8967cfeff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManagerResource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp