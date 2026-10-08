// from server: 100% by auto
// roc 2008-06 0071f9f0  unit: CXTPResourceManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f9f0
//
// 0071f9f0  56                   push esi
// 0071f9f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0071f9f5  85f6                 test esi, esi
// 0071f9f7  7506                 jne 0x71f9ff
// 0071f9f9  33c0                 xor eax, eax
// 0071f9fb  5e                   pop esi
// 0071f9fc  c20c00               ret 0xc
// 0071f9ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071fa03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071fa07  56                   push esi
// 0071fa08  6800f97100           push 0x71f900
// 0071fa0d  50                   push eax
// 0071fa0e  51                   push ecx
// 0071fa0f  ff1518238000         call dword ptr [0x802318]
// 0071fa15  0fb706               movzx eax, word ptr [esi]
// 0071fa18  6685c0               test ax, ax
// 0071fa1b  7509                 jne 0x71fa26
// 0071fa1d  b801000000           mov eax, 1
// 0071fa22  5e                   pop esi
// 0071fa23  c20c00               ret 0xc
// 0071fa26  33c9                 xor ecx, ecx
// 0071fa28  ba09040000           mov edx, 0x409
// 0071fa2d  663bc2               cmp ax, dx
// 0071fa30  0f94c1               sete cl
// 0071fa33  5e                   pop esi
// 0071fa34  8bc1                 mov eax, ecx
// 0071fa36  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?EnumResTypeProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
