// from server: 100% by king_originala
// roc 2008-06 00678910  unit: Ogre::RbxSceneManagerFactory  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678910
//
// 00678910  53                   push ebx
// 00678911  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00678915  56                   push esi
// 00678916  57                   push edi
// 00678917  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067891b  2bfb                 sub edi, ebx
// 0067891d  c1ff02               sar edi, 2
// 00678920  8bc7                 mov eax, edi
// 00678922  99                   cdq 
// 00678923  2bc2                 sub eax, edx
// 00678925  8bf0                 mov esi, eax
// 00678927  d1fe                 sar esi, 1
// 00678929  85f6                 test esi, esi
// 0067892b  7e1b                 jle 0x678948
// 0067892d  8d4900               lea ecx, [ecx]
// 00678930  d944b3fc             fld dword ptr [ebx + esi*4 - 4]
// 00678934  51                   push ecx
// 00678935  4e                   dec esi
// 00678936  d91c24               fstp dword ptr [esp]
// 00678939  57                   push edi
// 0067893a  56                   push esi
// 0067893b  53                   push ebx
// 0067893c  e83ffeffff           call 0x678780
// 00678941  83c410               add esp, 0x10
// 00678944  85f6                 test esi, esi
// 00678946  7fe8                 jg 0x678930
// 00678948  5f                   pop edi
// 00678949  5e                   pop esi
// 0067894a  5b                   pop ebx
// 0067894b  c3                   ret 

extern void __cdecl adjust_heap(float* first, int parent, int count, float value);

void __cdecl make_heap(float* first, float* last)
{
    int count = last - first;
    int parent = count / 2;
    while (parent > 0)
    {
        --parent;
        adjust_heap(first, parent, count, first[parent]);
    }
}
