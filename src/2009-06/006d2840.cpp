// roc 2009-06 006d2840  unit: RBX::Block  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d2840
//
// 006d2840  8b442404             mov eax, dword ptr [esp + 4]
// 006d2844  83f801               cmp eax, 1
// 006d2847  751d                 jne 0x6d2866
// 006d2849  8b442414             mov eax, dword ptr [esp + 0x14]
// 006d284d  50                   push eax
// 006d284e  8d54240c             lea edx, [esp + 0xc]
// 006d2852  52                   push edx
// 006d2853  e858ffffff           call 0x6d27b0
// 006d2858  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d285c  8901                 mov dword ptr [ecx], eax
// 006d285e  b803000000           mov eax, 3
// 006d2863  c21400               ret 0x14
// 006d2866  83f802               cmp eax, 2
// 006d2869  751d                 jne 0x6d2888
// 006d286b  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d286f  52                   push edx
// 006d2870  8d44240c             lea eax, [esp + 0xc]
// 006d2874  50                   push eax
// 006d2875  e8a6feffff           call 0x6d2720
// 006d287a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d287e  8901                 mov dword ptr [ecx], eax
// 006d2880  b802000000           mov eax, 2
// 006d2885  c21400               ret 0x14
// 006d2888  33d2                 xor edx, edx
// 006d288a  6639542408           cmp word ptr [esp + 8], dx
// 006d288f  0f9ec2               setle dl
// 006d2892  33c0                 xor eax, eax
// 006d2894  663944240a           cmp word ptr [esp + 0xa], ax
// 006d2899  0f9ec0               setle al
// 006d289c  8d1450               lea edx, [eax + edx*2]
// 006d289f  33c0                 xor eax, eax
// 006d28a1  663944240c           cmp word ptr [esp + 0xc], ax
// 006d28a6  0f9ec0               setle al
// 006d28a9  8d0450               lea eax, [eax + edx*2]
// 006d28ac  8d1440               lea edx, [eax + eax*2]
// 006d28af  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006d28b2  8d0c90               lea ecx, [eax + edx*4]
// 006d28b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d28b9  890a                 mov dword ptr [edx], ecx
// 006d28bb  b801000000           mov eax, 1
// 006d28c0  c21400               ret 0x14
// library rbxgs/v8world\Block.cpp (function ?getBallBlockInfo@Block@RBX@@QAE?AW4GeoPairType@2@HVVector3int16@G3D@@AAPBVVector3@5@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
