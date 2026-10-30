// roc 2009-12 00858720  unit: CXTPTabClientWnd  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858720
//
// 00858720  56                   push esi
// 00858721  8bf1                 mov esi, ecx
// 00858723  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085872a  743e                 je 0x85876a
// 0085872c  57                   push edi
// 0085872d  33ff                 xor edi, edi
// 0085872f  e81cdfffff           call 0x856650
// 00858734  85c0                 test eax, eax
// 00858736  7e31                 jle 0x858769
// 00858738  eb06                 jmp 0x858740
// 0085873a  8d9b00000000         lea ebx, [ebx]
// 00858740  8b442414             mov eax, dword ptr [esp + 0x14]
// 00858744  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00858748  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085874b  50                   push eax
// 0085874c  51                   push ecx
// 0085874d  52                   push edx
// 0085874e  57                   push edi
// 0085874f  8bce                 mov ecx, esi
// 00858751  e8eaedffff           call 0x857540
// 00858756  8bc8                 mov ecx, eax
// 00858758  e8e3720700           call 0x8cfa40
// 0085875d  8bce                 mov ecx, esi
// 0085875f  47                   inc edi
// 00858760  e8ebdeffff           call 0x856650
// 00858765  3bf8                 cmp edi, eax
// 00858767  7cd7                 jl 0x858740
// 00858769  5f                   pop edi
// 0085876a  8bce                 mov ecx, esi
// 0085876c  e8bfb6f9ff           call 0x7f3e30
// 00858771  5e                   pop esi
// 00858772  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPTabClientWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp