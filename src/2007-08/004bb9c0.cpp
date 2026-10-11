// roc 2007-08 004bb9c0  unit: RakPeer  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb9c0
//
// 004bb9c0  8b442404             mov eax, dword ptr [esp + 4]
// 004bb9c4  83ec20               sub esp, 0x20
// 004bb9c7  56                   push esi
// 004bb9c8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004bb9cc  57                   push edi
// 004bb9cd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004bb9d1  57                   push edi
// 004bb9d2  56                   push esi
// 004bb9d3  50                   push eax
// 004bb9d4  e897f9ffff           call 0x4bb370
// 004bb9d9  83c40c               add esp, 0xc
// 004bb9dc  33c0                 xor eax, eax
// 004bb9de  8bff                 mov edi, edi
// 004bb9e0  833c8700             cmp dword ptr [edi + eax*4], 0
// 004bb9e4  7515                 jne 0x4bb9fb
// 004bb9e6  83c001               add eax, 1
// 004bb9e9  83f808               cmp eax, 8
// 004bb9ec  72f2                 jb 0x4bb9e0
// 004bb9ee  b908000000           mov ecx, 8
// 004bb9f3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb9f5  5f                   pop edi
// 004bb9f6  5e                   pop esi
// 004bb9f7  83c420               add esp, 0x20
// 004bb9fa  c3                   ret 
// 004bb9fb  8d4c2408             lea ecx, [esp + 8]
// 004bb9ff  51                   push ecx
// 004bba00  57                   push edi
// 004bba01  56                   push esi
// 004bba02  e869f9ffff           call 0x4bb370
// 004bba07  83c40c               add esp, 0xc
// 004bba0a  33c0                 xor eax, eax
// 004bba0c  8d642400             lea esp, [esp]
// 004bba10  837c840800           cmp dword ptr [esp + eax*4 + 8], 0
// 004bba15  750e                 jne 0x4bba25
// 004bba17  83c001               add eax, 1
// 004bba1a  83f808               cmp eax, 8
// 004bba1d  72f1                 jb 0x4bba10
// 004bba1f  5f                   pop edi
// 004bba20  5e                   pop esi
// 004bba21  83c420               add esp, 0x20
// 004bba24  c3                   ret 
// 004bba25  57                   push edi
// 004bba26  8d54240c             lea edx, [esp + 0xc]
// 004bba2a  52                   push edx
// 004bba2b  57                   push edi
// 004bba2c  e83ff9ffff           call 0x4bb370
// 004bba31  83c40c               add esp, 0xc
// 004bba34  33c0                 xor eax, eax
// 004bba36  833c8700             cmp dword ptr [edi + eax*4], 0
// 004bba3a  7519                 jne 0x4bba55
// 004bba3c  83c001               add eax, 1
// 004bba3f  83f808               cmp eax, 8
// 004bba42  72f2                 jb 0x4bba36
// 004bba44  8d742408             lea esi, [esp + 8]
// 004bba48  b908000000           mov ecx, 8
// 004bba4d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bba4f  5f                   pop edi
// 004bba50  5e                   pop esi
// 004bba51  83c420               add esp, 0x20
// 004bba54  c3                   ret 
// 004bba55  8d442408             lea eax, [esp + 8]
// 004bba59  50                   push eax
// 004bba5a  8bc8                 mov ecx, eax
// 004bba5c  57                   push edi
// 004bba5d  51                   push ecx
// 004bba5e  e80df9ffff           call 0x4bb370
// 004bba63  83c40c               add esp, 0xc
// 004bba66  33c0                 xor eax, eax
// 004bba68  837c840800           cmp dword ptr [esp + eax*4 + 8], 0
// 004bba6d  75b6                 jne 0x4bba25
// 004bba6f  83c001               add eax, 1
// 004bba72  83f808               cmp eax, 8
// 004bba75  72f1                 jb 0x4bba68
// 004bba77  5f                   pop edi
// 004bba78  5e                   pop esi
// 004bba79  83c420               add esp, 0x20
// 004bba7c  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$GCD@$$BY07I@big@@YAXAAY07I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
