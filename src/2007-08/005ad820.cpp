// roc 2007-08 005ad820  unit: P8CRenderSettings::?$GetSetImpl  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad820
//
// 005ad820  56                   push esi
// 005ad821  8bf1                 mov esi, ecx
// 005ad823  807e5400             cmp byte ptr [esi + 0x54], 0
// 005ad827  7543                 jne 0x5ad86c
// 005ad829  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ad82c  83f8fe               cmp eax, -2
// 005ad82f  57                   push edi
// 005ad830  8d7e44               lea edi, [esi + 0x44]
// 005ad833  740f                 je 0x5ad844
// 005ad835  85c0                 test eax, eax
// 005ad837  7405                 je 0x5ad83e
// 005ad839  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 005ad83c  7406                 je 0x5ad844
// 005ad83e  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad844  8b4704               mov eax, dword ptr [edi + 4]
// 005ad847  3b4650               cmp eax, dword ptr [esi + 0x50]
// 005ad84a  741a                 je 0x5ad866
// 005ad84c  8b5650               mov edx, dword ptr [esi + 0x50]
// 005ad84f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005ad852  8d4e58               lea ecx, [esi + 0x58]
// 005ad855  51                   push ecx
// 005ad856  52                   push edx
// 005ad857  50                   push eax
// 005ad858  57                   push edi
// 005ad859  8bce                 mov ecx, esi
// 005ad85b  e880f7ffff           call 0x5acfe0
// 005ad860  5f                   pop edi
// 005ad861  884654               mov byte ptr [esi + 0x54], al
// 005ad864  5e                   pop esi
// 005ad865  c3                   ret 
// 005ad866  32c0                 xor al, al
// 005ad868  884654               mov byte ptr [esi + 0x54], al
// 005ad86b  5f                   pop edi
// 005ad86c  5e                   pop esi
// 005ad86d  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
