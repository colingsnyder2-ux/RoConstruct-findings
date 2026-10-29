// roc 2011-06 009038a1  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009038a1
//
// 009038a1  8bff                 mov edi, edi
// 009038a3  55                   push ebp
// 009038a4  8bec                 mov ebp, esp
// 009038a6  56                   push esi
// 009038a7  8b7508               mov esi, dword ptr [ebp + 8]
// 009038aa  57                   push edi
// 009038ab  ff750c               push dword ptr [ebp + 0xc]
// 009038ae  83c608               add esi, 8
// 009038b1  83e6f8               and esi, 0xfffffff8
// 009038b4  8d4508               lea eax, [ebp + 8]
// 009038b7  56                   push esi
// 009038b8  50                   push eax
// 009038b9  8bf9                 mov edi, ecx
// 009038bb  e810fcafff           call 0x4034d0
// 009038c0  83c40c               add esp, 0xc
// 009038c3  85c0                 test eax, eax
// 009038c5  7c36                 jl 0x9038fd
// 009038c7  ff7508               push dword ptr [ebp + 8]
// 009038ca  8d4508               lea eax, [ebp + 8]
// 009038cd  6a10                 push 0x10
// 009038cf  50                   push eax
// 009038d0  e8a6ffffff           call 0x90387b
// 009038d5  83c40c               add esp, 0xc
// 009038d8  85c0                 test eax, eax
// 009038da  7c21                 jl 0x9038fd
// 009038dc  8b4f04               mov ecx, dword ptr [edi + 4]
// 009038df  ff7508               push dword ptr [ebp + 8]
// 009038e2  8b01                 mov eax, dword ptr [ecx]
// 009038e4  ff10                 call dword ptr [eax]
// 009038e6  85c0                 test eax, eax
// 009038e8  7413                 je 0x9038fd
// 009038ea  4e                   dec esi
// 009038eb  83600400             and dword ptr [eax + 4], 0
// 009038ef  8938                 mov dword ptr [eax], edi
// 009038f1  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009038f8  897008               mov dword ptr [eax + 8], esi
// 009038fb  eb02                 jmp 0x9038ff
// 009038fd  33c0                 xor eax, eax
// 009038ff  5f                   pop edi
// 00903900  5e                   pop esi
// 00903901  5d                   pop ebp
// 00903902  c20800               ret 8
// copied from an identical function in another client (function ?Allocate@CAtlStringMgr@ATL@@UAEPAUCStringData@2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj