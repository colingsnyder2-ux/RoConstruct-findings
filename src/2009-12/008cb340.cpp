// roc 2009-12 008cb340  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb340
//
// 008cb340  56                   push esi
// 008cb341  57                   push edi
// 008cb342  8bf1                 mov esi, ecx
// 008cb344  e8a7e9ffff           call 0x8c9cf0
// 008cb349  33ff                 xor edi, edi
// 008cb34b  897e78               mov dword ptr [esi + 0x78], edi
// 008cb34e  e87d46f6ff           call 0x82f9d0
// 008cb353  8bc8                 mov ecx, eax
// 008cb355  e88640f6ff           call 0x82f3e0
// 008cb35a  85c0                 test eax, eax
// 008cb35c  0f85c5000000         jne 0x8cb427
// 008cb362  e86946f6ff           call 0x82f9d0
// 008cb367  8bc8                 mov ecx, eax
// 008cb369  e8c243f6ff           call 0x82f730
// 008cb36e  48                   dec eax
// 008cb36f  83f804               cmp eax, 4
// 008cb372  0f87af000000         ja 0x8cb427
// 008cb378  ff24852cb48c00       jmp dword ptr [eax*4 + 0x8cb42c]
// 008cb37f  c74634ddecfe00       mov dword ptr [esi + 0x34], 0xfeecdd
// 008cb386  c746407ba4e000       mov dword ptr [esi + 0x40], 0xe0a47b
// 008cb38d  8b4638               mov eax, dword ptr [esi + 0x38]
// 008cb390  83f8ff               cmp eax, -1
// 008cb393  7503                 jne 0x8cb398
// 008cb395  8b4634               mov eax, dword ptr [esi + 0x34]
// 008cb398  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb39b  894138               mov dword ptr [ecx + 0x38], eax
// 008cb39e  8b5674               mov edx, dword ptr [esi + 0x74]
// 008cb3a1  c74250a9c7f000       mov dword ptr [edx + 0x50], 0xf0c7a9
// 008cb3a8  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cb3ab  897868               mov dword ptr [eax + 0x68], edi
// 008cb3ae  5f                   pop edi
// 008cb3af  c7467801000000       mov dword ptr [esi + 0x78], 1
// 008cb3b6  5e                   pop esi
// 008cb3b7  c3                   ret 
// 008cb3b8  c74634f3f2e700       mov dword ptr [esi + 0x34], 0xe7f2f3
// 008cb3bf  c74640bcbbb100       mov dword ptr [esi + 0x40], 0xb1bbbc
// 008cb3c6  8b4638               mov eax, dword ptr [esi + 0x38]
// 008cb3c9  83f8ff               cmp eax, -1
// 008cb3cc  7503                 jne 0x8cb3d1
// 008cb3ce  8b4634               mov eax, dword ptr [esi + 0x34]
// 008cb3d1  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb3d4  894138               mov dword ptr [ecx + 0x38], eax
// 008cb3d7  8b5674               mov edx, dword ptr [esi + 0x74]
// 008cb3da  c74250c5d49f00       mov dword ptr [edx + 0x50], 0x9fd4c5
// 008cb3e1  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cb3e4  897868               mov dword ptr [eax + 0x68], edi
// 008cb3e7  5f                   pop edi
// 008cb3e8  c7467801000000       mov dword ptr [esi + 0x78], 1
// 008cb3ef  5e                   pop esi
// 008cb3f0  c3                   ret 
// 008cb3f1  c74634eeeef400       mov dword ptr [esi + 0x34], 0xf4eeee
// 008cb3f8  c74640a1a0bb00       mov dword ptr [esi + 0x40], 0xbba0a1
// 008cb3ff  8b4638               mov eax, dword ptr [esi + 0x38]
// 008cb402  83f8ff               cmp eax, -1
// 008cb405  7503                 jne 0x8cb40a
// 008cb407  8b4634               mov eax, dword ptr [esi + 0x34]
// 008cb40a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb40d  894138               mov dword ptr [ecx + 0x38], eax
// 008cb410  8b5674               mov edx, dword ptr [esi + 0x74]
// 008cb413  c74250c0c0d300       mov dword ptr [edx + 0x50], 0xd3c0c0
// 008cb41a  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cb41d  897868               mov dword ptr [eax + 0x68], edi
// 008cb420  c7467801000000       mov dword ptr [esi + 0x78], 1
// 008cb427  5f                   pop edi
// 008cb428  5e                   pop esi
// 008cb429  c3                   ret 
// 008cb42a  8bff                 mov edi, edi
// 008cb42c  7fb3                 jg 0x8cb3e1
// 008cb42e  8c00                 mov word ptr [eax], es
// 008cb430  b8b38c00f1           mov eax, 0xf1008cb3
// 008cb435  b38c                 mov bl, 0x8c
// 008cb437  007fb3               add byte ptr [edi - 0x4d], bh
// 008cb43a  8c00                 mov word ptr [eax], es
// 008cb43c  7fb3                 jg 0x8cb3f1
// 008cb43e  8c00                 mov word ptr [eax], es
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
