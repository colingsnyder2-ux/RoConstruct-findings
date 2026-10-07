// roc 2008-06 006dbfa0  unit: CRobloxTreeCtrl  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbfa0
//
// 006dbfa0  51                   push ecx
// 006dbfa1  56                   push esi
// 006dbfa2  8bf1                 mov esi, ecx
// 006dbfa4  837e0400             cmp dword ptr [esi + 4], 0
// 006dbfa8  c744240400000000     mov dword ptr [esp + 4], 0
// 006dbfb0  750a                 jne 0x6dbfbc
// 006dbfb2  b801000000           mov eax, 1
// 006dbfb7  5e                   pop esi
// 006dbfb8  59                   pop ecx
// 006dbfb9  c21000               ret 0x10
// 006dbfbc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006dbfc0  8b542414             mov edx, dword ptr [esp + 0x14]
// 006dbfc4  55                   push ebp
// 006dbfc5  57                   push edi
// 006dbfc6  8d44240c             lea eax, [esp + 0xc]
// 006dbfca  50                   push eax
// 006dbfcb  51                   push ecx
// 006dbfcc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dbfcf  52                   push edx
// 006dbfd0  e8874ffcff           call 0x6a0f5c
// 006dbfd5  8bf8                 mov edi, eax
// 006dbfd7  85ff                 test edi, edi
// 006dbfd9  7465                 je 0x6dc040
// 006dbfdb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dbfdf  83e010               and eax, 0x10
// 006dbfe2  7574                 jne 0x6dc058
// 006dbfe4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006dbfe8  85ed                 test ebp, ebp
// 006dbfea  7416                 je 0x6dc002
// 006dbfec  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dbfef  e816000e00           call 0x7bc00a
// 006dbff4  a900010000           test eax, 0x100
// 006dbff9  740b                 je 0x6dc006
// 006dbffb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dbfff  83e040               and eax, 0x40
// 006dc002  85c0                 test eax, eax
// 006dc004  7552                 jne 0x6dc058
// 006dc006  f644240c29           test byte ptr [esp + 0xc], 0x29
// 006dc00b  7533                 jne 0x6dc040
// 006dc00d  8b06                 mov eax, dword ptr [esi]
// 006dc00f  8b5058               mov edx, dword ptr [eax + 0x58]
// 006dc012  53                   push ebx
// 006dc013  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006dc017  53                   push ebx
// 006dc018  55                   push ebp
// 006dc019  57                   push edi
// 006dc01a  8bce                 mov ecx, esi
// 006dc01c  ffd2                 call edx
// 006dc01e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006dc022  8b542420             mov edx, dword ptr [esp + 0x20]
// 006dc026  8b06                 mov eax, dword ptr [esi]
// 006dc028  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006dc02b  51                   push ecx
// 006dc02c  52                   push edx
// 006dc02d  53                   push ebx
// 006dc02e  55                   push ebp
// 006dc02f  57                   push edi
// 006dc030  8bce                 mov ecx, esi
// 006dc032  ffd0                 call eax
// 006dc034  0fb64638             movzx eax, byte ptr [esi + 0x38]
// 006dc038  5b                   pop ebx
// 006dc039  5f                   pop edi
// 006dc03a  5d                   pop ebp
// 006dc03b  5e                   pop esi
// 006dc03c  59                   pop ecx
// 006dc03d  c21000               ret 0x10
// 006dc040  8b442420             mov eax, dword ptr [esp + 0x20]
// 006dc044  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006dc048  8b16                 mov edx, dword ptr [esi]
// 006dc04a  8b5260               mov edx, dword ptr [edx + 0x60]
// 006dc04d  50                   push eax
// 006dc04e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006dc052  51                   push ecx
// 006dc053  50                   push eax
// 006dc054  8bce                 mov ecx, esi
// 006dc056  ffd2                 call edx
// 006dc058  5f                   pop edi
// 006dc059  5d                   pop ebp
// 006dc05a  b801000000           mov eax, 1
// 006dc05f  5e                   pop esi
// 006dc060  59                   pop ecx
// 006dc061  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnButtonDown@CXTTreeBase@@MAEHHIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
