// roc 2010-06 0088f050  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088f050
//
// 0088f050  53                   push ebx
// 0088f051  55                   push ebp
// 0088f052  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0088f056  56                   push esi
// 0088f057  8bd9                 mov ebx, ecx
// 0088f059  8b7378               mov esi, dword ptr [ebx + 0x78]
// 0088f05c  57                   push edi
// 0088f05d  83cfff               or edi, 0xffffffff
// 0088f060  896b70               mov dword ptr [ebx + 0x70], ebp
// 0088f063  85f6                 test esi, esi
// 0088f065  741b                 je 0x88f082
// 0088f067  8b4608               mov eax, dword ptr [esi + 8]
// 0088f06a  85c0                 test eax, eax
// 0088f06c  740d                 je 0x88f07b
// 0088f06e  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 0088f071  7508                 jne 0x88f07b
// 0088f073  57                   push edi
// 0088f074  8bcb                 mov ecx, ebx
// 0088f076  e895ffffff           call 0x88f010
// 0088f07b  8b36                 mov esi, dword ptr [esi]
// 0088f07d  47                   inc edi
// 0088f07e  85f6                 test esi, esi
// 0088f080  75e5                 jne 0x88f067
// 0088f082  5f                   pop edi
// 0088f083  5e                   pop esi
// 0088f084  5d                   pop ebp
// 0088f085  5b                   pop ebx
// 0088f086  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedColor@CXTColorHex@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp