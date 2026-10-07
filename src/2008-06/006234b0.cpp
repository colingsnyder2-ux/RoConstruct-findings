// roc 2008-06 006234b0  unit: lua_exception  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006234b0
//
// 006234b0  53                   push ebx
// 006234b1  55                   push ebp
// 006234b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006234b6  8bd8                 mov ebx, eax
// 006234b8  8b4504               mov eax, dword ptr [ebp + 4]
// 006234bb  83780806             cmp dword ptr [eax + 8], 6
// 006234bf  56                   push esi
// 006234c0  57                   push edi
// 006234c1  0f8596000000         jne 0x62355d
// 006234c7  8b4504               mov eax, dword ptr [ebp + 4]
// 006234ca  8b08                 mov ecx, dword ptr [eax]
// 006234cc  80790600             cmp byte ptr [ecx + 6], 0
// 006234d0  0f8587000000         jne 0x62355d
// 006234d6  83780806             cmp dword ptr [eax + 8], 6
// 006234da  8b7910               mov edi, dword ptr [ecx + 0x10]
// 006234dd  7520                 jne 0x6234ff
// 006234df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006234e3  3b6914               cmp ebp, dword ptr [ecx + 0x14]
// 006234e6  7506                 jne 0x6234ee
// 006234e8  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006234eb  894d0c               mov dword ptr [ebp + 0xc], ecx
// 006234ee  8b10                 mov edx, dword ptr [eax]
// 006234f0  8b4210               mov eax, dword ptr [edx + 0x10]
// 006234f3  8b750c               mov esi, dword ptr [ebp + 0xc]
// 006234f6  2b700c               sub esi, dword ptr [eax + 0xc]
// 006234f9  c1fe02               sar esi, 2
// 006234fc  4e                   dec esi
// 006234fd  eb03                 jmp 0x623502
// 006234ff  83ceff               or esi, 0xffffffff
// 00623502  56                   push esi
// 00623503  8d4b01               lea ecx, [ebx + 1]
// 00623506  51                   push ecx
// 00623507  57                   push edi
// 00623508  e8d3c20300           call 0x65f7e0
// 0062350d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00623511  83c40c               add esp, 0xc
// 00623514  8902                 mov dword ptr [edx], eax
// 00623516  85c0                 test eax, eax
// 00623518  754a                 jne 0x623564
// 0062351a  53                   push ebx
// 0062351b  56                   push esi
// 0062351c  57                   push edi
// 0062351d  e8defaffff           call 0x623000
// 00623522  8bc8                 mov ecx, eax
// 00623524  83e13f               and ecx, 0x3f
// 00623527  83c40c               add esp, 0xc
// 0062352a  83f90b               cmp ecx, 0xb
// 0062352d  772e                 ja 0x62355d
// 0062352f  0fb68918366200       movzx ecx, byte ptr [ecx + 0x623618]
// 00623536  ff248d00366200       jmp dword ptr [ecx*4 + 0x623600]
// 0062353d  8bc8                 mov ecx, eax
// 0062353f  c1e806               shr eax, 6
// 00623542  c1e917               shr ecx, 0x17
// 00623545  25ff000000           and eax, 0xff
// 0062354a  3bc8                 cmp ecx, eax
// 0062354c  7d0f                 jge 0x62355d
// 0062354e  8b5504               mov edx, dword ptr [ebp + 4]
// 00623551  837a0806             cmp dword ptr [edx + 8], 6
// 00623555  8bd9                 mov ebx, ecx
// 00623557  0f846affffff         je 0x6234c7
// 0062355d  5f                   pop edi
// 0062355e  5e                   pop esi
// 0062355f  5d                   pop ebp
// 00623560  33c0                 xor eax, eax
// 00623562  5b                   pop ebx
// 00623563  c3                   ret 
// 00623564  5f                   pop edi
// 00623565  5e                   pop esi
// 00623566  5d                   pop ebp
// 00623567  b8084a8400           mov eax, 0x844a08
// 0062356c  5b                   pop ebx
// 0062356d  c3                   ret 
// 0062356e  8b4f08               mov ecx, dword ptr [edi + 8]
// 00623571  c1e80e               shr eax, 0xe
// 00623574  c1e004               shl eax, 4
// 00623577  8b1408               mov edx, dword ptr [eax + ecx]
// 0062357a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062357e  5f                   pop edi
// 0062357f  5e                   pop esi
// 00623580  83c210               add edx, 0x10
// 00623583  5d                   pop ebp
// 00623584  8910                 mov dword ptr [eax], edx
// 00623586  b8004a8400           mov eax, 0x844a00
// 0062358b  5b                   pop ebx
// 0062358c  c3                   ret 
// 0062358d  c1e80e               shr eax, 0xe
// 00623590  25ff010000           and eax, 0x1ff
// 00623595  8bcf                 mov ecx, edi
// 00623597  e8e4feffff           call 0x623480
// 0062359c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006235a0  5f                   pop edi
// 006235a1  5e                   pop esi
// 006235a2  5d                   pop ebp
// 006235a3  8901                 mov dword ptr [ecx], eax
// 006235a5  b8f8498400           mov eax, 0x8449f8
// 006235aa  5b                   pop ebx
// 006235ab  c3                   ret 
// 006235ac  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 006235af  85ff                 test edi, edi
// 006235b1  7419                 je 0x6235cc
// 006235b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006235b7  c1e817               shr eax, 0x17
// 006235ba  8b0487               mov eax, dword ptr [edi + eax*4]
// 006235bd  5f                   pop edi
// 006235be  5e                   pop esi
// 006235bf  83c010               add eax, 0x10
// 006235c2  5d                   pop ebp
// 006235c3  8902                 mov dword ptr [edx], eax
// 006235c5  b8f0498400           mov eax, 0x8449f0
// 006235ca  5b                   pop ebx
// 006235cb  c3                   ret 
// 006235cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006235d0  5f                   pop edi
// 006235d1  5e                   pop esi
// 006235d2  b8109e8100           mov eax, 0x819e10
// 006235d7  5d                   pop ebp
// 006235d8  8902                 mov dword ptr [edx], eax
// 006235da  b8f0498400           mov eax, 0x8449f0
// 006235df  5b                   pop ebx
// 006235e0  c3                   ret 
// 006235e1  c1e80e               shr eax, 0xe
// 006235e4  25ff010000           and eax, 0x1ff
// 006235e9  8bcf                 mov ecx, edi
// 006235eb  e890feffff           call 0x623480
// 006235f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006235f4  5f                   pop edi
// 006235f5  5e                   pop esi
// 006235f6  5d                   pop ebp
// 006235f7  8901                 mov dword ptr [ecx], eax
// 006235f9  b8fc378400           mov eax, 0x8437fc
// 006235fe  5b                   pop ebx
// 006235ff  c3                   ret 
// 00623600  3d356200ac           cmp eax, 0xac006235
// 00623605  3562006e35           xor eax, 0x356e0062
// 0062360a  6200                 bound eax, qword ptr [eax]
// 0062360c  8d356200e135         lea esi, [0x35e10062]
// 00623612  6200                 bound eax, qword ptr [eax]
// 00623614  5d                   pop ebp
// 00623615  3562000005           xor eax, 0x5000062
// 0062361a  0505010203           add eax, 0x3020105
// 0062361f  0505050504           add eax, 0x4050505
// library lua-5.1.4/ldebug.c (function _getobjname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
