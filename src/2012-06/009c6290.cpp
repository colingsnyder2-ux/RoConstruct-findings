// roc 2012-06 009c6290  unit: CXTPControls  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6290
//
// 009c6290  56                   push esi
// 009c6291  57                   push edi
// 009c6292  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c6296  8b4720               mov eax, dword ptr [edi + 0x20]
// 009c6299  50                   push eax
// 009c629a  8bf1                 mov esi, ecx
// 009c629c  ff15143bb200         call dword ptr [0xb23b14]
// 009c62a2  85c0                 test eax, eax
// 009c62a4  7427                 je 0x9c62cd
// 009c62a6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c62aa  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c62ae  51                   push ecx
// 009c62af  52                   push edx
// 009c62b0  8bce                 mov ecx, esi
// 009c62b2  e879feffff           call 0x9c6130
// 009c62b7  85c0                 test eax, eax
// 009c62b9  7412                 je 0x9c62cd
// 009c62bb  56                   push esi
// 009c62bc  8bcf                 mov ecx, edi
// 009c62be  e8e7c7fbff           call 0x982aaa
// 009c62c3  5f                   pop edi
// 009c62c4  b801000000           mov eax, 1
// 009c62c9  5e                   pop esi
// 009c62ca  c20c00               ret 0xc
// 009c62cd  5f                   pop edi
// 009c62ce  33c0                 xor eax, eax
// 009c62d0  5e                   pop esi
// 009c62d1  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Util\XTPWindowPos.cpp (function ?LoadWindowPos@CXTPWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPWindowPos.cpp
