// roc 2008-06 00527f90  unit: G3D::Line  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527f90
//
// 00527f90  51                   push ecx
// 00527f91  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00527f95  53                   push ebx
// 00527f96  56                   push esi
// 00527f97  57                   push edi
// 00527f98  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00527f9c  f6c102               test cl, 2
// 00527f9f  7448                 je 0x527fe9
// 00527fa1  b308                 mov bl, 8
// 00527fa3  83f903               cmp ecx, 3
// 00527fa6  7406                 je 0x527fae
// 00527fa8  8a9f28010000         mov bl, byte ptr [edi + 0x128]
// 00527fae  8b742418             mov esi, dword ptr [esp + 0x18]
// 00527fb2  8a16                 mov dl, byte ptr [esi]
// 00527fb4  84d2                 test dl, dl
// 00527fb6  747f                 je 0x528037
// 00527fb8  3ad3                 cmp dl, bl
// 00527fba  777b                 ja 0x528037
// 00527fbc  8a4e01               mov cl, byte ptr [esi + 1]
// 00527fbf  84c9                 test cl, cl
// 00527fc1  7474                 je 0x528037
// 00527fc3  3acb                 cmp cl, bl
// 00527fc5  7770                 ja 0x528037
// 00527fc7  8a4602               mov al, byte ptr [esi + 2]
// 00527fca  84c0                 test al, al
// 00527fcc  7469                 je 0x528037
// 00527fce  3ac3                 cmp al, bl
// 00527fd0  7765                 ja 0x528037
// 00527fd2  884c240d             mov byte ptr [esp + 0xd], cl
// 00527fd6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00527fda  8844240e             mov byte ptr [esp + 0xe], al
// 00527fde  8854240c             mov byte ptr [esp + 0xc], dl
// 00527fe2  b803000000           mov eax, 3
// 00527fe7  eb1c                 jmp 0x528005
// 00527fe9  8b742418             mov esi, dword ptr [esp + 0x18]
// 00527fed  8a4603               mov al, byte ptr [esi + 3]
// 00527ff0  84c0                 test al, al
// 00527ff2  7443                 je 0x528037
// 00527ff4  3a8728010000         cmp al, byte ptr [edi + 0x128]
// 00527ffa  773b                 ja 0x528037
// 00527ffc  8844240c             mov byte ptr [esp + 0xc], al
// 00528000  b801000000           mov eax, 1
// 00528005  f6c104               test cl, 4
// 00528008  7414                 je 0x52801e
// 0052800a  8a4e04               mov cl, byte ptr [esi + 4]
// 0052800d  84c9                 test cl, cl
// 0052800f  7426                 je 0x528037
// 00528011  3a8f28010000         cmp cl, byte ptr [edi + 0x128]
// 00528017  771e                 ja 0x528037
// 00528019  884c040c             mov byte ptr [esp + eax + 0xc], cl
// 0052801d  40                   inc eax
// 0052801e  50                   push eax
// 0052801f  8d442410             lea eax, [esp + 0x10]
// 00528023  50                   push eax
// 00528024  68b4948200           push 0x8294b4
// 00528029  57                   push edi
// 0052802a  e881f5ffff           call 0x5275b0
// 0052802f  83c410               add esp, 0x10
// 00528032  5f                   pop edi
// 00528033  5e                   pop esi
// 00528034  5b                   pop ebx
// 00528035  59                   pop ecx
// 00528036  c3                   ret 
// 00528037  68f4b78200           push 0x82b7f4
// 0052803c  57                   push edi
// 0052803d  e80e1a0000           call 0x529a50
// 00528042  83c408               add esp, 8
// 00528045  5f                   pop edi
// 00528046  5e                   pop esi
// 00528047  5b                   pop ebx
// 00528048  59                   pop ecx
// 00528049  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
