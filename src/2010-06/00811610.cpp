// roc 2010-06 00811610  unit: CXTPDockingPane  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811610
//
// 00811610  83ec10               sub esp, 0x10
// 00811613  53                   push ebx
// 00811614  56                   push esi
// 00811615  57                   push edi
// 00811616  8d442430             lea eax, [esp + 0x30]
// 0081161a  50                   push eax
// 0081161b  8bf9                 mov edi, ecx
// 0081161d  e8cee4fdff           call 0x7efaf0
// 00811622  83f801               cmp eax, 1
// 00811625  7546                 jne 0x81166d
// 00811627  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0081162a  8d4c240c             lea ecx, [esp + 0xc]
// 0081162e  51                   push ecx
// 0081162f  52                   push edx
// 00811630  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 00811636  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081163a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081163e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00811642  8b542420             mov edx, dword ptr [esp + 0x20]
// 00811646  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0081164a  8932                 mov dword ptr [edx], esi
// 0081164c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00811650  2bce                 sub ecx, esi
// 00811652  8b742428             mov esi, dword ptr [esp + 0x28]
// 00811656  8917                 mov dword ptr [edi], edx
// 00811658  890e                 mov dword ptr [esi], ecx
// 0081165a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081165e  5f                   pop edi
// 0081165f  2bc2                 sub eax, edx
// 00811661  5e                   pop esi
// 00811662  8901                 mov dword ptr [ecx], eax
// 00811664  33c0                 xor eax, eax
// 00811666  5b                   pop ebx
// 00811667  83c410               add esp, 0x10
// 0081166a  c22000               ret 0x20
// 0081166d  8d442430             lea eax, [esp + 0x30]
// 00811671  50                   push eax
// 00811672  8bcf                 mov ecx, edi
// 00811674  e877e4fdff           call 0x7efaf0
// 00811679  85c0                 test eax, eax
// 0081167b  740e                 je 0x81168b
// 0081167d  5f                   pop edi
// 0081167e  5e                   pop esi
// 0081167f  b857000780           mov eax, 0x80070057
// 00811684  5b                   pop ebx
// 00811685  83c410               add esp, 0x10
// 00811688  c22000               ret 0x20
// 0081168b  8b47d8               mov eax, dword ptr [edi - 0x28]
// 0081168e  85c0                 test eax, eax
// 00811690  7407                 je 0x811699
// 00811692  8d70ac               lea esi, [eax - 0x54]
// 00811695  85f6                 test esi, esi
// 00811697  750e                 jne 0x8116a7
// 00811699  5f                   pop edi
// 0081169a  5e                   pop esi
// 0081169b  b801000000           mov eax, 1
// 008116a0  5b                   pop ebx
// 008116a1  83c410               add esp, 0x10
// 008116a4  c22000               ret 0x20
// 008116a7  8b5620               mov edx, dword ptr [esi + 0x20]
// 008116aa  8d4c240c             lea ecx, [esp + 0xc]
// 008116ae  51                   push ecx
// 008116af  52                   push edx
// 008116b0  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 008116b6  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 008116bc  83fa01               cmp edx, 1
// 008116bf  0f8e71ffffff         jle 0x811636
// 008116c5  33c9                 xor ecx, ecx
// 008116c7  85d2                 test edx, edx
// 008116c9  0f8e67ffffff         jle 0x811636
// 008116cf  90                   nop 
// 008116d0  85c9                 test ecx, ecx
// 008116d2  7c0f                 jl 0x8116e3
// 008116d4  3bca                 cmp ecx, edx
// 008116d6  7d0b                 jge 0x8116e3
// 008116d8  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008116de  8b0488               mov eax, dword ptr [eax + ecx*4]
// 008116e1  eb02                 jmp 0x8116e5
// 008116e3  33c0                 xor eax, eax
// 008116e5  8d5fa8               lea ebx, [edi - 0x58]
// 008116e8  395840               cmp dword ptr [eax + 0x40], ebx
// 008116eb  740a                 je 0x8116f7
// 008116ed  41                   inc ecx
// 008116ee  3bca                 cmp ecx, edx
// 008116f0  7cde                 jl 0x8116d0
// 008116f2  e93fffffff           jmp 0x811636
// 008116f7  8b5044               mov edx, dword ptr [eax + 0x44]
// 008116fa  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008116fd  8b7048               mov esi, dword ptr [eax + 0x48]
// 00811700  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00811704  8b4050               mov eax, dword ptr [eax + 0x50]
// 00811707  2bca                 sub ecx, edx
// 00811709  03d7                 add edx, edi
// 0081170b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0081170f  2bc6                 sub eax, esi
// 00811711  03f7                 add esi, edi
// 00811713  03ca                 add ecx, edx
// 00811715  03c6                 add eax, esi
// 00811717  8954240c             mov dword ptr [esp + 0xc], edx
// 0081171b  89742410             mov dword ptr [esp + 0x10], esi
// 0081171f  e91affffff           jmp 0x81163e
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleLocation@CXTPDockingPane@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
