// roc 2009-12 008edf70  unit: CXTPRibbonGroup  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edf70
//
// 008edf70  51                   push ecx
// 008edf71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008edf75  53                   push ebx
// 008edf76  56                   push esi
// 008edf77  57                   push edi
// 008edf78  50                   push eax
// 008edf79  8bd9                 mov ebx, ecx
// 008edf7b  e8f0f8ffff           call 0x8ed870
// 008edf80  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008edf84  3bc1                 cmp eax, ecx
// 008edf86  8944240c             mov dword ptr [esp + 0xc], eax
// 008edf8a  7f76                 jg 0x8ee002
// 008edf8c  0f84fb000000         je 0x8ee08d
// 008edf92  8b7b28               mov edi, dword ptr [ebx + 0x28]
// 008edf95  83ef01               sub edi, 1
// 008edf98  0f88ef000000         js 0x8ee08d
// 008edf9e  8bff                 mov edi, edi
// 008edfa0  85ff                 test edi, edi
// 008edfa2  7c0d                 jl 0x8edfb1
// 008edfa4  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 008edfa7  7d08                 jge 0x8edfb1
// 008edfa9  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008edfac  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 008edfaf  eb02                 jmp 0x8edfb3
// 008edfb1  33f6                 xor esi, esi
// 008edfb3  8bce                 mov ecx, esi
// 008edfb5  e8a6b5ffff           call 0x8e9560
// 008edfba  85c0                 test eax, eax
// 008edfbc  7419                 je 0x8edfd7
// 008edfbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008edfc2  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008edfc6  8b16                 mov edx, dword ptr [esi]
// 008edfc8  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008edfce  50                   push eax
// 008edfcf  8bce                 mov ecx, esi
// 008edfd1  ffd2                 call edx
// 008edfd3  85c0                 test eax, eax
// 008edfd5  750c                 jne 0x8edfe3
// 008edfd7  83ef01               sub edi, 1
// 008edfda  79c4                 jns 0x8edfa0
// 008edfdc  5f                   pop edi
// 008edfdd  5e                   pop esi
// 008edfde  5b                   pop ebx
// 008edfdf  59                   pop ecx
// 008edfe0  c20c00               ret 0xc
// 008edfe3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008edfe7  8b06                 mov eax, dword ptr [esi]
// 008edfe9  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008edfef  51                   push ecx
// 008edff0  8bce                 mov ecx, esi
// 008edff2  ffd2                 call edx
// 008edff4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008edff8  8904b9               mov dword ptr [ecx + edi*4], eax
// 008edffb  5f                   pop edi
// 008edffc  5e                   pop esi
// 008edffd  5b                   pop ebx
// 008edffe  59                   pop ecx
// 008edfff  c20c00               ret 0xc
// 008ee002  55                   push ebp
// 008ee003  33ed                 xor ebp, ebp
// 008ee005  8b7b28               mov edi, dword ptr [ebx + 0x28]
// 008ee008  83ef01               sub edi, 1
// 008ee00b  7840                 js 0x8ee04d
// 008ee00d  8d4900               lea ecx, [ecx]
// 008ee010  85ff                 test edi, edi
// 008ee012  7c0d                 jl 0x8ee021
// 008ee014  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 008ee017  7d08                 jge 0x8ee021
// 008ee019  8b5324               mov edx, dword ptr [ebx + 0x24]
// 008ee01c  8b34ba               mov esi, dword ptr [edx + edi*4]
// 008ee01f  eb02                 jmp 0x8ee023
// 008ee021  33f6                 xor esi, esi
// 008ee023  8bce                 mov ecx, esi
// 008ee025  e836b5ffff           call 0x8e9560
// 008ee02a  85c0                 test eax, eax
// 008ee02c  741a                 je 0x8ee048
// 008ee02e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ee032  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008ee036  8b06                 mov eax, dword ptr [esi]
// 008ee038  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 008ee03e  51                   push ecx
// 008ee03f  55                   push ebp
// 008ee040  8bce                 mov ecx, esi
// 008ee042  ffd2                 call edx
// 008ee044  85c0                 test eax, eax
// 008ee046  7513                 jne 0x8ee05b
// 008ee048  83ef01               sub edi, 1
// 008ee04b  79c3                 jns 0x8ee010
// 008ee04d  45                   inc ebp
// 008ee04e  83fd04               cmp ebp, 4
// 008ee051  7cb2                 jl 0x8ee005
// 008ee053  5d                   pop ebp
// 008ee054  5f                   pop edi
// 008ee055  5e                   pop esi
// 008ee056  5b                   pop ebx
// 008ee057  59                   pop ecx
// 008ee058  c20c00               ret 0xc
// 008ee05b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ee05f  8b06                 mov eax, dword ptr [esi]
// 008ee061  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ee067  51                   push ecx
// 008ee068  8bce                 mov ecx, esi
// 008ee06a  ffd2                 call edx
// 008ee06c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ee070  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ee074  8bf0                 mov esi, eax
// 008ee076  2b34ba               sub esi, dword ptr [edx + edi*4]
// 008ee079  8904ba               mov dword ptr [edx + edi*4], eax
// 008ee07c  03ce                 add ecx, esi
// 008ee07e  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 008ee082  894c2410             mov dword ptr [esp + 0x10], ecx
// 008ee086  0f8f77ffffff         jg 0x8ee003
// 008ee08c  5d                   pop ebp
// 008ee08d  5f                   pop edi
// 008ee08e  5e                   pop esi
// 008ee08f  5b                   pop ebx
// 008ee090  59                   pop ecx
// 008ee091  c20c00               ret 0xc
// copied from an identical function in another client (function ?_ReduceSmartLayoutToolBar@CXTPRibbonGroups@@IAEXPAVCDC@@PAHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp