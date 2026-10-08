// from server: 100% by auto
// roc 2010-06 0053fc00  unit: RBX::SceneManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fc00
//
// 0053fc00  56                   push esi
// 0053fc01  8bf1                 mov esi, ecx
// 0053fc03  8b4608               mov eax, dword ptr [esi + 8]
// 0053fc06  85c0                 test eax, eax
// 0053fc08  742c                 je 0x53fc36
// 0053fc0a  83c004               add eax, 4
// 0053fc0d  50                   push eax
// 0053fc0e  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053fc14  85c0                 test eax, eax
// 0053fc16  7517                 jne 0x53fc2f
// 0053fc18  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053fc1b  e8003ff4ff           call 0x483b20
// 0053fc20  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053fc23  85c9                 test ecx, ecx
// 0053fc25  7408                 je 0x53fc2f
// 0053fc27  8b01                 mov eax, dword ptr [ecx]
// 0053fc29  8b10                 mov edx, dword ptr [eax]
// 0053fc2b  6a01                 push 1
// 0053fc2d  ffd2                 call edx
// 0053fc2f  c7460800000000       mov dword ptr [esi + 8], 0
// 0053fc36  5e                   pop esi
// 0053fc37  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??1ModelSorter@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
