// from server: 100% by auto
// roc 2008-06 00778070  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00778070
//
// 00778070  56                   push esi
// 00778071  57                   push edi
// 00778072  8bf1                 mov esi, ecx
// 00778074  e8a7e9ffff           call 0x776a20
// 00778079  33ff                 xor edi, edi
// 0077807b  897e78               mov dword ptr [esi + 0x78], edi
// 0077807e  e8bd7cf6ff           call 0x6dfd40
// 00778083  8bc8                 mov ecx, eax
// 00778085  e816e5e3ff           call 0x5b65a0
// 0077808a  85c0                 test eax, eax
// 0077808c  0f85c5000000         jne 0x778157
// 00778092  e8a97cf6ff           call 0x6dfd40
// 00778097  8bc8                 mov ecx, eax
// 00778099  e8a27af6ff           call 0x6dfb40
// 0077809e  48                   dec eax
// 0077809f  83f804               cmp eax, 4
// 007780a2  0f87af000000         ja 0x778157
// 007780a8  ff24855c817700       jmp dword ptr [eax*4 + 0x77815c]
// 007780af  c74634ddecfe00       mov dword ptr [esi + 0x34], 0xfeecdd
// 007780b6  c746407ba4e000       mov dword ptr [esi + 0x40], 0xe0a47b
// 007780bd  8b4638               mov eax, dword ptr [esi + 0x38]
// 007780c0  83f8ff               cmp eax, -1
// 007780c3  7503                 jne 0x7780c8
// 007780c5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007780c8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007780cb  894138               mov dword ptr [ecx + 0x38], eax
// 007780ce  8b5674               mov edx, dword ptr [esi + 0x74]
// 007780d1  c74250a9c7f000       mov dword ptr [edx + 0x50], 0xf0c7a9
// 007780d8  8b4674               mov eax, dword ptr [esi + 0x74]
// 007780db  897868               mov dword ptr [eax + 0x68], edi
// 007780de  5f                   pop edi
// 007780df  c7467801000000       mov dword ptr [esi + 0x78], 1
// 007780e6  5e                   pop esi
// 007780e7  c3                   ret 
// 007780e8  c74634f3f2e700       mov dword ptr [esi + 0x34], 0xe7f2f3
// 007780ef  c74640bcbbb100       mov dword ptr [esi + 0x40], 0xb1bbbc
// 007780f6  8b4638               mov eax, dword ptr [esi + 0x38]
// 007780f9  83f8ff               cmp eax, -1
// 007780fc  7503                 jne 0x778101
// 007780fe  8b4634               mov eax, dword ptr [esi + 0x34]
// 00778101  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00778104  894138               mov dword ptr [ecx + 0x38], eax
// 00778107  8b5674               mov edx, dword ptr [esi + 0x74]
// 0077810a  c74250c5d49f00       mov dword ptr [edx + 0x50], 0x9fd4c5
// 00778111  8b4674               mov eax, dword ptr [esi + 0x74]
// 00778114  897868               mov dword ptr [eax + 0x68], edi
// 00778117  5f                   pop edi
// 00778118  c7467801000000       mov dword ptr [esi + 0x78], 1
// 0077811f  5e                   pop esi
// 00778120  c3                   ret 
// 00778121  c74634eeeef400       mov dword ptr [esi + 0x34], 0xf4eeee
// 00778128  c74640a1a0bb00       mov dword ptr [esi + 0x40], 0xbba0a1
// 0077812f  8b4638               mov eax, dword ptr [esi + 0x38]
// 00778132  83f8ff               cmp eax, -1
// 00778135  7503                 jne 0x77813a
// 00778137  8b4634               mov eax, dword ptr [esi + 0x34]
// 0077813a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0077813d  894138               mov dword ptr [ecx + 0x38], eax
// 00778140  8b5674               mov edx, dword ptr [esi + 0x74]
// 00778143  c74250c0c0d300       mov dword ptr [edx + 0x50], 0xd3c0c0
// 0077814a  8b4674               mov eax, dword ptr [esi + 0x74]
// 0077814d  897868               mov dword ptr [eax + 0x68], edi
// 00778150  c7467801000000       mov dword ptr [esi + 0x78], 1
// 00778157  5f                   pop edi
// 00778158  5e                   pop esi
// 00778159  c3                   ret 
// 0077815a  8bff                 mov edi, edi
// 0077815c  af                   scasd eax, dword ptr es:[edi]
// 0077815d  807700e8             xor byte ptr [edi], 0xe8
// 00778161  80770021             xor byte ptr [edi], 0x21
// 00778165  817700af807700       xor dword ptr [edi], 0x7780af
// 0077816c  af                   scasd eax, dword ptr es:[edi]
// library xtp-11.2.2-lib-strlen/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
