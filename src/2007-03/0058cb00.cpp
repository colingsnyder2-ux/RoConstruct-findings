// roc 2007-03 0058cb00  unit: seg_00580000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058cb00
//
// 0058cb00  8b442404             mov eax, dword ptr [esp + 4]
// 0058cb04  56                   push esi
// 0058cb05  8bf1                 mov esi, ecx
// 0058cb07  8b08                 mov ecx, dword ptr [eax]
// 0058cb09  57                   push edi
// 0058cb0a  890e                 mov dword ptr [esi], ecx
// 0058cb0c  8b7804               mov edi, dword ptr [eax + 4]
// 0058cb0f  85ff                 test edi, edi
// 0058cb11  740c                 je 0x58cb1f
// 0058cb13  8d5708               lea edx, [edi + 8]
// 0058cb16  b801000000           mov eax, 1
// 0058cb1b  f00fc102             lock xadd dword ptr [edx], eax
// 0058cb1f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058cb22  85c9                 test ecx, ecx
// 0058cb24  7413                 je 0x58cb39
// 0058cb26  8d5108               lea edx, [ecx + 8]
// 0058cb29  83c8ff               or eax, 0xffffffff
// 0058cb2c  f00fc102             lock xadd dword ptr [edx], eax
// 0058cb30  7507                 jne 0x58cb39
// 0058cb32  8b11                 mov edx, dword ptr [ecx]
// 0058cb34  8b4208               mov eax, dword ptr [edx + 8]
// 0058cb37  ffd0                 call eax
// 0058cb39  897e04               mov dword ptr [esi + 4], edi
// 0058cb3c  5f                   pop edi
// 0058cb3d  8bc6                 mov eax, esi
// 0058cb3f  5e                   pop esi
// 0058cb40  c20400               ret 4
// library rbxgs/tool\MegaDragger.cpp (function ??4?$weak_ptr@VPartInstance@RBX@@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
