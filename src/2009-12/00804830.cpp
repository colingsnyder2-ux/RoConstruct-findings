// roc 2009-12 00804830  unit: CXTPControlComboBoxPopupBar  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804830
//
// 00804830  56                   push esi
// 00804831  57                   push edi
// 00804832  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00804836  8d47ff               lea eax, [edi - 1]
// 00804839  8bf1                 mov esi, ecx
// 0080483b  3dfdffff00           cmp eax, 0xfffffd
// 00804840  7742                 ja 0x804884
// 00804842  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00804848  57                   push edi
// 00804849  e8b22a0400           call 0x847300
// 0080484e  85c0                 test eax, eax
// 00804850  7432                 je 0x804884
// 00804852  6800179f00           push 0x9f1700
// 00804857  8bc8                 mov ecx, eax
// 00804859  e85c1c1200           call 0x9264ba
// 0080485e  85c0                 test eax, eax
// 00804860  750a                 jne 0x80486c
// 00804862  5f                   pop edi
// 00804863  b805400080           mov eax, 0x80004005
// 00804868  5e                   pop esi
// 00804869  c20800               ret 8
// 0080486c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00804870  50                   push eax
// 00804871  51                   push ecx
// 00804872  6800179f00           push 0x9f1700
// 00804877  8d4e5c               lea ecx, [esi + 0x5c]
// 0080487a  e8417c0300           call 0x83c4c0
// 0080487f  5f                   pop edi
// 00804880  5e                   pop esi
// 00804881  c20800               ret 8
// 00804884  83fffc               cmp edi, -4
// 00804887  7411                 je 0x80489a
// 00804889  83fffd               cmp edi, -3
// 0080488c  740c                 je 0x80489a
// 0080488e  8bce                 mov ecx, esi
// 00804890  e89bf5feff           call 0x7f3e30
// 00804895  5f                   pop edi
// 00804896  5e                   pop esi
// 00804897  c20800               ret 8
// 0080489a  6800179f00           push 0x9f1700
// 0080489f  8bce                 mov ecx, esi
// 008048a1  e8141c1200           call 0x9264ba
// 008048a6  85c0                 test eax, eax
// 008048a8  74b8                 je 0x804862
// 008048aa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008048ae  50                   push eax
// 008048af  52                   push edx
// 008048b0  6800179f00           push 0x9f1700
// 008048b5  8d4e5c               lea ecx, [esi + 0x5c]
// 008048b8  e8037c0300           call 0x83c4c0
// 008048bd  5f                   pop edi
// 008048be  5e                   pop esi
// 008048bf  c20800               ret 8
// copied from an identical function in another client (function ?OnGetObject@CXTPCommandBar@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp