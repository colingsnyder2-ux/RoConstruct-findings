// from server: 93% by colin
// roc 2007-08 006d2740  unit: CXTPReportHyperlinks  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2740
//
// 006d2740  55                   push ebp
// 006d2741  57                   push edi
// 006d2742  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d2746  8be9                 mov ebp, ecx
// 006d2748  3bfd                 cmp edi, ebp
// 006d274a  7454                 je 0x6d27a0
// 006d274c  8b4500               mov eax, dword ptr [ebp]
// 006d274f  8b5060               mov edx, dword ptr [eax + 0x60]
// 006d2752  ffd2                 call edx
// 006d2754  85ff                 test edi, edi
// 006d2756  7448                 je 0x6d27a0
// 006d2758  8b07                 mov eax, dword ptr [edi]
// 006d275a  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d275d  53                   push ebx
// 006d275e  8bcf                 mov ecx, edi
// 006d2760  ffd2                 call edx
// 006d2762  33db                 xor ebx, ebx
// 006d2764  85c0                 test eax, eax
// 006d2766  89442410             mov dword ptr [esp + 0x10], eax
// 006d276a  7e33                 jle 0x6d279f
// 006d276c  56                   push esi
// 006d276d  8d4900               lea ecx, [ecx]
// 006d2770  8b07                 mov eax, dword ptr [edi]
// 006d2772  8b5064               mov edx, dword ptr [eax + 0x64]
// 006d2775  53                   push ebx
// 006d2776  8bcf                 mov ecx, edi
// 006d2778  ffd2                 call edx
// 006d277a  8bf0                 mov esi, eax
// 006d277c  85f6                 test esi, esi
// 006d277e  7415                 je 0x6d2795
// 006d2780  8d4604               lea eax, [esi + 4]
// 006d2783  50                   push eax
// 006d2784  ff15ecd27700         call dword ptr [0x77d2ec]
// 006d278a  8b5500               mov edx, dword ptr [ebp]
// 006d278d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006d2790  56                   push esi
// 006d2791  8bcd                 mov ecx, ebp
// 006d2793  ffd0                 call eax
// 006d2795  83c301               add ebx, 1
// 006d2798  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 006d279c  7cd2                 jl 0x6d2770
// 006d279e  5e                   pop esi
// 006d279f  5b                   pop ebx
// 006d27a0  5f                   pop edi
// 006d27a1  5d                   pop ebp
// 006d27a2  c20400               ret 4

extern "C" long __stdcall InterlockedIncrement(long volatile*);

struct CXTPReportHyperlinks
{
    void Assign(CXTPReportHyperlinks* other);
};

void CXTPReportHyperlinks::Assign(CXTPReportHyperlinks* other)
{
    if (other == this)
        return;

    (*(void (__thiscall**)(CXTPReportHyperlinks*))(*(int*)this + 0x60))(this);

    if (other == 0)
        return;

    int count = (*(int (__thiscall**)(CXTPReportHyperlinks*))(*(int*)other + 0x58))(other);
    int i = 0;
    if (count > 0)
    {
        do
        {
            int item = (*(int (__thiscall**)(CXTPReportHyperlinks*, int))(*(int*)other + 0x64))(other, i);
            if (item != 0)
            {
                InterlockedIncrement((long volatile*)(item + 4));
                (*(void (__thiscall**)(CXTPReportHyperlinks*, int))(*(int*)this + 0x7c))(this, item);
            }
            i++;
        } while (i < count);
    }
}
