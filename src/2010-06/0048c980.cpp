// from server: 100% by auto
// roc 2010-06 0048c980  unit: G3D::Win32Window  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048c980
//
// 0048c980  53                   push ebx
// 0048c981  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0048c985  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0048c989  55                   push ebp
// 0048c98a  56                   push esi
// 0048c98b  8bf1                 mov esi, ecx
// 0048c98d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0048c990  57                   push edi
// 0048c991  7205                 jb 0x48c998
// 0048c993  8b4304               mov eax, dword ptr [ebx + 4]
// 0048c996  eb03                 jmp 0x48c99b
// 0048c998  8d4304               lea eax, [ebx + 4]
// 0048c99b  51                   push ecx
// 0048c99c  50                   push eax
// 0048c99d  e85ead0c00           call 0x557700
// 0048c9a2  33d2                 xor edx, edx
// 0048c9a4  8bf8                 mov edi, eax
// 0048c9a6  f7760c               div dword ptr [esi + 0xc]
// 0048c9a9  8b4608               mov eax, dword ptr [esi + 8]
// 0048c9ac  83c408               add esp, 8
// 0048c9af  8b3490               mov esi, dword ptr [eax + edx*4]
// 0048c9b2  85f6                 test esi, esi
// 0048c9b4  742a                 je 0x48c9e0
// 0048c9b6  8b2d8ca49e00         mov ebp, dword ptr [0x9ea48c]
// 0048c9bc  8d642400             lea esp, [esp]
// 0048c9c0  393e                 cmp dword ptr [esi], edi
// 0048c9c2  750e                 jne 0x48c9d2
// 0048c9c4  8d4e04               lea ecx, [esi + 4]
// 0048c9c7  53                   push ebx
// 0048c9c8  51                   push ecx
// 0048c9c9  ffd5                 call ebp
// 0048c9cb  83c408               add esp, 8
// 0048c9ce  84c0                 test al, al
// 0048c9d0  7517                 jne 0x48c9e9
// 0048c9d2  8b7624               mov esi, dword ptr [esi + 0x24]
// 0048c9d5  85f6                 test esi, esi
// 0048c9d7  75e7                 jne 0x48c9c0
// 0048c9d9  8da42400000000       lea esp, [esp]
// 0048c9e0  5f                   pop edi
// 0048c9e1  5e                   pop esi
// 0048c9e2  5d                   pop ebp
// 0048c9e3  32c0                 xor al, al
// 0048c9e5  5b                   pop ebx
// 0048c9e6  c20400               ret 4
// 0048c9e9  5f                   pop edi
// 0048c9ea  5e                   pop esi
// 0048c9eb  5d                   pop ebp
// 0048c9ec  b001                 mov al, 1
// 0048c9ee  5b                   pop ebx
// 0048c9ef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
