// roc 2011-06 008e14e0  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e14e0
//
// 008e14e0  56                   push esi
// 008e14e1  8bf1                 mov esi, ecx
// 008e14e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e14e7  85c9                 test ecx, ecx
// 008e14e9  750e                 jne 0x8e14f9
// 008e14eb  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e14ee  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008e14f1  83c070               add eax, 0x70
// 008e14f4  83f9ff               cmp ecx, -1
// 008e14f7  eb36                 jmp 0x8e152f
// 008e14f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e14fd  6a00                 push 0
// 008e14ff  50                   push eax
// 008e1500  e81b82f9ff           call 0x879720
// 008e1505  83caff               or edx, 0xffffffff
// 008e1508  85c0                 test eax, eax
// 008e150a  7418                 je 0x8e1524
// 008e150c  395078               cmp dword ptr [eax + 0x78], edx
// 008e150f  7505                 jne 0x8e1516
// 008e1511  395074               cmp dword ptr [eax + 0x74], edx
// 008e1514  740e                 je 0x8e1524
// 008e1516  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008e1519  3bca                 cmp ecx, edx
// 008e151b  751b                 jne 0x8e1538
// 008e151d  8b4074               mov eax, dword ptr [eax + 0x74]
// 008e1520  5e                   pop esi
// 008e1521  c20800               ret 8
// 008e1524  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e1527  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008e152a  83c070               add eax, 0x70
// 008e152d  3bca                 cmp ecx, edx
// 008e152f  7507                 jne 0x8e1538
// 008e1531  8b4004               mov eax, dword ptr [eax + 4]
// 008e1534  5e                   pop esi
// 008e1535  c20800               ret 8
// 008e1538  8bc1                 mov eax, ecx
// 008e153a  5e                   pop esi
// 008e153b  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
