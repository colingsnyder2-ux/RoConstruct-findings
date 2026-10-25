// from server: 100% by king_originala
// roc 2008-06 00406180  unit: VCApp::?$CComObject  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406180
//
// 00406180  83ec10               sub esp, 0x10
// 00406183  e8e0a72900           call 0x6a0968
// 00406188  50                   push eax
// 00406189  8d4c2404             lea ecx, [esp + 4]
// 0040618d  e8d0a72900           call 0x6a0962
// 00406192  b984dc9600           mov ecx, 0x96dc84
// 00406197  e844230200           call 0x4284e0
// 0040619c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004061a0  0fb6c0               movzx eax, al
// 004061a3  f7d8                 neg eax
// 004061a5  1bc0                 sbb eax, eax
// 004061a7  668901               mov word ptr [ecx], ax
// 004061aa  8b442404             mov eax, dword ptr [esp + 4]
// 004061ae  85c0                 test eax, eax
// 004061b0  7406                 je 0x4061b8
// 004061b2  8b1424               mov edx, dword ptr [esp]
// 004061b5  895004               mov dword ptr [eax + 4], edx
// 004061b8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004061bd  740c                 je 0x4061cb
// 004061bf  8b442408             mov eax, dword ptr [esp + 8]
// 004061c3  50                   push eax
// 004061c4  6a00                 push 0
// 004061c6  e891a72900           call 0x6a095c
// 004061cb  33c0                 xor eax, eax
// 004061cd  83c410               add esp, 0x10
// 004061d0  c20800               ret 8

extern "C" unsigned int __cdecl get_context();
extern "C" void __stdcall release_context(unsigned int, void *);

struct Link {
    unsigned int reserved;
    Link *previous;
};

struct Context {
    Link *saved;
    Link *current;
    void *handle;
    unsigned int active;

    Context(unsigned int);
};

struct State {
    unsigned char query();
};

extern State global_state;

int __stdcall function(void *, short *result)
{
    Context context(get_context());

    *result = global_state.query() ? -1 : 0;

    if (context.current)
        context.current->previous = context.saved;

    if (context.active)
        release_context(0, context.handle);

    return 0;
}
