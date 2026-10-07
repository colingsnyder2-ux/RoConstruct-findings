// roc 2010-06 0048be20  unit: G3D::Win32Window  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048be20
//
// 0048be20  6aff                 push -1
// 0048be22  68eb629800           push 0x9862eb
// 0048be27  64a100000000         mov eax, dword ptr fs:[0]
// 0048be2d  50                   push eax
// 0048be2e  64892500000000       mov dword ptr fs:[0], esp
// 0048be35  51                   push ecx
// 0048be36  55                   push ebp
// 0048be37  56                   push esi
// 0048be38  8bf1                 mov esi, ecx
// 0048be3a  33ed                 xor ebp, ebp
// 0048be3c  57                   push edi
// 0048be3d  8974240c             mov dword ptr [esp + 0xc], esi
// 0048be41  896e08               mov dword ptr [esi + 8], ebp
// 0048be44  896e0c               mov dword ptr [esi + 0xc], ebp
// 0048be47  896e04               mov dword ptr [esi + 4], ebp
// 0048be4a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048be4e  68503ba100           push 0xa13b50
// 0048be53  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0048be57  894610               mov dword ptr [esi + 0x10], eax
// 0048be5a  ff1548a39e00         call dword ptr [0x9ea348]
// 0048be60  8bf8                 mov edi, eax
// 0048be62  3bfd                 cmp edi, ebp
// 0048be64  745f                 je 0x48bec5
// 0048be66  53                   push ebx
// 0048be67  683c3ba100           push 0xa13b3c
// 0048be6c  57                   push edi
// 0048be6d  ff1590a39e00         call dword ptr [0x9ea390]
// 0048be73  8bd8                 mov ebx, eax
// 0048be75  3bdd                 cmp ebx, ebp
// 0048be77  742e                 je 0x48bea7
// 0048be79  55                   push ebp
// 0048be7a  56                   push esi
// 0048be7b  68e834a100           push 0xa134e8
// 0048be80  6800080000           push 0x800
// 0048be85  55                   push ebp
// 0048be86  ff158ca39e00         call dword ptr [0x9ea38c]
// 0048be8c  50                   push eax
// 0048be8d  ffd3                 call ebx
// 0048be8f  85c0                 test eax, eax
// 0048be91  7514                 jne 0x48bea7
// 0048be93  8b06                 mov eax, dword ptr [esi]
// 0048be95  8b08                 mov ecx, dword ptr [eax]
// 0048be97  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0048be9a  6a01                 push 1
// 0048be9c  56                   push esi
// 0048be9d  6890bc4800           push 0x48bc90
// 0048bea2  6a04                 push 4
// 0048bea4  50                   push eax
// 0048bea5  ffd2                 call edx
// 0048bea7  57                   push edi
// 0048bea8  ff1568a39e00         call dword ptr [0x9ea368]
// 0048beae  5b                   pop ebx
// 0048beaf  5f                   pop edi
// 0048beb0  8bc6                 mov eax, esi
// 0048beb2  5e                   pop esi
// 0048beb3  5d                   pop ebp
// 0048beb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048beb8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bebf  83c410               add esp, 0x10
// 0048bec2  c20400               ret 4
// 0048bec5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048bec9  5f                   pop edi
// 0048beca  8bc6                 mov eax, esi
// 0048becc  5e                   pop esi
// 0048becd  5d                   pop ebp
// 0048bece  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bed5  83c410               add esp, 0x10
// 0048bed8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
