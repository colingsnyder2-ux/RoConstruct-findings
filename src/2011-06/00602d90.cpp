// roc 2011-06 00602d90  unit: RBX::UnifiedWidget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602d90
//
// 00602d90  56                   push esi
// 00602d91  8bf1                 mov esi, ecx
// 00602d93  8b4604               mov eax, dword ptr [esi + 4]
// 00602d96  83f804               cmp eax, 4
// 00602d99  750f                 jne 0x602daa
// 00602d9b  8a4608               mov al, byte ptr [esi + 8]
// 00602d9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00602da2  8801                 mov byte ptr [ecx], al
// 00602da4  b001                 mov al, 1
// 00602da6  5e                   pop esi
// 00602da7  c20400               ret 4
// 00602daa  57                   push edi
// 00602dab  83f802               cmp eax, 2
// 00602dae  752f                 jne 0x602ddf
// 00602db0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00602db4  8b5608               mov edx, dword ptr [esi + 8]
// 00602db7  57                   push edi
// 00602db8  52                   push edx
// 00602db9  e862d20400           call 0x650020
// 00602dbe  83c408               add esp, 8
// 00602dc1  84c0                 test al, al
// 00602dc3  741a                 je 0x602ddf
// 00602dc5  8bce                 mov ecx, esi
// 00602dc7  e8e4fcffff           call 0x602ab0
// 00602dcc  8a07                 mov al, byte ptr [edi]
// 00602dce  884608               mov byte ptr [esi + 8], al
// 00602dd1  5f                   pop edi
// 00602dd2  c7460404000000       mov dword ptr [esi + 4], 4
// 00602dd9  b001                 mov al, 1
// 00602ddb  5e                   pop esi
// 00602ddc  c20400               ret 4
// 00602ddf  5f                   pop edi
// 00602de0  32c0                 xor al, al
// 00602de2  5e                   pop esi
// 00602de3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
