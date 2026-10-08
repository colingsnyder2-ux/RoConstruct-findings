// roc 2009-06 00609da0  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609da0
//
// 00609da0  56                   push esi
// 00609da1  8bf1                 mov esi, ecx
// 00609da3  8b4604               mov eax, dword ptr [esi + 4]
// 00609da6  83f804               cmp eax, 4
// 00609da9  750f                 jne 0x609dba
// 00609dab  8a4608               mov al, byte ptr [esi + 8]
// 00609dae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00609db2  8801                 mov byte ptr [ecx], al
// 00609db4  b001                 mov al, 1
// 00609db6  5e                   pop esi
// 00609db7  c20400               ret 4
// 00609dba  57                   push edi
// 00609dbb  83f802               cmp eax, 2
// 00609dbe  752f                 jne 0x609def
// 00609dc0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00609dc4  8b5608               mov edx, dword ptr [esi + 8]
// 00609dc7  57                   push edi
// 00609dc8  52                   push edx
// 00609dc9  e832150400           call 0x64b300
// 00609dce  83c408               add esp, 8
// 00609dd1  84c0                 test al, al
// 00609dd3  741a                 je 0x609def
// 00609dd5  8bce                 mov ecx, esi
// 00609dd7  e8f4fcffff           call 0x609ad0
// 00609ddc  8a07                 mov al, byte ptr [edi]
// 00609dde  884608               mov byte ptr [esi + 8], al
// 00609de1  5f                   pop edi
// 00609de2  c7460404000000       mov dword ptr [esi + 4], 4
// 00609de9  b001                 mov al, 1
// 00609deb  5e                   pop esi
// 00609dec  c20400               ret 4
// 00609def  5f                   pop edi
// 00609df0  32c0                 xor al, al
// 00609df2  5e                   pop esi
// 00609df3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
