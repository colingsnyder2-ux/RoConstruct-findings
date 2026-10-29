// roc 2009-06 0071ab00  unit: ActiveDocView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071ab00
//
// 0071ab00  8bff                 mov edi, edi
// 0071ab02  56                   push esi
// 0071ab03  8bf1                 mov esi, ecx
// 0071ab05  8b4608               mov eax, dword ptr [esi + 8]
// 0071ab08  c706a0128f00         mov dword ptr [esi], 0x8f12a0
// 0071ab0e  85c0                 test eax, eax
// 0071ab10  7408                 je 0x71ab1a
// 0071ab12  8b08                 mov ecx, dword ptr [eax]
// 0071ab14  8b5108               mov edx, dword ptr [ecx + 8]
// 0071ab17  50                   push eax
// 0071ab18  ffd2                 call edx
// 0071ab1a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0071ab1e  7417                 je 0x71ab37
// 0071ab20  ff1530e28900         call dword ptr [0x89e230]
// 0071ab26  85c0                 test eax, eax
// 0071ab28  740d                 je 0x71ab37
// 0071ab2a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0071ab2d  51                   push ecx
// 0071ab2e  6a00                 push 0
// 0071ab30  50                   push eax
// 0071ab31  ff1528e28900         call dword ptr [0x89e228]
// 0071ab37  5e                   pop esi
// 0071ab38  c3                   ret 
// copied from an identical function in another client (function ??1_com_error@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-comsupp-rtm comsupp.lib/f:/dd/vctools/compiler/cxxfe/sl/vccom/ANSI/objr/i386/comraise.obj