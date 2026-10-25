// from server: 100% by king_originala
// roc 2008-06 00619f70  unit: RBX::GlueTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619f70
//
// 00619f70  56                   push esi
// 00619f71  8b742408             mov esi, dword ptr [esp + 8]
// 00619f75  57                   push edi
// 00619f76  8bf9                 mov edi, ecx
// 00619f78  8b0e                 mov ecx, dword ptr [esi]
// 00619f7a  e8f1ecf7ff           call 0x598c70
// 00619f7f  8bce                 mov ecx, esi
// 00619f81  e80a77fdff           call 0x5f1690
// 00619f86  6a01                 push 1
// 00619f88  8bce                 mov ecx, esi
// 00619f8a  e85174fdff           call 0x5f13e0
// 00619f8f  8b0e                 mov ecx, dword ptr [esi]
// 00619f91  e8faecf7ff           call 0x598c90
// 00619f96  8b4718               mov eax, dword ptr [edi + 0x18]
// 00619f99  6a08                 push 8
// 00619f9b  50                   push eax
// 00619f9c  e80f68f6ff           call 0x5807b0
// 00619fa1  83c404               add esp, 4
// 00619fa4  8bc8                 mov ecx, eax
// 00619fa6  e87538faff           call 0x5bd820
// 00619fab  5f                   pop edi
// 00619fac  5e                   pop esi
// 00619fad  c20400               ret 4

namespace RBX {
struct Instance;
struct ServiceProvider {
    void func_005bd820(int value);
};
}

extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance* object);

struct S {
    void func_00598c70();
    void func_00598c90();
};

struct Argument {
    S* object;
    void func_005f1690();
    void func_005f13e0(int value);
};

struct GlueTool {
    char padding[0x18];
    RBX::Instance* instance;
    void func_00619f70(Argument* argument);
};

void GlueTool::func_00619f70(Argument* argument)
{
    argument->object->func_00598c70();
    argument->func_005f1690();
    argument->func_005f13e0(1);
    argument->object->func_00598c90();
    func_005807b0(instance)->func_005bd820(8);
}
