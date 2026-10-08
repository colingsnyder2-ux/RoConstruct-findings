// from server: 100% by auto
// roc 2011-06 008ec6f0  unit: CXTPRichRender  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec6f0
//
// 008ec6f0  83ec30               sub esp, 0x30
// 008ec6f3  53                   push ebx
// 008ec6f4  8bd9                 mov ebx, ecx
// 008ec6f6  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008ec6f9  55                   push ebp
// 008ec6fa  33ed                 xor ebp, ebp
// 008ec6fc  3bcd                 cmp ecx, ebp
// 008ec6fe  7511                 jne 0x8ec711
// 008ec700  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ec704  8928                 mov dword ptr [eax], ebp
// 008ec706  896804               mov dword ptr [eax + 4], ebp
// 008ec709  5d                   pop ebp
// 008ec70a  5b                   pop ebx
// 008ec70b  83c430               add esp, 0x30
// 008ec70e  c20c00               ret 0xc
// 008ec711  56                   push esi
// 008ec712  8d542414             lea edx, [esp + 0x14]
// 008ec716  52                   push edx
// 008ec717  6800000400           push 0x40000
// 008ec71c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec720  8b01                 mov eax, dword ptr [ecx]
// 008ec722  8b400c               mov eax, dword ptr [eax + 0xc]
// 008ec725  55                   push ebp
// 008ec726  6845040000           push 0x445
// 008ec72b  ffd0                 call eax
// 008ec72d  8b442448             mov eax, dword ptr [esp + 0x48]
// 008ec731  33f6                 xor esi, esi
// 008ec733  03c0                 add eax, eax
// 008ec735  89ab28010000         mov dword ptr [ebx + 0x128], ebp
// 008ec73b  89ab24010000         mov dword ptr [ebx + 0x124], ebp
// 008ec741  89742410             mov dword ptr [esp + 0x10], esi
// 008ec745  896c240c             mov dword ptr [esp + 0xc], ebp
// 008ec749  89442448             mov dword ptr [esp + 0x48], eax
// 008ec74d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec751  896c2420             mov dword ptr [esp + 0x20], ebp
// 008ec755  896c2424             mov dword ptr [esp + 0x24], ebp
// 008ec759  896c2428             mov dword ptr [esp + 0x28], ebp
// 008ec75d  57                   push edi
// 008ec75e  8bff                 mov edi, edi
// 008ec760  8b7b24               mov edi, dword ptr [ebx + 0x24]
// 008ec763  55                   push ebp
// 008ec764  55                   push ebp
// 008ec765  03c6                 add eax, esi
// 008ec767  55                   push ebp
// 008ec768  99                   cdq 
// 008ec769  8d4c242c             lea ecx, [esp + 0x2c]
// 008ec76d  51                   push ecx
// 008ec76e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008ec772  2bc2                 sub eax, edx
// 008ec774  55                   push ebp
// 008ec775  8d542444             lea edx, [esp + 0x44]
// 008ec779  8bf0                 mov esi, eax
// 008ec77b  52                   push edx
// 008ec77c  d1fe                 sar esi, 1
// 008ec77e  55                   push ebp
// 008ec77f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008ec783  896c2450             mov dword ptr [esp + 0x50], ebp
// 008ec787  89742454             mov dword ptr [esp + 0x54], esi
// 008ec78b  c744245801000000     mov dword ptr [esp + 0x58], 1
// 008ec793  e8685eb7ff           call 0x462600
// 008ec798  50                   push eax
// 008ec799  8b07                 mov eax, dword ptr [edi]
// 008ec79b  8b4010               mov eax, dword ptr [eax + 0x10]
// 008ec79e  33ed                 xor ebp, ebp
// 008ec7a0  55                   push ebp
// 008ec7a1  55                   push ebp
// 008ec7a2  55                   push ebp
// 008ec7a3  6a01                 push 1
// 008ec7a5  8bcf                 mov ecx, edi
// 008ec7a7  ffd0                 call eax
// 008ec7a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ec7ad  3bcd                 cmp ecx, ebp
// 008ec7af  750a                 jne 0x8ec7bb
// 008ec7b1  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 008ec7b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 008ec7bb  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 008ec7c1  7e0b                 jle 0x8ec7ce
// 008ec7c3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008ec7c7  46                   inc esi
// 008ec7c8  89742414             mov dword ptr [esp + 0x14], esi
// 008ec7cc  eb0b                 jmp 0x8ec7d9
// 008ec7ce  8d46ff               lea eax, [esi - 1]
// 008ec7d1  8b742414             mov esi, dword ptr [esp + 0x14]
// 008ec7d5  8944244c             mov dword ptr [esp + 0x4c], eax
// 008ec7d9  3bf0                 cmp esi, eax
// 008ec7db  7c83                 jl 0x8ec760
// 008ec7dd  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 008ec7e3  5f                   pop edi
// 008ec7e4  7e43                 jle 0x8ec829
// 008ec7e6  40                   inc eax
// 008ec7e7  89442434             mov dword ptr [esp + 0x34], eax
// 008ec7eb  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ec7ef  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008ec7f3  896c2430             mov dword ptr [esp + 0x30], ebp
// 008ec7f7  c744243801000000     mov dword ptr [esp + 0x38], 1
// 008ec7ff  3bc5                 cmp eax, ebp
// 008ec801  7504                 jne 0x8ec807
// 008ec803  33c0                 xor eax, eax
// 008ec805  eb03                 jmp 0x8ec80a
// 008ec807  8b4004               mov eax, dword ptr [eax + 4]
// 008ec80a  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008ec80d  8b11                 mov edx, dword ptr [ecx]
// 008ec80f  55                   push ebp
// 008ec810  55                   push ebp
// 008ec811  55                   push ebp
// 008ec812  8d742428             lea esi, [esp + 0x28]
// 008ec816  56                   push esi
// 008ec817  55                   push ebp
// 008ec818  8d742440             lea esi, [esp + 0x40]
// 008ec81c  56                   push esi
// 008ec81d  55                   push ebp
// 008ec81e  50                   push eax
// 008ec81f  8b4210               mov eax, dword ptr [edx + 0x10]
// 008ec822  55                   push ebp
// 008ec823  55                   push ebp
// 008ec824  55                   push ebp
// 008ec825  6a01                 push 1
// 008ec827  ffd0                 call eax
// 008ec829  8b8b24010000         mov ecx, dword ptr [ebx + 0x124]
// 008ec82f  8b442440             mov eax, dword ptr [esp + 0x40]
// 008ec833  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 008ec839  5e                   pop esi
// 008ec83a  5d                   pop ebp
// 008ec83b  8908                 mov dword ptr [eax], ecx
// 008ec83d  895004               mov dword ptr [eax + 4], edx
// 008ec840  5b                   pop ebx
// 008ec841  83c430               add esp, 0x30
// 008ec844  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?GetTextExtent@CXTPRichRender@@QAE?AVCSize@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
