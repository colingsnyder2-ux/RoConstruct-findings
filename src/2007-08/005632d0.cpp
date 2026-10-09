// from server: 69% by colin
// roc 2007-08 005632d0  unit: RBX::CameraTiltUpCommand  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005632d0
//
// 005632d0  56                   push esi
// 005632d1  8bf1                 mov esi, ecx
// 005632d3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005632d6  8d8828020000         lea ecx, [eax + 0x228]
// 005632dc  8b01                 mov eax, dword ptr [ecx]
// 005632de  8b5004               mov edx, dword ptr [eax + 4]
// 005632e1  ffd2                 call edx
// 005632e3  6aff                 push -1
// 005632e5  8bc8                 mov ecx, eax
// 005632e7  e8246b0300           call 0x599e10
// 005632ec  84c0                 test al, al
// 005632ee  7434                 je 0x563324
// 005632f0  8b460c               mov eax, dword ptr [esi + 0xc]
// 005632f3  6a0b                 push 0xb
// 005632f5  50                   push eax
// 005632f6  e815e8ffff           call 0x561b10
// 005632fb  83c404               add esp, 4
// 005632fe  8bc8                 mov ecx, eax
// 00563300  e80b950200           call 0x58c810
// 00563305  8b742408             mov esi, dword ptr [esp + 8]
// 00563309  6aff                 push -1
// 0056330b  8bce                 mov ecx, esi
// 0056330d  e89ed5eaff           call 0x4108b0
// 00563312  8b16                 mov edx, dword ptr [esi]
// 00563314  8b4204               mov eax, dword ptr [edx + 4]
// 00563317  6a01                 push 1
// 00563319  8bce                 mov ecx, esi
// 0056331b  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00563322  ffd0                 call eax
// 00563324  5e                   pop esi
// 00563325  c20400               ret 4

struct CameraTiltUpCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

extern "C" void* __stdcall sub_561B10(void* workspace, int id);
extern "C" void __stdcall sub_58C810(void* p);
extern "C" void __stdcall sub_4108B0(void* p, int val);
extern "C" bool __stdcall sub_599E10(void* p, int val);

void CameraTiltUpCommand::doIt(void* dataState) {
    void* ws = this->workspace;
    void* p = *(void**)((char*)ws + 0x228);
    void* (*fn)(void*) = *(void* (**)(void*))((char*)p + 4);
    void* r = fn(p);
    if (sub_599E10(r, -1)) {
        void* ws2 = this->workspace;
        void* q = sub_561B10(ws2, 0xb);
        sub_58C810(q);
        void* ds = dataState;
        sub_4108B0(ds, -1);
        void* (*fn2)(void*) = *(void* (**)(void*))((char*)ds + 4);
        *(int*)((char*)ds + 4) = -1;
        fn2(ds);
    }
}
