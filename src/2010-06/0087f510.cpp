// roc 2010-06 0087f510  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f510
//
// 0087f510  56                   push esi
// 0087f511  57                   push edi
// 0087f512  8bf1                 mov esi, ecx
// 0087f514  e8a7e9ffff           call 0x87dec0
// 0087f519  33ff                 xor edi, edi
// 0087f51b  897e78               mov dword ptr [esi + 0x78], edi
// 0087f51e  e8fd45f6ff           call 0x7e3b20
// 0087f523  8bc8                 mov ecx, eax
// 0087f525  e8d657e3ff           call 0x6b4d00
// 0087f52a  85c0                 test eax, eax
// 0087f52c  0f85c5000000         jne 0x87f5f7
// 0087f532  e8e945f6ff           call 0x7e3b20
// 0087f537  8bc8                 mov ecx, eax
// 0087f539  e89243f6ff           call 0x7e38d0
// 0087f53e  48                   dec eax
// 0087f53f  83f804               cmp eax, 4
// 0087f542  0f87af000000         ja 0x87f5f7
// 0087f548  ff2485fcf58700       jmp dword ptr [eax*4 + 0x87f5fc]
// 0087f54f  c74634ddecfe00       mov dword ptr [esi + 0x34], 0xfeecdd
// 0087f556  c746407ba4e000       mov dword ptr [esi + 0x40], 0xe0a47b
// 0087f55d  8b4638               mov eax, dword ptr [esi + 0x38]
// 0087f560  83f8ff               cmp eax, -1
// 0087f563  7503                 jne 0x87f568
// 0087f565  8b4634               mov eax, dword ptr [esi + 0x34]
// 0087f568  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087f56b  894138               mov dword ptr [ecx + 0x38], eax
// 0087f56e  8b5674               mov edx, dword ptr [esi + 0x74]
// 0087f571  c74250a9c7f000       mov dword ptr [edx + 0x50], 0xf0c7a9
// 0087f578  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087f57b  897868               mov dword ptr [eax + 0x68], edi
// 0087f57e  5f                   pop edi
// 0087f57f  c7467801000000       mov dword ptr [esi + 0x78], 1
// 0087f586  5e                   pop esi
// 0087f587  c3                   ret 
// 0087f588  c74634f3f2e700       mov dword ptr [esi + 0x34], 0xe7f2f3
// 0087f58f  c74640bcbbb100       mov dword ptr [esi + 0x40], 0xb1bbbc
// 0087f596  8b4638               mov eax, dword ptr [esi + 0x38]
// 0087f599  83f8ff               cmp eax, -1
// 0087f59c  7503                 jne 0x87f5a1
// 0087f59e  8b4634               mov eax, dword ptr [esi + 0x34]
// 0087f5a1  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087f5a4  894138               mov dword ptr [ecx + 0x38], eax
// 0087f5a7  8b5674               mov edx, dword ptr [esi + 0x74]
// 0087f5aa  c74250c5d49f00       mov dword ptr [edx + 0x50], 0x9fd4c5
// 0087f5b1  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087f5b4  897868               mov dword ptr [eax + 0x68], edi
// 0087f5b7  5f                   pop edi
// 0087f5b8  c7467801000000       mov dword ptr [esi + 0x78], 1
// 0087f5bf  5e                   pop esi
// 0087f5c0  c3                   ret 
// 0087f5c1  c74634eeeef400       mov dword ptr [esi + 0x34], 0xf4eeee
// 0087f5c8  c74640a1a0bb00       mov dword ptr [esi + 0x40], 0xbba0a1
// 0087f5cf  8b4638               mov eax, dword ptr [esi + 0x38]
// 0087f5d2  83f8ff               cmp eax, -1
// 0087f5d5  7503                 jne 0x87f5da
// 0087f5d7  8b4634               mov eax, dword ptr [esi + 0x34]
// 0087f5da  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087f5dd  894138               mov dword ptr [ecx + 0x38], eax
// 0087f5e0  8b5674               mov edx, dword ptr [esi + 0x74]
// 0087f5e3  c74250c0c0d300       mov dword ptr [edx + 0x50], 0xd3c0c0
// 0087f5ea  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087f5ed  897868               mov dword ptr [eax + 0x68], edi
// 0087f5f0  c7467801000000       mov dword ptr [esi + 0x78], 1
// 0087f5f7  5f                   pop edi
// 0087f5f8  5e                   pop esi
// 0087f5f9  c3                   ret 
// 0087f5fa  8bff                 mov edi, edi
// 0087f5fc  4f                   dec edi
// 0087f5fd  f5                   cmc 
// 0087f5fe  8700                 xchg dword ptr [eax], eax
// 0087f600  88f5                 mov ch, dh
// 0087f602  8700                 xchg dword ptr [eax], eax
// 0087f604  c1f587               sal ebp, 0x87
// 0087f607  004ff5               add byte ptr [edi - 0xb], cl
// 0087f60a  8700                 xchg dword ptr [eax], eax
// 0087f60c  4f                   dec edi
// 0087f60d  f5                   cmc 
// 0087f60e  8700                 xchg dword ptr [eax], eax
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
