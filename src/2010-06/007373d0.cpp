// from server: 100% by auto
// roc 2010-06 007373d0  unit: seg_00730000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007373d0
//
// 007373d0  83ec64               sub esp, 0x64
// 007373d3  6a01                 push 1
// 007373d5  56                   push esi
// 007373d6  e8659dfeff           call 0x721140
// 007373db  83c408               add esp, 8
// 007373de  83f806               cmp eax, 6
// 007373e1  750f                 jne 0x7373f2
// 007373e3  6a01                 push 1
// 007373e5  56                   push esi
// 007373e6  e8259dfeff           call 0x721110
// 007373eb  83c408               add esp, 8
// 007373ee  83c464               add esp, 0x64
// 007373f1  c3                   ret 
// 007373f2  837c246800           cmp dword ptr [esp + 0x68], 0
// 007373f7  57                   push edi
// 007373f8  6a01                 push 1
// 007373fa  740d                 je 0x737409
// 007373fc  6a01                 push 1
// 007373fe  56                   push esi
// 007373ff  e8ccbcfeff           call 0x7230d0
// 00737404  83c40c               add esp, 0xc
// 00737407  eb09                 jmp 0x737412
// 00737409  56                   push esi
// 0073740a  e851bcfeff           call 0x723060
// 0073740f  83c408               add esp, 8
// 00737412  8bf8                 mov edi, eax
// 00737414  85ff                 test edi, edi
// 00737416  7d10                 jge 0x737428
// 00737418  6894e7a400           push 0xa4e794
// 0073741d  6a01                 push 1
// 0073741f  56                   push esi
// 00737420  e80bb9feff           call 0x722d30
// 00737425  83c40c               add esp, 0xc
// 00737428  8d442404             lea eax, [esp + 4]
// 0073742c  50                   push eax
// 0073742d  57                   push edi
// 0073742e  56                   push esi
// 0073742f  e8ccbbffff           call 0x733000
// 00737434  83c40c               add esp, 0xc
// 00737437  85c0                 test eax, eax
// 00737439  7510                 jne 0x73744b
// 0073743b  6884e7a400           push 0xa4e784
// 00737440  6a01                 push 1
// 00737442  56                   push esi
// 00737443  e8e8b8feff           call 0x722d30
// 00737448  83c40c               add esp, 0xc
// 0073744b  8d4c2404             lea ecx, [esp + 4]
// 0073744f  51                   push ecx
// 00737450  6880e7a400           push 0xa4e780
// 00737455  56                   push esi
// 00737456  e8c5c8ffff           call 0x733d20
// 0073745b  6aff                 push -1
// 0073745d  56                   push esi
// 0073745e  e8dd9cfeff           call 0x721140
// 00737463  83c414               add esp, 0x14
// 00737466  85c0                 test eax, eax
// 00737468  750f                 jne 0x737479
// 0073746a  57                   push edi
// 0073746b  684ce7a400           push 0xa4e74c
// 00737470  56                   push esi
// 00737471  e82ab0feff           call 0x7224a0
// 00737476  83c40c               add esp, 0xc
// 00737479  5f                   pop edi
// 0073747a  83c464               add esp, 0x64
// 0073747d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
