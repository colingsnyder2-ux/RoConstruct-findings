// from server: 82% by colin
// roc 2007-08 005fa660  unit: RBX::VSeat::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa660
//
// 005fa660  56                   push esi
// 005fa661  8d442408             lea eax, [esp + 8]
// 005fa665  50                   push eax
// 005fa666  8bf1                 mov esi, ecx
// 005fa668  e863d3e8ff           call 0x4879d0
// 005fa66d  83c404               add esp, 4
// 005fa670  84c0                 test al, al
// 005fa672  7547                 jne 0x5fa6bb
// 005fa674  6a18                 push 0x18
// 005fa676  c7460860a55f00       mov dword ptr [esi + 8], 0x5fa560
// 005fa67d  c706e0a25f00         mov dword ptr [esi], 0x5fa2e0
// 005fa683  e86e580300           call 0x62fef6
// 005fa688  83c404               add esp, 4
// 005fa68b  85c0                 test eax, eax
// 005fa68d  7429                 je 0x5fa6b8
// 005fa68f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fa693  8908                 mov dword ptr [eax], ecx
// 005fa695  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005fa699  895004               mov dword ptr [eax + 4], edx
// 005fa69c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fa6a0  894808               mov dword ptr [eax + 8], ecx
// 005fa6a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005fa6a7  89500c               mov dword ptr [eax + 0xc], edx
// 005fa6aa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fa6ae  894810               mov dword ptr [eax + 0x10], ecx
// 005fa6b1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fa6b5  895014               mov dword ptr [eax + 0x14], edx
// 005fa6b8  894604               mov dword ptr [esi + 4], eax
// 005fa6bb  5e                   pop esi
// 005fa6bc  c21c00               ret 0x1c

struct FactoryProduct {
    char pad0[4];
    void* field4;
    void* field8;
    void construct(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7);
};

extern "C" char __stdcall sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void FactoryProduct::construct(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7)
{
    if (sub_4879D0(&a1)) {
        return;
    }
    field8 = (void*)0x5fa560;
    *(void**)this = (void*)0x5fa2e0;
    void* p = sub_62FEF6(0x18);
    if (p) {
        *(void**)p = a1;
        *(void**)((char*)p + 4) = a2;
        *(void**)((char*)p + 8) = a3;
        *(void**)((char*)p + 12) = a4;
        *(void**)((char*)p + 16) = a5;
        *(void**)((char*)p + 20) = a6;
    }
    field4 = p;
}
