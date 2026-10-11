// from server: 73% by tester
// roc 2008-06 006663f0  unit: RBX::PartDragTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006663f0
//
// 006663f0  c70138cc8400         mov dword ptr [ecx], 0x84cc38
// 006663f6  c7410430cc8400       mov dword ptr [ecx + 4], 0x84cc30
// 006663fd  e9bed1fdff           jmp 0x6435c0

struct PartDragTool {
    void* vtable0;
    void* vtable1;
    void init();
};

void PartDragTool::init() {
    vtable0 = (void*)0x84cc38;
    vtable1 = (void*)0x84cc30;
    ((void (*)())0x6435c0)();
}
