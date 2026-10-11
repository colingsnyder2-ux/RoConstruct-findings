// from server: 100% by colin
// roc 2007-08 005fc6e0  unit: RBX::SlingshotTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fc6e0
//
// 005fc6e0  56                   push esi
// 005fc6e1  8bf1                 mov esi, ecx
// 005fc6e3  8b06                 mov eax, dword ptr [esi]
// 005fc6e5  8b5020               mov edx, dword ptr [eax + 0x20]
// 005fc6e8  ffd2                 call edx
// 005fc6ea  837e3000             cmp dword ptr [esi + 0x30], 0
// 005fc6ee  750c                 jne 0x5fc6fc
// 005fc6f0  8b442408             mov eax, dword ptr [esp + 8]
// 005fc6f4  50                   push eax
// 005fc6f5  8bce                 mov ecx, esi
// 005fc6f7  e844feffff           call 0x5fc540
// 005fc6fc  8bc6                 mov eax, esi
// 005fc6fe  5e                   pop esi
// 005fc6ff  c20400               ret 4

struct SlingshotTool {
    void sub_5FC540(int);
    SlingshotTool* method(int);
};

SlingshotTool* SlingshotTool::method(int arg) {
    (*(void (__thiscall **)(SlingshotTool*))(*(int*)this + 0x20))(this);
    if (*(int*)((char*)this + 0x30) == 0) {
        this->sub_5FC540(arg);
    }
    return this;
}
