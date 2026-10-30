// roc 2007-03 005276b0  unit: seg_00520000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005276b0
//
// 005276b0  83ec0c               sub esp, 0xc
// 005276b3  55                   push ebp
// 005276b4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005276b8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005276bb  8b08                 mov ecx, dword ptr [eax]
// 005276bd  56                   push esi
// 005276be  8bb538010000         mov esi, dword ptr [ebp + 0x138]
// 005276c4  57                   push edi
// 005276c5  8bbd5c010000         mov edi, dword ptr [ebp + 0x15c]
// 005276cb  894f10               mov dword ptr [edi + 0x10], ecx
// 005276ce  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005276d1  8b4204               mov eax, dword ptr [edx + 4]
// 005276d4  894714               mov dword ptr [edi + 0x14], eax
// 005276d7  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 005276de  7414                 je 0x5276f4
// 005276e0  837f4400             cmp dword ptr [edi + 0x44], 0
// 005276e4  750e                 jne 0x5276f4
// 005276e6  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005276e9  51                   push ecx
// 005276ea  8bc7                 mov eax, edi
// 005276ec  e82fffffff           call 0x527620
// 005276f1  83c404               add esp, 4
// 005276f4  53                   push ebx
// 005276f5  33db                 xor ebx, ebx
// 005276f7  399d00010000         cmp dword ptr [ebp + 0x100], ebx
// 005276fd  0f8eb5000000         jle 0x5277b8
// 00527703  0fbfd6               movsx edx, si
// 00527706  8d8504010000         lea eax, [ebp + 0x104]
// 0052770c  89542414             mov dword ptr [esp + 0x14], edx
// 00527710  89442410             mov dword ptr [esp + 0x10], eax
// 00527714  eb0a                 jmp 0x527720
// 00527716  8da42400000000       lea esp, [esp]
// 0052771d  8d4900               lea ecx, [ecx]
// 00527720  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00527724  8b31                 mov esi, dword ptr [ecx]
// 00527726  8b94b5e8000000       mov edx, dword ptr [ebp + esi*4 + 0xe8]
// 0052772d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00527731  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00527734  89542418             mov dword ptr [esp + 0x18], edx
// 00527738  0fbf11               movsx edx, word ptr [ecx]
// 0052773b  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0052773f  d3fa                 sar edx, cl
// 00527741  8bc2                 mov eax, edx
// 00527743  2b44b724             sub eax, dword ptr [edi + esi*4 + 0x24]
// 00527747  8954b724             mov dword ptr [edi + esi*4 + 0x24], edx
// 0052774b  89442420             mov dword ptr [esp + 0x20], eax
// 0052774f  7907                 jns 0x527758
// 00527751  f7d8                 neg eax
// 00527753  836c242001           sub dword ptr [esp + 0x20], 1
// 00527758  33f6                 xor esi, esi
// 0052775a  85c0                 test eax, eax
// 0052775c  7423                 je 0x527781
// 0052775e  8bff                 mov edi, edi
// 00527760  83c601               add esi, 1
// 00527763  d1f8                 sar eax, 1
// 00527765  75f9                 jne 0x527760
// 00527767  83fe0b               cmp esi, 0xb
// 0052776a  7e15                 jle 0x527781
// 0052776c  8b5500               mov edx, dword ptr [ebp]
// 0052776f  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00527776  8b4500               mov eax, dword ptr [ebp]
// 00527779  8b08                 mov ecx, dword ptr [eax]
// 0052777b  55                   push ebp
// 0052777c  ffd1                 call ecx
// 0052777e  83c404               add esp, 4
// 00527781  8b542418             mov edx, dword ptr [esp + 0x18]
// 00527785  8b4214               mov eax, dword ptr [edx + 0x14]
// 00527788  8bcf                 mov ecx, edi
// 0052778a  e8b1fdffff           call 0x527540
// 0052778f  85f6                 test esi, esi
// 00527791  7411                 je 0x5277a4
// 00527793  8b442420             mov eax, dword ptr [esp + 0x20]
// 00527797  50                   push eax
// 00527798  8bc6                 mov eax, esi
// 0052779a  8bcf                 mov ecx, edi
// 0052779c  e8bffcffff           call 0x527460
// 005277a1  83c404               add esp, 4
// 005277a4  8344241004           add dword ptr [esp + 0x10], 4
// 005277a9  83c301               add ebx, 1
// 005277ac  3b9d00010000         cmp ebx, dword ptr [ebp + 0x100]
// 005277b2  0f8c68ffffff         jl 0x527720
// 005277b8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005277bb  8b5710               mov edx, dword ptr [edi + 0x10]
// 005277be  8911                 mov dword ptr [ecx], edx
// 005277c0  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005277c3  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005277c6  894804               mov dword ptr [eax + 4], ecx
// 005277c9  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 005277cf  85ed                 test ebp, ebp
// 005277d1  5b                   pop ebx
// 005277d2  7419                 je 0x5277ed
// 005277d4  837f4400             cmp dword ptr [edi + 0x44], 0
// 005277d8  750f                 jne 0x5277e9
// 005277da  8b5748               mov edx, dword ptr [edi + 0x48]
// 005277dd  83c201               add edx, 1
// 005277e0  83e207               and edx, 7
// 005277e3  896f44               mov dword ptr [edi + 0x44], ebp
// 005277e6  895748               mov dword ptr [edi + 0x48], edx
// 005277e9  834744ff             add dword ptr [edi + 0x44], -1
// 005277ed  5f                   pop edi
// 005277ee  5e                   pop esi
// 005277ef  b001                 mov al, 1
// 005277f1  5d                   pop ebp
// 005277f2  83c40c               add esp, 0xc
// 005277f5  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
