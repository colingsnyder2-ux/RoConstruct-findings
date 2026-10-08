// roc 2007-03 00506130  unit: seg_00500000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506130
//
// 00506130  56                   push esi
// 00506131  b812000000           mov eax, 0x12
// 00506136  8bf1                 mov esi, ecx
// 00506138  57                   push edi
// 00506139  50                   push eax
// 0050613a  c706c8067a00         mov dword ptr [esi], 0x7a06c8
// 00506140  89460c               mov dword ptr [esi + 0xc], eax
// 00506143  894608               mov dword ptr [esi + 8], eax
// 00506146  ff153ce97700         call dword ptr [0x77e93c]
// 0050614c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00506150  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00506154  83c404               add esp, 4
// 00506157  85ff                 test edi, edi
// 00506159  894604               mov dword ptr [esi + 4], eax
// 0050615c  8908                 mov dword ptr [eax], ecx
// 0050615e  7406                 je 0x506166
// 00506160  8b4604               mov eax, dword ptr [esi + 4]
// 00506163  830840               or dword ptr [eax], 0x40
// 00506166  8b5604               mov edx, dword ptr [esi + 4]
// 00506169  668b442414           mov ax, word ptr [esp + 0x14]
// 0050616e  6689420a             mov word ptr [edx + 0xa], ax
// 00506172  8b4e04               mov ecx, dword ptr [esi + 4]
// 00506175  668b542418           mov dx, word ptr [esp + 0x18]
// 0050617a  6689510c             mov word ptr [ecx + 0xc], dx
// 0050617e  8b4604               mov eax, dword ptr [esi + 4]
// 00506181  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 00506186  6689480e             mov word ptr [eax + 0xe], cx
// 0050618a  8b5604               mov edx, dword ptr [esi + 4]
// 0050618d  668b442420           mov ax, word ptr [esp + 0x20]
// 00506192  66894210             mov word ptr [edx + 0x10], ax
// 00506196  8b4e04               mov ecx, dword ptr [esi + 4]
// 00506199  66c741080000         mov word ptr [ecx + 8], 0
// 0050619f  8b5604               mov edx, dword ptr [esi + 4]
// 005061a2  6a02                 push 2
// 005061a4  684ce57900           push 0x79e54c
// 005061a9  8bce                 mov ecx, esi
// 005061ab  c7420400000000       mov dword ptr [edx + 4], 0
// 005061b2  e8b9feffff           call 0x506070
// 005061b7  6a02                 push 2
// 005061b9  684ce57900           push 0x79e54c
// 005061be  8bce                 mov ecx, esi
// 005061c0  e8abfeffff           call 0x506070
// 005061c5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005061c9  50                   push eax
// 005061ca  8bce                 mov ecx, esi
// 005061cc  e8fffeffff           call 0x5060d0
// 005061d1  85ff                 test edi, edi
// 005061d3  7416                 je 0x5061eb
// 005061d5  6a02                 push 2
// 005061d7  8d4c242c             lea ecx, [esp + 0x2c]
// 005061db  51                   push ecx
// 005061dc  8bce                 mov ecx, esi
// 005061de  e88dfeffff           call 0x506070
// 005061e3  57                   push edi
// 005061e4  8bce                 mov ecx, esi
// 005061e6  e8e5feffff           call 0x5060d0
// 005061eb  5f                   pop edi
// 005061ec  8bc6                 mov eax, esi
// 005061ee  5e                   pop esi
// 005061ef  c22000               ret 0x20
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
