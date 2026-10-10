// roc 2008-06 006f5120  unit: CXTPControlLabel  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5120
//
// 006f5120  837c240400           cmp dword ptr [esp + 4], 0
// 006f5125  56                   push esi
// 006f5126  8bf1                 mov esi, ecx
// 006f5128  7552                 jne 0x6f517c
// 006f512a  e89160fbff           call 0x6ab1c0
// 006f512f  85c0                 test eax, eax
// 006f5131  7449                 je 0x6f517c
// 006f5133  8b06                 mov eax, dword ptr [esi]
// 006f5135  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 006f513b  8bce                 mov ecx, esi
// 006f513d  ffd2                 call edx
// 006f513f  85c0                 test eax, eax
// 006f5141  7439                 je 0x6f517c
// 006f5143  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006f5149  6a00                 push 0
// 006f514b  6aff                 push -1
// 006f514d  e87e1dfcff           call 0x6b6ed0
// 006f5152  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006f5158  8b01                 mov eax, dword ptr [ecx]
// 006f515a  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006f5160  6a00                 push 0
// 006f5162  6aff                 push -1
// 006f5164  ffd2                 call edx
// 006f5166  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f516a  8b06                 mov eax, dword ptr [esi]
// 006f516c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006f5170  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 006f5176  51                   push ecx
// 006f5177  52                   push edx
// 006f5178  8bce                 mov ecx, esi
// 006f517a  ffd0                 call eax
// 006f517c  5e                   pop esi
// 006f517d  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlExt.cpp (function ?OnClick@CXTPControlLabel@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp
