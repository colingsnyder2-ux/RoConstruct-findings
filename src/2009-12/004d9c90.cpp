// roc 2009-12 004d9c90  unit: G3D::Win32Window  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9c90
//
// 004d9c90  6aff                 push -1
// 004d9c92  686b3e9300           push 0x933e6b
// 004d9c97  64a100000000         mov eax, dword ptr fs:[0]
// 004d9c9d  50                   push eax
// 004d9c9e  64892500000000       mov dword ptr fs:[0], esp
// 004d9ca5  51                   push ecx
// 004d9ca6  55                   push ebp
// 004d9ca7  56                   push esi
// 004d9ca8  8bf1                 mov esi, ecx
// 004d9caa  33ed                 xor ebp, ebp
// 004d9cac  57                   push edi
// 004d9cad  8974240c             mov dword ptr [esp + 0xc], esi
// 004d9cb1  896e08               mov dword ptr [esi + 8], ebp
// 004d9cb4  896e0c               mov dword ptr [esi + 0xc], ebp
// 004d9cb7  896e04               mov dword ptr [esi + 4], ebp
// 004d9cba  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d9cbe  68787e9b00           push 0x9b7e78
// 004d9cc3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004d9cc7  894610               mov dword ptr [esi + 0x10], eax
// 004d9cca  ff15d8b19800         call dword ptr [0x98b1d8]
// 004d9cd0  8bf8                 mov edi, eax
// 004d9cd2  3bfd                 cmp edi, ebp
// 004d9cd4  745f                 je 0x4d9d35
// 004d9cd6  53                   push ebx
// 004d9cd7  68647e9b00           push 0x9b7e64
// 004d9cdc  57                   push edi
// 004d9cdd  ff1520b29800         call dword ptr [0x98b220]
// 004d9ce3  8bd8                 mov ebx, eax
// 004d9ce5  3bdd                 cmp ebx, ebp
// 004d9ce7  742e                 je 0x4d9d17
// 004d9ce9  55                   push ebp
// 004d9cea  56                   push esi
// 004d9ceb  68c0789b00           push 0x9b78c0
// 004d9cf0  6800080000           push 0x800
// 004d9cf5  55                   push ebp
// 004d9cf6  ff151cb29800         call dword ptr [0x98b21c]
// 004d9cfc  50                   push eax
// 004d9cfd  ffd3                 call ebx
// 004d9cff  85c0                 test eax, eax
// 004d9d01  7514                 jne 0x4d9d17
// 004d9d03  8b06                 mov eax, dword ptr [esi]
// 004d9d05  8b08                 mov ecx, dword ptr [eax]
// 004d9d07  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004d9d0a  6a01                 push 1
// 004d9d0c  56                   push esi
// 004d9d0d  68009b4d00           push 0x4d9b00
// 004d9d12  6a04                 push 4
// 004d9d14  50                   push eax
// 004d9d15  ffd2                 call edx
// 004d9d17  57                   push edi
// 004d9d18  ff15f8b19800         call dword ptr [0x98b1f8]
// 004d9d1e  5b                   pop ebx
// 004d9d1f  5f                   pop edi
// 004d9d20  8bc6                 mov eax, esi
// 004d9d22  5e                   pop esi
// 004d9d23  5d                   pop ebp
// 004d9d24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d9d28  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9d2f  83c410               add esp, 0x10
// 004d9d32  c20400               ret 4
// 004d9d35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d9d39  5f                   pop edi
// 004d9d3a  8bc6                 mov eax, esi
// 004d9d3c  5e                   pop esi
// 004d9d3d  5d                   pop ebp
// 004d9d3e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9d45  83c410               add esp, 0x10
// 004d9d48  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
