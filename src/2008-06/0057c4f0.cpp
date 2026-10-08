// roc 2008-06 0057c4f0  unit: RBX::VInstance::?$SignalDesc  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c4f0
//
// 0057c4f0  56                   push esi
// 0057c4f1  8bf1                 mov esi, ecx
// 0057c4f3  8b4604               mov eax, dword ptr [esi + 4]
// 0057c4f6  83f805               cmp eax, 5
// 0057c4f9  750f                 jne 0x57c50a
// 0057c4fb  8b4608               mov eax, dword ptr [esi + 8]
// 0057c4fe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c502  8901                 mov dword ptr [ecx], eax
// 0057c504  b001                 mov al, 1
// 0057c506  5e                   pop esi
// 0057c507  c20400               ret 4
// 0057c50a  57                   push edi
// 0057c50b  83f802               cmp eax, 2
// 0057c50e  752f                 jne 0x57c53f
// 0057c510  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057c514  8b5608               mov edx, dword ptr [esi + 8]
// 0057c517  57                   push edi
// 0057c518  52                   push edx
// 0057c519  e882200400           call 0x5be5a0
// 0057c51e  83c408               add esp, 8
// 0057c521  84c0                 test al, al
// 0057c523  741a                 je 0x57c53f
// 0057c525  8bce                 mov ecx, esi
// 0057c527  e8a4fdffff           call 0x57c2d0
// 0057c52c  8b07                 mov eax, dword ptr [edi]
// 0057c52e  894608               mov dword ptr [esi + 8], eax
// 0057c531  5f                   pop edi
// 0057c532  c7460405000000       mov dword ptr [esi + 4], 5
// 0057c539  b001                 mov al, 1
// 0057c53b  5e                   pop esi
// 0057c53c  c20400               ret 4
// 0057c53f  5f                   pop edi
// 0057c540  32c0                 xor al, al
// 0057c542  5e                   pop esi
// 0057c543  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
