// roc 2009-12 007f5920  unit: ActiveDocView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5920
//
// 007f5920  8bff                 mov edi, edi
// 007f5922  56                   push esi
// 007f5923  8bf1                 mov esi, ecx
// 007f5925  8b4608               mov eax, dword ptr [esi + 8]
// 007f5928  c70660179f00         mov dword ptr [esi], 0x9f1760
// 007f592e  85c0                 test eax, eax
// 007f5930  7408                 je 0x7f593a
// 007f5932  8b08                 mov ecx, dword ptr [eax]
// 007f5934  8b5108               mov edx, dword ptr [ecx + 8]
// 007f5937  50                   push eax
// 007f5938  ffd2                 call edx
// 007f593a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007f593e  7417                 je 0x7f5957
// 007f5940  ff152cb29800         call dword ptr [0x98b22c]
// 007f5946  85c0                 test eax, eax
// 007f5948  740d                 je 0x7f5957
// 007f594a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f594d  51                   push ecx
// 007f594e  6a00                 push 0
// 007f5950  50                   push eax
// 007f5951  ff150cb39800         call dword ptr [0x98b30c]
// 007f5957  5e                   pop esi
// 007f5958  c3                   ret 
// copied from an identical function in another client (function ??1_com_error@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-comsupp-rtm comsupp.lib/f:/dd/vctools/compiler/cxxfe/sl/vccom/ANSI/objr/i386/comraise.obj