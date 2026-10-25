// from server: 100% by king_originala
// roc 2008-06 0061a030  unit: RBX::InletTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a030
//
// 0061a030  56                   push esi
// 0061a031  8b742408             mov esi, dword ptr [esp + 8]
// 0061a035  57                   push edi
// 0061a036  8bf9                 mov edi, ecx
// 0061a038  8b0e                 mov ecx, dword ptr [esi]
// 0061a03a  e831ecf7ff           call 0x598c70
// 0061a03f  8bce                 mov ecx, esi
// 0061a041  e84a76fdff           call 0x5f1690
// 0061a046  6a04                 push 4
// 0061a048  8bce                 mov ecx, esi
// 0061a04a  e89173fdff           call 0x5f13e0
// 0061a04f  8b0e                 mov ecx, dword ptr [esi]
// 0061a051  e83aecf7ff           call 0x598c90
// 0061a056  8b4718               mov eax, dword ptr [edi + 0x18]
// 0061a059  6a08                 push 8
// 0061a05b  50                   push eax
// 0061a05c  e84f67f6ff           call 0x5807b0
// 0061a061  83c404               add esp, 4
// 0061a064  8bc8                 mov ecx, eax
// 0061a066  e8b537faff           call 0x5bd820
// 0061a06b  5f                   pop edi
// 0061a06c  5e                   pop esi
// 0061a06d  c20400               ret 4

namespace RBX
{
    class Instance;
    class ServiceProvider
    {
    public:
        void func_005bd820(int);
    };
}

extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct S
{
    void func_00598c70();
    void func_00598c90();
};

struct Argument
{
    S* object;
    void func_005f1690();
    void func_005f13e0(int);
};

struct InletTool
{
    char padding[0x18];
    RBX::Instance* instance;
    void func_0061a030(Argument*);
};

void InletTool::func_0061a030(Argument* argument)
{
    argument->object->func_00598c70();
    argument->func_005f1690();
    argument->func_005f13e0(4);
    argument->object->func_00598c90();
    func_005807b0(instance)->func_005bd820(8);
}
