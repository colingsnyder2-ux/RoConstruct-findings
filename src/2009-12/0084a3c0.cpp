// roc 2009-12 0084a3c0  unit: CXTPControlSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a3c0
//
// 0084a3c0  51                   push ecx
// 0084a3c1  d9442410             fld dword ptr [esp + 0x10]
// 0084a3c5  0fb64c240c           movzx ecx, byte ptr [esp + 0xc]
// 0084a3ca  d9c0                 fld st(0)
// 0084a3cc  53                   push ebx
// 0084a3cd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0084a3d1  d9e8                 fld1 
// 0084a3d3  0fb6c3               movzx eax, bl
// 0084a3d6  dee1                 fsubrp st(1)
// 0084a3d8  89442414             mov dword ptr [esp + 0x14], eax
// 0084a3dc  db442414             fild dword ptr [esp + 0x14]
// 0084a3e0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0084a3e4  d8ca                 fmul st(2)
// 0084a3e6  db442414             fild dword ptr [esp + 0x14]
// 0084a3ea  d8ca                 fmul st(2)
// 0084a3ec  dec1                 faddp st(1)
// 0084a3ee  e8fda8faff           call 0x7f4cf0
// 0084a3f3  3dff000000           cmp eax, 0xff
// 0084a3f8  c644240cff           mov byte ptr [esp + 0xc], 0xff
// 0084a3fd  7f04                 jg 0x84a403
// 0084a3ff  8844240c             mov byte ptr [esp + 0xc], al
// 0084a403  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a407  8bd3                 mov edx, ebx
// 0084a409  c1ea08               shr edx, 8
// 0084a40c  0fb6c2               movzx eax, dl
// 0084a40f  89442414             mov dword ptr [esp + 0x14], eax
// 0084a413  c1e908               shr ecx, 8
// 0084a416  0fb6d1               movzx edx, cl
// 0084a419  db442414             fild dword ptr [esp + 0x14]
// 0084a41d  89542414             mov dword ptr [esp + 0x14], edx
// 0084a421  d8ca                 fmul st(2)
// 0084a423  db442414             fild dword ptr [esp + 0x14]
// 0084a427  d8ca                 fmul st(2)
// 0084a429  dec1                 faddp st(1)
// 0084a42b  e8c0a8faff           call 0x7f4cf0
// 0084a430  3dff000000           cmp eax, 0xff
// 0084a435  c6442414ff           mov byte ptr [esp + 0x14], 0xff
// 0084a43a  7f04                 jg 0x84a440
// 0084a43c  88442414             mov byte ptr [esp + 0x14], al
// 0084a440  c1eb10               shr ebx, 0x10
// 0084a443  0fb6c3               movzx eax, bl
// 0084a446  89442404             mov dword ptr [esp + 4], eax
// 0084a44a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084a44e  c1e810               shr eax, 0x10
// 0084a451  db442404             fild dword ptr [esp + 4]
// 0084a455  0fb6c8               movzx ecx, al
// 0084a458  deca                 fmulp st(2)
// 0084a45a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084a45e  db442410             fild dword ptr [esp + 0x10]
// 0084a462  dec9                 fmulp st(1)
// 0084a464  dec1                 faddp st(1)
// 0084a466  e885a8faff           call 0x7f4cf0
// 0084a46b  3dff000000           cmp eax, 0xff
// 0084a470  5b                   pop ebx
// 0084a471  7e02                 jle 0x84a475
// 0084a473  0cff                 or al, 0xff
// 0084a475  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0084a47a  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0084a47f  0fb6c0               movzx eax, al
// 0084a482  c1e008               shl eax, 8
// 0084a485  0bc2                 or eax, edx
// 0084a487  c1e008               shl eax, 8
// 0084a48a  0bc1                 or eax, ecx
// 0084a48c  59                   pop ecx
// 0084a48d  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlendColors@CXTPDrawHelpers@@QAEKKKM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp