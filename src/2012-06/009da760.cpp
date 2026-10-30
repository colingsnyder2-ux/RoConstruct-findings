// roc 2012-06 009da760  unit: CXTPPropExchangeXMLNode  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009da760
//
// 009da760  83ec20               sub esp, 0x20
// 009da763  56                   push esi
// 009da764  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009da768  33c0                 xor eax, eax
// 009da76a  57                   push edi
// 009da76b  8b3db429b200         mov edi, dword ptr [0xb229b4]
// 009da771  89442418             mov dword ptr [esp + 0x18], eax
// 009da775  8944241c             mov dword ptr [esp + 0x1c], eax
// 009da779  89442420             mov dword ptr [esp + 0x20], eax
// 009da77d  89442424             mov dword ptr [esp + 0x24], eax
// 009da781  8d442424             lea eax, [esp + 0x24]
// 009da785  50                   push eax
// 009da786  8d4c2426             lea ecx, [esp + 0x26]
// 009da78a  51                   push ecx
// 009da78b  8d542428             lea edx, [esp + 0x28]
// 009da78f  52                   push edx
// 009da790  8d442426             lea eax, [esp + 0x26]
// 009da794  50                   push eax
// 009da795  8d4c242e             lea ecx, [esp + 0x2e]
// 009da799  51                   push ecx
// 009da79a  8d54242c             lea edx, [esp + 0x2c]
// 009da79e  52                   push edx
// 009da79f  68f461c100           push 0xc161f4
// 009da7a4  56                   push esi
// 009da7a5  ffd7                 call edi
// 009da7a7  83c420               add esp, 0x20
// 009da7aa  83f803               cmp eax, 3
// 009da7ad  0f848d000000         je 0x9da840
// 009da7b3  83f805               cmp eax, 5
// 009da7b6  0f8484000000         je 0x9da840
// 009da7bc  83f806               cmp eax, 6
// 009da7bf  747f                 je 0x9da840
// 009da7c1  33c0                 xor eax, eax
// 009da7c3  89442418             mov dword ptr [esp + 0x18], eax
// 009da7c7  8944241c             mov dword ptr [esp + 0x1c], eax
// 009da7cb  89442420             mov dword ptr [esp + 0x20], eax
// 009da7cf  89442424             mov dword ptr [esp + 0x24], eax
// 009da7d3  8d442424             lea eax, [esp + 0x24]
// 009da7d7  50                   push eax
// 009da7d8  8d4c2426             lea ecx, [esp + 0x26]
// 009da7dc  51                   push ecx
// 009da7dd  8d542428             lea edx, [esp + 0x28]
// 009da7e1  52                   push edx
// 009da7e2  68e861c100           push 0xc161e8
// 009da7e7  56                   push esi
// 009da7e8  ffd7                 call edi
// 009da7ea  83c414               add esp, 0x14
// 009da7ed  83f802               cmp eax, 2
// 009da7f0  7405                 je 0x9da7f7
// 009da7f2  83f803               cmp eax, 3
// 009da7f5  7572                 jne 0x9da869
// 009da7f7  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 009da7fc  0fb7542422           movzx edx, word ptr [esp + 0x22]
// 009da801  8bc8                 mov ecx, eax
// 009da803  c1e104               shl ecx, 4
// 009da806  2bc8                 sub ecx, eax
// 009da808  8d048a               lea eax, [edx + ecx*4]
// 009da80b  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 009da810  8bc8                 mov ecx, eax
// 009da812  c1e104               shl ecx, 4
// 009da815  2bc8                 sub ecx, eax
// 009da817  8d048a               lea eax, [edx + ecx*4]
// 009da81a  89442408             mov dword ptr [esp + 8], eax
// 009da81e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009da822  5f                   pop edi
// 009da823  db442404             fild dword ptr [esp + 4]
// 009da827  c7400800000000       mov dword ptr [eax + 8], 0
// 009da82e  5e                   pop esi
// 009da82f  dc35e061c100         fdiv qword ptr [0xc161e0]
// 009da835  dd18                 fstp qword ptr [eax]
// 009da837  b801000000           mov eax, 1
// 009da83c  83c420               add esp, 0x20
// 009da83f  c3                   ret 
// 009da840  d9ee                 fldz 
// 009da842  8d4c240c             lea ecx, [esp + 0xc]
// 009da846  51                   push ecx
// 009da847  dd5c2410             fstp qword ptr [esp + 0x10]
// 009da84b  8d54241c             lea edx, [esp + 0x1c]
// 009da84f  52                   push edx
// 009da850  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009da858  e8333bacff           call 0x49e390
// 009da85d  83c408               add esp, 8
// 009da860  f7d8                 neg eax
// 009da862  1bc0                 sbb eax, eax
// 009da864  83c001               add eax, 1
// 009da867  7408                 je 0x9da871
// 009da869  5f                   pop edi
// 009da86a  33c0                 xor eax, eax
// 009da86c  5e                   pop esi
// 009da86d  83c420               add esp, 0x20
// 009da870  c3                   ret 
// 009da871  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009da875  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009da879  8911                 mov dword ptr [ecx], edx
// 009da87b  8b542410             mov edx, dword ptr [esp + 0x10]
// 009da87f  895104               mov dword ptr [ecx + 4], edx
// 009da882  5f                   pop edi
// 009da883  894108               mov dword ptr [ecx + 8], eax
// 009da886  b801000000           mov eax, 1
// 009da88b  5e                   pop esi
// 009da88c  83c420               add esp, 0x20
// 009da88f  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ParseDateTimeISO8601@@YAHAAVCOleDateTime@ATL@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
