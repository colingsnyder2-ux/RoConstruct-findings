// roc 2009-12 00677150  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677150
//
// 00677150  56                   push esi
// 00677151  8bf1                 mov esi, ecx
// 00677153  8b4604               mov eax, dword ptr [esi + 4]
// 00677156  83f805               cmp eax, 5
// 00677159  750f                 jne 0x67716a
// 0067715b  8b4608               mov eax, dword ptr [esi + 8]
// 0067715e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00677162  8901                 mov dword ptr [ecx], eax
// 00677164  b001                 mov al, 1
// 00677166  5e                   pop esi
// 00677167  c20400               ret 4
// 0067716a  57                   push edi
// 0067716b  83f802               cmp eax, 2
// 0067716e  752f                 jne 0x67719f
// 00677170  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00677174  8b5608               mov edx, dword ptr [esi + 8]
// 00677177  57                   push edi
// 00677178  52                   push edx
// 00677179  e8124e0400           call 0x6bbf90
// 0067717e  83c408               add esp, 8
// 00677181  84c0                 test al, al
// 00677183  741a                 je 0x67719f
// 00677185  8bce                 mov ecx, esi
// 00677187  e8b4fdffff           call 0x676f40
// 0067718c  8b07                 mov eax, dword ptr [edi]
// 0067718e  894608               mov dword ptr [esi + 8], eax
// 00677191  5f                   pop edi
// 00677192  c7460405000000       mov dword ptr [esi + 4], 5
// 00677199  b001                 mov al, 1
// 0067719b  5e                   pop esi
// 0067719c  c20400               ret 4
// 0067719f  5f                   pop edi
// 006771a0  32c0                 xor al, al
// 006771a2  5e                   pop esi
// 006771a3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
