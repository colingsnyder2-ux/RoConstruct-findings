// from server: 100% by king_originala
// roc 2008-06 00678880  unit: Ogre::RbxSceneManagerFactory  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678880
//
// 00678880  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00678884  56                   push esi
// 00678885  8b742410             mov esi, dword ptr [esp + 0x10]
// 00678889  8bc6                 mov eax, esi
// 0067888b  2bc1                 sub eax, ecx
// 0067888d  c1f802               sar eax, 2
// 00678890  83f828               cmp eax, 0x28
// 00678893  7e67                 jle 0x6788fc
// 00678895  40                   inc eax
// 00678896  99                   cdq 
// 00678897  83e207               and edx, 7
// 0067889a  03c2                 add eax, edx
// 0067889c  53                   push ebx
// 0067889d  c1f803               sar eax, 3
// 006788a0  55                   push ebp
// 006788a1  8d14c500000000       lea edx, [eax*8]
// 006788a8  57                   push edi
// 006788a9  8954241c             mov dword ptr [esp + 0x1c], edx
// 006788ad  8d3c8500000000       lea edi, [eax*4]
// 006788b4  03d1                 add edx, ecx
// 006788b6  8d040f               lea eax, [edi + ecx]
// 006788b9  52                   push edx
// 006788ba  50                   push eax
// 006788bb  51                   push ecx
// 006788bc  89442420             mov dword ptr [esp + 0x20], eax
// 006788c0  e85bfeffff           call 0x678720
// 006788c5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006788c9  8d041f               lea eax, [edi + ebx]
// 006788cc  50                   push eax
// 006788cd  8bcb                 mov ecx, ebx
// 006788cf  2bcf                 sub ecx, edi
// 006788d1  53                   push ebx
// 006788d2  51                   push ecx
// 006788d3  e848feffff           call 0x678720
// 006788d8  8bee                 mov ebp, esi
// 006788da  56                   push esi
// 006788db  2b742438             sub esi, dword ptr [esp + 0x38]
// 006788df  2bef                 sub ebp, edi
// 006788e1  55                   push ebp
// 006788e2  56                   push esi
// 006788e3  e838feffff           call 0x678720
// 006788e8  8b542438             mov edx, dword ptr [esp + 0x38]
// 006788ec  55                   push ebp
// 006788ed  53                   push ebx
// 006788ee  52                   push edx
// 006788ef  e82cfeffff           call 0x678720
// 006788f4  83c430               add esp, 0x30
// 006788f7  5f                   pop edi
// 006788f8  5d                   pop ebp
// 006788f9  5b                   pop ebx
// 006788fa  5e                   pop esi
// 006788fb  c3                   ret 
// 006788fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00678900  56                   push esi
// 00678901  50                   push eax
// 00678902  51                   push ecx
// 00678903  e818feffff           call 0x678720
// 00678908  83c40c               add esp, 0xc
// 0067890b  5e                   pop esi
// 0067890c  c3                   ret 

extern void __cdecl median3(int*, int*, int*);

void __cdecl sampleMedian(int* first, int* middle, int* last)
{
    int count = last - first;
    if (count > 40)
    {
        int step = (count + 1) / 8;
        median3(first, first + step, first + 2 * step);
        median3(middle - step, middle, middle + step);
        median3(last - 2 * step, last - step, last);
        median3(first + step, middle, last - step);
    }
    else
    {
        median3(first, middle, last);
    }
}
