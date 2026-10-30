// roc 2012-06 00a514b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a514b0
//
// 00a514b0  53                   push ebx
// 00a514b1  8bd9                 mov ebx, ecx
// 00a514b3  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00a514b6  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00a514ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a514be  0f85a9000000         jne 0xa5156d
// 00a514c4  83e901               sub ecx, 1
// 00a514c7  0f8486000000         je 0xa51553
// 00a514cd  83e901               sub ecx, 1
// 00a514d0  7445                 je 0xa51517
// 00a514d2  83e901               sub ecx, 1
// 00a514d5  0f85f9010000         jne 0xa516d4
// 00a514db  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a514e1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00a514e4  83c008               add eax, 8
// 00a514e7  83f9ff               cmp ecx, -1
// 00a514ea  7516                 jne 0xa51502
// 00a514ec  8b4004               mov eax, dword ptr [eax + 4]
// 00a514ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a514f3  50                   push eax
// 00a514f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a514f8  50                   push eax
// 00a514f9  e8ae19f3ff           call 0x982eac
// 00a514fe  5b                   pop ebx
// 00a514ff  c20c00               ret 0xc
// 00a51502  8bc1                 mov eax, ecx
// 00a51504  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a51508  50                   push eax
// 00a51509  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5150d  50                   push eax
// 00a5150e  e89919f3ff           call 0x982eac
// 00a51513  5b                   pop ebx
// 00a51514  c20c00               ret 0xc
// 00a51517  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a5151d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00a51520  83c008               add eax, 8
// 00a51523  83f9ff               cmp ecx, -1
// 00a51526  7516                 jne 0xa5153e
// 00a51528  8b4004               mov eax, dword ptr [eax + 4]
// 00a5152b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5152f  50                   push eax
// 00a51530  51                   push ecx
// 00a51531  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a51535  e87219f3ff           call 0x982eac
// 00a5153a  5b                   pop ebx
// 00a5153b  c20c00               ret 0xc
// 00a5153e  8bc1                 mov eax, ecx
// 00a51540  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a51544  50                   push eax
// 00a51545  51                   push ecx
// 00a51546  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5154a  e85d19f3ff           call 0x982eac
// 00a5154f  5b                   pop ebx
// 00a51550  c20c00               ret 0xc
// 00a51553  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a51557  834004fe             add dword ptr [eax + 4], -2
// 00a5155b  8300fe               add dword ptr [eax], -2
// 00a5155e  b902000000           mov ecx, 2
// 00a51563  014808               add dword ptr [eax + 8], ecx
// 00a51566  01480c               add dword ptr [eax + 0xc], ecx
// 00a51569  5b                   pop ebx
// 00a5156a  c20c00               ret 0xc
// 00a5156d  83f903               cmp ecx, 3
// 00a51570  0f875e010000         ja 0xa516d4
// 00a51576  56                   push esi
// 00a51577  57                   push edi
// 00a51578  ff248dd816a500       jmp dword ptr [ecx*4 + 0xa516d8]
// 00a5157f  e8dcc2f6ff           call 0x9bd860
// 00a51584  6a0f                 push 0xf
// 00a51586  8bc8                 mov ecx, eax
// 00a51588  e853baf6ff           call 0x9bcfe0
// 00a5158d  8bf8                 mov edi, eax
// 00a5158f  e8ccc2f6ff           call 0x9bd860
// 00a51594  6a0f                 push 0xf
// 00a51596  8bc8                 mov ecx, eax
// 00a51598  e843baf6ff           call 0x9bcfe0
// 00a5159d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a515a1  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a515a4  2b5604               sub edx, dword ptr [esi + 4]
// 00a515a7  57                   push edi
// 00a515a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a515ac  50                   push eax
// 00a515ad  8b4608               mov eax, dword ptr [esi + 8]
// 00a515b0  2b06                 sub eax, dword ptr [esi]
// 00a515b2  4a                   dec edx
// 00a515b3  52                   push edx
// 00a515b4  83e802               sub eax, 2
// 00a515b7  50                   push eax
// 00a515b8  6a00                 push 0
// 00a515ba  6a01                 push 1
// 00a515bc  8bcf                 mov ecx, edi
// 00a515be  e8e7860400           call 0xa99caa
// 00a515c3  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00a515c6  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a515cc  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a515cf  83f9ff               cmp ecx, -1
// 00a515d2  7503                 jne 0xa515d7
// 00a515d4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a515d7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a515da  83faff               cmp edx, -1
// 00a515dd  7505                 jne 0xa515e4
// 00a515df  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a515e2  eb02                 jmp 0xa515e6
// 00a515e4  8bc2                 mov eax, edx
// 00a515e6  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a515e9  2b5604               sub edx, dword ptr [esi + 4]
// 00a515ec  51                   push ecx
// 00a515ed  50                   push eax
// 00a515ee  8b4608               mov eax, dword ptr [esi + 8]
// 00a515f1  2b06                 sub eax, dword ptr [esi]
// 00a515f3  52                   push edx
// 00a515f4  50                   push eax
// 00a515f5  6a00                 push 0
// 00a515f7  6a00                 push 0
// 00a515f9  8bcf                 mov ecx, edi
// 00a515fb  e8aa860400           call 0xa99caa
// 00a51600  5f                   pop edi
// 00a51601  5e                   pop esi
// 00a51602  5b                   pop ebx
// 00a51603  c20c00               ret 0xc
// 00a51606  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5160a  ff4804               dec dword ptr [eax + 4]
// 00a5160d  5f                   pop edi
// 00a5160e  5e                   pop esi
// 00a5160f  5b                   pop ebx
// 00a51610  c20c00               ret 0xc
// 00a51613  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a51619  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00a5161c  83c050               add eax, 0x50
// 00a5161f  83f9ff               cmp ecx, -1
// 00a51622  7505                 jne 0xa51629
// 00a51624  8b4004               mov eax, dword ptr [eax + 4]
// 00a51627  eb02                 jmp 0xa5162b
// 00a51629  8bc1                 mov eax, ecx
// 00a5162b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a5162f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a51633  50                   push eax
// 00a51634  56                   push esi
// 00a51635  8bcf                 mov ecx, edi
// 00a51637  e87018f3ff           call 0x982eac
// 00a5163c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00a5163f  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a51645  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a51648  83c044               add eax, 0x44
// 00a5164b  83f9ff               cmp ecx, -1
// 00a5164e  7505                 jne 0xa51655
// 00a51650  8b4004               mov eax, dword ptr [eax + 4]
// 00a51653  eb02                 jmp 0xa51657
// 00a51655  8bc1                 mov eax, ecx
// 00a51657  8b5604               mov edx, dword ptr [esi + 4]
// 00a5165a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a5165d  50                   push eax
// 00a5165e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a51661  2bc2                 sub eax, edx
// 00a51663  50                   push eax
// 00a51664  6a01                 push 1
// 00a51666  49                   dec ecx
// 00a51667  52                   push edx
// 00a51668  51                   push ecx
// 00a51669  8bcf                 mov ecx, edi
// 00a5166b  e8207f0400           call 0xa99590
// 00a51670  5f                   pop edi
// 00a51671  5e                   pop esi
// 00a51672  5b                   pop ebx
// 00a51673  c20c00               ret 0xc
// 00a51676  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a5167c  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00a5167f  83c050               add eax, 0x50
// 00a51682  83f9ff               cmp ecx, -1
// 00a51685  7505                 jne 0xa5168c
// 00a51687  8b4004               mov eax, dword ptr [eax + 4]
// 00a5168a  eb02                 jmp 0xa5168e
// 00a5168c  8bc1                 mov eax, ecx
// 00a5168e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a51692  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a51696  50                   push eax
// 00a51697  56                   push esi
// 00a51698  8bcf                 mov ecx, edi
// 00a5169a  e80d18f3ff           call 0x982eac
// 00a5169f  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00a516a2  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a516a8  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a516ab  83c044               add eax, 0x44
// 00a516ae  83f9ff               cmp ecx, -1
// 00a516b1  7505                 jne 0xa516b8
// 00a516b3  8b4004               mov eax, dword ptr [eax + 4]
// 00a516b6  eb02                 jmp 0xa516ba
// 00a516b8  8bc1                 mov eax, ecx
// 00a516ba  8b16                 mov edx, dword ptr [esi]
// 00a516bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a516bf  50                   push eax
// 00a516c0  8b4608               mov eax, dword ptr [esi + 8]
// 00a516c3  6a01                 push 1
// 00a516c5  2bc2                 sub eax, edx
// 00a516c7  50                   push eax
// 00a516c8  49                   dec ecx
// 00a516c9  51                   push ecx
// 00a516ca  52                   push edx
// 00a516cb  8bcf                 mov ecx, edi
// 00a516cd  e8be7e0400           call 0xa99590
// 00a516d2  5f                   pop edi
// 00a516d3  5e                   pop esi
// 00a516d4  5b                   pop ebx
// 00a516d5  c20c00               ret 0xc
// 00a516d8  7f15                 jg 0xa516ef
// 00a516da  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a516db  0006                 add byte ptr [esi], al
// 00a516dd  16                   push ss
// 00a516de  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a516df  0013                 add byte ptr [ebx], dl
// 00a516e1  16                   push ss
// 00a516e2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a516e3  007616               add byte ptr [esi + 0x16], dh
// 00a516e6  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp