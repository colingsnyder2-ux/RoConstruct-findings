// roc 2007-03 00572360  unit: seg_00570000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572360
//
// 00572360  8b542404             mov edx, dword ptr [esp + 4]
// 00572364  8b02                 mov eax, dword ptr [edx]
// 00572366  56                   push esi
// 00572367  8b7008               mov esi, dword ptr [eax + 8]
// 0057236a  8932                 mov dword ptr [edx], esi
// 0057236c  8b7008               mov esi, dword ptr [eax + 8]
// 0057236f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00572373  7503                 jne 0x572378
// 00572375  895604               mov dword ptr [esi + 4], edx
// 00572378  8b7204               mov esi, dword ptr [edx + 4]
// 0057237b  897004               mov dword ptr [eax + 4], esi
// 0057237e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00572381  3b5104               cmp edx, dword ptr [ecx + 4]
// 00572384  5e                   pop esi
// 00572385  750c                 jne 0x572393
// 00572387  894104               mov dword ptr [ecx + 4], eax
// 0057238a  895008               mov dword ptr [eax + 8], edx
// 0057238d  894204               mov dword ptr [edx + 4], eax
// 00572390  c20400               ret 4
// 00572393  8b4a04               mov ecx, dword ptr [edx + 4]
// 00572396  3b5108               cmp edx, dword ptr [ecx + 8]
// 00572399  750c                 jne 0x5723a7
// 0057239b  894108               mov dword ptr [ecx + 8], eax
// 0057239e  895008               mov dword ptr [eax + 8], edx
// 005723a1  894204               mov dword ptr [edx + 4], eax
// 005723a4  c20400               ret 4
// 005723a7  8901                 mov dword ptr [ecx], eax
// 005723a9  895008               mov dword ptr [eax + 8], edx
// 005723ac  894204               mov dword ptr [edx + 4], eax
// 005723af  c20400               ret 4
// library rbxgs/util\Name.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
