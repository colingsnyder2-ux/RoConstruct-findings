// roc 2007-08 004a43f0  unit: RBX::IdManager::UItem::?$TItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a43f0
//
// 004a43f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a43f4  85c9                 test ecx, ecx
// 004a43f6  7434                 je 0x4a442c
// 004a43f8  803900               cmp byte ptr [ecx], 0
// 004a43fb  742f                 je 0x4a442c
// 004a43fd  8bc1                 mov eax, ecx
// 004a43ff  56                   push esi
// 004a4400  8d7001               lea esi, [eax + 1]
// 004a4403  8a10                 mov dl, byte ptr [eax]
// 004a4405  83c001               add eax, 1
// 004a4408  84d2                 test dl, dl
// 004a440a  75f7                 jne 0x4a4403
// 004a440c  2bc6                 sub eax, esi
// 004a440e  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 004a4412  80fa5c               cmp dl, 0x5c
// 004a4415  5e                   pop esi
// 004a4416  7506                 jne 0x4a441e
// 004a4418  c64408ff2f           mov byte ptr [eax + ecx - 1], 0x2f
// 004a441d  c3                   ret 
// 004a441e  80fa2f               cmp dl, 0x2f
// 004a4421  7409                 je 0x4a442c
// 004a4423  c604082f             mov byte ptr [eax + ecx], 0x2f
// 004a4427  c644080100           mov byte ptr [eax + ecx + 1], 0
// 004a442c  c3                   ret 
// library rbx2016-raknet/FileOperations.cpp (function ?AddSlash@@YAXPAD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileOperations.cpp
