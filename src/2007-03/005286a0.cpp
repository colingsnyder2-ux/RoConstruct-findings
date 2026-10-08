// roc 2007-03 005286a0  unit: seg_00520000  size: 1909 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005286a0
//
// 005286a0  81ec14010000         sub esp, 0x114
// 005286a6  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 005286ad  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 005286b3  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 005286b6  8b94241c010000       mov edx, dword ptr [esp + 0x11c]
// 005286bd  894c240c             mov dword ptr [esp + 0xc], ecx
// 005286c1  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 005286c4  8b548820             mov edx, dword ptr [eax + ecx*4 + 0x20]
// 005286c8  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 005286cf  85c0                 test eax, eax
// 005286d1  53                   push ebx
// 005286d2  8b9c2424010000       mov ebx, dword ptr [esp + 0x124]
// 005286d9  55                   push ebp
// 005286da  8bac2430010000       mov ebp, dword ptr [esp + 0x130]
// 005286e1  89542418             mov dword ptr [esp + 0x18], edx
// 005286e5  0f8621070000         jbe 0x528e0c
// 005286eb  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 005286f2  56                   push esi
// 005286f3  8bb42438010000       mov esi, dword ptr [esp + 0x138]
// 005286fa  57                   push edi
// 005286fb  894c2414             mov dword ptr [esp + 0x14], ecx
// 005286ff  89442418             mov dword ptr [esp + 0x18], eax
// 00528703  8b04ab               mov eax, dword ptr [ebx + ebp*4]
// 00528706  0fb61430             movzx edx, byte ptr [eax + esi]
// 0052870a  03c6                 add eax, esi
// 0052870c  81ea80000000         sub edx, 0x80
// 00528712  89542410             mov dword ptr [esp + 0x10], edx
// 00528716  83c001               add eax, 1
// 00528719  83c001               add eax, 1
// 0052871c  db442410             fild dword ptr [esp + 0x10]
// 00528720  83c001               add eax, 1
// 00528723  83c001               add eax, 1
// 00528726  83c001               add eax, 1
// 00528729  d95c2424             fstp dword ptr [esp + 0x24]
// 0052872d  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528731  81e980000000         sub ecx, 0x80
// 00528737  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052873b  83c001               add eax, 1
// 0052873e  db442410             fild dword ptr [esp + 0x10]
// 00528742  d95c2428             fstp dword ptr [esp + 0x28]
// 00528746  0fb650fc             movzx edx, byte ptr [eax - 4]
// 0052874a  81ea80000000         sub edx, 0x80
// 00528750  89542410             mov dword ptr [esp + 0x10], edx
// 00528754  db442410             fild dword ptr [esp + 0x10]
// 00528758  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052875c  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 00528760  81e980000000         sub ecx, 0x80
// 00528766  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052876a  db442410             fild dword ptr [esp + 0x10]
// 0052876e  d95c2430             fstp dword ptr [esp + 0x30]
// 00528772  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00528776  81ea80000000         sub edx, 0x80
// 0052877c  89542410             mov dword ptr [esp + 0x10], edx
// 00528780  db442410             fild dword ptr [esp + 0x10]
// 00528784  d95c2434             fstp dword ptr [esp + 0x34]
// 00528788  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0052878c  81e980000000         sub ecx, 0x80
// 00528792  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528796  db442410             fild dword ptr [esp + 0x10]
// 0052879a  d95c2438             fstp dword ptr [esp + 0x38]
// 0052879e  0fb610               movzx edx, byte ptr [eax]
// 005287a1  81ea80000000         sub edx, 0x80
// 005287a7  89542410             mov dword ptr [esp + 0x10], edx
// 005287ab  db442410             fild dword ptr [esp + 0x10]
// 005287af  d95c243c             fstp dword ptr [esp + 0x3c]
// 005287b3  0fb64001             movzx eax, byte ptr [eax + 1]
// 005287b7  2d80000000           sub eax, 0x80
// 005287bc  89442410             mov dword ptr [esp + 0x10], eax
// 005287c0  8b44ab04             mov eax, dword ptr [ebx + ebp*4 + 4]
// 005287c4  03c6                 add eax, esi
// 005287c6  db442410             fild dword ptr [esp + 0x10]
// 005287ca  83c001               add eax, 1
// 005287cd  83c001               add eax, 1
// 005287d0  83c001               add eax, 1
// 005287d3  d95c2440             fstp dword ptr [esp + 0x40]
// 005287d7  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 005287db  81e980000000         sub ecx, 0x80
// 005287e1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005287e5  83c001               add eax, 1
// 005287e8  db442410             fild dword ptr [esp + 0x10]
// 005287ec  d95c2444             fstp dword ptr [esp + 0x44]
// 005287f0  0fb650fd             movzx edx, byte ptr [eax - 3]
// 005287f4  81ea80000000         sub edx, 0x80
// 005287fa  89542410             mov dword ptr [esp + 0x10], edx
// 005287fe  db442410             fild dword ptr [esp + 0x10]
// 00528802  d95c2448             fstp dword ptr [esp + 0x48]
// 00528806  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 0052880a  81e980000000         sub ecx, 0x80
// 00528810  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528814  db442410             fild dword ptr [esp + 0x10]
// 00528818  d95c244c             fstp dword ptr [esp + 0x4c]
// 0052881c  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528820  81ea80000000         sub edx, 0x80
// 00528826  89542410             mov dword ptr [esp + 0x10], edx
// 0052882a  db442410             fild dword ptr [esp + 0x10]
// 0052882e  d95c2450             fstp dword ptr [esp + 0x50]
// 00528832  0fb608               movzx ecx, byte ptr [eax]
// 00528835  81e980000000         sub ecx, 0x80
// 0052883b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052883f  83c001               add eax, 1
// 00528842  db442410             fild dword ptr [esp + 0x10]
// 00528846  d95c2454             fstp dword ptr [esp + 0x54]
// 0052884a  0fb610               movzx edx, byte ptr [eax]
// 0052884d  81ea80000000         sub edx, 0x80
// 00528853  89542410             mov dword ptr [esp + 0x10], edx
// 00528857  db442410             fild dword ptr [esp + 0x10]
// 0052885b  83c001               add eax, 1
// 0052885e  d95c2458             fstp dword ptr [esp + 0x58]
// 00528862  0fb608               movzx ecx, byte ptr [eax]
// 00528865  81e980000000         sub ecx, 0x80
// 0052886b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052886f  db442410             fild dword ptr [esp + 0x10]
// 00528873  d95c245c             fstp dword ptr [esp + 0x5c]
// 00528877  0fb65001             movzx edx, byte ptr [eax + 1]
// 0052887b  8b44ab08             mov eax, dword ptr [ebx + ebp*4 + 8]
// 0052887f  81ea80000000         sub edx, 0x80
// 00528885  89542410             mov dword ptr [esp + 0x10], edx
// 00528889  03c6                 add eax, esi
// 0052888b  83c001               add eax, 1
// 0052888e  db442410             fild dword ptr [esp + 0x10]
// 00528892  83c001               add eax, 1
// 00528895  83c001               add eax, 1
// 00528898  83c001               add eax, 1
// 0052889b  d95c2460             fstp dword ptr [esp + 0x60]
// 0052889f  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 005288a3  81e980000000         sub ecx, 0x80
// 005288a9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005288ad  83c001               add eax, 1
// 005288b0  83c001               add eax, 1
// 005288b3  db442410             fild dword ptr [esp + 0x10]
// 005288b7  d95c2464             fstp dword ptr [esp + 0x64]
// 005288bb  0fb650fb             movzx edx, byte ptr [eax - 5]
// 005288bf  81ea80000000         sub edx, 0x80
// 005288c5  89542410             mov dword ptr [esp + 0x10], edx
// 005288c9  db442410             fild dword ptr [esp + 0x10]
// 005288cd  d95c2468             fstp dword ptr [esp + 0x68]
// 005288d1  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 005288d5  81e980000000         sub ecx, 0x80
// 005288db  894c2410             mov dword ptr [esp + 0x10], ecx
// 005288df  db442410             fild dword ptr [esp + 0x10]
// 005288e3  d95c246c             fstp dword ptr [esp + 0x6c]
// 005288e7  0fb650fd             movzx edx, byte ptr [eax - 3]
// 005288eb  81ea80000000         sub edx, 0x80
// 005288f1  89542410             mov dword ptr [esp + 0x10], edx
// 005288f5  db442410             fild dword ptr [esp + 0x10]
// 005288f9  d95c2470             fstp dword ptr [esp + 0x70]
// 005288fd  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 00528901  81e980000000         sub ecx, 0x80
// 00528907  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052890b  db442410             fild dword ptr [esp + 0x10]
// 0052890f  d95c2474             fstp dword ptr [esp + 0x74]
// 00528913  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528917  81ea80000000         sub edx, 0x80
// 0052891d  89542410             mov dword ptr [esp + 0x10], edx
// 00528921  db442410             fild dword ptr [esp + 0x10]
// 00528925  d95c2478             fstp dword ptr [esp + 0x78]
// 00528929  0fb608               movzx ecx, byte ptr [eax]
// 0052892c  81e980000000         sub ecx, 0x80
// 00528932  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528936  db442410             fild dword ptr [esp + 0x10]
// 0052893a  d95c247c             fstp dword ptr [esp + 0x7c]
// 0052893e  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528942  8b44ab0c             mov eax, dword ptr [ebx + ebp*4 + 0xc]
// 00528946  81ea80000000         sub edx, 0x80
// 0052894c  89542410             mov dword ptr [esp + 0x10], edx
// 00528950  03c6                 add eax, esi
// 00528952  83c001               add eax, 1
// 00528955  db442410             fild dword ptr [esp + 0x10]
// 00528959  83c001               add eax, 1
// 0052895c  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00528963  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 00528967  81e980000000         sub ecx, 0x80
// 0052896d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528971  db442410             fild dword ptr [esp + 0x10]
// 00528975  d99c2484000000       fstp dword ptr [esp + 0x84]
// 0052897c  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528980  81ea80000000         sub edx, 0x80
// 00528986  89542410             mov dword ptr [esp + 0x10], edx
// 0052898a  db442410             fild dword ptr [esp + 0x10]
// 0052898e  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00528995  0fb608               movzx ecx, byte ptr [eax]
// 00528998  81e980000000         sub ecx, 0x80
// 0052899e  894c2410             mov dword ptr [esp + 0x10], ecx
// 005289a2  db442410             fild dword ptr [esp + 0x10]
// 005289a6  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 005289ad  0fb65001             movzx edx, byte ptr [eax + 1]
// 005289b1  83c001               add eax, 1
// 005289b4  81ea80000000         sub edx, 0x80
// 005289ba  89542410             mov dword ptr [esp + 0x10], edx
// 005289be  83c001               add eax, 1
// 005289c1  83c001               add eax, 1
// 005289c4  db442410             fild dword ptr [esp + 0x10]
// 005289c8  83c001               add eax, 1
// 005289cb  d99c2490000000       fstp dword ptr [esp + 0x90]
// 005289d2  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 005289d6  81e980000000         sub ecx, 0x80
// 005289dc  894c2410             mov dword ptr [esp + 0x10], ecx
// 005289e0  db442410             fild dword ptr [esp + 0x10]
// 005289e4  d99c2494000000       fstp dword ptr [esp + 0x94]
// 005289eb  0fb650ff             movzx edx, byte ptr [eax - 1]
// 005289ef  81ea80000000         sub edx, 0x80
// 005289f5  89542410             mov dword ptr [esp + 0x10], edx
// 005289f9  db442410             fild dword ptr [esp + 0x10]
// 005289fd  d99c2498000000       fstp dword ptr [esp + 0x98]
// 00528a04  0fb608               movzx ecx, byte ptr [eax]
// 00528a07  81e980000000         sub ecx, 0x80
// 00528a0d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528a11  db442410             fild dword ptr [esp + 0x10]
// 00528a15  d99c249c000000       fstp dword ptr [esp + 0x9c]
// 00528a1c  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528a20  8b44ab10             mov eax, dword ptr [ebx + ebp*4 + 0x10]
// 00528a24  81ea80000000         sub edx, 0x80
// 00528a2a  89542410             mov dword ptr [esp + 0x10], edx
// 00528a2e  03c6                 add eax, esi
// 00528a30  83c001               add eax, 1
// 00528a33  db442410             fild dword ptr [esp + 0x10]
// 00528a37  83c001               add eax, 1
// 00528a3a  83c001               add eax, 1
// 00528a3d  83c001               add eax, 1
// 00528a40  d99c24a0000000       fstp dword ptr [esp + 0xa0]
// 00528a47  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528a4b  81e980000000         sub ecx, 0x80
// 00528a51  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528a55  83c001               add eax, 1
// 00528a58  83c001               add eax, 1
// 00528a5b  db442410             fild dword ptr [esp + 0x10]
// 00528a5f  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 00528a66  0fb650fb             movzx edx, byte ptr [eax - 5]
// 00528a6a  81ea80000000         sub edx, 0x80
// 00528a70  89542410             mov dword ptr [esp + 0x10], edx
// 00528a74  db442410             fild dword ptr [esp + 0x10]
// 00528a78  d99c24a8000000       fstp dword ptr [esp + 0xa8]
// 00528a7f  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528a83  81e980000000         sub ecx, 0x80
// 00528a89  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528a8d  db442410             fild dword ptr [esp + 0x10]
// 00528a91  d99c24ac000000       fstp dword ptr [esp + 0xac]
// 00528a98  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00528a9c  81ea80000000         sub edx, 0x80
// 00528aa2  89542410             mov dword ptr [esp + 0x10], edx
// 00528aa6  db442410             fild dword ptr [esp + 0x10]
// 00528aaa  d99c24b0000000       fstp dword ptr [esp + 0xb0]
// 00528ab1  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 00528ab5  81e980000000         sub ecx, 0x80
// 00528abb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528abf  db442410             fild dword ptr [esp + 0x10]
// 00528ac3  d99c24b4000000       fstp dword ptr [esp + 0xb4]
// 00528aca  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528ace  81ea80000000         sub edx, 0x80
// 00528ad4  89542410             mov dword ptr [esp + 0x10], edx
// 00528ad8  db442410             fild dword ptr [esp + 0x10]
// 00528adc  d99c24b8000000       fstp dword ptr [esp + 0xb8]
// 00528ae3  0fb608               movzx ecx, byte ptr [eax]
// 00528ae6  81e980000000         sub ecx, 0x80
// 00528aec  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528af0  db442410             fild dword ptr [esp + 0x10]
// 00528af4  d99c24bc000000       fstp dword ptr [esp + 0xbc]
// 00528afb  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528aff  8b44ab14             mov eax, dword ptr [ebx + ebp*4 + 0x14]
// 00528b03  81ea80000000         sub edx, 0x80
// 00528b09  89542410             mov dword ptr [esp + 0x10], edx
// 00528b0d  03c6                 add eax, esi
// 00528b0f  db442410             fild dword ptr [esp + 0x10]
// 00528b13  d99c24c0000000       fstp dword ptr [esp + 0xc0]
// 00528b1a  0fb608               movzx ecx, byte ptr [eax]
// 00528b1d  81e980000000         sub ecx, 0x80
// 00528b23  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528b27  db442410             fild dword ptr [esp + 0x10]
// 00528b2b  83c001               add eax, 1
// 00528b2e  83c001               add eax, 1
// 00528b31  83c001               add eax, 1
// 00528b34  d99c24c4000000       fstp dword ptr [esp + 0xc4]
// 00528b3b  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00528b3f  81ea80000000         sub edx, 0x80
// 00528b45  89542410             mov dword ptr [esp + 0x10], edx
// 00528b49  83c001               add eax, 1
// 00528b4c  83c001               add eax, 1
// 00528b4f  db442410             fild dword ptr [esp + 0x10]
// 00528b53  83c001               add eax, 1
// 00528b56  d99c24c8000000       fstp dword ptr [esp + 0xc8]
// 00528b5d  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528b61  81e980000000         sub ecx, 0x80
// 00528b67  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528b6b  db442410             fild dword ptr [esp + 0x10]
// 00528b6f  d99c24cc000000       fstp dword ptr [esp + 0xcc]
// 00528b76  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00528b7a  81ea80000000         sub edx, 0x80
// 00528b80  89542410             mov dword ptr [esp + 0x10], edx
// 00528b84  db442410             fild dword ptr [esp + 0x10]
// 00528b88  d99c24d0000000       fstp dword ptr [esp + 0xd0]
// 00528b8f  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 00528b93  81e980000000         sub ecx, 0x80
// 00528b99  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528b9d  db442410             fild dword ptr [esp + 0x10]
// 00528ba1  d99c24d4000000       fstp dword ptr [esp + 0xd4]
// 00528ba8  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528bac  81ea80000000         sub edx, 0x80
// 00528bb2  89542410             mov dword ptr [esp + 0x10], edx
// 00528bb6  db442410             fild dword ptr [esp + 0x10]
// 00528bba  d99c24d8000000       fstp dword ptr [esp + 0xd8]
// 00528bc1  0fb608               movzx ecx, byte ptr [eax]
// 00528bc4  81e980000000         sub ecx, 0x80
// 00528bca  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528bce  db442410             fild dword ptr [esp + 0x10]
// 00528bd2  d99c24dc000000       fstp dword ptr [esp + 0xdc]
// 00528bd9  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528bdd  8b44ab18             mov eax, dword ptr [ebx + ebp*4 + 0x18]
// 00528be1  81ea80000000         sub edx, 0x80
// 00528be7  89542410             mov dword ptr [esp + 0x10], edx
// 00528beb  03c6                 add eax, esi
// 00528bed  83c001               add eax, 1
// 00528bf0  db442410             fild dword ptr [esp + 0x10]
// 00528bf4  83c001               add eax, 1
// 00528bf7  83c001               add eax, 1
// 00528bfa  83c001               add eax, 1
// 00528bfd  d99c24e0000000       fstp dword ptr [esp + 0xe0]
// 00528c04  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528c08  81e980000000         sub ecx, 0x80
// 00528c0e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528c12  83c001               add eax, 1
// 00528c15  db442410             fild dword ptr [esp + 0x10]
// 00528c19  d99c24e4000000       fstp dword ptr [esp + 0xe4]
// 00528c20  0fb650fc             movzx edx, byte ptr [eax - 4]
// 00528c24  81ea80000000         sub edx, 0x80
// 00528c2a  89542410             mov dword ptr [esp + 0x10], edx
// 00528c2e  db442410             fild dword ptr [esp + 0x10]
// 00528c32  d99c24e8000000       fstp dword ptr [esp + 0xe8]
// 00528c39  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 00528c3d  81e980000000         sub ecx, 0x80
// 00528c43  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528c47  db442410             fild dword ptr [esp + 0x10]
// 00528c4b  d99c24ec000000       fstp dword ptr [esp + 0xec]
// 00528c52  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00528c56  81ea80000000         sub edx, 0x80
// 00528c5c  89542410             mov dword ptr [esp + 0x10], edx
// 00528c60  db442410             fild dword ptr [esp + 0x10]
// 00528c64  d99c24f0000000       fstp dword ptr [esp + 0xf0]
// 00528c6b  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00528c6f  81e980000000         sub ecx, 0x80
// 00528c75  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528c79  db442410             fild dword ptr [esp + 0x10]
// 00528c7d  d99c24f4000000       fstp dword ptr [esp + 0xf4]
// 00528c84  0fb610               movzx edx, byte ptr [eax]
// 00528c87  81ea80000000         sub edx, 0x80
// 00528c8d  89542410             mov dword ptr [esp + 0x10], edx
// 00528c91  db442410             fild dword ptr [esp + 0x10]
// 00528c95  d99c24f8000000       fstp dword ptr [esp + 0xf8]
// 00528c9c  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00528ca0  83c001               add eax, 1
// 00528ca3  81e980000000         sub ecx, 0x80
// 00528ca9  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528cad  db442410             fild dword ptr [esp + 0x10]
// 00528cb1  d99c24fc000000       fstp dword ptr [esp + 0xfc]
// 00528cb8  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528cbc  8b44ab1c             mov eax, dword ptr [ebx + ebp*4 + 0x1c]
// 00528cc0  81ea80000000         sub edx, 0x80
// 00528cc6  89542410             mov dword ptr [esp + 0x10], edx
// 00528cca  03c6                 add eax, esi
// 00528ccc  83c001               add eax, 1
// 00528ccf  db442410             fild dword ptr [esp + 0x10]
// 00528cd3  83c001               add eax, 1
// 00528cd6  83c001               add eax, 1
// 00528cd9  83c001               add eax, 1
// 00528cdc  d99c2400010000       fstp dword ptr [esp + 0x100]
// 00528ce3  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528ce7  81e980000000         sub ecx, 0x80
// 00528ced  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528cf1  83c001               add eax, 1
// 00528cf4  83c001               add eax, 1
// 00528cf7  db442410             fild dword ptr [esp + 0x10]
// 00528cfb  d99c2404010000       fstp dword ptr [esp + 0x104]
// 00528d02  0fb650fb             movzx edx, byte ptr [eax - 5]
// 00528d06  81ea80000000         sub edx, 0x80
// 00528d0c  89542410             mov dword ptr [esp + 0x10], edx
// 00528d10  db442410             fild dword ptr [esp + 0x10]
// 00528d14  d99c2408010000       fstp dword ptr [esp + 0x108]
// 00528d1b  0fb648fc             movzx ecx, byte ptr [eax - 4]
// 00528d1f  81e980000000         sub ecx, 0x80
// 00528d25  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528d29  db442410             fild dword ptr [esp + 0x10]
// 00528d2d  d99c240c010000       fstp dword ptr [esp + 0x10c]
// 00528d34  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00528d38  81ea80000000         sub edx, 0x80
// 00528d3e  89542410             mov dword ptr [esp + 0x10], edx
// 00528d42  db442410             fild dword ptr [esp + 0x10]
// 00528d46  d99c2410010000       fstp dword ptr [esp + 0x110]
// 00528d4d  0fb648fe             movzx ecx, byte ptr [eax - 2]
// 00528d51  81e980000000         sub ecx, 0x80
// 00528d57  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528d5b  db442410             fild dword ptr [esp + 0x10]
// 00528d5f  d99c2414010000       fstp dword ptr [esp + 0x114]
// 00528d66  0fb650ff             movzx edx, byte ptr [eax - 1]
// 00528d6a  81ea80000000         sub edx, 0x80
// 00528d70  89542410             mov dword ptr [esp + 0x10], edx
// 00528d74  db442410             fild dword ptr [esp + 0x10]
// 00528d78  d99c2418010000       fstp dword ptr [esp + 0x118]
// 00528d7f  0fb608               movzx ecx, byte ptr [eax]
// 00528d82  81e980000000         sub ecx, 0x80
// 00528d88  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528d8c  db442410             fild dword ptr [esp + 0x10]
// 00528d90  d99c241c010000       fstp dword ptr [esp + 0x11c]
// 00528d97  0fb65001             movzx edx, byte ptr [eax + 1]
// 00528d9b  81ea80000000         sub edx, 0x80
// 00528da1  89542410             mov dword ptr [esp + 0x10], edx
// 00528da5  8d442424             lea eax, [esp + 0x24]
// 00528da9  50                   push eax
// 00528daa  db442414             fild dword ptr [esp + 0x14]
// 00528dae  d99c2424010000       fstp dword ptr [esp + 0x124]
// 00528db5  ff542420             call dword ptr [esp + 0x20]
// 00528db9  dd0528487a00         fld qword ptr [0x7a4828]
// 00528dbf  83c404               add esp, 4
// 00528dc2  33ff                 xor edi, edi
// 00528dc4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00528dc8  d904b9               fld dword ptr [ecx + edi*4]
// 00528dcb  d84cbc24             fmul dword ptr [esp + edi*4 + 0x24]
// 00528dcf  d95c2410             fstp dword ptr [esp + 0x10]
// 00528dd3  d9442410             fld dword ptr [esp + 0x10]
// 00528dd7  d8c1                 fadd st(1)
// 00528dd9  e822640f00           call 0x61f200
// 00528dde  8b542414             mov edx, dword ptr [esp + 0x14]
// 00528de2  662d0040             sub ax, 0x4000
// 00528de6  6689047a             mov word ptr [edx + edi*2], ax
// 00528dea  83c701               add edi, 1
// 00528ded  83ff40               cmp edi, 0x40
// 00528df0  7cd2                 jl 0x528dc4
// 00528df2  8144241480000000     add dword ptr [esp + 0x14], 0x80
// 00528dfa  ddd8                 fstp st(0)
// 00528dfc  83c608               add esi, 8
// 00528dff  836c241801           sub dword ptr [esp + 0x18], 1
// 00528e04  0f85f9f8ffff         jne 0x528703
// 00528e0a  5f                   pop edi
// 00528e0b  5e                   pop esi
// 00528e0c  5d                   pop ebp
// 00528e0d  5b                   pop ebx
// 00528e0e  81c414010000         add esp, 0x114
// 00528e14  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT_float)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
