// from server: 84% by colin
// roc 2007-08 005fa600  unit: RBX::VSeat::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa600
//
// 005fa600  56                   push esi
// 005fa601  8d442408             lea eax, [esp + 8]
// 005fa605  50                   push eax
// 005fa606  8bf1                 mov esi, ecx
// 005fa608  e8c3d3e8ff           call 0x4879d0
// 005fa60d  83c404               add esp, 4
// 005fa610  84c0                 test al, al
// 005fa612  7547                 jne 0x5fa65b
// 005fa614  6a18                 push 0x18
// 005fa616  c7460830a55f00       mov dword ptr [esi + 8], 0x5fa530
// 005fa61d  c706a0a25f00         mov dword ptr [esi], 0x5fa2a0
// 005fa623  e8ce580300           call 0x62fef6
// 005fa628  83c404               add esp, 4
// 005fa62b  85c0                 test eax, eax
// 005fa62d  7429                 je 0x5fa658
// 005fa62f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fa633  8908                 mov dword ptr [eax], ecx
// 005fa635  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005fa639  895004               mov dword ptr [eax + 4], edx
// 005fa63c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fa640  894808               mov dword ptr [eax + 8], ecx
// 005fa643  8b542414             mov edx, dword ptr [esp + 0x14]
// 005fa647  89500c               mov dword ptr [eax + 0xc], edx
// 005fa64a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fa64e  894810               mov dword ptr [eax + 0x10], ecx
// 005fa651  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fa655  895014               mov dword ptr [eax + 0x14], edx
// 005fa658  894604               mov dword ptr [esi + 4], eax
// 005fa65b  5e                   pop esi
// 005fa65c  c21c00               ret 0x1c

struct VSeatFactoryProduct
{
    void* field_0;
    void* field_4;
    void* field_8;
    void construct(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
};

extern "C" bool __fastcall sub_4879d0(void* self, void* out);
extern "C" void* __cdecl sub_62fef6(unsigned int size);

void VSeatFactoryProduct::construct(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int buf[6];
    if (sub_4879d0(this, buf))
        return;

    field_8 = (void*)0x5fa530;
    field_0 = (void*)0x5fa2a0;

    void* p = sub_62fef6(0x18);
    if (p)
    {
        ((int*)p)[0] = buf[0];
        ((int*)p)[1] = buf[1];
        ((int*)p)[2] = buf[2];
        ((int*)p)[3] = buf[3];
        ((int*)p)[4] = buf[4];
        ((int*)p)[5] = buf[5];
    }
    field_4 = p;
}
