// from server: 100% by colin
// roc 2007-08 00664780  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664780
//
// 00664780  56                   push esi
// 00664781  57                   push edi
// 00664782  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00664786  57                   push edi
// 00664787  8bf1                 mov esi, ecx
// 00664789  e872ffffff           call 0x664700
// 0066478e  85c0                 test eax, eax
// 00664790  57                   push edi
// 00664791  8bce                 mov ecx, esi
// 00664793  7418                 je 0x6647ad
// 00664795  e856fdffff           call 0x6644f0
// 0066479a  5f                   pop edi
// 0066479b  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006647a2  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006647a9  5e                   pop esi
// 006647aa  c20400               ret 4
// 006647ad  e80efdffff           call 0x6644c0
// 006647b2  5f                   pop edi
// 006647b3  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006647ba  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006647c1  5e                   pop esi
// 006647c2  c20400               ret 4

struct VCXTPReportRows_CXTPHeapObjectT
{
    int func_00664700(int);
    void func_006644f0(int);
    void func_006644c0(int);
    void func_00664780(int);
};

void VCXTPReportRows_CXTPHeapObjectT::func_00664780(int arg)
{
    if (func_00664700(arg))
    {
        func_006644f0(arg);
        *(int*)((char*)this + 0x24) = -1;
        *(int*)((char*)this + 0x40) = 1;
    }
    else
    {
        func_006644c0(arg);
        *(int*)((char*)this + 0x24) = -1;
        *(int*)((char*)this + 0x40) = 1;
    }
}
