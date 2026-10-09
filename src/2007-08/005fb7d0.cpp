// from server: 90% by colin
// roc 2007-08 005fb7d0  unit: RBX::StudsTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb7d0
//
// 005fb7d0  56                   push esi
// 005fb7d1  8b742408             mov esi, dword ptr [esp + 8]
// 005fb7d5  57                   push edi
// 005fb7d6  8bf9                 mov edi, ecx
// 005fb7d8  8b0e                 mov ecx, dword ptr [esi]
// 005fb7da  e88185f7ff           call 0x573d60
// 005fb7df  8bce                 mov ecx, esi
// 005fb7e1  e83addfbff           call 0x5b9520
// 005fb7e6  6a03                 push 3
// 005fb7e8  8bce                 mov ecx, esi
// 005fb7ea  e881dafbff           call 0x5b9270
// 005fb7ef  8b0e                 mov ecx, dword ptr [esi]
// 005fb7f1  e88a85f7ff           call 0x573d80
// 005fb7f6  8b4718               mov eax, dword ptr [edi + 0x18]
// 005fb7f9  6a08                 push 8
// 005fb7fb  50                   push eax
// 005fb7fc  e80f63f6ff           call 0x561b10
// 005fb801  83c404               add esp, 4
// 005fb804  8bc8                 mov ecx, eax
// 005fb806  e80510f9ff           call 0x58c810
// 005fb80b  5f                   pop edi
// 005fb80c  5e                   pop esi
// 005fb80d  c20400               ret 4

struct StudsTool {
    char pad[0x18];
    void* field18;
    void construct(void* workspace);
};

extern "C" void __stdcall func_00561b10(void* a, int b);
extern "C" void __stdcall func_0058c810(void* a);

struct Inner {
    void method_00573d60();
    void method_00573d80();
};

struct MouseCmd {
    void method_005b9520();
    void method_005b9270(int);
    Inner* inner;
};

void StudsTool::construct(void* workspace)
{
    MouseCmd* cmd = (MouseCmd*)workspace;
    cmd->inner->method_00573d60();
    cmd->method_005b9520();
    cmd->method_005b9270(3);
    cmd->inner->method_00573d80();
    void* p = (void*)field18;
    func_00561b10(p, 8);
    func_0058c810(p);
}
