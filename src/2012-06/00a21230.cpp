// roc 2012-06 00a21230  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a21230
//
// 00a21230  83ec10               sub esp, 0x10
// 00a21233  53                   push ebx
// 00a21234  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a21238  56                   push esi
// 00a21239  8bf1                 mov esi, ecx
// 00a2123b  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00a21241  57                   push edi
// 00a21242  85c0                 test eax, eax
// 00a21244  0f849a000000         je 0xa212e4
// 00a2124a  83fb7b               cmp ebx, 0x7b
// 00a2124d  7546                 jne 0xa21295
// 00a2124f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a21253  8338ff               cmp dword ptr [eax], -1
// 00a21256  752f                 jne 0xa21287
// 00a21258  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a2125b  8d7eac               lea edi, [esi - 0x54]
// 00a2125e  51                   push ecx
// 00a2125f  8bcf                 mov ecx, edi
// 00a21261  e8aa28f7ff           call 0x993b10
// 00a21266  8bf0                 mov esi, eax
// 00a21268  85f6                 test esi, esi
// 00a2126a  741b                 je 0xa21287
// 00a2126c  8d54240c             lea edx, [esp + 0xc]
// 00a21270  52                   push edx
// 00a21271  8bce                 mov ecx, esi
// 00a21273  e8f833f6ff           call 0x984670
// 00a21278  8b4804               mov ecx, dword ptr [eax + 4]
// 00a2127b  8b10                 mov edx, dword ptr [eax]
// 00a2127d  56                   push esi
// 00a2127e  51                   push ecx
// 00a2127f  52                   push edx
// 00a21280  8bcf                 mov ecx, edi
// 00a21282  e8a9f8ffff           call 0xa20b30
// 00a21287  5f                   pop edi
// 00a21288  5e                   pop esi
// 00a21289  b801000000           mov eax, 1
// 00a2128e  5b                   pop ebx
// 00a2128f  83c410               add esp, 0x10
// 00a21292  c21400               ret 0x14
// 00a21295  85c0                 test eax, eax
// 00a21297  744b                 je 0xa212e4
// 00a21299  81fb0a020000         cmp ebx, 0x20a
// 00a2129f  7543                 jne 0xa212e4
// 00a212a1  8d7eac               lea edi, [esi - 0x54]
// 00a212a4  8bcf                 mov ecx, edi
// 00a212a6  e8451af7ff           call 0x992cf0
// 00a212ab  8bc8                 mov ecx, eax
// 00a212ad  e80e2af8ff           call 0x9a3cc0
// 00a212b2  83780400             cmp dword ptr [eax + 4], 0
// 00a212b6  7f2c                 jg 0xa212e4
// 00a212b8  8bcf                 mov ecx, edi
// 00a212ba  e84112f8ff           call 0x9a2500
// 00a212bf  85c0                 test eax, eax
// 00a212c1  7521                 jne 0xa212e4
// 00a212c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a212c7  66394102             cmp word ptr [ecx + 2], ax
// 00a212cb  8bcf                 mov ecx, edi
// 00a212cd  0f9ec0               setle al
// 00a212d0  50                   push eax
// 00a212d1  e8aad9ffff           call 0xa1ec80
// 00a212d6  5f                   pop edi
// 00a212d7  5e                   pop esi
// 00a212d8  b801000000           mov eax, 1
// 00a212dd  5b                   pop ebx
// 00a212de  83c410               add esp, 0x10
// 00a212e1  c21400               ret 0x14
// 00a212e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a212e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a212ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a212f0  52                   push edx
// 00a212f1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a212f5  50                   push eax
// 00a212f6  51                   push ecx
// 00a212f7  53                   push ebx
// 00a212f8  52                   push edx
// 00a212f9  8bce                 mov ecx, esi
// 00a212fb  e8d0c9ffff           call 0xa1dcd0
// 00a21300  5f                   pop edi
// 00a21301  5e                   pop esi
// 00a21302  5b                   pop ebx
// 00a21303  83c410               add esp, 0x10
// 00a21306  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
