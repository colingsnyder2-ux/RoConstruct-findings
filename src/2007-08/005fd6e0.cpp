// from server: 84% by colin
// roc 2007-08 005fd6e0  unit: RBX::GrabTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd6e0
//
// 005fd6e0  8b442404             mov eax, dword ptr [esp + 4]
// 005fd6e4  56                   push esi
// 005fd6e5  68e46e8c00           push 0x8c6ee4
// 005fd6ea  50                   push eax
// 005fd6eb  8bf1                 mov esi, ecx
// 005fd6ed  e88e68feff           call 0x5e3f80
// 005fd6f2  85c0                 test eax, eax
// 005fd6f4  7512                 jne 0x5fd708
// 005fd6f6  6860d27b00           push 0x7bd260
// 005fd6fb  8d4e20               lea ecx, [esi + 0x20]
// 005fd6fe  ff152ce67700         call dword ptr [0x77e62c]
// 005fd704  5e                   pop esi
// 005fd705  c20400               ret 4
// 005fd708  80b8a001000000       cmp byte ptr [eax + 0x1a0], 0
// 005fd70f  7412                 je 0x5fd723
// 005fd711  6838cf7a00           push 0x7acf38
// 005fd716  8d4e20               lea ecx, [esi + 0x20]
// 005fd719  ff152ce67700         call dword ptr [0x77e62c]
// 005fd71f  5e                   pop esi
// 005fd720  c20400               ret 4
// 005fd723  68c8d07b00           push 0x7bd0c8
// 005fd728  8d4e20               lea ecx, [esi + 0x20]
// 005fd72b  ff152ce67700         call dword ptr [0x77e62c]
// 005fd731  5e                   pop esi
// 005fd732  c20400               ret 4

struct MouseCommand {
    char pad[0x20];
    void setCursor(const char*);
};

struct GrabTool : MouseCommand {
    void setCursorFromName(const char*);
};

extern "C" void* __stdcall sub_5E3F80(const char*, const char*);

void GrabTool::setCursorFromName(const char* name) {
    void* p = sub_5E3F80(name, "T$(P");
    if (p == 0) {
        setCursor("ArrowCursor");
    } else if (*(char*)((char*)p + 0x1a0) != 0) {
        setCursor("ArrowFarCursor");
    } else {
        setCursor("DragCursor");
    }
}
