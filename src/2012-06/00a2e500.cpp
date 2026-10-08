// roc 2012-06 00a2e500  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2e500
//
// 00a2e500  83ec10               sub esp, 0x10
// 00a2e503  53                   push ebx
// 00a2e504  55                   push ebp
// 00a2e505  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a2e509  56                   push esi
// 00a2e50a  8bf1                 mov esi, ecx
// 00a2e50c  33c0                 xor eax, eax
// 00a2e50e  8d4e54               lea ecx, [esi + 0x54]
// 00a2e511  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00a2e517  898688000000         mov dword ptr [esi + 0x88], eax
// 00a2e51d  8b01                 mov eax, dword ptr [ecx]
// 00a2e51f  8b5004               mov edx, dword ptr [eax + 4]
// 00a2e522  57                   push edi
// 00a2e523  55                   push ebp
// 00a2e524  ffd2                 call edx
// 00a2e526  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a2e52a  8b08                 mov ecx, dword ptr [eax]
// 00a2e52c  8b5008               mov edx, dword ptr [eax + 8]
// 00a2e52f  8b5804               mov ebx, dword ptr [eax + 4]
// 00a2e532  8b780c               mov edi, dword ptr [eax + 0xc]
// 00a2e535  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a2e539  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a2e53c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a2e540  89542418             mov dword ptr [esp + 0x18], edx
// 00a2e544  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a2e548  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 00a2e54e  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 00a2e555  740c                 je 0xa2e563
// 00a2e557  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00a2e55d  03fb                 add edi, ebx
// 00a2e55f  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a2e563  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00a2e56a  740b                 je 0xa2e577
// 00a2e56c  8b08                 mov ecx, dword ptr [eax]
// 00a2e56e  8bd1                 mov edx, ecx
// 00a2e570  2b567c               sub edx, dword ptr [esi + 0x7c]
// 00a2e573  8910                 mov dword ptr [eax], edx
// 00a2e575  eb0b                 jmp 0xa2e582
// 00a2e577  8b5008               mov edx, dword ptr [eax + 8]
// 00a2e57a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a2e57d  03ca                 add ecx, edx
// 00a2e57f  894808               mov dword ptr [eax + 8], ecx
// 00a2e582  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a2e586  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a2e58a  89542410             mov dword ptr [esp + 0x10], edx
// 00a2e58e  752c                 jne 0xa2e5bc
// 00a2e590  8b4504               mov eax, dword ptr [ebp + 4]
// 00a2e593  68ffff0000           push 0xffff
// 00a2e598  50                   push eax
// 00a2e599  8d4c2418             lea ecx, [esp + 0x18]
// 00a2e59d  51                   push ecx
// 00a2e59e  6800010040           push 0x40000100
// 00a2e5a3  6a00                 push 0
// 00a2e5a5  8bce                 mov ecx, esi
// 00a2e5a7  e8ec4af5ff           call 0x983098
// 00a2e5ac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a2e5b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2e5b4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a2e5b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a2e5bc  6a44                 push 0x44
// 00a2e5be  2bfb                 sub edi, ebx
// 00a2e5c0  57                   push edi
// 00a2e5c1  2bca                 sub ecx, edx
// 00a2e5c3  51                   push ecx
// 00a2e5c4  53                   push ebx
// 00a2e5c5  52                   push edx
// 00a2e5c6  6a00                 push 0
// 00a2e5c8  8bce                 mov ecx, esi
// 00a2e5ca  e8053ff5ff           call 0x9824d4
// 00a2e5cf  5f                   pop edi
// 00a2e5d0  5e                   pop esi
// 00a2e5d1  5d                   pop ebp
// 00a2e5d2  5b                   pop ebx
// 00a2e5d3  83c410               add esp, 0x10
// 00a2e5d6  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
