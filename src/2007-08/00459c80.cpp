// from server: 100% by colin
// roc 2007-08 00459c80  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459c80
//
// 00459c80  83ec08               sub esp, 8
// 00459c83  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00459c87  56                   push esi
// 00459c88  8bf1                 mov esi, ecx
// 00459c8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00459c8e  8d542404             lea edx, [esp + 4]
// 00459c92  52                   push edx
// 00459c93  89442408             mov dword ptr [esp + 8], eax
// 00459c97  894c240c             mov dword ptr [esp + 0xc], ecx
// 00459c9b  e830dd0200           call 0x4879d0
// 00459ca0  83c404               add esp, 4
// 00459ca3  84c0                 test al, al
// 00459ca5  752b                 jne 0x459cd2
// 00459ca7  6a08                 push 8
// 00459ca9  c7460820945800       mov dword ptr [esi + 8], 0x589420
// 00459cb0  c70660964500         mov dword ptr [esi], 0x459660
// 00459cb6  e83b621d00           call 0x62fef6
// 00459cbb  83c404               add esp, 4
// 00459cbe  85c0                 test eax, eax
// 00459cc0  740d                 je 0x459ccf
// 00459cc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459cc6  8908                 mov dword ptr [eax], ecx
// 00459cc8  8b542408             mov edx, dword ptr [esp + 8]
// 00459ccc  895004               mov dword ptr [eax + 4], edx
// 00459ccf  894604               mov dword ptr [esi + 4], eax
// 00459cd2  5e                   pop esi
// 00459cd3  83c408               add esp, 8
// 00459cd6  c20800               ret 8

struct S {
    void m(int a, int b);
    int pad0;
    int field4;
    int field8;
};

extern "C" char __cdecl func_004879d0(int* p);
extern "C" void* __cdecl func_0062fef6(unsigned int size);

void S::m(int a, int b)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    if (!func_004879d0(local)) {
        field8 = 0x589420;
        *(int*)this = 0x459660;
        void* p = func_0062fef6(8);
        if (p) {
            *(int*)p = local[0];
            *(int*)((char*)p + 4) = local[1];
        }
        field4 = (int)p;
    }
}
