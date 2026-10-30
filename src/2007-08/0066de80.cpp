// from server: 100% by auto
// roc 2007-08 0066de80  unit: CXTPControls  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066de80
//
// 0066de80  56                   push esi
// 0066de81  57                   push edi
// 0066de82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066de86  8b4720               mov eax, dword ptr [edi + 0x20]
// 0066de89  50                   push eax
// 0066de8a  8bf1                 mov esi, ecx
// 0066de8c  ff15bced7700         call dword ptr [0x77edbc]
// 0066de92  85c0                 test eax, eax
// 0066de94  7427                 je 0x66debd
// 0066de96  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066de9a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066de9e  51                   push ecx
// 0066de9f  52                   push edx
// 0066dea0  8bce                 mov ecx, esi
// 0066dea2  e879feffff           call 0x66dd20
// 0066dea7  85c0                 test eax, eax
// 0066dea9  7412                 je 0x66debd
// 0066deab  56                   push esi
// 0066deac  8bcf                 mov ecx, edi
// 0066deae  e81da80c00           call 0x7386d0
// 0066deb3  5f                   pop edi
// 0066deb4  b801000000           mov eax, 1
// 0066deb9  5e                   pop esi
// 0066deba  c20c00               ret 0xc
// 0066debd  5f                   pop edi
// 0066debe  33c0                 xor eax, eax
// 0066dec0  5e                   pop esi
// 0066dec1  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTWindowPos.cpp (function ?LoadWindowPos@CXTWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWindowPos.cpp
