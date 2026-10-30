// roc 2012-06 00985260  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00985260
//
// 00985260  83ec08               sub esp, 8
// 00985263  56                   push esi
// 00985264  8d442404             lea eax, [esp + 4]
// 00985268  50                   push eax
// 00985269  8bf1                 mov esi, ecx
// 0098526b  ff158c3ab200         call dword ptr [0xb23a8c]
// 00985271  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00985277  8b4220               mov eax, dword ptr [edx + 0x20]
// 0098527a  8d4c2404             lea ecx, [esp + 4]
// 0098527e  51                   push ecx
// 0098527f  50                   push eax
// 00985280  ff15883ab200         call dword ptr [0xb23a88]
// 00985286  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0098528a  8b542404             mov edx, dword ptr [esp + 4]
// 0098528e  51                   push ecx
// 0098528f  52                   push edx
// 00985290  81c6c0000000         add esi, 0xc0
// 00985296  56                   push esi
// 00985297  ff15483bb200         call dword ptr [0xb23b48]
// 0098529d  5e                   pop esi
// 0098529e  83c408               add esp, 8
// 009852a1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
