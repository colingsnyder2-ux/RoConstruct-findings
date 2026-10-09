// from server: 100% by colin
// roc 2007-08 00589fc0  unit: VStockSound::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00589fc0
//
// 00589fc0  83ec08               sub esp, 8
// 00589fc3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00589fc7  56                   push esi
// 00589fc8  8bf1                 mov esi, ecx
// 00589fca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00589fce  8d542404             lea edx, [esp + 4]
// 00589fd2  52                   push edx
// 00589fd3  89442408             mov dword ptr [esp + 8], eax
// 00589fd7  894c240c             mov dword ptr [esp + 0xc], ecx
// 00589fdb  e8f0d9efff           call 0x4879d0
// 00589fe0  83c404               add esp, 4
// 00589fe3  84c0                 test al, al
// 00589fe5  752b                 jne 0x58a012
// 00589fe7  6a08                 push 8
// 00589fe9  c7460820945800       mov dword ptr [esi + 8], 0x589420
// 00589ff0  c706308e5800         mov dword ptr [esi], 0x588e30
// 00589ff6  e8fb5e0a00           call 0x62fef6
// 00589ffb  83c404               add esp, 4
// 00589ffe  85c0                 test eax, eax
// 0058a000  740d                 je 0x58a00f
// 0058a002  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058a006  8908                 mov dword ptr [eax], ecx
// 0058a008  8b542408             mov edx, dword ptr [esp + 8]
// 0058a00c  895004               mov dword ptr [eax + 4], edx
// 0058a00f  894604               mov dword ptr [esi + 4], eax
// 0058a012  5e                   pop esi
// 0058a013  83c408               add esp, 8
// 0058a016  c20800               ret 8

struct VStockSound_FactoryProduct {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b);
};

extern "C" char __cdecl sub_004879d0(void* p);
extern "C" void* __cdecl sub_0062fef6(unsigned int size);

void VStockSound_FactoryProduct::construct(void* a, void* b)
{
    void* local[2];
    local[0] = a;
    local[1] = b;
    if (!sub_004879d0(local)) {
        field8 = (void*)0x589420;
        field0 = (void*)0x588e30;
        void* p = sub_0062fef6(8);
        if (p != 0) {
            *(void**)p = local[0];
            *(void**)((char*)p + 4) = local[1];
        }
        field4 = p;
    }
}
