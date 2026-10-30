// roc 2011-06 00859840  unit: CXTPControls  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00859840
//
// 00859840  53                   push ebx
// 00859841  55                   push ebp
// 00859842  56                   push esi
// 00859843  57                   push edi
// 00859844  8bf9                 mov edi, ecx
// 00859846  8b07                 mov eax, dword ptr [edi]
// 00859848  8b10                 mov edx, dword ptr [eax]
// 0085984a  ffd2                 call edx
// 0085984c  8bc8                 mov ecx, eax
// 0085984e  e81312fbff           call 0x80aa66
// 00859853  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00859857  8bd8                 mov ebx, eax
// 00859859  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0085985c  33f6                 xor esi, esi
// 0085985e  85c0                 test eax, eax
// 00859860  7e4a                 jle 0x8598ac
// 00859862  85f6                 test esi, esi
// 00859864  7c11                 jl 0x859877
// 00859866  3bf0                 cmp esi, eax
// 00859868  7d0d                 jge 0x859877
// 0085986a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0085986d  7d5b                 jge 0x8598ca
// 0085986f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00859872  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00859875  eb02                 jmp 0x859879
// 00859877  33c9                 xor ecx, ecx
// 00859879  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00859880  7522                 jne 0x8598a4
// 00859882  85f6                 test esi, esi
// 00859884  7c11                 jl 0x859897
// 00859886  3bf0                 cmp esi, eax
// 00859888  7d0d                 jge 0x859897
// 0085988a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0085988d  7d3b                 jge 0x8598ca
// 0085988f  8b5728               mov edx, dword ptr [edi + 0x28]
// 00859892  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00859895  eb02                 jmp 0x859899
// 00859897  33c0                 xor eax, eax
// 00859899  55                   push ebp
// 0085989a  6aff                 push -1
// 0085989c  50                   push eax
// 0085989d  8bcb                 mov ecx, ebx
// 0085989f  e89cf4ffff           call 0x858d40
// 008598a4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008598a7  46                   inc esi
// 008598a8  3bf0                 cmp esi, eax
// 008598aa  7cb6                 jl 0x859862
// 008598ac  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 008598af  85c9                 test ecx, ecx
// 008598b1  740e                 je 0x8598c1
// 008598b3  55                   push ebp
// 008598b4  e887ffffff           call 0x859840
// 008598b9  50                   push eax
// 008598ba  8bcb                 mov ecx, ebx
// 008598bc  e84fd3ffff           call 0x856c10
// 008598c1  5f                   pop edi
// 008598c2  5e                   pop esi
// 008598c3  5d                   pop ebp
// 008598c4  8bc3                 mov eax, ebx
// 008598c6  5b                   pop ebx
// 008598c7  c20400               ret 4
// 008598ca  e83b0afbff           call 0x80a30a
// copied from an identical function in another client (function ?Duplicate@CXTPControls@@QAEPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp