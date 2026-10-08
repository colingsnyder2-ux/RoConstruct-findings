// roc 2008-06 0048bd70  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bd70
//
// 0048bd70  6aff                 push -1
// 0048bd72  6800ef7b00           push 0x7bef00
// 0048bd77  64a100000000         mov eax, dword ptr fs:[0]
// 0048bd7d  50                   push eax
// 0048bd7e  64892500000000       mov dword ptr fs:[0], esp
// 0048bd85  51                   push ecx
// 0048bd86  56                   push esi
// 0048bd87  57                   push edi
// 0048bd88  8bf9                 mov edi, ecx
// 0048bd8a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048bd8e  83ec08               sub esp, 8
// 0048bd91  8bc4                 mov eax, esp
// 0048bd93  8908                 mov dword ptr [eax], ecx
// 0048bd95  8b542430             mov edx, dword ptr [esp + 0x30]
// 0048bd99  895004               mov dword ptr [eax + 4], edx
// 0048bd9c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048bda0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0048bda8  89642410             mov dword ptr [esp + 0x10], esp
// 0048bdac  85c0                 test eax, eax
// 0048bdae  740c                 je 0x48bdbc
// 0048bdb0  83c004               add eax, 4
// 0048bdb3  b901000000           mov ecx, 1
// 0048bdb8  f00fc108             lock xadd dword ptr [eax], ecx
// 0048bdbc  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048bdc0  83ec08               sub esp, 8
// 0048bdc3  8bc4                 mov eax, esp
// 0048bdc5  8910                 mov dword ptr [eax], edx
// 0048bdc7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048bdcb  894804               mov dword ptr [eax + 4], ecx
// 0048bdce  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048bdd2  89642418             mov dword ptr [esp + 0x18], esp
// 0048bdd6  85c0                 test eax, eax
// 0048bdd8  740c                 je 0x48bde6
// 0048bdda  83c004               add eax, 4
// 0048bddd  ba01000000           mov edx, 1
// 0048bde2  f00fc110             lock xadd dword ptr [eax], edx
// 0048bde6  8bcf                 mov ecx, edi
// 0048bde8  e8b38e0c00           call 0x554ca0
// 0048bded  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048bdf1  c644241400           mov byte ptr [esp + 0x14], 0
// 0048bdf6  85f6                 test esi, esi
// 0048bdf8  742a                 je 0x48be24
// 0048bdfa  8d4604               lea eax, [esi + 4]
// 0048bdfd  83c9ff               or ecx, 0xffffffff
// 0048be00  f00fc108             lock xadd dword ptr [eax], ecx
// 0048be04  751e                 jne 0x48be24
// 0048be06  8b16                 mov edx, dword ptr [esi]
// 0048be08  8b4204               mov eax, dword ptr [edx + 4]
// 0048be0b  8bce                 mov ecx, esi
// 0048be0d  ffd0                 call eax
// 0048be0f  8d4e08               lea ecx, [esi + 8]
// 0048be12  83caff               or edx, 0xffffffff
// 0048be15  f00fc111             lock xadd dword ptr [ecx], edx
// 0048be19  7509                 jne 0x48be24
// 0048be1b  8b06                 mov eax, dword ptr [esi]
// 0048be1d  8b5008               mov edx, dword ptr [eax + 8]
// 0048be20  8bce                 mov ecx, esi
// 0048be22  ffd2                 call edx
// 0048be24  8b742428             mov esi, dword ptr [esp + 0x28]
// 0048be28  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048be30  85f6                 test esi, esi
// 0048be32  742a                 je 0x48be5e
// 0048be34  8d4604               lea eax, [esi + 4]
// 0048be37  83c9ff               or ecx, 0xffffffff
// 0048be3a  f00fc108             lock xadd dword ptr [eax], ecx
// 0048be3e  751e                 jne 0x48be5e
// 0048be40  8b16                 mov edx, dword ptr [esi]
// 0048be42  8b4204               mov eax, dword ptr [edx + 4]
// 0048be45  8bce                 mov ecx, esi
// 0048be47  ffd0                 call eax
// 0048be49  8d4e08               lea ecx, [esi + 8]
// 0048be4c  83caff               or edx, 0xffffffff
// 0048be4f  f00fc111             lock xadd dword ptr [ecx], edx
// 0048be53  7509                 jne 0x48be5e
// 0048be55  8b06                 mov eax, dword ptr [esi]
// 0048be57  8b5008               mov edx, dword ptr [eax + 8]
// 0048be5a  8bce                 mov ecx, esi
// 0048be5c  ffd2                 call edx
// 0048be5e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048be62  8bc7                 mov eax, edi
// 0048be64  5f                   pop edi
// 0048be65  64890d00000000       mov dword ptr fs:[0], ecx
// 0048be6c  5e                   pop esi
// 0048be6d  83c410               add esp, 0x10
// 0048be70  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
