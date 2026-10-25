// from server: 100% by king_originala
// roc 2008-06 00406b10  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406b10
//
// 00406b10  83ec10               sub esp, 0x10
// 00406b13  e8509e2900           call 0x6a0968
// 00406b18  50                   push eax
// 00406b19  8d4c2404             lea ecx, [esp + 4]
// 00406b1d  e8409e2900           call 0x6a0962
// 00406b22  8b442418             mov eax, dword ptr [esp + 0x18]
// 00406b26  50                   push eax
// 00406b27  8d4c241c             lea ecx, [esp + 0x1c]
// 00406b2b  ff15d83e8000         call dword ptr [0x803ed8]
// 00406b31  8bc8                 mov ecx, eax
// 00406b33  ff15e03e8000         call dword ptr [0x803ee0]
// 00406b39  50                   push eax
// 00406b3a  e841ffffff           call 0x406a80
// 00406b3f  83c404               add esp, 4
// 00406b42  8d4c2418             lea ecx, [esp + 0x18]
// 00406b46  ff15143f8000         call dword ptr [0x803f14]
// 00406b4c  8b442404             mov eax, dword ptr [esp + 4]
// 00406b50  85c0                 test eax, eax
// 00406b52  7406                 je 0x406b5a
// 00406b54  8b0c24               mov ecx, dword ptr [esp]
// 00406b57  894804               mov dword ptr [eax + 4], ecx
// 00406b5a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00406b5f  740c                 je 0x406b6d
// 00406b61  8b542408             mov edx, dword ptr [esp + 8]
// 00406b65  52                   push edx
// 00406b66  6a00                 push 0
// 00406b68  e8ef9d2900           call 0x6a095c
// 00406b6d  33c0                 xor eax, eax
// 00406b6f  83c410               add esp, 0x10
// 00406b72  c20800               ret 8

struct State {
    void* previous;
    State* link;
    void* allocation;
    int owned;

    State(void*);
};

struct Text {
    unsigned value;
};

extern "C" void* __cdecl currentState();
extern "C" void __stdcall releaseState(int, void*);
extern "C" void __cdecl processText(const char*);

typedef Text* (__thiscall *TextConstruct)(Text*, unsigned);
typedef const char* (__thiscall *TextAccess)(Text*);
typedef void (__thiscall *TextDestroy)(Text*);

extern TextConstruct constructText;
extern TextAccess accessText;
extern TextDestroy destroyText;

int __stdcall function(int, unsigned value)
{
    State state(currentState());

    Text* text = constructText(reinterpret_cast<Text*>(&value), value);
    processText(accessText(text));
    destroyText(reinterpret_cast<Text*>(&value));

    if (state.link)
        state.link->link = static_cast<State*>(state.previous);

    if (state.owned)
        releaseState(0, state.allocation);

    return 0;
}
