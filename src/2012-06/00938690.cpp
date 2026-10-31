// roc 2012-06 00938690  unit: seg_00930000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938690
//
// 00938690  83ec08               sub esp, 8
// 00938693  53                   push ebx
// 00938694  55                   push ebp
// 00938695  56                   push esi
// 00938696  8b37                 mov esi, dword ptr [edi]
// 00938698  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 0093869c  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 0093869f  8d5e24               lea ebx, [esi + 0x24]
// 009386a2  33c0                 xor eax, eax
// 009386a4  896c2410             mov dword ptr [esp + 0x10], ebp
// 009386a8  85c9                 test ecx, ecx
// 009386aa  7e3e                 jle 0x9386ea
// 009386ac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009386b0  8b11                 mov edx, dword ptr [ecx]
// 009386b2  8954240c             mov dword ptr [esp + 0xc], edx
// 009386b6  8d4f34               lea ecx, [edi + 0x34]
// 009386b9  8da42400000000       lea esp, [esp]
// 009386c0  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 009386c4  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 009386c8  7510                 jne 0x9386da
// 009386ca  0fb611               movzx edx, byte ptr [ecx]
// 009386cd  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009386d1  3b5508               cmp edx, dword ptr [ebp + 8]
// 009386d4  0f84e6000000         je 0x9387c0
// 009386da  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 009386de  40                   inc eax
// 009386df  83c102               add ecx, 2
// 009386e2  3bc2                 cmp eax, edx
// 009386e4  7cda                 jl 0x9386c0
// 009386e6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009386ea  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 009386ee  40                   inc eax
// 009386ef  83f83c               cmp eax, 0x3c
// 009386f2  7e42                 jle 0x938736
// 009386f4  8b463c               mov eax, dword ptr [esi + 0x3c]
// 009386f7  68e0fbbf00           push 0xbffbe0
// 009386fc  6a3c                 push 0x3c
// 009386fe  85c0                 test eax, eax
// 00938700  7513                 jne 0x938715
// 00938702  8b4710               mov eax, dword ptr [edi + 0x10]
// 00938705  6864fbbf00           push 0xbffb64
// 0093870a  50                   push eax
// 0093870b  e8307af1ff           call 0x850140
// 00938710  83c410               add esp, 0x10
// 00938713  eb12                 jmp 0x938727
// 00938715  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00938718  50                   push eax
// 00938719  683cfbbf00           push 0xbffb3c
// 0093871e  51                   push ecx
// 0093871f  e81c7af1ff           call 0x850140
// 00938724  83c414               add esp, 0x14
// 00938727  8b570c               mov edx, dword ptr [edi + 0xc]
// 0093872a  6a00                 push 0
// 0093872c  50                   push eax
// 0093872d  52                   push edx
// 0093872e  e83deaffff           call 0x937170
// 00938733  83c40c               add esp, 0xc
// 00938736  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 0093873a  40                   inc eax
// 0093873b  3b03                 cmp eax, dword ptr [ebx]
// 0093873d  7e20                 jle 0x93875f
// 0093873f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00938742  8b5710               mov edx, dword ptr [edi + 0x10]
// 00938745  68e83bb400           push 0xb43be8
// 0093874a  68fdffff7f           push 0x7ffffffd
// 0093874f  6a04                 push 4
// 00938751  53                   push ebx
// 00938752  51                   push ecx
// 00938753  52                   push edx
// 00938754  e857e8ffff           call 0x936fb0
// 00938759  83c418               add esp, 0x18
// 0093875c  89461c               mov dword ptr [esi + 0x1c], eax
// 0093875f  3b2b                 cmp ebp, dword ptr [ebx]
// 00938761  7d0f                 jge 0x938772
// 00938763  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00938766  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 0093876d  45                   inc ebp
// 0093876e  3b2b                 cmp ebp, dword ptr [ebx]
// 00938770  7cf1                 jl 0x938763
// 00938772  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 00938776  8b442418             mov eax, dword ptr [esp + 0x18]
// 0093877a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0093877d  89048a               mov dword ptr [edx + ecx*4], eax
// 00938780  f6400503             test byte ptr [eax + 5], 3
// 00938784  7414                 je 0x93879a
// 00938786  f6460504             test byte ptr [esi + 5], 4
// 0093878a  740e                 je 0x93879a
// 0093878c  50                   push eax
// 0093878d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00938790  56                   push esi
// 00938791  50                   push eax
// 00938792  e809acffff           call 0x9333a0
// 00938797  83c40c               add esp, 0xc
// 0093879a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0093879e  0fb610               movzx edx, byte ptr [eax]
// 009387a1  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 009387a5  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 009387a9  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 009387ad  0fb65008             movzx edx, byte ptr [eax + 8]
// 009387b1  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 009387b5  8a4e48               mov cl, byte ptr [esi + 0x48]
// 009387b8  0fb6c1               movzx eax, cl
// 009387bb  fec1                 inc cl
// 009387bd  884e48               mov byte ptr [esi + 0x48], cl
// 009387c0  5e                   pop esi
// 009387c1  5d                   pop ebp
// 009387c2  5b                   pop ebx
// 009387c3  83c408               add esp, 8
// 009387c6  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
