// roc 2011-06 00847100  unit: CRobloxTreeCtrl  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847100
//
// 00847100  51                   push ecx
// 00847101  56                   push esi
// 00847102  8bf1                 mov esi, ecx
// 00847104  837e0400             cmp dword ptr [esi + 4], 0
// 00847108  c744240400000000     mov dword ptr [esp + 4], 0
// 00847110  750a                 jne 0x84711c
// 00847112  b801000000           mov eax, 1
// 00847117  5e                   pop esi
// 00847118  59                   pop ecx
// 00847119  c21000               ret 0x10
// 0084711c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00847120  8b542414             mov edx, dword ptr [esp + 0x14]
// 00847124  55                   push ebp
// 00847125  57                   push edi
// 00847126  8d44240c             lea eax, [esp + 0xc]
// 0084712a  50                   push eax
// 0084712b  51                   push ecx
// 0084712c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084712f  52                   push edx
// 00847130  e8dd38fcff           call 0x80aa12
// 00847135  8bf8                 mov edi, eax
// 00847137  85ff                 test edi, edi
// 00847139  7465                 je 0x8471a0
// 0084713b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084713f  83e010               and eax, 0x10
// 00847142  7574                 jne 0x8471b8
// 00847144  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00847148  85ed                 test ebp, ebp
// 0084714a  7416                 je 0x847162
// 0084714c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084714f  e8c4541800           call 0x9cc618
// 00847154  a900010000           test eax, 0x100
// 00847159  740b                 je 0x847166
// 0084715b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084715f  83e040               and eax, 0x40
// 00847162  85c0                 test eax, eax
// 00847164  7552                 jne 0x8471b8
// 00847166  f644240c29           test byte ptr [esp + 0xc], 0x29
// 0084716b  7533                 jne 0x8471a0
// 0084716d  8b06                 mov eax, dword ptr [esi]
// 0084716f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00847172  53                   push ebx
// 00847173  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00847177  53                   push ebx
// 00847178  55                   push ebp
// 00847179  57                   push edi
// 0084717a  8bce                 mov ecx, esi
// 0084717c  ffd2                 call edx
// 0084717e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00847182  8b542420             mov edx, dword ptr [esp + 0x20]
// 00847186  8b06                 mov eax, dword ptr [esi]
// 00847188  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0084718b  51                   push ecx
// 0084718c  52                   push edx
// 0084718d  53                   push ebx
// 0084718e  55                   push ebp
// 0084718f  57                   push edi
// 00847190  8bce                 mov ecx, esi
// 00847192  ffd0                 call eax
// 00847194  0fb64638             movzx eax, byte ptr [esi + 0x38]
// 00847198  5b                   pop ebx
// 00847199  5f                   pop edi
// 0084719a  5d                   pop ebp
// 0084719b  5e                   pop esi
// 0084719c  59                   pop ecx
// 0084719d  c21000               ret 0x10
// 008471a0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008471a4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008471a8  8b16                 mov edx, dword ptr [esi]
// 008471aa  8b5260               mov edx, dword ptr [edx + 0x60]
// 008471ad  50                   push eax
// 008471ae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008471b2  51                   push ecx
// 008471b3  50                   push eax
// 008471b4  8bce                 mov ecx, esi
// 008471b6  ffd2                 call edx
// 008471b8  5f                   pop edi
// 008471b9  5d                   pop ebp
// 008471ba  b801000000           mov eax, 1
// 008471bf  5e                   pop esi
// 008471c0  59                   pop ecx
// 008471c1  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnButtonDown@CXTPTreeBase@@MAEHHIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
