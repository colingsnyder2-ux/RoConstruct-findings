// roc 2012-06 00a59840  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a59840
//
// 00a59840  56                   push esi
// 00a59841  8bf1                 mov esi, ecx
// 00a59843  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a59847  85c9                 test ecx, ecx
// 00a59849  750e                 jne 0xa59859
// 00a5984b  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5984e  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a59851  83c070               add eax, 0x70
// 00a59854  83f9ff               cmp ecx, -1
// 00a59857  eb36                 jmp 0xa5988f
// 00a59859  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a5985d  6a00                 push 0
// 00a5985f  50                   push eax
// 00a59860  e82b84f9ff           call 0x9f1c90
// 00a59865  83caff               or edx, 0xffffffff
// 00a59868  85c0                 test eax, eax
// 00a5986a  7418                 je 0xa59884
// 00a5986c  395078               cmp dword ptr [eax + 0x78], edx
// 00a5986f  7505                 jne 0xa59876
// 00a59871  395074               cmp dword ptr [eax + 0x74], edx
// 00a59874  740e                 je 0xa59884
// 00a59876  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a59879  3bca                 cmp ecx, edx
// 00a5987b  751b                 jne 0xa59898
// 00a5987d  8b4074               mov eax, dword ptr [eax + 0x74]
// 00a59880  5e                   pop esi
// 00a59881  c20800               ret 8
// 00a59884  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a59887  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a5988a  83c070               add eax, 0x70
// 00a5988d  3bca                 cmp ecx, edx
// 00a5988f  7507                 jne 0xa59898
// 00a59891  8b4004               mov eax, dword ptr [eax + 4]
// 00a59894  5e                   pop esi
// 00a59895  c20800               ret 8
// 00a59898  8bc1                 mov eax, ecx
// 00a5989a  5e                   pop esi
// 00a5989b  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
