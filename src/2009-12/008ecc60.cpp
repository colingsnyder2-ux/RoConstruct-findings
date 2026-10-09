// roc 2009-12 008ecc60  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ecc60
//
// 008ecc60  57                   push edi
// 008ecc61  8bf9                 mov edi, ecx
// 008ecc63  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008ecc69  85c0                 test eax, eax
// 008ecc6b  7475                 je 0x8ecce2
// 008ecc6d  56                   push esi
// 008ecc6e  33f6                 xor esi, esi
// 008ecc70  397004               cmp dword ptr [eax + 4], esi
// 008ecc73  7e30                 jle 0x8ecca5
// 008ecc75  85f6                 test esi, esi
// 008ecc77  7509                 jne 0x8ecc82
// 008ecc79  8b00                 mov eax, dword ptr [eax]
// 008ecc7b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 008ecc82  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008ecc88  8b02                 mov eax, dword ptr [edx]
// 008ecc8a  8bce                 mov ecx, esi
// 008ecc8c  c1e104               shl ecx, 4
// 008ecc8f  03ce                 add ecx, esi
// 008ecc91  8d0c88               lea ecx, [eax + ecx*4]
// 008ecc94  e827feffff           call 0x8ecac0
// 008ecc99  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008ecc9f  46                   inc esi
// 008ecca0  3b7004               cmp esi, dword ptr [eax + 4]
// 008ecca3  7cd0                 jl 0x8ecc75
// 008ecca5  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 008eccab  83791000             cmp dword ptr [ecx + 0x10], 0
// 008eccaf  5e                   pop esi
// 008eccb0  7413                 je 0x8eccc5
// 008eccb2  837f7000             cmp dword ptr [edi + 0x70], 0
// 008eccb6  750d                 jne 0x8eccc5
// 008eccb8  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008eccbb  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 008eccc5  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008ecccb  8b08                 mov ecx, dword ptr [eax]
// 008ecccd  51                   push ecx
// 008eccce  e8336ef0ff           call 0x7f3b06
// 008eccd3  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008eccd9  52                   push edx
// 008eccda  e87b6bf0ff           call 0x7f385a
// 008eccdf  83c408               add esp, 8
// 008ecce2  5f                   pop edi
// 008ecce3  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
