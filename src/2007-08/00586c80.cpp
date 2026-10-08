// from server: 68% by colin
// roc 2007-08 00586c80  unit: RBX::PartTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586c80
//
// 00586c80  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00586c83  85c0                 test eax, eax
// 00586c85  7414                 je 0x586c9b
// 00586c87  8b542404             mov edx, dword ptr [esp + 4]
// 00586c8b  8d887c010000         lea ecx, [eax + 0x17c]
// 00586c91  8b01                 mov eax, dword ptr [ecx]
// 00586c93  8b4010               mov eax, dword ptr [eax + 0x10]
// 00586c96  6a01                 push 1
// 00586c98  52                   push edx
// 00586c99  ffd0                 call eax
// 00586c9b  c20400               ret 4

struct PartTool {
    char pad[0x1c];
    void* partInstance;
    void render3dAdorn(int adorn);
};

void PartTool::render3dAdorn(int adorn) {
    if (this->partInstance) {
        int* p = (int*)((char*)this->partInstance + 0x17c);
        void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))*(int*)(*p + 0x10);
        fn(adorn, 1);
    }
}
