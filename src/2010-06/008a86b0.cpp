// roc 2010-06 008a86b0  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a86b0
//
// 008a86b0  56                   push esi
// 008a86b1  57                   push edi
// 008a86b2  8bf1                 mov esi, ecx
// 008a86b4  e837fdffff           call 0x8a83f0
// 008a86b9  e862b4f3ff           call 0x7e3b20
// 008a86be  8bc8                 mov ecx, eax
// 008a86c0  e80bb2f3ff           call 0x7e38d0
// 008a86c5  8bf8                 mov edi, eax
// 008a86c7  e854b4f3ff           call 0x7e3b20
// 008a86cc  6a0f                 push 0xf
// 008a86ce  8bc8                 mov ecx, eax
// 008a86d0  e8dbabf3ff           call 0x7e32b0
// 008a86d5  33c9                 xor ecx, ecx
// 008a86d7  894624               mov dword ptr [esi + 0x24], eax
// 008a86da  3bf9                 cmp edi, ecx
// 008a86dc  7421                 je 0x8a86ff
// 008a86de  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 008a86e8  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 008a86f2  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 008a86fc  894e30               mov dword ptr [esi + 0x30], ecx
// 008a86ff  8d47ff               lea eax, [edi - 1]
// 008a8702  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 008a8708  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 008a870e  83f804               cmp eax, 4
// 008a8711  774a                 ja 0x8a875d
// 008a8713  ff24857c878a00       jmp dword ptr [eax*4 + 0x8a877c]
// 008a871a  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 008a8721  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 008a8728  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 008a872f  eb2c                 jmp 0x8a875d
// 008a8731  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 008a8738  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 008a873f  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 008a8746  eb15                 jmp 0x8a875d
// 008a8748  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 008a874f  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 008a8756  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 008a875d  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 008a8763  7511                 jne 0x8a8776
// 008a8765  e8b6b3f3ff           call 0x7e3b20
// 008a876a  6a0f                 push 0xf
// 008a876c  8bc8                 mov ecx, eax
// 008a876e  e83dabf3ff           call 0x7e32b0
// 008a8773  894624               mov dword ptr [esi + 0x24], eax
// 008a8776  5f                   pop edi
// 008a8777  5e                   pop esi
// 008a8778  c3                   ret 
// 008a8779  8d4900               lea ecx, [ecx]
// 008a877c  1a878a003187         sbb al, byte ptr [edi - 0x78ceff76]
// 008a8782  8a00                 mov al, byte ptr [eax]
// 008a8784  48                   dec eax
// 008a8785  878a001a878a         xchg dword ptr [edx - 0x7578e600], ecx
// 008a878b  001a                 add byte ptr [edx], bl
// copied from an identical function in another client (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp