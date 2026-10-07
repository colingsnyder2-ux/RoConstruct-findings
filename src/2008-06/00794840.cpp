// roc 2008-06 00794840  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794840
//
// 00794840  57                   push edi
// 00794841  8bf9                 mov edi, ecx
// 00794843  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00794849  85c0                 test eax, eax
// 0079484b  7475                 je 0x7948c2
// 0079484d  56                   push esi
// 0079484e  33f6                 xor esi, esi
// 00794850  397004               cmp dword ptr [eax + 4], esi
// 00794853  7e30                 jle 0x794885
// 00794855  85f6                 test esi, esi
// 00794857  7509                 jne 0x794862
// 00794859  8b00                 mov eax, dword ptr [eax]
// 0079485b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 00794862  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 00794868  8b02                 mov eax, dword ptr [edx]
// 0079486a  8bce                 mov ecx, esi
// 0079486c  c1e104               shl ecx, 4
// 0079486f  03ce                 add ecx, esi
// 00794871  8d0c88               lea ecx, [eax + ecx*4]
// 00794874  e827feffff           call 0x7946a0
// 00794879  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0079487f  46                   inc esi
// 00794880  3b7004               cmp esi, dword ptr [eax + 4]
// 00794883  7cd0                 jl 0x794855
// 00794885  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 0079488b  83791000             cmp dword ptr [ecx + 0x10], 0
// 0079488f  5e                   pop esi
// 00794890  7413                 je 0x7948a5
// 00794892  837f7000             cmp dword ptr [edi + 0x70], 0
// 00794896  750d                 jne 0x7948a5
// 00794898  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0079489b  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 007948a5  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 007948ab  8b08                 mov ecx, dword ptr [eax]
// 007948ad  51                   push ecx
// 007948ae  e897c0f0ff           call 0x6a094a
// 007948b3  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 007948b9  52                   push edx
// 007948ba  e8bbbdf0ff           call 0x6a067a
// 007948bf  83c408               add esp, 8
// 007948c2  5f                   pop edi
// 007948c3  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
