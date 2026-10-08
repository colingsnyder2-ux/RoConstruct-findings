// from server: 100% by auto
// roc 2007-08 00712510  unit: CXTShadowHook  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712510
//
// 00712510  0fb6c1               movzx eax, cl
// 00712513  2bc6                 sub eax, esi
// 00712515  3dff000000           cmp eax, 0xff
// 0071251a  53                   push ebx
// 0071251b  7e07                 jle 0x712524
// 0071251d  bbff000000           mov ebx, 0xff
// 00712522  eb0c                 jmp 0x712530
// 00712524  33db                 xor ebx, ebx
// 00712526  85c0                 test eax, eax
// 00712528  0f9cc3               setl bl
// 0071252b  83eb01               sub ebx, 1
// 0071252e  23d8                 and ebx, eax
// 00712530  0fb6c5               movzx eax, ch
// 00712533  2bc6                 sub eax, esi
// 00712535  3dff000000           cmp eax, 0xff
// 0071253a  7e07                 jle 0x712543
// 0071253c  baff000000           mov edx, 0xff
// 00712541  eb0c                 jmp 0x71254f
// 00712543  33d2                 xor edx, edx
// 00712545  85c0                 test eax, eax
// 00712547  0f9cc2               setl dl
// 0071254a  83ea01               sub edx, 1
// 0071254d  23d0                 and edx, eax
// 0071254f  c1e910               shr ecx, 0x10
// 00712552  0fb6c1               movzx eax, cl
// 00712555  2bc6                 sub eax, esi
// 00712557  3dff000000           cmp eax, 0xff
// 0071255c  7e15                 jle 0x712573
// 0071255e  33c0                 xor eax, eax
// 00712560  b9ff000000           mov ecx, 0xff
// 00712565  8ae1                 mov ah, cl
// 00712567  0fb6cb               movzx ecx, bl
// 0071256a  5b                   pop ebx
// 0071256b  8ac2                 mov al, dl
// 0071256d  c1e008               shl eax, 8
// 00712570  0bc1                 or eax, ecx
// 00712572  c3                   ret 
// 00712573  33c9                 xor ecx, ecx
// 00712575  85c0                 test eax, eax
// 00712577  0f9cc1               setl cl
// 0071257a  83e901               sub ecx, 1
// 0071257d  23c8                 and ecx, eax
// 0071257f  33c0                 xor eax, eax
// 00712581  8ae1                 mov ah, cl
// 00712583  0fb6cb               movzx ecx, bl
// 00712586  5b                   pop ebx
// 00712587  8ac2                 mov al, dl
// 00712589  c1e008               shl eax, 8
// 0071258c  0bc1                 or eax, ecx
// 0071258e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
