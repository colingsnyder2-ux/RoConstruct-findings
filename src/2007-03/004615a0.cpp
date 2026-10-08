// roc 2007-03 004615a0  unit: seg_00460000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004615a0
//
// 004615a0  8b442404             mov eax, dword ptr [esp + 4]
// 004615a4  53                   push ebx
// 004615a5  55                   push ebp
// 004615a6  56                   push esi
// 004615a7  8bf1                 mov esi, ecx
// 004615a9  8b5e04               mov ebx, dword ptr [esi + 4]
// 004615ac  894604               mov dword ptr [esi + 4], eax
// 004615af  f605a4668b0001       test byte ptr [0x8b66a4], 1
// 004615b6  7514                 jne 0x4615cc
// 004615b8  830da4668b0001       or dword ptr [0x8b66a4], 1
// 004615bf  bd0a000000           mov ebp, 0xa
// 004615c4  892da0668b00         mov dword ptr [0x8b66a0], ebp
// 004615ca  eb06                 jmp 0x4615d2
// 004615cc  8b2da0668b00         mov ebp, dword ptr [0x8b66a0]
// 004615d2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004615d5  57                   push edi
// 004615d6  8b7e04               mov edi, dword ptr [esi + 4]
// 004615d9  3bf9                 cmp edi, ecx
// 004615db  7e77                 jle 0x461654
// 004615dd  85c9                 test ecx, ecx
// 004615df  7509                 jne 0x4615ea
// 004615e1  894608               mov dword ptr [esi + 8], eax
// 004615e4  53                   push ebx
// 004615e5  e98e000000           jmp 0x461678
// 004615ea  3bfd                 cmp edi, ebp
// 004615ec  7d09                 jge 0x4615f7
// 004615ee  896e08               mov dword ptr [esi + 8], ebp
// 004615f1  53                   push ebx
// 004615f2  e981000000           jmp 0x461678
// 004615f7  d905104c7900         fld dword ptr [0x794c10]
// 004615fd  8bc1                 mov eax, ecx
// 004615ff  8d0440               lea eax, [eax + eax*2]
// 00461602  d95c2418             fstp dword ptr [esp + 0x18]
// 00461606  03c0                 add eax, eax
// 00461608  03c0                 add eax, eax
// 0046160a  3d801a0600           cmp eax, 0x61a80
// 0046160f  7608                 jbe 0x461619
// 00461611  d9050c4c7900         fld dword ptr [0x794c0c]
// 00461617  eb0d                 jmp 0x461626
// 00461619  3d00fa0000           cmp eax, 0xfa00
// 0046161e  760a                 jbe 0x46162a
// 00461620  d905084c7900         fld dword ptr [0x794c08]
// 00461626  d95c2418             fstp dword ptr [esp + 0x18]
// 0046162a  8be9                 mov ebp, ecx
// 0046162c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00461630  db442414             fild dword ptr [esp + 0x14]
// 00461634  d84c2418             fmul dword ptr [esp + 0x18]
// 00461638  e8c3db1b00           call 0x61f200
// 0046163d  2bc5                 sub eax, ebp
// 0046163f  03c7                 add eax, edi
// 00461641  894608               mov dword ptr [esi + 8], eax
// 00461644  8b0da0668b00         mov ecx, dword ptr [0x8b66a0]
// 0046164a  3bc1                 cmp eax, ecx
// 0046164c  7d03                 jge 0x461651
// 0046164e  894e08               mov dword ptr [esi + 8], ecx
// 00461651  53                   push ebx
// 00461652  eb24                 jmp 0x461678
// 00461654  b856555555           mov eax, 0x55555556
// 00461659  f7e9                 imul ecx
// 0046165b  8bc2                 mov eax, edx
// 0046165d  c1e81f               shr eax, 0x1f
// 00461660  03c2                 add eax, edx
// 00461662  3bf8                 cmp edi, eax
// 00461664  7f19                 jg 0x46167f
// 00461666  807c241800           cmp byte ptr [esp + 0x18], 0
// 0046166b  7412                 je 0x46167f
// 0046166d  3bfd                 cmp edi, ebp
// 0046166f  7e0e                 jle 0x46167f
// 00461671  3bfb                 cmp edi, ebx
// 00461673  7c02                 jl 0x461677
// 00461675  8bfb                 mov edi, ebx
// 00461677  57                   push edi
// 00461678  8bce                 mov ecx, esi
// 0046167a  e851f6ffff           call 0x460cd0
// 0046167f  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00461682  8bd3                 mov edx, ebx
// 00461684  5f                   pop edi
// 00461685  7d2b                 jge 0x4616b2
// 00461687  8d0c5b               lea ecx, [ebx + ebx*2]
// 0046168a  03c9                 add ecx, ecx
// 0046168c  03c9                 add ecx, ecx
// 0046168e  8bff                 mov edi, edi
// 00461690  8b06                 mov eax, dword ptr [esi]
// 00461692  03c1                 add eax, ecx
// 00461694  7411                 je 0x4616a7
// 00461696  c70000000000         mov dword ptr [eax], 0
// 0046169c  c7400400000000       mov dword ptr [eax + 4], 0
// 004616a3  c6400800             mov byte ptr [eax + 8], 0
// 004616a7  83c201               add edx, 1
// 004616aa  83c10c               add ecx, 0xc
// 004616ad  3b5604               cmp edx, dword ptr [esi + 4]
// 004616b0  7cde                 jl 0x461690
// 004616b2  5e                   pop esi
// 004616b3  5d                   pop ebp
// 004616b4  5b                   pop ebx
// 004616b5  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?resize@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
