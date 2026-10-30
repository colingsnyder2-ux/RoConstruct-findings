// roc 2007-03 00529850  unit: seg_00520000  size: 638 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529850
//
// 00529850  83ec28               sub esp, 0x28
// 00529853  8b442430             mov eax, dword ptr [esp + 0x30]
// 00529857  53                   push ebx
// 00529858  55                   push ebp
// 00529859  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0052985d  56                   push esi
// 0052985e  8b701c               mov esi, dword ptr [eax + 0x1c]
// 00529861  57                   push edi
// 00529862  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00529866  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0052986c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0052986f  03f6                 add esi, esi
// 00529871  83c102               add ecx, 2
// 00529874  03f6                 add esi, esi
// 00529876  51                   push ecx
// 00529877  03f6                 add esi, esi
// 00529879  83c5fc               add ebp, -4
// 0052987c  8d0436               lea eax, [esi + esi]
// 0052987f  55                   push ebp
// 00529880  e8ebfbffff           call 0x529470
// 00529885  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0052988b  8d1480               lea edx, [eax + eax*4]
// 0052988e  c1e204               shl edx, 4
// 00529891  b900400000           mov ecx, 0x4000
// 00529896  2bca                 sub ecx, edx
// 00529898  c1e004               shl eax, 4
// 0052989b  894c2444             mov dword ptr [esp + 0x44], ecx
// 0052989f  8944244c             mov dword ptr [esp + 0x4c], eax
// 005298a3  8b442448             mov eax, dword ptr [esp + 0x48]
// 005298a7  33c9                 xor ecx, ecx
// 005298a9  83c408               add esp, 8
// 005298ac  39480c               cmp dword ptr [eax + 0xc], ecx
// 005298af  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005298b3  0f8e0d020000         jle 0x529ac6
// 005298b9  83c6fe               add esi, -2
// 005298bc  89742434             mov dword ptr [esp + 0x34], esi
// 005298c0  8bc5                 mov eax, ebp
// 005298c2  896c2428             mov dword ptr [esp + 0x28], ebp
// 005298c6  8b5808               mov ebx, dword ptr [eax + 8]
// 005298c9  8b542448             mov edx, dword ptr [esp + 0x48]
// 005298cd  8b348a               mov esi, dword ptr [edx + ecx*4]
// 005298d0  8b5004               mov edx, dword ptr [eax + 4]
// 005298d3  8b08                 mov ecx, dword ptr [eax]
// 005298d5  8b400c               mov eax, dword ptr [eax + 0xc]
// 005298d8  8d6a02               lea ebp, [edx + 2]
// 005298db  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005298df  0fb628               movzx ebp, byte ptr [eax]
// 005298e2  896c2410             mov dword ptr [esp + 0x10], ebp
// 005298e6  0fb629               movzx ebp, byte ptr [ecx]
// 005298e9  896c2430             mov dword ptr [esp + 0x30], ebp
// 005298ed  0fb62b               movzx ebp, byte ptr [ebx]
// 005298f0  896c2418             mov dword ptr [esp + 0x18], ebp
// 005298f4  0fb62a               movzx ebp, byte ptr [edx]
// 005298f7  896c2414             mov dword ptr [esp + 0x14], ebp
// 005298fb  8d6802               lea ebp, [eax + 2]
// 005298fe  0fb64001             movzx eax, byte ptr [eax + 1]
// 00529902  896c2424             mov dword ptr [esp + 0x24], ebp
// 00529906  8d6902               lea ebp, [ecx + 2]
// 00529909  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0052990d  03c1                 add eax, ecx
// 0052990f  0fb64b02             movzx ecx, byte ptr [ebx + 2]
// 00529913  034c2414             add ecx, dword ptr [esp + 0x14]
// 00529917  0fb65201             movzx edx, byte ptr [edx + 1]
// 0052991b  03c8                 add ecx, eax
// 0052991d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00529921  896c2420             mov dword ptr [esp + 0x20], ebp
// 00529925  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00529929  0fb66d00             movzx ebp, byte ptr [ebp]
// 0052992d  8d7b02               lea edi, [ebx + 2]
// 00529930  03e9                 add ebp, ecx
// 00529932  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00529936  0fb609               movzx ecx, byte ptr [ecx]
// 00529939  036c2418             add ebp, dword ptr [esp + 0x18]
// 0052993d  03c8                 add ecx, eax
// 0052993f  03e8                 add ebp, eax
// 00529941  036c2410             add ebp, dword ptr [esp + 0x10]
// 00529945  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529949  0fb600               movzx eax, byte ptr [eax]
// 0052994c  8d0c69               lea ecx, [ecx + ebp*2]
// 0052994f  03c1                 add eax, ecx
// 00529951  0fb64b01             movzx ecx, byte ptr [ebx + 1]
// 00529955  034c2414             add ecx, dword ptr [esp + 0x14]
// 00529959  03442410             add eax, dword ptr [esp + 0x10]
// 0052995d  03d1                 add edx, ecx
// 0052995f  03542418             add edx, dword ptr [esp + 0x18]
// 00529963  0faf442444           imul eax, dword ptr [esp + 0x44]
// 00529968  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 0052996d  8d841000800000       lea eax, [eax + edx + 0x8000]
// 00529974  8b542434             mov edx, dword ptr [esp + 0x34]
// 00529978  c1f810               sar eax, 0x10
// 0052997b  8806                 mov byte ptr [esi], al
// 0052997d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00529981  83c601               add esi, 1
// 00529984  85d2                 test edx, edx
// 00529986  8bcf                 mov ecx, edi
// 00529988  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052998c  89742410             mov dword ptr [esp + 0x10], esi
// 00529990  8b742420             mov esi, dword ptr [esp + 0x20]
// 00529994  89542424             mov dword ptr [esp + 0x24], edx
// 00529998  0f8694000000         jbe 0x529a32
// 0052999e  8bff                 mov edi, edi
// 005299a0  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 005299a4  0fb65701             movzx edx, byte ptr [edi + 1]
// 005299a8  03d3                 add edx, ebx
// 005299aa  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005299ae  03d3                 add edx, ebx
// 005299b0  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005299b4  03d3                 add edx, ebx
// 005299b6  0fb61f               movzx ebx, byte ptr [edi]
// 005299b9  03d3                 add edx, ebx
// 005299bb  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 005299bf  03d3                 add edx, ebx
// 005299c1  0fb61e               movzx ebx, byte ptr [esi]
// 005299c4  03d3                 add edx, ebx
// 005299c6  0fb65802             movzx ebx, byte ptr [eax + 2]
// 005299ca  03d3                 add edx, ebx
// 005299cc  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 005299d0  0fb66801             movzx ebp, byte ptr [eax + 1]
// 005299d4  8d1453               lea edx, [ebx + edx*2]
// 005299d7  0fb65eff             movzx ebx, byte ptr [esi - 1]
// 005299db  03d3                 add edx, ebx
// 005299dd  0fb65e02             movzx ebx, byte ptr [esi + 2]
// 005299e1  03d3                 add edx, ebx
// 005299e3  0fb65f02             movzx ebx, byte ptr [edi + 2]
// 005299e7  03d3                 add edx, ebx
// 005299e9  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 005299ed  0faf542444           imul edx, dword ptr [esp + 0x44]
// 005299f2  03dd                 add ebx, ebp
// 005299f4  0fb629               movzx ebp, byte ptr [ecx]
// 005299f7  03dd                 add ebx, ebp
// 005299f9  0fb628               movzx ebp, byte ptr [eax]
// 005299fc  03dd                 add ebx, ebp
// 005299fe  0faf5c243c           imul ebx, dword ptr [esp + 0x3c]
// 00529a03  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529a07  8d941a00800000       lea edx, [edx + ebx + 0x8000]
// 00529a0e  c1fa10               sar edx, 0x10
// 00529a11  885500               mov byte ptr [ebp], dl
// 00529a14  83c501               add ebp, 1
// 00529a17  83c002               add eax, 2
// 00529a1a  83c102               add ecx, 2
// 00529a1d  83c602               add esi, 2
// 00529a20  83c702               add edi, 2
// 00529a23  836c242401           sub dword ptr [esp + 0x24], 1
// 00529a28  896c2410             mov dword ptr [esp + 0x10], ebp
// 00529a2c  0f856effffff         jne 0x5299a0
// 00529a32  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00529a36  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00529a3a  0fb65001             movzx edx, byte ptr [eax + 1]
// 00529a3e  03dd                 add ebx, ebp
// 00529a40  0fb62f               movzx ebp, byte ptr [edi]
// 00529a43  03ea                 add ebp, edx
// 00529a45  89542424             mov dword ptr [esp + 0x24], edx
// 00529a49  0fb616               movzx edx, byte ptr [esi]
// 00529a4c  03eb                 add ebp, ebx
// 00529a4e  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 00529a52  0fb676ff             movzx esi, byte ptr [esi - 1]
// 00529a56  03d5                 add edx, ebp
// 00529a58  8bea                 mov ebp, edx
// 00529a5a  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00529a5e  0fb609               movzx ecx, byte ptr [ecx]
// 00529a61  034c2424             add ecx, dword ptr [esp + 0x24]
// 00529a65  03ea                 add ebp, edx
// 00529a67  89542420             mov dword ptr [esp + 0x20], edx
// 00529a6b  0fb65701             movzx edx, byte ptr [edi + 1]
// 00529a6f  0fb67fff             movzx edi, byte ptr [edi - 1]
// 00529a73  03eb                 add ebp, ebx
// 00529a75  03ea                 add ebp, edx
// 00529a77  03fb                 add edi, ebx
// 00529a79  8d3c6f               lea edi, [edi + ebp*2]
// 00529a7c  03f7                 add esi, edi
// 00529a7e  03f2                 add esi, edx
// 00529a80  0fb610               movzx edx, byte ptr [eax]
// 00529a83  0faf742444           imul esi, dword ptr [esp + 0x44]
// 00529a88  03d1                 add edx, ecx
// 00529a8a  03542420             add edx, dword ptr [esp + 0x20]
// 00529a8e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00529a92  0faf54243c           imul edx, dword ptr [esp + 0x3c]
// 00529a97  8d841600800000       lea eax, [esi + edx + 0x8000]
// 00529a9e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00529aa2  c1f810               sar eax, 0x10
// 00529aa5  8801                 mov byte ptr [ecx], al
// 00529aa7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00529aab  8b442428             mov eax, dword ptr [esp + 0x28]
// 00529aaf  83c101               add ecx, 1
// 00529ab2  83c008               add eax, 8
// 00529ab5  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00529ab8  89442428             mov dword ptr [esp + 0x28], eax
// 00529abc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00529ac0  0f8c00feffff         jl 0x5298c6
// 00529ac6  5f                   pop edi
// 00529ac7  5e                   pop esi
// 00529ac8  5d                   pop ebp
// 00529ac9  5b                   pop ebx
// 00529aca  83c428               add esp, 0x28
// 00529acd  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_smooth_downsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
