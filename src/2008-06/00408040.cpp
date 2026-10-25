// from server: 100% by king_originala
// roc 2008-06 00408040  unit: VCApp::?$CComObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408040
//
// 00408040  83ec10               sub esp, 0x10
// 00408043  e820892900           call 0x6a0968
// 00408048  50                   push eax
// 00408049  8d4c2404             lea ecx, [esp + 4]
// 0040804d  e810892900           call 0x6a0962
// 00408052  e889fbffff           call 0x407be0
// 00408057  8b8034010000         mov eax, dword ptr [eax + 0x134]
// 0040805d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00408061  8901                 mov dword ptr [ecx], eax
// 00408063  8b442404             mov eax, dword ptr [esp + 4]
// 00408067  85c0                 test eax, eax
// 00408069  7406                 je 0x408071
// 0040806b  8b1424               mov edx, dword ptr [esp]
// 0040806e  895004               mov dword ptr [eax + 4], edx
// 00408071  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00408076  740c                 je 0x408084
// 00408078  8b442408             mov eax, dword ptr [esp + 8]
// 0040807c  50                   push eax
// 0040807d  6a00                 push 0
// 0040807f  e8d8882900           call 0x6a095c
// 00408084  33c0                 xor eax, eax
// 00408086  83c410               add esp, 0x10
// 00408089  c20800               ret 8

extern "C" void* __cdecl get_context();
extern "C" void* __cdecl get_object();
extern "C" void __stdcall release_context(int, void*);

struct ContextGuard
{
    int saved;
    int* slot;
    void* handle;
    int active;

    void initialize(void*);
};

int __stdcall get_value(void*, int* result)
{
    ContextGuard guard;
    guard.initialize(get_context());

    *result = *(int*)((char*)get_object() + 0x134);

    if (guard.slot)
        guard.slot[1] = guard.saved;

    if (guard.active)
        release_context(0, guard.handle);

    return 0;
}
