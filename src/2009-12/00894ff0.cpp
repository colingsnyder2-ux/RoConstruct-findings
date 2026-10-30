// roc 2009-12 00894ff0  unit: CXTPRibbonBar  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894ff0
//
// 00894ff0  56                   push esi
// 00894ff1  57                   push edi
// 00894ff2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00894ff6  8bf1                 mov esi, ecx
// 00894ff8  8b8f58010000         mov ecx, dword ptr [edi + 0x158]
// 00894ffe  85c9                 test ecx, ecx
// 00895000  7424                 je 0x895026
// 00895002  e8f9440500           call 0x8e9500
// 00895007  8bce                 mov ecx, esi
// 00895009  8bd0                 mov edx, eax
// 0089500b  e8d0fcffff           call 0x894ce0
// 00895010  3bd0                 cmp edx, eax
// 00895012  7412                 je 0x895026
// 00895014  8b8f58010000         mov ecx, dword ptr [edi + 0x158]
// 0089501a  e8e1440500           call 0x8e9500
// 0089501f  8bc8                 mov ecx, eax
// 00895021  e8ea8f0300           call 0x8ce010
// 00895026  8bce                 mov ecx, esi
// 00895028  e8b3fcffff           call 0x894ce0
// 0089502d  85c0                 test eax, eax
// 0089502f  7473                 je 0x8950a4
// 00895031  83bf5801000000       cmp dword ptr [edi + 0x158], 0
// 00895038  746a                 je 0x8950a4
// 0089503a  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 00895040  8b01                 mov eax, dword ptr [ecx]
// 00895042  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00895048  6a00                 push 0
// 0089504a  ffd2                 call edx
// 0089504c  85c0                 test eax, eax
// 0089504e  7516                 jne 0x895066
// 00895050  8b8ed4010000         mov ecx, dword ptr [esi + 0x1d4]
// 00895056  8b01                 mov eax, dword ptr [ecx]
// 00895058  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0089505e  6a00                 push 0
// 00895060  ffd2                 call edx
// 00895062  85c0                 test eax, eax
// 00895064  743e                 je 0x8950a4
// 00895066  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 0089506c  8d87c0000000         lea eax, [edi + 0xc0]
// 00895072  83ec10               sub esp, 0x10
// 00895075  8bcc                 mov ecx, esp
// 00895077  8911                 mov dword ptr [ecx], edx
// 00895079  8b5004               mov edx, dword ptr [eax + 4]
// 0089507c  895104               mov dword ptr [ecx + 4], edx
// 0089507f  8b5008               mov edx, dword ptr [eax + 8]
// 00895082  8b400c               mov eax, dword ptr [eax + 0xc]
// 00895085  895108               mov dword ptr [ecx + 8], edx
// 00895088  89410c               mov dword ptr [ecx + 0xc], eax
// 0089508b  8bce                 mov ecx, esi
// 0089508d  e84efcffff           call 0x894ce0
// 00895092  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 00895098  51                   push ecx
// 00895099  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0089509f  e84c9f0500           call 0x8eeff0
// 008950a4  5f                   pop edi
// 008950a5  5e                   pop esi
// 008950a6  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPRibbonBar@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp