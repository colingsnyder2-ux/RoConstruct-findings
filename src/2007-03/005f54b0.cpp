// roc 2007-03 005f54b0  unit: seg_005f0000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f54b0
//
// 005f54b0  8b442404             mov eax, dword ptr [esp + 4]
// 005f54b4  83f801               cmp eax, 1
// 005f54b7  751d                 jne 0x5f54d6
// 005f54b9  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f54bd  50                   push eax
// 005f54be  8d54240c             lea edx, [esp + 0xc]
// 005f54c2  52                   push edx
// 005f54c3  e848ffffff           call 0x5f5410
// 005f54c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f54cc  8901                 mov dword ptr [ecx], eax
// 005f54ce  b803000000           mov eax, 3
// 005f54d3  c21400               ret 0x14
// 005f54d6  83f802               cmp eax, 2
// 005f54d9  751d                 jne 0x5f54f8
// 005f54db  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f54df  52                   push edx
// 005f54e0  8d44240c             lea eax, [esp + 0xc]
// 005f54e4  50                   push eax
// 005f54e5  e896feffff           call 0x5f5380
// 005f54ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f54ee  8901                 mov dword ptr [ecx], eax
// 005f54f0  b802000000           mov eax, 2
// 005f54f5  c21400               ret 0x14
// 005f54f8  33d2                 xor edx, edx
// 005f54fa  6639542408           cmp word ptr [esp + 8], dx
// 005f54ff  0f9ec2               setle dl
// 005f5502  33c0                 xor eax, eax
// 005f5504  663944240a           cmp word ptr [esp + 0xa], ax
// 005f5509  0f9ec0               setle al
// 005f550c  8d1450               lea edx, [eax + edx*2]
// 005f550f  33c0                 xor eax, eax
// 005f5511  663944240c           cmp word ptr [esp + 0xc], ax
// 005f5516  0f9ec0               setle al
// 005f5519  8d0450               lea eax, [eax + edx*2]
// 005f551c  8d1440               lea edx, [eax + eax*2]
// 005f551f  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005f5522  8d0c90               lea ecx, [eax + edx*4]
// 005f5525  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f5529  890a                 mov dword ptr [edx], ecx
// 005f552b  b801000000           mov eax, 1
// 005f5530  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?getBallBlockInfo@Block@RBX@@QAE?AW4GeoPairType@2@HVVector3int16@G3D@@AAPBVVector3@5@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
