// roc 2010-06 0087d850  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087d850
//
// 0087d850  56                   push esi
// 0087d851  8bf1                 mov esi, ecx
// 0087d853  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087d857  85c9                 test ecx, ecx
// 0087d859  750e                 jne 0x87d869
// 0087d85b  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087d85e  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0087d861  83c070               add eax, 0x70
// 0087d864  83f9ff               cmp ecx, -1
// 0087d867  eb36                 jmp 0x87d89f
// 0087d869  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087d86d  6a00                 push 0
// 0087d86f  50                   push eax
// 0087d870  e88bb6f9ff           call 0x818f00
// 0087d875  83caff               or edx, 0xffffffff
// 0087d878  85c0                 test eax, eax
// 0087d87a  7418                 je 0x87d894
// 0087d87c  395078               cmp dword ptr [eax + 0x78], edx
// 0087d87f  7505                 jne 0x87d886
// 0087d881  395074               cmp dword ptr [eax + 0x74], edx
// 0087d884  740e                 je 0x87d894
// 0087d886  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0087d889  3bca                 cmp ecx, edx
// 0087d88b  751b                 jne 0x87d8a8
// 0087d88d  8b4074               mov eax, dword ptr [eax + 0x74]
// 0087d890  5e                   pop esi
// 0087d891  c20800               ret 8
// 0087d894  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087d897  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0087d89a  83c070               add eax, 0x70
// 0087d89d  3bca                 cmp ecx, edx
// 0087d89f  7507                 jne 0x87d8a8
// 0087d8a1  8b4004               mov eax, dword ptr [eax + 4]
// 0087d8a4  5e                   pop esi
// 0087d8a5  c20800               ret 8
// 0087d8a8  8bc1                 mov eax, ecx
// 0087d8aa  5e                   pop esi
// 0087d8ab  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
