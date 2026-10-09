// from server: 80% by colin
// roc 2007-08 005e6780  unit: RBX::VFlag::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6780
//
// 005e6780  56                   push esi
// 005e6781  8d442408             lea eax, [esp + 8]
// 005e6785  50                   push eax
// 005e6786  8bf1                 mov esi, ecx
// 005e6788  e84312eaff           call 0x4879d0
// 005e678d  83c404               add esp, 4
// 005e6790  84c0                 test al, al
// 005e6792  7547                 jne 0x5e67db
// 005e6794  6a18                 push 0x18
// 005e6796  c7460800295d00       mov dword ptr [esi + 8], 0x5d2900
// 005e679d  c70620675e00         mov dword ptr [esi], 0x5e6720
// 005e67a3  e84e970400           call 0x62fef6
// 005e67a8  83c404               add esp, 4
// 005e67ab  85c0                 test eax, eax
// 005e67ad  7429                 je 0x5e67d8
// 005e67af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e67b3  8908                 mov dword ptr [eax], ecx
// 005e67b5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005e67b9  895004               mov dword ptr [eax + 4], edx
// 005e67bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e67c0  894808               mov dword ptr [eax + 8], ecx
// 005e67c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e67c7  89500c               mov dword ptr [eax + 0xc], edx
// 005e67ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e67ce  894810               mov dword ptr [eax + 0x10], ecx
// 005e67d1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005e67d5  895014               mov dword ptr [eax + 0x14], edx
// 005e67d8  894604               mov dword ptr [esi + 4], eax
// 005e67db  5e                   pop esi
// 005e67dc  c21c00               ret 0x1c

struct RBX_VFlag_FactoryProduct {
    void* m_p0;
    void* m_p4;
    void* m_p8;
    void construct(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6);
};

extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void RBX_VFlag_FactoryProduct::construct(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
{
    char local;
    if (sub_4879D0(&local) == 0)
    {
        m_p8 = (void*)0x5d2900;
        m_p0 = (void*)0x5e6720;
        void* p = sub_62FEF6(0x18);
        if (p)
        {
            ((void**)p)[0] = a0;
            ((void**)p)[1] = a1;
            ((void**)p)[2] = a2;
            ((void**)p)[3] = a3;
            ((void**)p)[4] = a4;
            ((void**)p)[5] = a5;
        }
        m_p4 = p;
    }
}
