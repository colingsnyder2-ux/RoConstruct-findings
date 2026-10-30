// roc 2011-06 00821f90  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00821f90
//
// 00821f90  56                   push esi
// 00821f91  57                   push edi
// 00821f92  8bf1                 mov esi, ecx
// 00821f94  33ff                 xor edi, edi
// 00821f96  397e38               cmp dword ptr [esi + 0x38], edi
// 00821f99  7e2b                 jle 0x821fc6
// 00821f9b  eb03                 jmp 0x821fa0
// 00821f9d  8d4900               lea ecx, [ecx]
// 00821fa0  85ff                 test edi, edi
// 00821fa2  0f8c99000000         jl 0x822041
// 00821fa8  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 00821fab  0f8d90000000         jge 0x822041
// 00821fb1  8b4634               mov eax, dword ptr [esi + 0x34]
// 00821fb4  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00821fb7  51                   push ecx
// 00821fb8  e89b80feff           call 0x80a058
// 00821fbd  47                   inc edi
// 00821fbe  83c404               add esp, 4
// 00821fc1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 00821fc4  7cda                 jl 0x821fa0
// 00821fc6  6aff                 push -1
// 00821fc8  6a00                 push 0
// 00821fca  8d4e30               lea ecx, [esi + 0x30]
// 00821fcd  e86ecb0100           call 0x83eb40
// 00821fd2  33ff                 xor edi, edi
// 00821fd4  397e4c               cmp dword ptr [esi + 0x4c], edi
// 00821fd7  7e25                 jle 0x821ffe
// 00821fd9  8da42400000000       lea esp, [esp]
// 00821fe0  85ff                 test edi, edi
// 00821fe2  7c5d                 jl 0x822041
// 00821fe4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00821fe7  7d58                 jge 0x822041
// 00821fe9  8b5648               mov edx, dword ptr [esi + 0x48]
// 00821fec  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00821fef  50                   push eax
// 00821ff0  e86380feff           call 0x80a058
// 00821ff5  47                   inc edi
// 00821ff6  83c404               add esp, 4
// 00821ff9  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00821ffc  7ce2                 jl 0x821fe0
// 00821ffe  6aff                 push -1
// 00822000  6a00                 push 0
// 00822002  8d4e44               lea ecx, [esi + 0x44]
// 00822005  e836cb0100           call 0x83eb40
// 0082200a  8b06                 mov eax, dword ptr [esi]
// 0082200c  8b3d9c01a400         mov edi, dword ptr [0xa4019c]
// 00822012  85c0                 test eax, eax
// 00822014  7409                 je 0x82201f
// 00822016  50                   push eax
// 00822017  ffd7                 call edi
// 00822019  c70600000000         mov dword ptr [esi], 0
// 0082201f  8b4604               mov eax, dword ptr [esi + 4]
// 00822022  85c0                 test eax, eax
// 00822024  740a                 je 0x822030
// 00822026  50                   push eax
// 00822027  ffd7                 call edi
// 00822029  c7460400000000       mov dword ptr [esi + 4], 0
// 00822030  5f                   pop edi
// 00822031  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 00822038  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0082203f  5e                   pop esi
// 00822040  c3                   ret 
// 00822041  e8c482feff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManagerResource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp