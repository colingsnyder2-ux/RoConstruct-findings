// from server: 100% by auto
// roc 2008-06 00793150  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793150
//
// 00793150  53                   push ebx
// 00793151  56                   push esi
// 00793152  57                   push edi
// 00793153  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00793159  6a00                 push 0
// 0079315b  6a00                 push 0
// 0079315d  8bf1                 mov esi, ecx
// 0079315f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00793162  6a31                 push 0x31
// 00793164  50                   push eax
// 00793165  ffd7                 call edi
// 00793167  50                   push eax
// 00793168  e85ddff0ff           call 0x6a10ca
// 0079316d  8bd8                 mov ebx, eax
// 0079316f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00793173  85c0                 test eax, eax
// 00793175  7513                 jne 0x79318a
// 00793177  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0079317a  6a01                 push 1
// 0079317c  50                   push eax
// 0079317d  6a30                 push 0x30
// 0079317f  51                   push ecx
// 00793180  ffd7                 call edi
// 00793182  5f                   pop edi
// 00793183  5e                   pop esi
// 00793184  8bc3                 mov eax, ebx
// 00793186  5b                   pop ebx
// 00793187  c20400               ret 4
// 0079318a  8b4004               mov eax, dword ptr [eax + 4]
// 0079318d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00793190  6a01                 push 1
// 00793192  50                   push eax
// 00793193  6a30                 push 0x30
// 00793195  51                   push ecx
// 00793196  ffd7                 call edi
// 00793198  5f                   pop edi
// 00793199  5e                   pop esi
// 0079319a  8bc3                 mov eax, ebx
// 0079319c  5b                   pop ebx
// 0079319d  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?SetFontEx@CXTButton@@UAEPAVCFont@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
