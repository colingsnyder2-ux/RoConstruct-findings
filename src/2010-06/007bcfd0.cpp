// roc 2010-06 007bcfd0  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bcfd0
//
// 007bcfd0  8b442404             mov eax, dword ptr [esp + 4]
// 007bcfd4  83ec3c               sub esp, 0x3c
// 007bcfd7  56                   push esi
// 007bcfd8  6a00                 push 0
// 007bcfda  6880000000           push 0x80
// 007bcfdf  6a03                 push 3
// 007bcfe1  6a00                 push 0
// 007bcfe3  6a00                 push 0
// 007bcfe5  6800000080           push 0x80000000
// 007bcfea  50                   push eax
// 007bcfeb  ff15f4a29e00         call dword ptr [0x9ea2f4]
// 007bcff1  8bf0                 mov esi, eax
// 007bcff3  83feff               cmp esi, -1
// 007bcff6  7507                 jne 0x7bcfff
// 007bcff8  33c0                 xor eax, eax
// 007bcffa  5e                   pop esi
// 007bcffb  83c43c               add esp, 0x3c
// 007bcffe  c3                   ret 
// 007bcfff  57                   push edi
// 007bd000  8b3d74a29e00         mov edi, dword ptr [0x9ea274]
// 007bd006  6a00                 push 0
// 007bd008  8d4c240c             lea ecx, [esp + 0xc]
// 007bd00c  51                   push ecx
// 007bd00d  6a0e                 push 0xe
// 007bd00f  8d542418             lea edx, [esp + 0x18]
// 007bd013  52                   push edx
// 007bd014  56                   push esi
// 007bd015  ffd7                 call edi
// 007bd017  85c0                 test eax, eax
// 007bd019  743f                 je 0x7bd05a
// 007bd01b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 007bd020  7538                 jne 0x7bd05a
// 007bd022  6a00                 push 0
// 007bd024  8d44240c             lea eax, [esp + 0xc]
// 007bd028  50                   push eax
// 007bd029  6a28                 push 0x28
// 007bd02b  8d4c2428             lea ecx, [esp + 0x28]
// 007bd02f  51                   push ecx
// 007bd030  56                   push esi
// 007bd031  ffd7                 call edi
// 007bd033  85c0                 test eax, eax
// 007bd035  7423                 je 0x7bd05a
// 007bd037  837c240828           cmp dword ptr [esp + 8], 0x28
// 007bd03c  751c                 jne 0x7bd05a
// 007bd03e  33d2                 xor edx, edx
// 007bd040  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 007bd046  56                   push esi
// 007bd047  0f94c2               sete dl
// 007bd04a  8bfa                 mov edi, edx
// 007bd04c  ff15cca39e00         call dword ptr [0x9ea3cc]
// 007bd052  8bc7                 mov eax, edi
// 007bd054  5f                   pop edi
// 007bd055  5e                   pop esi
// 007bd056  83c43c               add esp, 0x3c
// 007bd059  c3                   ret 
// 007bd05a  56                   push esi
// 007bd05b  ff15cca39e00         call dword ptr [0x9ea3cc]
// 007bd061  5f                   pop edi
// 007bd062  33c0                 xor eax, eax
// 007bd064  5e                   pop esi
// 007bd065  83c43c               add esp, 0x3c
// 007bd068  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
