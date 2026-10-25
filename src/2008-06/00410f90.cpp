// from server: 100% by king_originala
// roc 2008-06 00410f90  unit: VCBrowserViewExternal::?$CComObject  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410f90
//
// 00410f90  83ec10               sub esp, 0x10
// 00410f93  e8d0f92800           call 0x6a0968
// 00410f98  50                   push eax
// 00410f99  8d4c2404             lea ecx, [esp + 4]
// 00410f9d  e8c0f92800           call 0x6a0962
// 00410fa2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00410fa6  668b4808             mov cx, word ptr [eax + 8]
// 00410faa  8b442404             mov eax, dword ptr [esp + 4]
// 00410fae  8b542418             mov edx, dword ptr [esp + 0x18]
// 00410fb2  66890a               mov word ptr [edx], cx
// 00410fb5  85c0                 test eax, eax
// 00410fb7  7406                 je 0x410fbf
// 00410fb9  8b0c24               mov ecx, dword ptr [esp]
// 00410fbc  894804               mov dword ptr [eax + 4], ecx
// 00410fbf  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00410fc4  740c                 je 0x410fd2
// 00410fc6  8b542408             mov edx, dword ptr [esp + 8]
// 00410fca  52                   push edx
// 00410fcb  6a00                 push 0
// 00410fcd  e88af92800           call 0x6a095c
// 00410fd2  33c0                 xor eax, eax
// 00410fd4  83c410               add esp, 0x10
// 00410fd7  c20800               ret 8

struct Link {
    void* unused;
    void* previous;
};

struct State {
    void* previous;
    Link* link;
    void* context;
    int active;

    State(void*);
};

struct Input {
    unsigned char reserved[8];
    unsigned short value;
};

extern "C" void* __cdecl get_state();
extern "C" void __stdcall release_state(int, void*);

int __stdcall function(const Input* input, unsigned short* output)
{
    State state(get_state());
    *output = input->value;

    if (state.link)
        state.link->previous = state.previous;

    if (state.active)
        release_state(0, state.context);

    return 0;
}
