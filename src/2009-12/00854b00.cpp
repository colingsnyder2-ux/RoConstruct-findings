// roc 2009-12 00854b00  unit: CXTPTabClientWnd::CWorkspace  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854b00
//
// 00854b00  6aff                 push -1
// 00854b02  68c3de9500           push 0x95dec3
// 00854b07  64a100000000         mov eax, dword ptr fs:[0]
// 00854b0d  50                   push eax
// 00854b0e  51                   push ecx
// 00854b0f  56                   push esi
// 00854b10  57                   push edi
// 00854b11  a10052b600           mov eax, dword ptr [0xb65200]
// 00854b16  33c4                 xor eax, esp
// 00854b18  50                   push eax
// 00854b19  8d442410             lea eax, [esp + 0x10]
// 00854b1d  64a300000000         mov dword ptr fs:[0], eax
// 00854b23  8bf1                 mov esi, ecx
// 00854b25  8974240c             mov dword ptr [esp + 0xc], esi
// 00854b29  8d7e58               lea edi, [esi + 0x58]
// 00854b2c  c70614c89f00         mov dword ptr [esi], 0x9fc814
// 00854b32  c70784c79f00         mov dword ptr [edi], 0x9fc784
// 00854b38  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00854b40  e899edf9ff           call 0x7f38de
// 00854b45  8bcf                 mov ecx, edi
// 00854b47  c644241800           mov byte ptr [esp + 0x18], 0
// 00854b4c  e81ffeffff           call 0x854970
// 00854b51  8bce                 mov ecx, esi
// 00854b53  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00854b5b  e8b6f7f9ff           call 0x7f4316
// 00854b60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00854b64  64890d00000000       mov dword ptr fs:[0], ecx
// 00854b6b  59                   pop ecx
// 00854b6c  5f                   pop edi
// 00854b6d  5e                   pop esi
// 00854b6e  83c410               add esp, 0x10
// 00854b71  c3                   ret 
// copied from an identical function in another client (function ??1CSingleWorkspace@CXTPTabClientWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp