// roc 2008-06 0057c5b0  unit: RBX::VInstance::?$SignalDesc  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c5b0
//
// 0057c5b0  56                   push esi
// 0057c5b1  8bf1                 mov esi, ecx
// 0057c5b3  8b4604               mov eax, dword ptr [esi + 4]
// 0057c5b6  83f804               cmp eax, 4
// 0057c5b9  750f                 jne 0x57c5ca
// 0057c5bb  8a4608               mov al, byte ptr [esi + 8]
// 0057c5be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c5c2  8801                 mov byte ptr [ecx], al
// 0057c5c4  b001                 mov al, 1
// 0057c5c6  5e                   pop esi
// 0057c5c7  c20400               ret 4
// 0057c5ca  57                   push edi
// 0057c5cb  83f802               cmp eax, 2
// 0057c5ce  752f                 jne 0x57c5ff
// 0057c5d0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057c5d4  8b5608               mov edx, dword ptr [esi + 8]
// 0057c5d7  57                   push edi
// 0057c5d8  52                   push edx
// 0057c5d9  e882180400           call 0x5bde60
// 0057c5de  83c408               add esp, 8
// 0057c5e1  84c0                 test al, al
// 0057c5e3  741a                 je 0x57c5ff
// 0057c5e5  8bce                 mov ecx, esi
// 0057c5e7  e8e4fcffff           call 0x57c2d0
// 0057c5ec  8a07                 mov al, byte ptr [edi]
// 0057c5ee  884608               mov byte ptr [esi + 8], al
// 0057c5f1  5f                   pop edi
// 0057c5f2  c7460404000000       mov dword ptr [esi + 4], 4
// 0057c5f9  b001                 mov al, 1
// 0057c5fb  5e                   pop esi
// 0057c5fc  c20400               ret 4
// 0057c5ff  5f                   pop edi
// 0057c600  32c0                 xor al, al
// 0057c602  5e                   pop esi
// 0057c603  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
