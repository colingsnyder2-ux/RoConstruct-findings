// roc 2007-03 0070bf90  unit: seg_00700000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070bf90
//
// 0070bf90  8b442408             mov eax, dword ptr [esp + 8]
// 0070bf94  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070bf98  56                   push esi
// 0070bf99  57                   push edi
// 0070bf9a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070bf9e  8d48ff               lea ecx, [eax - 1]
// 0070bfa1  0fafcf               imul ecx, edi
// 0070bfa4  85c0                 test eax, eax
// 0070bfa6  8d348a               lea esi, [edx + ecx*4]
// 0070bfa9  7e34                 jle 0x70bfdf
// 0070bfab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070bfaf  53                   push ebx
// 0070bfb0  55                   push ebp
// 0070bfb1  8bd8                 mov ebx, eax
// 0070bfb3  85ff                 test edi, edi
// 0070bfb5  8bc6                 mov eax, esi
// 0070bfb7  7e16                 jle 0x70bfcf
// 0070bfb9  8bd7                 mov edx, edi
// 0070bfbb  eb03                 jmp 0x70bfc0
// 0070bfbd  8d4900               lea ecx, [ecx]
// 0070bfc0  8b28                 mov ebp, dword ptr [eax]
// 0070bfc2  8929                 mov dword ptr [ecx], ebp
// 0070bfc4  83c104               add ecx, 4
// 0070bfc7  83c004               add eax, 4
// 0070bfca  83ea01               sub edx, 1
// 0070bfcd  75f1                 jne 0x70bfc0
// 0070bfcf  8d04bd00000000       lea eax, [edi*4]
// 0070bfd6  2bf0                 sub esi, eax
// 0070bfd8  83eb01               sub ebx, 1
// 0070bfdb  75d6                 jne 0x70bfb3
// 0070bfdd  5d                   pop ebp
// 0070bfde  5b                   pop ebx
// 0070bfdf  5f                   pop edi
// 0070bfe0  5e                   pop esi
// 0070bfe1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsBottom@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
