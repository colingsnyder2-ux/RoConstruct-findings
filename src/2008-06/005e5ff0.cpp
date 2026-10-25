// from server: 100% by king_originala
// roc 2008-06 005e5ff0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5ff0
//
// 005e5ff0  56                   push esi
// 005e5ff1  57                   push edi
// 005e5ff2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e5ff6  6a00                 push 0
// 005e5ff8  57                   push edi
// 005e5ff9  8bf1                 mov esi, ecx
// 005e5ffb  e840150600           call 0x647540
// 005e6000  83c408               add esp, 8
// 005e6003  85c0                 test eax, eax
// 005e6005  741e                 je 0x5e6025
// 005e6007  50                   push eax
// 005e6008  8bce                 mov ecx, esi
// 005e600a  e8e1ffffff           call 0x5e5ff0
// 005e600f  8bce                 mov ecx, esi
// 005e6011  e88a020000           call 0x5e62a0
// 005e6016  6a00                 push 0
// 005e6018  57                   push edi
// 005e6019  e822150600           call 0x647540
// 005e601e  83c408               add esp, 8
// 005e6021  85c0                 test eax, eax
// 005e6023  75e2                 jne 0x5e6007
// 005e6025  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 005e602b  6a00                 push 0
// 005e602d  e87ee80200           call 0x6148b0
// 005e6032  6a00                 push 0
// 005e6034  8bcf                 mov ecx, edi
// 005e6036  e815150000           call 0x5e7550
// 005e603b  5f                   pop edi
// 005e603c  5e                   pop esi
// 005e603d  c20400               ret 4

struct Owner {
    void reset(int value);
};

struct Ball {
    char pad[0x5c];
    int field_5c;
    char pad_60[0x40];
    Owner* owner;
    void setField(int value);
};

extern "C" Ball* __cdecl getChild(Ball* pane, int index);

struct Manager {
    void remove(Ball* pane);
    void update();
};

void Manager::remove(Ball* pane)
{
    Ball* child = getChild(pane, 0);
    while (child) {
        remove(child);
        update();
        child = getChild(pane, 0);
    }
    pane->owner->reset(0);
    pane->setField(0);
}
