// from server: 100% by king_originala
// roc 2008-06 00408090  unit: VCApp::?$CComObject  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408090
//
// 00408090  83ec28               sub esp, 0x28
// 00408093  e8d0882900           call 0x6a0968
// 00408098  50                   push eax
// 00408099  8d4c2404             lea ecx, [esp + 4]
// 0040809d  e8c0882900           call 0x6a0962
// 004080a2  8d442410             lea eax, [esp + 0x10]
// 004080a6  50                   push eax
// 004080a7  b984dc9600           mov ecx, 0x96dc84
// 004080ac  e80f1b0200           call 0x429bc0
// 004080b1  8d4c2410             lea ecx, [esp + 0x10]
// 004080b5  e816f7ffff           call 0x4077d0
// 004080ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004080be  51                   push ecx
// 004080bf  e8b6852900           call 0x6a067a
// 004080c4  8b442408             mov eax, dword ptr [esp + 8]
// 004080c8  83c404               add esp, 4
// 004080cb  85c0                 test eax, eax
// 004080cd  7406                 je 0x4080d5
// 004080cf  8b1424               mov edx, dword ptr [esp]
// 004080d2  895004               mov dword ptr [eax + 4], edx
// 004080d5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004080da  740c                 je 0x4080e8
// 004080dc  8b442408             mov eax, dword ptr [esp + 8]
// 004080e0  50                   push eax
// 004080e1  6a00                 push 0
// 004080e3  e874882900           call 0x6a095c
// 004080e8  33c0                 xor eax, eax
// 004080ea  83c428               add esp, 0x28
// 004080ed  c20400               ret 4

extern "C" void* __cdecl get_context();
extern "C" void __cdecl release_storage(void*);
extern "C" void __stdcall release_context(int, void*);

struct Guard
{
    int value;
    int* link;
    void* context;
    int active;

    Guard(void*);
};

struct Temporary
{
    void* storage;
    unsigned char remainder[20];

    void clear();
};

struct Manager
{
    void initialize(Temporary*);
};

extern Manager manager;

int __stdcall function(void*)
{
    Guard guard(get_context());
    Temporary temporary;

    manager.initialize(&temporary);
    temporary.clear();
    release_storage(temporary.storage);

    if (guard.link)
        guard.link[1] = guard.value;

    if (guard.active)
        release_context(0, guard.context);

    return 0;
}
