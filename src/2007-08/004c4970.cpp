// roc 2007-08 004c4970  unit: RakPeer  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4970
//
// 004c4970  83ec54               sub esp, 0x54
// 004c4973  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c4978  33c4                 xor eax, esp
// 004c497a  89442450             mov dword ptr [esp + 0x50], eax
// 004c497e  57                   push edi
// 004c497f  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004c4983  6a50                 push 0x50
// 004c4985  8d442408             lea eax, [esp + 8]
// 004c4989  50                   push eax
// 004c498a  ff1564ef7700         call dword ptr [0x77ef64]
// 004c4990  83f8ff               cmp eax, -1
// 004c4993  745b                 je 0x4c49f0
// 004c4995  53                   push ebx
// 004c4996  8d4c2408             lea ecx, [esp + 8]
// 004c499a  51                   push ecx
// 004c499b  ff1554ef7700         call dword ptr [0x77ef54]
// 004c49a1  8bd8                 mov ebx, eax
// 004c49a3  85db                 test ebx, ebx
// 004c49a5  7448                 je 0x4c49ef
// 004c49a7  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004c49aa  833800               cmp dword ptr [eax], 0
// 004c49ad  7440                 je 0x4c49ef
// 004c49af  55                   push ebp
// 004c49b0  8b2d2cef7700         mov ebp, dword ptr [0x77ef2c]
// 004c49b6  56                   push esi
// 004c49b7  33f6                 xor esi, esi
// 004c49b9  8da42400000000       lea esp, [esp]
// 004c49c0  83fe28               cmp esi, 0x28
// 004c49c3  7d28                 jge 0x4c49ed
// 004c49c5  8b1406               mov edx, dword ptr [esi + eax]
// 004c49c8  8b02                 mov eax, dword ptr [edx]
// 004c49ca  50                   push eax
// 004c49cb  ffd5                 call ebp
// 004c49cd  8bd7                 mov edx, edi
// 004c49cf  90                   nop 
// 004c49d0  8a08                 mov cl, byte ptr [eax]
// 004c49d2  880a                 mov byte ptr [edx], cl
// 004c49d4  83c001               add eax, 1
// 004c49d7  83c201               add edx, 1
// 004c49da  84c9                 test cl, cl
// 004c49dc  75f2                 jne 0x4c49d0
// 004c49de  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004c49e1  83c604               add esi, 4
// 004c49e4  83c710               add edi, 0x10
// 004c49e7  833c0600             cmp dword ptr [esi + eax], 0
// 004c49eb  75d3                 jne 0x4c49c0
// 004c49ed  5e                   pop esi
// 004c49ee  5d                   pop ebp
// 004c49ef  5b                   pop ebx
// 004c49f0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004c49f4  5f                   pop edi
// 004c49f5  33cc                 xor ecx, esp
// 004c49f7  e822c01600           call 0x630a1e
// 004c49fc  83c454               add esp, 0x54
// 004c49ff  c20400               ret 4
// library openrbx-raknet/SocketLayer.cpp (function ?GetMyIP@SocketLayer@@QAEXQAY0BA@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet SocketLayer.cpp
