// from server: 53% by colin
// roc 2007-08 0057cf90  unit: RBX::Workspace  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057cf90
//
// 0057cf90  56                   push esi
// 0057cf91  8d442408             lea eax, [esp + 8]
// 0057cf95  50                   push eax
// 0057cf96  8bf1                 mov esi, ecx
// 0057cf98  e833aaf0ff           call 0x4879d0
// 0057cf9d  83c404               add esp, 4
// 0057cfa0  84c0                 test al, al
// 0057cfa2  7539                 jne 0x57cfdd
// 0057cfa4  6a10                 push 0x10
// 0057cfa6  c74608c0c75700       mov dword ptr [esi + 8], 0x57c7c0
// 0057cfad  c706f0bb5700         mov dword ptr [esi], 0x57bbf0
// 0057cfb3  e83e2f0b00           call 0x62fef6
// 0057cfb8  83c404               add esp, 4
// 0057cfbb  85c0                 test eax, eax
// 0057cfbd  741b                 je 0x57cfda
// 0057cfbf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057cfc3  8908                 mov dword ptr [eax], ecx
// 0057cfc5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057cfc9  895004               mov dword ptr [eax + 4], edx
// 0057cfcc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057cfd0  894808               mov dword ptr [eax + 8], ecx
// 0057cfd3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057cfd7  89500c               mov dword ptr [eax + 0xc], edx
// 0057cfda  894604               mov dword ptr [esi + 4], eax
// 0057cfdd  5e                   pop esi
// 0057cfde  c21400               ret 0x14

struct Workspace {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b, void* c, void* d);
};

extern "C" int __stdcall sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void Workspace::construct(void* a, void* b, void* c, void* d)
{
    char buf[16];
    if (!sub_4879D0(buf)) {
        field8 = (void*)0x57c7c0;
        field0 = (void*)0x57bbf0;
        void* p = sub_62FEF6(0x10);
        if (p) {
            ((void**)p)[0] = ((void**)buf)[0];
            ((void**)p)[1] = ((void**)buf)[1];
            ((void**)p)[2] = ((void**)buf)[2];
            ((void**)p)[3] = ((void**)buf)[3];
        }
        field4 = p;
    }
}
