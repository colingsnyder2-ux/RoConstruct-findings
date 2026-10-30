// roc 2012-06 0099a490  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099a490
//
// 0099a490  56                   push esi
// 0099a491  57                   push edi
// 0099a492  8bf1                 mov esi, ecx
// 0099a494  33ff                 xor edi, edi
// 0099a496  397e38               cmp dword ptr [esi + 0x38], edi
// 0099a499  7e2b                 jle 0x99a4c6
// 0099a49b  eb03                 jmp 0x99a4a0
// 0099a49d  8d4900               lea ecx, [ecx]
// 0099a4a0  85ff                 test edi, edi
// 0099a4a2  0f8c99000000         jl 0x99a541
// 0099a4a8  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0099a4ab  0f8d90000000         jge 0x99a541
// 0099a4b1  8b4634               mov eax, dword ptr [esi + 0x34]
// 0099a4b4  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0099a4b7  51                   push ecx
// 0099a4b8  e8577cfeff           call 0x982114
// 0099a4bd  47                   inc edi
// 0099a4be  83c404               add esp, 4
// 0099a4c1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0099a4c4  7cda                 jl 0x99a4a0
// 0099a4c6  6aff                 push -1
// 0099a4c8  6a00                 push 0
// 0099a4ca  8d4e30               lea ecx, [esi + 0x30]
// 0099a4cd  e88eddffff           call 0x998260
// 0099a4d2  33ff                 xor edi, edi
// 0099a4d4  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0099a4d7  7e25                 jle 0x99a4fe
// 0099a4d9  8da42400000000       lea esp, [esp]
// 0099a4e0  85ff                 test edi, edi
// 0099a4e2  7c5d                 jl 0x99a541
// 0099a4e4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0099a4e7  7d58                 jge 0x99a541
// 0099a4e9  8b5648               mov edx, dword ptr [esi + 0x48]
// 0099a4ec  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0099a4ef  50                   push eax
// 0099a4f0  e81f7cfeff           call 0x982114
// 0099a4f5  47                   inc edi
// 0099a4f6  83c404               add esp, 4
// 0099a4f9  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0099a4fc  7ce2                 jl 0x99a4e0
// 0099a4fe  6aff                 push -1
// 0099a500  6a00                 push 0
// 0099a502  8d4e44               lea ecx, [esi + 0x44]
// 0099a505  e856ddffff           call 0x998260
// 0099a50a  8b06                 mov eax, dword ptr [esi]
// 0099a50c  8b3d7021b200         mov edi, dword ptr [0xb22170]
// 0099a512  85c0                 test eax, eax
// 0099a514  7409                 je 0x99a51f
// 0099a516  50                   push eax
// 0099a517  ffd7                 call edi
// 0099a519  c70600000000         mov dword ptr [esi], 0
// 0099a51f  8b4604               mov eax, dword ptr [esi + 4]
// 0099a522  85c0                 test eax, eax
// 0099a524  740a                 je 0x99a530
// 0099a526  50                   push eax
// 0099a527  ffd7                 call edi
// 0099a529  c7460400000000       mov dword ptr [esi + 4], 0
// 0099a530  5f                   pop edi
// 0099a531  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0099a538  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0099a53f  5e                   pop esi
// 0099a540  c3                   ret 
// 0099a541  e87a7efeff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManagerResource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp