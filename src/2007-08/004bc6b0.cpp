// roc 2007-08 004bc6b0  unit: RakPeer  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc6b0
//
// 004bc6b0  55                   push ebp
// 004bc6b1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004bc6b5  85ed                 test ebp, ebp
// 004bc6b7  56                   push esi
// 004bc6b8  57                   push edi
// 004bc6b9  8bf1                 mov esi, ecx
// 004bc6bb  0f84d2000000         je 0x4bc793
// 004bc6c1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bc6c5  85ff                 test edi, edi
// 004bc6c7  0f8cc6000000         jl 0x4bc793
// 004bc6cd  83be2c02000000       cmp dword ptr [esi + 0x22c], 0
// 004bc6d4  0f84b9000000         je 0x4bc793
// 004bc6da  8a4604               mov al, byte ptr [esi + 4]
// 004bc6dd  3c01                 cmp al, 1
// 004bc6df  0f84ae000000         je 0x4bc793
// 004bc6e5  53                   push ebx
// 004bc6e6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004bc6ea  84db                 test bl, bl
// 004bc6ec  7570                 jne 0x4bc75e
// 004bc6ee  685c2f8900           push 0x892f5c
// 004bc6f3  8d4c242c             lea ecx, [esp + 0x2c]
// 004bc6f7  e8846dfeff           call 0x4a3480
// 004bc6fc  84c0                 test al, al
// 004bc6fe  7409                 je 0x4bc709
// 004bc700  5b                   pop ebx
// 004bc701  5f                   pop edi
// 004bc702  5e                   pop esi
// 004bc703  32c0                 xor al, al
// 004bc705  5d                   pop ebp
// 004bc706  c22000               ret 0x20
// 004bc709  83be2c07000000       cmp dword ptr [esi + 0x72c], 0
// 004bc710  744c                 je 0x4bc75e
// 004bc712  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bc716  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bc71a  8b16                 mov edx, dword ptr [esi]
// 004bc71c  8b5268               mov edx, dword ptr [edx + 0x68]
// 004bc71f  50                   push eax
// 004bc720  51                   push ecx
// 004bc721  8bce                 mov ecx, esi
// 004bc723  ffd2                 call edx
// 004bc725  84c0                 test al, al
// 004bc727  7535                 jne 0x4bc75e
// 004bc729  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc72d  8b8e2c070000         mov ecx, dword ptr [esi + 0x72c]
// 004bc733  8b01                 mov eax, dword ptr [ecx]
// 004bc735  8b00                 mov eax, dword ptr [eax]
// 004bc737  52                   push edx
// 004bc738  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc73c  52                   push edx
// 004bc73d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc741  52                   push edx
// 004bc742  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc746  52                   push edx
// 004bc747  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc74b  52                   push edx
// 004bc74c  8d14fd00000000       lea edx, [edi*8]
// 004bc753  52                   push edx
// 004bc754  55                   push ebp
// 004bc755  ffd0                 call eax
// 004bc757  5b                   pop ebx
// 004bc758  5f                   pop edi
// 004bc759  5e                   pop esi
// 004bc75a  5d                   pop ebp
// 004bc75b  c22000               ret 0x20
// 004bc75e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004bc762  8b542428             mov edx, dword ptr [esp + 0x28]
// 004bc766  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bc76a  6a00                 push 0
// 004bc76c  53                   push ebx
// 004bc76d  51                   push ecx
// 004bc76e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004bc772  52                   push edx
// 004bc773  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004bc777  50                   push eax
// 004bc778  51                   push ecx
// 004bc779  52                   push edx
// 004bc77a  8d04fd00000000       lea eax, [edi*8]
// 004bc781  50                   push eax
// 004bc782  55                   push ebp
// 004bc783  8bce                 mov ecx, esi
// 004bc785  e8b6e0ffff           call 0x4ba840
// 004bc78a  5b                   pop ebx
// 004bc78b  5f                   pop edi
// 004bc78c  5e                   pop esi
// 004bc78d  b001                 mov al, 1
// 004bc78f  5d                   pop ebp
// 004bc790  c22000               ret 0x20
// 004bc793  5f                   pop edi
// 004bc794  5e                   pop esi
// 004bc795  32c0                 xor al, al
// 004bc797  5d                   pop ebp
// 004bc798  c22000               ret 0x20
// library openrbx-raknet/RakPeer.cpp (function ?Send@RakPeer@@UAE_NPBDHW4PacketPriority@@W4PacketReliability@@DUSystemAddress@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
