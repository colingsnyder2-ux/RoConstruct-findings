// from server: 100% by king_originala
// roc 2008-06 00678780  unit: Ogre::RbxSceneManagerFactory  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678780
//
// 00678780  8b542408             mov edx, dword ptr [esp + 8]
// 00678784  53                   push ebx
// 00678785  56                   push esi
// 00678786  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067878a  57                   push edi
// 0067878b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0067878f  8d4c1202             lea ecx, [edx + edx + 2]
// 00678793  3bcf                 cmp ecx, edi
// 00678795  8bda                 mov ebx, edx
// 00678797  7d26                 jge 0x6787bf
// 00678799  8da42400000000       lea esp, [esp]
// 006787a0  d9448efc             fld dword ptr [esi + ecx*4 - 4]
// 006787a4  d81c8e               fcomp dword ptr [esi + ecx*4]
// 006787a7  dfe0                 fnstsw ax
// 006787a9  f6c441               test ah, 0x41
// 006787ac  7501                 jne 0x6787af
// 006787ae  49                   dec ecx
// 006787af  d9048e               fld dword ptr [esi + ecx*4]
// 006787b2  d91c96               fstp dword ptr [esi + edx*4]
// 006787b5  8bd1                 mov edx, ecx
// 006787b7  8d4c0902             lea ecx, [ecx + ecx + 2]
// 006787bb  3bcf                 cmp ecx, edi
// 006787bd  7ce1                 jl 0x6787a0
// 006787bf  750a                 jne 0x6787cb
// 006787c1  d944befc             fld dword ptr [esi + edi*4 - 4]
// 006787c5  d91c96               fstp dword ptr [esi + edx*4]
// 006787c8  8d57ff               lea edx, [edi - 1]
// 006787cb  d944241c             fld dword ptr [esp + 0x1c]
// 006787cf  51                   push ecx
// 006787d0  d91c24               fstp dword ptr [esp]
// 006787d3  53                   push ebx
// 006787d4  52                   push edx
// 006787d5  56                   push esi
// 006787d6  e885feffff           call 0x678660
// 006787db  83c410               add esp, 0x10
// 006787de  5f                   pop edi
// 006787df  5e                   pop esi
// 006787e0  5b                   pop ebx
// 006787e1  c3                   ret 

extern void __cdecl push_heap(float*, int, int, float);

#pragma float_control(precise, off, push)

void __cdecl adjust_heap(float* first, int hole, int length, float value)
{
    int top = hole;
    int child = 2 * hole + 2;

    while (child < length)
    {
        if (first[child] < first[child - 1])
            --child;
        first[hole] = first[child];
        hole = child;
        child = 2 * child + 2;
    }

    if (child == length)
    {
        first[hole] = first[length - 1];
        hole = length - 1;
    }

    push_heap(first, hole, top, value);
}

#pragma float_control(pop)
