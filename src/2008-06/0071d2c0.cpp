// roc 2008-06 0071d2c0  unit: PAUHWND__::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d2c0
//
// 0071d2c0  56                   push esi
// 0071d2c1  8b742408             mov esi, dword ptr [esp + 8]
// 0071d2c5  85f6                 test esi, esi
// 0071d2c7  747c                 je 0x71d345
// 0071d2c9  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071d2cc  85d2                 test edx, edx
// 0071d2ce  7475                 je 0x71d345
// 0071d2d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071d2d4  3d00020000           cmp eax, 0x200
// 0071d2d9  7747                 ja 0x71d322
// 0071d2db  7411                 je 0x71d2ee
// 0071d2dd  0560ffffff           add eax, 0xffffff60
// 0071d2e2  83f807               cmp eax, 7
// 0071d2e5  775e                 ja 0x71d345
// 0071d2e7  ff24854cd37100       jmp dword ptr [eax*4 + 0x71d34c]
// 0071d2ee  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0071d2f5  7f4e                 jg 0x71d345
// 0071d2f7  8d442410             lea eax, [esp + 0x10]
// 0071d2fb  50                   push eax
// 0071d2fc  52                   push edx
// 0071d2fd  ff15a02d8000         call dword ptr [0x802da0]
// 0071d303  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071d307  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071d30b  83ec08               sub esp, 8
// 0071d30e  8bc4                 mov eax, esp
// 0071d310  8908                 mov dword ptr [eax], ecx
// 0071d312  6a00                 push 0
// 0071d314  8bce                 mov ecx, esi
// 0071d316  895004               mov dword ptr [eax + 4], edx
// 0071d319  e80284f9ff           call 0x6b5720
// 0071d31e  5e                   pop esi
// 0071d31f  c21000               ret 0x10
// 0071d322  05fffdffff           add eax, 0xfffffdff
// 0071d327  83f806               cmp eax, 6
// 0071d32a  7719                 ja 0x71d345
// 0071d32c  0fb69078d37100       movzx edx, byte ptr [eax + 0x71d378]
// 0071d333  ff24956cd37100       jmp dword ptr [edx*4 + 0x71d36c]
// 0071d33a  83790400             cmp dword ptr [ecx + 4], 0
// 0071d33e  7f05                 jg 0x71d345
// 0071d340  e88bfeffff           call 0x71d1d0
// 0071d345  5e                   pop esi
// 0071d346  c21000               ret 0x10
// 0071d349  8d4900               lea ecx, [ecx]
// 0071d34c  ee                   out dx, al
// 0071d34d  d27100               sal byte ptr [ecx], cl
// 0071d350  40                   inc eax
// 0071d351  d37100               sal dword ptr [ecx], cl
// 0071d354  3ad3                 cmp dl, bl
// 0071d356  7100                 jno 0x71d358
// 0071d358  45                   inc ebp
// 0071d359  d37100               sal dword ptr [ecx], cl
// 0071d35c  40                   inc eax
// 0071d35d  d37100               sal dword ptr [ecx], cl
// 0071d360  45                   inc ebp
// 0071d361  d37100               sal dword ptr [ecx], cl
// 0071d364  45                   inc ebp
// 0071d365  d37100               sal dword ptr [ecx], cl
// 0071d368  40                   inc eax
// 0071d369  d37100               sal dword ptr [ecx], cl
// 0071d36c  40                   inc eax
// 0071d36d  d37100               sal dword ptr [ecx], cl
// 0071d370  3ad3                 cmp dl, bl
// 0071d372  7100                 jno 0x71d374
// 0071d374  45                   inc ebp
// 0071d375  d37100               sal dword ptr [ecx], cl
// 0071d378  0001                 add byte ptr [ecx], al
// 0071d37a  0200                 add al, byte ptr [eax]
// 0071d37c  0202                 add al, byte ptr [edx]
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPMouseManager.cpp (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPMouseManager.cpp
