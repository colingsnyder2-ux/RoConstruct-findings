// roc 2007-03 00703860  unit: seg_00700000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703860
//
// 00703860  0fb6c1               movzx eax, cl
// 00703863  2bc6                 sub eax, esi
// 00703865  3dff000000           cmp eax, 0xff
// 0070386a  53                   push ebx
// 0070386b  7e07                 jle 0x703874
// 0070386d  bbff000000           mov ebx, 0xff
// 00703872  eb0c                 jmp 0x703880
// 00703874  33db                 xor ebx, ebx
// 00703876  85c0                 test eax, eax
// 00703878  0f9cc3               setl bl
// 0070387b  83eb01               sub ebx, 1
// 0070387e  23d8                 and ebx, eax
// 00703880  0fb6c5               movzx eax, ch
// 00703883  2bc6                 sub eax, esi
// 00703885  3dff000000           cmp eax, 0xff
// 0070388a  7e07                 jle 0x703893
// 0070388c  baff000000           mov edx, 0xff
// 00703891  eb0c                 jmp 0x70389f
// 00703893  33d2                 xor edx, edx
// 00703895  85c0                 test eax, eax
// 00703897  0f9cc2               setl dl
// 0070389a  83ea01               sub edx, 1
// 0070389d  23d0                 and edx, eax
// 0070389f  c1e910               shr ecx, 0x10
// 007038a2  0fb6c1               movzx eax, cl
// 007038a5  2bc6                 sub eax, esi
// 007038a7  3dff000000           cmp eax, 0xff
// 007038ac  7e15                 jle 0x7038c3
// 007038ae  33c0                 xor eax, eax
// 007038b0  b9ff000000           mov ecx, 0xff
// 007038b5  8ae1                 mov ah, cl
// 007038b7  0fb6cb               movzx ecx, bl
// 007038ba  5b                   pop ebx
// 007038bb  8ac2                 mov al, dl
// 007038bd  c1e008               shl eax, 8
// 007038c0  0bc1                 or eax, ecx
// 007038c2  c3                   ret 
// 007038c3  33c9                 xor ecx, ecx
// 007038c5  85c0                 test eax, eax
// 007038c7  0f9cc1               setl cl
// 007038ca  83e901               sub ecx, 1
// 007038cd  23c8                 and ecx, eax
// 007038cf  33c0                 xor eax, eax
// 007038d1  8ae1                 mov ah, cl
// 007038d3  0fb6cb               movzx ecx, bl
// 007038d6  5b                   pop ebx
// 007038d7  8ac2                 mov al, dl
// 007038d9  c1e008               shl eax, 8
// 007038dc  0bc1                 or eax, ecx
// 007038de  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
