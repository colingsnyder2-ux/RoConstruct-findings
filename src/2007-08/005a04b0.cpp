// from server: 49% by colin
// roc 2007-08 005a04b0  unit: RBX::SpawnerService  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a04b0
//
// 005a04b0  56                   push esi
// 005a04b1  8d442408             lea eax, [esp + 8]
// 005a04b5  50                   push eax
// 005a04b6  8bf1                 mov esi, ecx
// 005a04b8  e81375eeff           call 0x4879d0
// 005a04bd  83c404               add esp, 4
// 005a04c0  84c0                 test al, al
// 005a04c2  7547                 jne 0x5a050b
// 005a04c4  6a18                 push 0x18
// 005a04c6  c7460860a55f00       mov dword ptr [esi + 8], 0x5fa560
// 005a04cd  c706f0025a00         mov dword ptr [esi], 0x5a02f0
// 005a04d3  e81efa0800           call 0x62fef6
// 005a04d8  83c404               add esp, 4
// 005a04db  85c0                 test eax, eax
// 005a04dd  7429                 je 0x5a0508
// 005a04df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a04e3  8908                 mov dword ptr [eax], ecx
// 005a04e5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a04e9  895004               mov dword ptr [eax + 4], edx
// 005a04ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a04f0  894808               mov dword ptr [eax + 8], ecx
// 005a04f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a04f7  89500c               mov dword ptr [eax + 0xc], edx
// 005a04fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a04fe  894810               mov dword ptr [eax + 0x10], ecx
// 005a0501  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a0505  895014               mov dword ptr [eax + 0x14], edx
// 005a0508  894604               mov dword ptr [esi + 4], eax
// 005a050b  5e                   pop esi
// 005a050c  c21c00               ret 0x1c

struct SpawnerService {
    char pad0[4];
    void* field4;
    void* field8;
    void construct(int a, int b, int c, int d, int e, int f);
};

extern "C" int __stdcall sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void SpawnerService::construct(int a, int b, int c, int d, int e, int f)
{
    int local[6];
    local[0] = a;
    local[1] = b;
    local[2] = c;
    local[3] = d;
    local[4] = e;
    local[5] = f;

    if (sub_4879D0(local)) {
        return;
    }

    field8 = (void*)0x5fa560;
    *(void**)this = (void*)0x5a02f0;

    void* p = sub_62FEF6(0x18);
    if (p) {
        *(int*)((char*)p + 0) = local[0];
        *(int*)((char*)p + 4) = local[1];
        *(int*)((char*)p + 8) = local[2];
        *(int*)((char*)p + 12) = local[3];
        *(int*)((char*)p + 16) = local[4];
        *(int*)((char*)p + 20) = local[5];
    }
    field4 = p;
}
