// roc 2009-12 0080be10  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080be10
//
// 0080be10  56                   push esi
// 0080be11  57                   push edi
// 0080be12  8bf1                 mov esi, ecx
// 0080be14  33ff                 xor edi, edi
// 0080be16  397e38               cmp dword ptr [esi + 0x38], edi
// 0080be19  7e2b                 jle 0x80be46
// 0080be1b  eb03                 jmp 0x80be20
// 0080be1d  8d4900               lea ecx, [ecx]
// 0080be20  85ff                 test edi, edi
// 0080be22  0f8c99000000         jl 0x80bec1
// 0080be28  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0080be2b  0f8d90000000         jge 0x80bec1
// 0080be31  8b4634               mov eax, dword ptr [esi + 0x34]
// 0080be34  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0080be37  51                   push ecx
// 0080be38  e81d7afeff           call 0x7f385a
// 0080be3d  47                   inc edi
// 0080be3e  83c404               add esp, 4
// 0080be41  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0080be44  7cda                 jl 0x80be20
// 0080be46  6aff                 push -1
// 0080be48  6a00                 push 0
// 0080be4a  8d4e30               lea ecx, [esi + 0x30]
// 0080be4d  e84e950400           call 0x8553a0
// 0080be52  33ff                 xor edi, edi
// 0080be54  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0080be57  7e25                 jle 0x80be7e
// 0080be59  8da42400000000       lea esp, [esp]
// 0080be60  85ff                 test edi, edi
// 0080be62  7c5d                 jl 0x80bec1
// 0080be64  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0080be67  7d58                 jge 0x80bec1
// 0080be69  8b5648               mov edx, dword ptr [esi + 0x48]
// 0080be6c  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0080be6f  50                   push eax
// 0080be70  e8e579feff           call 0x7f385a
// 0080be75  47                   inc edi
// 0080be76  83c404               add esp, 4
// 0080be79  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0080be7c  7ce2                 jl 0x80be60
// 0080be7e  6aff                 push -1
// 0080be80  6a00                 push 0
// 0080be82  8d4e44               lea ecx, [esi + 0x44]
// 0080be85  e816950400           call 0x8553a0
// 0080be8a  8b06                 mov eax, dword ptr [esi]
// 0080be8c  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0080be92  85c0                 test eax, eax
// 0080be94  7409                 je 0x80be9f
// 0080be96  50                   push eax
// 0080be97  ffd7                 call edi
// 0080be99  c70600000000         mov dword ptr [esi], 0
// 0080be9f  8b4604               mov eax, dword ptr [esi + 4]
// 0080bea2  85c0                 test eax, eax
// 0080bea4  740a                 je 0x80beb0
// 0080bea6  50                   push eax
// 0080bea7  ffd7                 call edi
// 0080bea9  c7460400000000       mov dword ptr [esi + 4], 0
// 0080beb0  5f                   pop edi
// 0080beb1  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0080beb8  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0080bebf  5e                   pop esi
// 0080bec0  c3                   ret 
// 0080bec1  e8467cfeff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManagerResource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp