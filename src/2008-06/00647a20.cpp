// roc 2008-06 00647a20  unit: RBX::Block  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647a20
//
// 00647a20  8b442404             mov eax, dword ptr [esp + 4]
// 00647a24  83f801               cmp eax, 1
// 00647a27  751d                 jne 0x647a46
// 00647a29  8b442414             mov eax, dword ptr [esp + 0x14]
// 00647a2d  50                   push eax
// 00647a2e  8d54240c             lea edx, [esp + 0xc]
// 00647a32  52                   push edx
// 00647a33  e858ffffff           call 0x647990
// 00647a38  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00647a3c  8901                 mov dword ptr [ecx], eax
// 00647a3e  b803000000           mov eax, 3
// 00647a43  c21400               ret 0x14
// 00647a46  83f802               cmp eax, 2
// 00647a49  751d                 jne 0x647a68
// 00647a4b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00647a4f  52                   push edx
// 00647a50  8d44240c             lea eax, [esp + 0xc]
// 00647a54  50                   push eax
// 00647a55  e8a6feffff           call 0x647900
// 00647a5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00647a5e  8901                 mov dword ptr [ecx], eax
// 00647a60  b802000000           mov eax, 2
// 00647a65  c21400               ret 0x14
// 00647a68  33d2                 xor edx, edx
// 00647a6a  6639542408           cmp word ptr [esp + 8], dx
// 00647a6f  0f9ec2               setle dl
// 00647a72  33c0                 xor eax, eax
// 00647a74  663944240a           cmp word ptr [esp + 0xa], ax
// 00647a79  0f9ec0               setle al
// 00647a7c  8d1450               lea edx, [eax + edx*2]
// 00647a7f  33c0                 xor eax, eax
// 00647a81  663944240c           cmp word ptr [esp + 0xc], ax
// 00647a86  0f9ec0               setle al
// 00647a89  8d0450               lea eax, [eax + edx*2]
// 00647a8c  8d1440               lea edx, [eax + eax*2]
// 00647a8f  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00647a92  8d0c90               lea ecx, [eax + edx*4]
// 00647a95  8b542410             mov edx, dword ptr [esp + 0x10]
// 00647a99  890a                 mov dword ptr [edx], ecx
// 00647a9b  b801000000           mov eax, 1
// 00647aa0  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?getBallBlockInfo@Block@RBX@@QAE?AW4GeoPairType@2@HVVector3int16@G3D@@AAPBVVector3@5@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
