// from server: 100% by auto
// roc 2010-06 00733880  unit: lua_exception  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733880
//
// 00733880  53                   push ebx
// 00733881  55                   push ebp
// 00733882  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00733886  8bd8                 mov ebx, eax
// 00733888  8b4504               mov eax, dword ptr [ebp + 4]
// 0073388b  83780806             cmp dword ptr [eax + 8], 6
// 0073388f  56                   push esi
// 00733890  57                   push edi
// 00733891  0f8596000000         jne 0x73392d
// 00733897  8b4504               mov eax, dword ptr [ebp + 4]
// 0073389a  8b08                 mov ecx, dword ptr [eax]
// 0073389c  80790600             cmp byte ptr [ecx + 6], 0
// 007338a0  0f8587000000         jne 0x73392d
// 007338a6  83780806             cmp dword ptr [eax + 8], 6
// 007338aa  8b7910               mov edi, dword ptr [ecx + 0x10]
// 007338ad  7520                 jne 0x7338cf
// 007338af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007338b3  3b6914               cmp ebp, dword ptr [ecx + 0x14]
// 007338b6  7506                 jne 0x7338be
// 007338b8  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 007338bb  894d0c               mov dword ptr [ebp + 0xc], ecx
// 007338be  8b10                 mov edx, dword ptr [eax]
// 007338c0  8b4210               mov eax, dword ptr [edx + 0x10]
// 007338c3  8b750c               mov esi, dword ptr [ebp + 0xc]
// 007338c6  2b700c               sub esi, dword ptr [eax + 0xc]
// 007338c9  c1fe02               sar esi, 2
// 007338cc  4e                   dec esi
// 007338cd  eb03                 jmp 0x7338d2
// 007338cf  83ceff               or esi, 0xffffffff
// 007338d2  56                   push esi
// 007338d3  8d4b01               lea ecx, [ebx + 1]
// 007338d6  51                   push ecx
// 007338d7  57                   push edi
// 007338d8  e8f3a90400           call 0x77e2d0
// 007338dd  8b542428             mov edx, dword ptr [esp + 0x28]
// 007338e1  83c40c               add esp, 0xc
// 007338e4  8902                 mov dword ptr [edx], eax
// 007338e6  85c0                 test eax, eax
// 007338e8  754a                 jne 0x733934
// 007338ea  53                   push ebx
// 007338eb  56                   push esi
// 007338ec  57                   push edi
// 007338ed  e88efaffff           call 0x733380
// 007338f2  8bc8                 mov ecx, eax
// 007338f4  83e13f               and ecx, 0x3f
// 007338f7  83c40c               add esp, 0xc
// 007338fa  83f90b               cmp ecx, 0xb
// 007338fd  772e                 ja 0x73392d
// 007338ff  0fb689e8397300       movzx ecx, byte ptr [ecx + 0x7339e8]
// 00733906  ff248dd0397300       jmp dword ptr [ecx*4 + 0x7339d0]
// 0073390d  8bc8                 mov ecx, eax
// 0073390f  c1e806               shr eax, 6
// 00733912  c1e917               shr ecx, 0x17
// 00733915  25ff000000           and eax, 0xff
// 0073391a  3bc8                 cmp ecx, eax
// 0073391c  7d0f                 jge 0x73392d
// 0073391e  8b5504               mov edx, dword ptr [ebp + 4]
// 00733921  837a0806             cmp dword ptr [edx + 8], 6
// 00733925  8bd9                 mov ebx, ecx
// 00733927  0f846affffff         je 0x733897
// 0073392d  5f                   pop edi
// 0073392e  5e                   pop esi
// 0073392f  5d                   pop ebp
// 00733930  33c0                 xor eax, eax
// 00733932  5b                   pop ebx
// 00733933  c3                   ret 
// 00733934  5f                   pop edi
// 00733935  5e                   pop esi
// 00733936  5d                   pop ebp
// 00733937  b800dea400           mov eax, 0xa4de00
// 0073393c  5b                   pop ebx
// 0073393d  c3                   ret 
// 0073393e  8b4f08               mov ecx, dword ptr [edi + 8]
// 00733941  c1e80e               shr eax, 0xe
// 00733944  c1e004               shl eax, 4
// 00733947  8b1408               mov edx, dword ptr [eax + ecx]
// 0073394a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073394e  5f                   pop edi
// 0073394f  5e                   pop esi
// 00733950  83c210               add edx, 0x10
// 00733953  5d                   pop ebp
// 00733954  8910                 mov dword ptr [eax], edx
// 00733956  b8f8dda400           mov eax, 0xa4ddf8
// 0073395b  5b                   pop ebx
// 0073395c  c3                   ret 
// 0073395d  c1e80e               shr eax, 0xe
// 00733960  25ff010000           and eax, 0x1ff
// 00733965  8bcf                 mov ecx, edi
// 00733967  e8e4feffff           call 0x733850
// 0073396c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00733970  5f                   pop edi
// 00733971  5e                   pop esi
// 00733972  5d                   pop ebp
// 00733973  8901                 mov dword ptr [ecx], eax
// 00733975  b8f0dda400           mov eax, 0xa4ddf0
// 0073397a  5b                   pop ebx
// 0073397b  c3                   ret 
// 0073397c  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0073397f  85ff                 test edi, edi
// 00733981  7419                 je 0x73399c
// 00733983  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00733987  c1e817               shr eax, 0x17
// 0073398a  8b0487               mov eax, dword ptr [edi + eax*4]
// 0073398d  5f                   pop edi
// 0073398e  5e                   pop esi
// 0073398f  83c010               add eax, 0x10
// 00733992  5d                   pop ebp
// 00733993  8902                 mov dword ptr [edx], eax
// 00733995  b8e8dda400           mov eax, 0xa4dde8
// 0073399a  5b                   pop ebx
// 0073399b  c3                   ret 
// 0073399c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007339a0  5f                   pop edi
// 007339a1  5e                   pop esi
// 007339a2  b808b9a100           mov eax, 0xa1b908
// 007339a7  5d                   pop ebp
// 007339a8  8902                 mov dword ptr [edx], eax
// 007339aa  b8e8dda400           mov eax, 0xa4dde8
// 007339af  5b                   pop ebx
// 007339b0  c3                   ret 
// 007339b1  c1e80e               shr eax, 0xe
// 007339b4  25ff010000           and eax, 0x1ff
// 007339b9  8bcf                 mov ecx, edi
// 007339bb  e890feffff           call 0x733850
// 007339c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007339c4  5f                   pop edi
// 007339c5  5e                   pop esi
// 007339c6  5d                   pop ebp
// 007339c7  8901                 mov dword ptr [ecx], eax
// 007339c9  b874cfa400           mov eax, 0xa4cf74
// 007339ce  5b                   pop ebx
// 007339cf  c3                   ret 
// 007339d0  0d3973007c           or eax, 0x7c007339
// 007339d5  397300               cmp dword ptr [ebx], esi
// 007339d8  3e397300             cmp dword ptr ds:[ebx], esi
// 007339dc  5d                   pop ebp
// 007339dd  397300               cmp dword ptr [ebx], esi
// 007339e0  b139                 mov cl, 0x39
// 007339e2  7300                 jae 0x7339e4
// 007339e4  2d39730000           sub eax, 0x7339
// 007339e9  0505050102           add eax, 0x2010505
// 007339ee  030505050504         add eax, dword ptr [0x4050505]
// library lua-5.1.4/ldebug.c (function _getobjname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
