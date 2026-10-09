// roc 2009-12 008c9680  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9680
//
// 008c9680  56                   push esi
// 008c9681  8bf1                 mov esi, ecx
// 008c9683  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c9687  85c9                 test ecx, ecx
// 008c9689  750e                 jne 0x8c9699
// 008c968b  8b4674               mov eax, dword ptr [esi + 0x74]
// 008c968e  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008c9691  83c070               add eax, 0x70
// 008c9694  83f9ff               cmp ecx, -1
// 008c9697  eb36                 jmp 0x8c96cf
// 008c9699  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c969d  6a00                 push 0
// 008c969f  50                   push eax
// 008c96a0  e89bb8f9ff           call 0x864f40
// 008c96a5  83caff               or edx, 0xffffffff
// 008c96a8  85c0                 test eax, eax
// 008c96aa  7418                 je 0x8c96c4
// 008c96ac  395078               cmp dword ptr [eax + 0x78], edx
// 008c96af  7505                 jne 0x8c96b6
// 008c96b1  395074               cmp dword ptr [eax + 0x74], edx
// 008c96b4  740e                 je 0x8c96c4
// 008c96b6  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008c96b9  3bca                 cmp ecx, edx
// 008c96bb  751b                 jne 0x8c96d8
// 008c96bd  8b4074               mov eax, dword ptr [eax + 0x74]
// 008c96c0  5e                   pop esi
// 008c96c1  c20800               ret 8
// 008c96c4  8b4674               mov eax, dword ptr [esi + 0x74]
// 008c96c7  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008c96ca  83c070               add eax, 0x70
// 008c96cd  3bca                 cmp ecx, edx
// 008c96cf  7507                 jne 0x8c96d8
// 008c96d1  8b4004               mov eax, dword ptr [eax + 4]
// 008c96d4  5e                   pop esi
// 008c96d5  c20800               ret 8
// 008c96d8  8bc1                 mov eax, ecx
// 008c96da  5e                   pop esi
// 008c96db  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
