// roc 2009-06 008197a0  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008197a0
//
// 008197a0  83ec10               sub esp, 0x10
// 008197a3  53                   push ebx
// 008197a4  57                   push edi
// 008197a5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008197a9  8bd9                 mov ebx, ecx
// 008197ab  85ff                 test edi, edi
// 008197ad  0f84a9000000         je 0x81985c
// 008197b3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 008197b7  0f849f000000         je 0x81985c
// 008197bd  56                   push esi
// 008197be  8bcf                 mov ecx, edi
// 008197c0  e8ebb5c2ff           call 0x444db0
// 008197c5  8bf0                 mov esi, eax
// 008197c7  85f6                 test esi, esi
// 008197c9  0f848c000000         je 0x81985b
// 008197cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008197d3  8b542424             mov edx, dword ptr [esp + 0x24]
// 008197d7  8b03                 mov eax, dword ptr [ebx]
// 008197d9  55                   push ebp
// 008197da  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008197de  57                   push edi
// 008197df  6a00                 push 0
// 008197e1  51                   push ecx
// 008197e2  52                   push edx
// 008197e3  8b5050               mov edx, dword ptr [eax + 0x50]
// 008197e6  55                   push ebp
// 008197e7  8d4c2424             lea ecx, [esp + 0x24]
// 008197eb  51                   push ecx
// 008197ec  8bcb                 mov ecx, ebx
// 008197ee  ffd2                 call edx
// 008197f0  8a442428             mov al, byte ptr [esp + 0x28]
// 008197f4  8bcf                 mov ecx, edi
// 008197f6  a804                 test al, 4
// 008197f8  741c                 je 0x819816
// 008197fa  8d442418             lea eax, [esp + 0x18]
// 008197fe  50                   push eax
// 008197ff  e8ec1affff           call 0x80b2f0
// 00819804  8b4804               mov ecx, dword ptr [eax + 4]
// 00819807  8b10                 mov edx, dword ptr [eax]
// 00819809  51                   push ecx
// 0081980a  52                   push edx
// 0081980b  6a01                 push 1
// 0081980d  8bce                 mov ecx, esi
// 0081980f  e89cf8f1ff           call 0x7390b0
// 00819814  eb31                 jmp 0x819847
// 00819816  8d542418             lea edx, [esp + 0x18]
// 0081981a  52                   push edx
// 0081981b  a801                 test al, 1
// 0081981d  7415                 je 0x819834
// 0081981f  e8cc1affff           call 0x80b2f0
// 00819824  8b4804               mov ecx, dword ptr [eax + 4]
// 00819827  8b10                 mov edx, dword ptr [eax]
// 00819829  51                   push ecx
// 0081982a  52                   push edx
// 0081982b  8bce                 mov ecx, esi
// 0081982d  e8bea2f1ff           call 0x733af0
// 00819832  eb13                 jmp 0x819847
// 00819834  e8b71affff           call 0x80b2f0
// 00819839  8b4804               mov ecx, dword ptr [eax + 4]
// 0081983c  8b10                 mov edx, dword ptr [eax]
// 0081983e  51                   push ecx
// 0081983f  52                   push edx
// 00819840  8bce                 mov ecx, esi
// 00819842  e87987f1ff           call 0x731fc0
// 00819847  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081984b  50                   push eax
// 0081984c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00819850  50                   push eax
// 00819851  51                   push ecx
// 00819852  55                   push ebp
// 00819853  8bce                 mov ecx, esi
// 00819855  e86605f2ff           call 0x739dc0
// 0081985a  5d                   pop ebp
// 0081985b  5e                   pop esi
// 0081985c  5f                   pop edi
// 0081985d  5b                   pop ebx
// 0081985e  83c410               add esp, 0x10
// 00819861  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
