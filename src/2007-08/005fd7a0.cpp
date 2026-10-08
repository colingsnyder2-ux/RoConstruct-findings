// from server: 68% by colin
// roc 2007-08 005fd7a0  unit: RBX::NewNullTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd7a0
//
// 005fd7a0  51                   push ecx
// 005fd7a1  56                   push esi
// 005fd7a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fd7a6  83c120               add ecx, 0x20
// 005fd7a9  51                   push ecx
// 005fd7aa  8bce                 mov ecx, esi
// 005fd7ac  c744240800000000     mov dword ptr [esp + 8], 0
// 005fd7b4  ff159ce67700         call dword ptr [0x77e69c]
// 005fd7ba  8bc6                 mov eax, esi
// 005fd7bc  5e                   pop esi
// 005fd7bd  59                   pop ecx
// 005fd7be  c20400               ret 4

struct MouseCommand {
    char pad[0x20];
    void* field20;
};

struct NewNullTool {
    void construct(MouseCommand* other);
};

extern "C" void* __stdcall sub_0077e69c(void*, const void*);

void NewNullTool::construct(MouseCommand* other) {
    void* tmp = 0;
    sub_0077e69c(&tmp, (char*)this + 0x20);
    other->field20 = tmp;
}
