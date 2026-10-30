// roc 2009-12 0080dcf0  unit: IIHH::?$CMap  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080dcf0
//
// 0080dcf0  6aff                 push -1
// 0080dcf2  68989c9500           push 0x959c98
// 0080dcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0080dcfd  50                   push eax
// 0080dcfe  83ec08               sub esp, 8
// 0080dd01  56                   push esi
// 0080dd02  a10052b600           mov eax, dword ptr [0xb65200]
// 0080dd07  33c4                 xor eax, esp
// 0080dd09  50                   push eax
// 0080dd0a  8d442410             lea eax, [esp + 0x10]
// 0080dd0e  64a300000000         mov dword ptr fs:[0], eax
// 0080dd14  8bf1                 mov esi, ecx
// 0080dd16  6a01                 push 1
// 0080dd18  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0080dd20  e85be9ffff           call 0x80c680
// 0080dd25  8d442420             lea eax, [esp + 0x20]
// 0080dd29  50                   push eax
// 0080dd2a  8d4e30               lea ecx, [esi + 0x30]
// 0080dd2d  e88efeffff           call 0x80dbc0
// 0080dd32  8d4c2408             lea ecx, [esp + 8]
// 0080dd36  51                   push ecx
// 0080dd37  8bce                 mov ecx, esi
// 0080dd39  e8e2b4ffff           call 0x809220
// 0080dd3e  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 0080dd44  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080dd48  8b442408             mov eax, dword ptr [esp + 8]
// 0080dd4c  89562c               mov dword ptr [esi + 0x2c], edx
// 0080dd4f  894628               mov dword ptr [esi + 0x28], eax
// 0080dd52  85c9                 test ecx, ecx
// 0080dd54  7405                 je 0x80dd5b
// 0080dd56  e885eaffff           call 0x80c7e0
// 0080dd5b  8d4c2420             lea ecx, [esp + 0x20]
// 0080dd5f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0080dd67  e874f0ffff           call 0x80cde0
// 0080dd6c  b801000000           mov eax, 1
// 0080dd71  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080dd75  64890d00000000       mov dword ptr fs:[0], ecx
// 0080dd7c  59                   pop ecx
// 0080dd7d  5e                   pop esi
// 0080dd7e  83c414               add esp, 0x14
// 0080dd81  c22400               ret 0x24
// copied from an identical function in another client (function ?SetIcon@CXTPImageManagerIcon@@QAEHVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp