// from server: 100% by auto
// roc 2008-06 00724290  unit: CXTPRibbonBar  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00724290
//
// 00724290  83ec08               sub esp, 8
// 00724293  56                   push esi
// 00724294  57                   push edi
// 00724295  8d442408             lea eax, [esp + 8]
// 00724299  50                   push eax
// 0072429a  8bf1                 mov esi, ecx
// 0072429c  ff159c2d8000         call dword ptr [0x802d9c]
// 007242a2  8b5620               mov edx, dword ptr [esi + 0x20]
// 007242a5  8d4c2408             lea ecx, [esp + 8]
// 007242a9  51                   push ecx
// 007242aa  52                   push edx
// 007242ab  ff15a02d8000         call dword ptr [0x802da0]
// 007242b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007242b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007242b9  50                   push eax
// 007242ba  51                   push ecx
// 007242bb  8bce                 mov ecx, esi
// 007242bd  e8bee2ffff           call 0x722580
// 007242c2  8bf8                 mov edi, eax
// 007242c4  8d57f6               lea edx, [edi - 0xa]
// 007242c7  83fa07               cmp edx, 7
// 007242ca  772f                 ja 0x7242fb
// 007242cc  8bce                 mov ecx, esi
// 007242ce  e8ed36f9ff           call 0x6b79c0
// 007242d3  0fb74c241c           movzx ecx, word ptr [esp + 0x1c]
// 007242d8  8b4020               mov eax, dword ptr [eax + 0x20]
// 007242db  0fb7d7               movzx edx, di
// 007242de  c1e110               shl ecx, 0x10
// 007242e1  0bca                 or ecx, edx
// 007242e3  51                   push ecx
// 007242e4  50                   push eax
// 007242e5  6a20                 push 0x20
// 007242e7  50                   push eax
// 007242e8  ff15142e8000         call dword ptr [0x802e14]
// 007242ee  5f                   pop edi
// 007242ef  b801000000           mov eax, 1
// 007242f4  5e                   pop esi
// 007242f5  83c408               add esp, 8
// 007242f8  c20c00               ret 0xc
// 007242fb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007242ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00724303  8b542414             mov edx, dword ptr [esp + 0x14]
// 00724307  50                   push eax
// 00724308  51                   push ecx
// 00724309  52                   push edx
// 0072430a  8bce                 mov ecx, esi
// 0072430c  e80fe5f9ff           call 0x6c2820
// 00724311  5f                   pop edi
// 00724312  5e                   pop esi
// 00724313  83c408               add esp, 8
// 00724316  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetCursor@CXTPRibbonBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
