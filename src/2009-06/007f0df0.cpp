// roc 2009-06 007f0df0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0df0
//
// 007f0df0  83ec10               sub esp, 0x10
// 007f0df3  53                   push ebx
// 007f0df4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007f0df8  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 007f0dff  0f8478010000         je 0x7f0f7d
// 007f0e05  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f0e09  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f0e0d  03c1                 add eax, ecx
// 007f0e0f  99                   cdq 
// 007f0e10  2bc2                 sub eax, edx
// 007f0e12  d1f8                 sar eax, 1
// 007f0e14  83e804               sub eax, 4
// 007f0e17  89442408             mov dword ptr [esp + 8], eax
// 007f0e1b  83c009               add eax, 9
// 007f0e1e  89442410             mov dword ptr [esp + 0x10], eax
// 007f0e22  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 007f0e28  c744240402000000     mov dword ptr [esp + 4], 2
// 007f0e30  c744240c0b000000     mov dword ptr [esp + 0xc], 0xb
// 007f0e38  85c0                 test eax, eax
// 007f0e3a  7e26                 jle 0x7f0e62
// 007f0e3c  33d2                 xor edx, edx
// 007f0e3e  399398000000         cmp dword ptr [ebx + 0x98], edx
// 007f0e44  6a00                 push 0
// 007f0e46  0f94c2               sete dl
// 007f0e49  2bc2                 sub eax, edx
// 007f0e4b  8d0cc500000000       lea ecx, [eax*8]
// 007f0e52  2bc8                 sub ecx, eax
// 007f0e54  03c9                 add ecx, ecx
// 007f0e56  51                   push ecx
// 007f0e57  8d54240c             lea edx, [esp + 0xc]
// 007f0e5b  52                   push edx
// 007f0e5c  ff15f8ed8900         call dword ptr [0x89edf8]
// 007f0e62  56                   push esi
// 007f0e63  57                   push edi
// 007f0e64  e8b73cf6ff           call 0x754b20
// 007f0e69  6a0f                 push 0xf
// 007f0e6b  8bc8                 mov ecx, eax
// 007f0e6d  e82e34f6ff           call 0x7542a0
// 007f0e72  8bf0                 mov esi, eax
// 007f0e74  e8a73cf6ff           call 0x754b20
// 007f0e79  6a10                 push 0x10
// 007f0e7b  8bc8                 mov ecx, eax
// 007f0e7d  e81e34f6ff           call 0x7542a0
// 007f0e82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f0e86  56                   push esi
// 007f0e87  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f0e8b  8bf8                 mov edi, eax
// 007f0e8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f0e91  6a07                 push 7
// 007f0e93  6a07                 push 7
// 007f0e95  40                   inc eax
// 007f0e96  41                   inc ecx
// 007f0e97  50                   push eax
// 007f0e98  51                   push ecx
// 007f0e99  8bce                 mov ecx, esi
// 007f0e9b  e890b00500           call 0x84bf30
// 007f0ea0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f0ea4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f0ea8  57                   push edi
// 007f0ea9  6a01                 push 1
// 007f0eab  6a07                 push 7
// 007f0ead  52                   push edx
// 007f0eae  40                   inc eax
// 007f0eaf  50                   push eax
// 007f0eb0  8bce                 mov ecx, esi
// 007f0eb2  e879b00500           call 0x84bf30
// 007f0eb7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f0ebb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f0ebf  57                   push edi
// 007f0ec0  6a01                 push 1
// 007f0ec2  6a07                 push 7
// 007f0ec4  49                   dec ecx
// 007f0ec5  51                   push ecx
// 007f0ec6  42                   inc edx
// 007f0ec7  52                   push edx
// 007f0ec8  8bce                 mov ecx, esi
// 007f0eca  e861b00500           call 0x84bf30
// 007f0ecf  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f0ed3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f0ed7  57                   push edi
// 007f0ed8  6a07                 push 7
// 007f0eda  6a01                 push 1
// 007f0edc  40                   inc eax
// 007f0edd  50                   push eax
// 007f0ede  51                   push ecx
// 007f0edf  8bce                 mov ecx, esi
// 007f0ee1  e84ab00500           call 0x84bf30
// 007f0ee6  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f0eea  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f0eee  57                   push edi
// 007f0eef  6a07                 push 7
// 007f0ef1  6a01                 push 1
// 007f0ef3  42                   inc edx
// 007f0ef4  52                   push edx
// 007f0ef5  48                   dec eax
// 007f0ef6  50                   push eax
// 007f0ef7  8bce                 mov ecx, esi
// 007f0ef9  e832b00500           call 0x84bf30
// 007f0efe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f0f02  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f0f06  68ffffff00           push 0xffffff
// 007f0f0b  6a03                 push 3
// 007f0f0d  6a07                 push 7
// 007f0f0f  41                   inc ecx
// 007f0f10  51                   push ecx
// 007f0f11  42                   inc edx
// 007f0f12  52                   push edx
// 007f0f13  8bce                 mov ecx, esi
// 007f0f15  e816b00500           call 0x84bf30
// 007f0f1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f0f1e  68ffffff00           push 0xffffff
// 007f0f23  6a02                 push 2
// 007f0f25  6a05                 push 5
// 007f0f27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f0f2b  83c004               add eax, 4
// 007f0f2e  41                   inc ecx
// 007f0f2f  50                   push eax
// 007f0f30  51                   push ecx
// 007f0f31  8bce                 mov ecx, esi
// 007f0f33  e8f8af0500           call 0x84bf30
// 007f0f38  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f0f3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f0f40  6a00                 push 0
// 007f0f42  6a01                 push 1
// 007f0f44  6a05                 push 5
// 007f0f46  83c204               add edx, 4
// 007f0f49  52                   push edx
// 007f0f4a  83c002               add eax, 2
// 007f0f4d  50                   push eax
// 007f0f4e  8bce                 mov ecx, esi
// 007f0f50  e8dbaf0500           call 0x84bf30
// 007f0f55  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 007f0f5c  751d                 jne 0x7f0f7b
// 007f0f5e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f0f62  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f0f66  6a00                 push 0
// 007f0f68  6a05                 push 5
// 007f0f6a  6a01                 push 1
// 007f0f6c  83c102               add ecx, 2
// 007f0f6f  51                   push ecx
// 007f0f70  83c204               add edx, 4
// 007f0f73  52                   push edx
// 007f0f74  8bce                 mov ecx, esi
// 007f0f76  e8b5af0500           call 0x84bf30
// 007f0f7b  5f                   pop edi
// 007f0f7c  5e                   pop esi
// 007f0f7d  5b                   pop ebx
// 007f0f7e  83c410               add esp, 0x10
// 007f0f81  c21800               ret 0x18
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawExpandButton@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
