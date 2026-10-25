// from server: 100% by king_originala
// roc 2008-06 0042da40  unit: VCLuaFunction::?$CComObject  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042da40
//
// 0042da40  83ec10               sub esp, 0x10
// 0042da43  56                   push esi
// 0042da44  e81f2f2700           call 0x6a0968
// 0042da49  50                   push eax
// 0042da4a  8d4c2408             lea ecx, [esp + 8]
// 0042da4e  e80f2f2700           call 0x6a0962
// 0042da53  8b742420             mov esi, dword ptr [esp + 0x20]
// 0042da57  85f6                 test esi, esi
// 0042da59  740c                 je 0x42da67
// 0042da5b  6a00                 push 0
// 0042da5d  e87e8bfeff           call 0x4165e0
// 0042da62  83c404               add esp, 4
// 0042da65  8906                 mov dword ptr [esi], eax
// 0042da67  8b442408             mov eax, dword ptr [esp + 8]
// 0042da6b  5e                   pop esi
// 0042da6c  85c0                 test eax, eax
// 0042da6e  7406                 je 0x42da76
// 0042da70  8b0c24               mov ecx, dword ptr [esp]
// 0042da73  894804               mov dword ptr [eax + 4], ecx
// 0042da76  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0042da7b  740c                 je 0x42da89
// 0042da7d  8b542408             mov edx, dword ptr [esp + 8]
// 0042da81  52                   push edx
// 0042da82  6a00                 push 0
// 0042da84  e8d32e2700           call 0x6a095c
// 0042da89  b801400080           mov eax, 0x80004001
// 0042da8e  83c410               add esp, 0x10
// 0042da91  c20c00               ret 0xc

struct ThreadState {
    void* reserved;
    void* current;
};

struct StateGuard {
    void* previous;
    ThreadState* thread;
    void* context;
    int active;

    StateGuard(void*);
};

extern "C" void* __cdecl get_state();
extern "C" void* __cdecl get_type_info(int);
extern "C" void __stdcall release_state(int, void*);

long __stdcall get_info(unsigned int, unsigned long, void** result)
{
    StateGuard guard(get_state());

    if (result)
        *result = get_type_info(0);

    if (guard.thread)
        guard.thread->current = guard.previous;

    if (guard.active)
        release_state(0, guard.context);

    return (long)0x80004001;
}
