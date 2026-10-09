// from server: 40% by colin
// roc 2007-08 0044f920  unit: VCRobloxDoc::?$VerbBinder  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044f920
//
// 0044f920  6aff                 push -1
// 0044f922  68e30b7400           push 0x740be3
// 0044f927  64a100000000         mov eax, dword ptr fs:[0]
// 0044f92d  50                   push eax
// 0044f92e  51                   push ecx
// 0044f92f  56                   push esi
// 0044f930  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044f935  33c4                 xor eax, esp
// 0044f937  50                   push eax
// 0044f938  8d44240c             lea eax, [esp + 0xc]
// 0044f93c  64a300000000         mov dword ptr fs:[0], eax
// 0044f942  8bf1                 mov esi, ecx
// 0044f944  e887faffff           call 0x44f3d0
// 0044f949  33c0                 xor eax, eax
// 0044f94b  c706ec177900         mov dword ptr [esi], 0x7917ec
// 0044f951  894660               mov dword ptr [esi + 0x60], eax
// 0044f954  894668               mov dword ptr [esi + 0x68], eax
// 0044f957  89466c               mov dword ptr [esi + 0x6c], eax
// 0044f95a  894670               mov dword ptr [esi + 0x70], eax
// 0044f95d  894674               mov dword ptr [esi + 0x74], eax
// 0044f960  894678               mov dword ptr [esi + 0x78], eax
// 0044f963  8bc6                 mov eax, esi
// 0044f965  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f969  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f970  59                   pop ecx
// 0044f971  5e                   pop esi
// 0044f972  83c410               add esp, 0x10
// 0044f975  c3                   ret 

struct VCRobloxDoc_VerbBinder
{
    int field0;
    char pad[0x5c];
    int field60;
    char pad2[4];
    int field68;
    int field6c;
    int field70;
    int field74;
    int field78;

    VCRobloxDoc_VerbBinder();
};

extern "C" void __cdecl sub_0044f3d0();

VCRobloxDoc_VerbBinder::VCRobloxDoc_VerbBinder()
{
    sub_0044f3d0();
    field0 = 0x7917ec;
    field60 = 0;
    field68 = 0;
    field6c = 0;
    field70 = 0;
    field74 = 0;
    field78 = 0;
}
