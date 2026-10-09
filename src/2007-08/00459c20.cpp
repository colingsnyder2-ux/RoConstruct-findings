// from server: 100% by colin
// roc 2007-08 00459c20  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459c20
//
// 00459c20  83ec08               sub esp, 8
// 00459c23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00459c27  56                   push esi
// 00459c28  8bf1                 mov esi, ecx
// 00459c2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00459c2e  8d542404             lea edx, [esp + 4]
// 00459c32  52                   push edx
// 00459c33  89442408             mov dword ptr [esp + 8], eax
// 00459c37  894c240c             mov dword ptr [esp + 0xc], ecx
// 00459c3b  e890dd0200           call 0x4879d0
// 00459c40  83c404               add esp, 4
// 00459c43  84c0                 test al, al
// 00459c45  752b                 jne 0x459c72
// 00459c47  6a08                 push 8
// 00459c49  c7460860974500       mov dword ptr [esi + 8], 0x459760
// 00459c50  c70600964500         mov dword ptr [esi], 0x459600
// 00459c56  e89b621d00           call 0x62fef6
// 00459c5b  83c404               add esp, 4
// 00459c5e  85c0                 test eax, eax
// 00459c60  740d                 je 0x459c6f
// 00459c62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459c66  8908                 mov dword ptr [eax], ecx
// 00459c68  8b542408             mov edx, dword ptr [esp + 8]
// 00459c6c  895004               mov dword ptr [eax + 4], edx
// 00459c6f  894604               mov dword ptr [esi + 4], eax
// 00459c72  5e                   pop esi
// 00459c73  83c408               add esp, 8
// 00459c76  c20800               ret 8

struct S {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b);
};

extern "C" char __cdecl func_004879d0(void* a);
extern "C" void* __cdecl func_0062fef6(unsigned int size);

void S::construct(void* a, void* b)
{
    void* local[2];
    local[0] = a;
    local[1] = b;
    if (!func_004879d0(local)) {
        field8 = (void*)0x459760;
        field0 = (void*)0x459600;
        void* p = func_0062fef6(8);
        if (p) {
            *(void**)p = local[0];
            *(void**)((char*)p + 4) = local[1];
        }
        field4 = p;
    }
}
