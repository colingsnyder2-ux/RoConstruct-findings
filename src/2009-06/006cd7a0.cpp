// from server: 100% by atomic.potato
// roc 2009-06 006cd7a0  unit: RBX::AxisMoveTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cd7a0
//
// 006cd7a0  83ec08               sub esp, 8
// 006cd7a3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cd7a7  56                   push esi
// 006cd7a8  8bf1                 mov esi, ecx
// 006cd7aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cd7ae  8d542404             lea edx, [esp + 4]
// 006cd7b2  52                   push edx
// 006cd7b3  89442408             mov dword ptr [esp + 8], eax
// 006cd7b7  894c240c             mov dword ptr [esp + 0xc], ecx
// 006cd7bb  e8f0f0f6ff           call 0x63c8b0
// 006cd7c0  83c404               add esp, 4
// 006cd7c3  84c0                 test al, al
// 006cd7c5  7521                 jne 0x6cd7e8
// 006cd7c7  8d4608               lea eax, [esi + 8]
// 006cd7ca  85c0                 test eax, eax
// 006cd7cc  740d                 je 0x6cd7db
// 006cd7ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cd7d2  8b542408             mov edx, dword ptr [esp + 8]
// 006cd7d6  8908                 mov dword ptr [eax], ecx
// 006cd7d8  895004               mov dword ptr [eax + 4], edx
// 006cd7db  c706cc31a200         mov dword ptr [esi], 0xa231cc
// 006cd7e1  5e                   pop esi
// 006cd7e2  83c408               add esp, 8
// 006cd7e5  c20800               ret 8
// 006cd7e8  c70600000000         mov dword ptr [esi], 0
// 006cd7ee  5e                   pop esi
// 006cd7ef  83c408               add esp, 8
// 006cd7f2  c20800               ret 8

struct RBX_AxisMoveTool {
    int m0;
    int m4;
    int m8;
    int m12;
    void sub_006cd7a0(int a, int b);
};

extern "C" bool __cdecl func_0063c8b0(int *p);

void RBX_AxisMoveTool::sub_006cd7a0(int a, int b)
{
    int tmp[2];
    tmp[0] = a;
    tmp[1] = b;
    if (!func_0063c8b0(tmp)) {
        int *p = &m8;
        if (p) {
            p[0] = tmp[0];
            p[1] = tmp[1];
        }
        m0 = 0xa231cc;
    } else {
        m0 = 0;
    }
}
