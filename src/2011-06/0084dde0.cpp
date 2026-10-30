// from server: 100% by auto
// roc 2011-06 0084dde0  unit: CXTPControls  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084dde0
//
// 0084dde0  56                   push esi
// 0084dde1  57                   push edi
// 0084dde2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084dde6  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084dde9  50                   push eax
// 0084ddea  8bf1                 mov esi, ecx
// 0084ddec  ff15ec1ba400         call dword ptr [0xa41bec]
// 0084ddf2  85c0                 test eax, eax
// 0084ddf4  7427                 je 0x84de1d
// 0084ddf6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084ddfa  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084ddfe  51                   push ecx
// 0084ddff  52                   push edx
// 0084de00  8bce                 mov ecx, esi
// 0084de02  e879feffff           call 0x84dc80
// 0084de07  85c0                 test eax, eax
// 0084de09  7412                 je 0x84de1d
// 0084de0b  56                   push esi
// 0084de0c  8bcf                 mov ecx, edi
// 0084de0e  e811ccfbff           call 0x80aa24
// 0084de13  5f                   pop edi
// 0084de14  b801000000           mov eax, 1
// 0084de19  5e                   pop esi
// 0084de1a  c20c00               ret 0xc
// 0084de1d  5f                   pop edi
// 0084de1e  33c0                 xor eax, eax
// 0084de20  5e                   pop esi
// 0084de21  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Util\XTPWindowPos.cpp (function ?LoadWindowPos@CXTPWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPWindowPos.cpp
