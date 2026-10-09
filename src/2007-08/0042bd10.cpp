// from server: 92% by colin
// roc 2007-08 0042bd10  unit: VCLuaFunction::?$CComObjectNoLock  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042bd10
//
// 0042bd10  56                   push esi
// 0042bd11  8d442408             lea eax, [esp + 8]
// 0042bd15  50                   push eax
// 0042bd16  8bf1                 mov esi, ecx
// 0042bd18  e8b3bc0500           call 0x4879d0
// 0042bd1d  83c404               add esp, 4
// 0042bd20  84c0                 test al, al
// 0042bd22  7539                 jne 0x42bd5d
// 0042bd24  6a10                 push 0x10
// 0042bd26  c74608c0c75700       mov dword ptr [esi + 8], 0x57c7c0
// 0042bd2d  c706a0b34200         mov dword ptr [esi], 0x42b3a0
// 0042bd33  e8be412000           call 0x62fef6
// 0042bd38  83c404               add esp, 4
// 0042bd3b  85c0                 test eax, eax
// 0042bd3d  741b                 je 0x42bd5a
// 0042bd3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042bd43  8908                 mov dword ptr [eax], ecx
// 0042bd45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0042bd49  895004               mov dword ptr [eax + 4], edx
// 0042bd4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042bd50  894808               mov dword ptr [eax + 8], ecx
// 0042bd53  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042bd57  89500c               mov dword ptr [eax + 0xc], edx
// 0042bd5a  894604               mov dword ptr [esi + 4], eax
// 0042bd5d  5e                   pop esi
// 0042bd5e  c21400               ret 0x14

struct VCLuaFunction
{
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b, void* c, void* d, void* e);
};

extern "C" char __cdecl sub_4879D0(void* p);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void VCLuaFunction::construct(void* a, void* b, void* c, void* d, void* e)
{
    if (!sub_4879D0(&a))
    {
        field8 = (void*)0x57C7C0;
        field0 = (void*)0x42B3A0;
        void* p = sub_62FEF6(0x10);
        if (p)
        {
            ((void**)p)[0] = a;
            ((void**)p)[1] = b;
            ((void**)p)[2] = c;
            ((void**)p)[3] = d;
        }
        field4 = p;
    }
}
