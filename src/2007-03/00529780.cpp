// roc 2007-03 00529780  unit: seg_00520000  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529780
//
// 00529780  83ec10               sub esp, 0x10
// 00529783  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529787  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0052978d  53                   push ebx
// 0052978e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00529791  55                   push ebp
// 00529792  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00529796  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00529799  03c0                 add eax, eax
// 0052979b  03c0                 add eax, eax
// 0052979d  56                   push esi
// 0052979e  8b742428             mov esi, dword ptr [esp + 0x28]
// 005297a2  03c0                 add eax, eax
// 005297a4  52                   push edx
// 005297a5  89442410             mov dword ptr [esp + 0x10], eax
// 005297a9  03c0                 add eax, eax
// 005297ab  56                   push esi
// 005297ac  e8bffcffff           call 0x529470
// 005297b1  33db                 xor ebx, ebx
// 005297b3  83c408               add esp, 8
// 005297b6  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005297b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 005297bd  0f8e83000000         jle 0x529846
// 005297c3  8bd6                 mov edx, esi
// 005297c5  89542410             mov dword ptr [esp + 0x10], edx
// 005297c9  57                   push edi
// 005297ca  8d9b00000000         lea ebx, [ebx]
// 005297d0  837c241000           cmp dword ptr [esp + 0x10], 0
// 005297d5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005297d9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 005297dc  8b02                 mov eax, dword ptr [edx]
// 005297de  8b4a04               mov ecx, dword ptr [edx + 4]
// 005297e1  bf01000000           mov edi, 1
// 005297e6  764a                 jbe 0x529832
// 005297e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005297ec  89542424             mov dword ptr [esp + 0x24], edx
// 005297f0  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005297f4  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005297f8  03d3                 add edx, ebx
// 005297fa  0fb619               movzx ebx, byte ptr [ecx]
// 005297fd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00529801  0fb608               movzx ecx, byte ptr [eax]
// 00529804  03df                 add ebx, edi
// 00529806  03da                 add ebx, edx
// 00529808  03cb                 add ecx, ebx
// 0052980a  c1f902               sar ecx, 2
// 0052980d  880e                 mov byte ptr [esi], cl
// 0052980f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00529813  83c601               add esi, 1
// 00529816  83f703               xor edi, 3
// 00529819  83c002               add eax, 2
// 0052981c  83c102               add ecx, 2
// 0052981f  836c242401           sub dword ptr [esp + 0x24], 1
// 00529824  75ca                 jne 0x5297f0
// 00529826  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052982a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0052982e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00529832  83c301               add ebx, 1
// 00529835  83c208               add edx, 8
// 00529838  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 0052983b  89542414             mov dword ptr [esp + 0x14], edx
// 0052983f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00529843  7c8b                 jl 0x5297d0
// 00529845  5f                   pop edi
// 00529846  5e                   pop esi
// 00529847  5d                   pop ebp
// 00529848  5b                   pop ebx
// 00529849  83c410               add esp, 0x10
// 0052984c  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
