// from server: 72% by colin
// roc 2007-08 00563330  unit: RBX::CameraTiltDownCommand  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563330
//
// 00563330  56                   push esi
// 00563331  8bf1                 mov esi, ecx
// 00563333  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563336  8d8828020000         lea ecx, [eax + 0x228]
// 0056333c  8b01                 mov eax, dword ptr [ecx]
// 0056333e  8b5004               mov edx, dword ptr [eax + 4]
// 00563341  ffd2                 call edx
// 00563343  6a01                 push 1
// 00563345  8bc8                 mov ecx, eax
// 00563347  e8c46a0300           call 0x599e10
// 0056334c  84c0                 test al, al
// 0056334e  7434                 je 0x563384
// 00563350  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563353  6a0b                 push 0xb
// 00563355  50                   push eax
// 00563356  e8b5e7ffff           call 0x561b10
// 0056335b  83c404               add esp, 4
// 0056335e  8bc8                 mov ecx, eax
// 00563360  e8ab940200           call 0x58c810
// 00563365  8b742408             mov esi, dword ptr [esp + 8]
// 00563369  6aff                 push -1
// 0056336b  8bce                 mov ecx, esi
// 0056336d  e83ed5eaff           call 0x4108b0
// 00563372  8b16                 mov edx, dword ptr [esi]
// 00563374  8b4204               mov eax, dword ptr [edx + 4]
// 00563377  6a01                 push 1
// 00563379  8bce                 mov ecx, esi
// 0056337b  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00563382  ffd0                 call eax
// 00563384  5e                   pop esi
// 00563385  c20400               ret 4

struct CameraTiltDownCommand {
    char pad[0xc];
    void* field_c;
    void doIt(void* dataState);
};

extern "C" void* __stdcall sub_00561b10(void*, int);
extern "C" void __stdcall sub_0058c810(void*);
extern "C" int __stdcall sub_00599e10(void*, int);
extern "C" void __stdcall sub_004108b0(void*, int);

void CameraTiltDownCommand::doIt(void* dataState)
{
    void* p = field_c;
    void* q = (char*)p + 0x228;
    void* r = *(void**)q;
    void* (*fn)(void*) = *(void* (**)(void*))((char*)r + 4);
    void* s = fn(r);
    if (sub_00599e10(s, 1) != 0) {
        void* t = sub_00561b10(field_c, 0xb);
        sub_0058c810(t);
        sub_004108b0(dataState, -1);
        void* u = *(void**)dataState;
        void* (*fn2)(void*) = *(void* (**)(void*))((char*)u + 4);
        *(int*)((char*)dataState + 4) = -1;
        fn2(dataState);
    }
}
