// roc 2007-08 0060c680  unit: RBX::Block  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060c680
//
// 0060c680  8b442404             mov eax, dword ptr [esp + 4]
// 0060c684  83f801               cmp eax, 1
// 0060c687  751d                 jne 0x60c6a6
// 0060c689  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060c68d  50                   push eax
// 0060c68e  8d54240c             lea edx, [esp + 0xc]
// 0060c692  52                   push edx
// 0060c693  e848ffffff           call 0x60c5e0
// 0060c698  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060c69c  8901                 mov dword ptr [ecx], eax
// 0060c69e  b803000000           mov eax, 3
// 0060c6a3  c21400               ret 0x14
// 0060c6a6  83f802               cmp eax, 2
// 0060c6a9  751d                 jne 0x60c6c8
// 0060c6ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 0060c6af  52                   push edx
// 0060c6b0  8d44240c             lea eax, [esp + 0xc]
// 0060c6b4  50                   push eax
// 0060c6b5  e896feffff           call 0x60c550
// 0060c6ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060c6be  8901                 mov dword ptr [ecx], eax
// 0060c6c0  b802000000           mov eax, 2
// 0060c6c5  c21400               ret 0x14
// 0060c6c8  33d2                 xor edx, edx
// 0060c6ca  6639542408           cmp word ptr [esp + 8], dx
// 0060c6cf  0f9ec2               setle dl
// 0060c6d2  33c0                 xor eax, eax
// 0060c6d4  663944240a           cmp word ptr [esp + 0xa], ax
// 0060c6d9  0f9ec0               setle al
// 0060c6dc  8d1450               lea edx, [eax + edx*2]
// 0060c6df  33c0                 xor eax, eax
// 0060c6e1  663944240c           cmp word ptr [esp + 0xc], ax
// 0060c6e6  0f9ec0               setle al
// 0060c6e9  8d0450               lea eax, [eax + edx*2]
// 0060c6ec  8d1440               lea edx, [eax + eax*2]
// 0060c6ef  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0060c6f2  8d0c90               lea ecx, [eax + edx*4]
// 0060c6f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060c6f9  890a                 mov dword ptr [edx], ecx
// 0060c6fb  b801000000           mov eax, 1
// 0060c700  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?getBallBlockInfo@Block@RBX@@QAE?AW4GeoPairType@2@HVVector3int16@G3D@@AAPBVVector3@5@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
