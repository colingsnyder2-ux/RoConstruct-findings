// from server: 100% by colin
// roc 2007-08 004d3cd0  unit: RBX::Render::Chunk  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d3cd0
//
// 004d3cd0  83ec08               sub esp, 8
// 004d3cd3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d3cd7  56                   push esi
// 004d3cd8  8bf1                 mov esi, ecx
// 004d3cda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d3cde  8d542404             lea edx, [esp + 4]
// 004d3ce2  52                   push edx
// 004d3ce3  89442408             mov dword ptr [esp + 8], eax
// 004d3ce7  894c240c             mov dword ptr [esp + 0xc], ecx
// 004d3ceb  e8e03cfbff           call 0x4879d0
// 004d3cf0  83c404               add esp, 4
// 004d3cf3  84c0                 test al, al
// 004d3cf5  752b                 jne 0x4d3d22
// 004d3cf7  6a08                 push 8
// 004d3cf9  c74608b0665400       mov dword ptr [esi + 8], 0x5466b0
// 004d3d00  c70610244d00         mov dword ptr [esi], 0x4d2410
// 004d3d06  e8ebc11500           call 0x62fef6
// 004d3d0b  83c404               add esp, 4
// 004d3d0e  85c0                 test eax, eax
// 004d3d10  740d                 je 0x4d3d1f
// 004d3d12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d3d16  8908                 mov dword ptr [eax], ecx
// 004d3d18  8b542408             mov edx, dword ptr [esp + 8]
// 004d3d1c  895004               mov dword ptr [eax + 4], edx
// 004d3d1f  894604               mov dword ptr [esi + 4], eax
// 004d3d22  5e                   pop esi
// 004d3d23  83c408               add esp, 8
// 004d3d26  c20800               ret 8

struct Chunk {
    void f(int, int);
};

extern "C" bool __cdecl sub_4879D0(int*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void Chunk::f(int a, int b) {
    int local[2];
    local[0] = a;
    local[1] = b;
    if (!sub_4879D0(local)) {
        *(int*)((char*)this + 8) = 0x5466b0;
        *(int*)this = 0x4d2410;
        void* p = sub_62FEF6(8);
        if (p) {
            *(int*)p = local[0];
            *(int*)((char*)p + 4) = local[1];
        }
        *(int*)((char*)this + 4) = (int)p;
    }
}
