// from server: 80% by colin
// roc 2007-08 005ea230  unit: RBX::FlagStandService  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea230
//
// 005ea230  56                   push esi
// 005ea231  8d442408             lea eax, [esp + 8]
// 005ea235  50                   push eax
// 005ea236  8bf1                 mov esi, ecx
// 005ea238  e893d7e9ff           call 0x4879d0
// 005ea23d  83c404               add esp, 4
// 005ea240  84c0                 test al, al
// 005ea242  7547                 jne 0x5ea28b
// 005ea244  6a18                 push 0x18
// 005ea246  c7460860a55f00       mov dword ptr [esi + 8], 0x5fa560
// 005ea24d  c706a0a05e00         mov dword ptr [esi], 0x5ea0a0
// 005ea253  e89e5c0400           call 0x62fef6
// 005ea258  83c404               add esp, 4
// 005ea25b  85c0                 test eax, eax
// 005ea25d  7429                 je 0x5ea288
// 005ea25f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ea263  8908                 mov dword ptr [eax], ecx
// 005ea265  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ea269  895004               mov dword ptr [eax + 4], edx
// 005ea26c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ea270  894808               mov dword ptr [eax + 8], ecx
// 005ea273  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ea277  89500c               mov dword ptr [eax + 0xc], edx
// 005ea27a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ea27e  894810               mov dword ptr [eax + 0x10], ecx
// 005ea281  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005ea285  895014               mov dword ptr [eax + 0x14], edx
// 005ea288  894604               mov dword ptr [esi + 4], eax
// 005ea28b  5e                   pop esi
// 005ea28c  c21c00               ret 0x1c

struct FlagStandService {
    char pad[4];
    void* field4;
    void* field8;
    void construct(int, int, int, int, int, int, int);
};

extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void FlagStandService::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    char local;
    if (sub_4879D0(&local)) {
        return;
    }
    field8 = (void*)0x5fa560;
    *(void**)this = (void*)0x5ea0a0;
    void* p = sub_62FEF6(0x18);
    if (p) {
        *(int*)((char*)p + 0) = a1;
        *(int*)((char*)p + 4) = a2;
        *(int*)((char*)p + 8) = a3;
        *(int*)((char*)p + 12) = a4;
        *(int*)((char*)p + 16) = a5;
        *(int*)((char*)p + 20) = a6;
    }
    field4 = p;
}
