// from server: 100% by king_originala
// roc 2008-06 00619ff0  unit: RBX::StudsTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619ff0
//
// 00619ff0  56                   push esi
// 00619ff1  8b742408             mov esi, dword ptr [esp + 8]
// 00619ff5  57                   push edi
// 00619ff6  8bf9                 mov edi, ecx
// 00619ff8  8b0e                 mov ecx, dword ptr [esi]
// 00619ffa  e871ecf7ff           call 0x598c70
// 00619fff  8bce                 mov ecx, esi
// 0061a001  e88a76fdff           call 0x5f1690
// 0061a006  6a03                 push 3
// 0061a008  8bce                 mov ecx, esi
// 0061a00a  e8d173fdff           call 0x5f13e0
// 0061a00f  8b0e                 mov ecx, dword ptr [esi]
// 0061a011  e87aecf7ff           call 0x598c90
// 0061a016  8b4718               mov eax, dword ptr [edi + 0x18]
// 0061a019  6a08                 push 8
// 0061a01b  50                   push eax
// 0061a01c  e88f67f6ff           call 0x5807b0
// 0061a021  83c404               add esp, 4
// 0061a024  8bc8                 mov ecx, eax
// 0061a026  e8f537faff           call 0x5bd820
// 0061a02b  5f                   pop edi
// 0061a02c  5e                   pop esi
// 0061a02d  c20400               ret 4

struct Object
{
    void func_00598c70();
    void func_00598c90();
};

struct Argument
{
    Object* object;
    void func_005f1690();
    void func_005f13e0(int value);
};

namespace RBX
{
    struct Instance;
    struct ServiceProvider
    {
        void func_005bd820(int value);
    };
}

extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance* object);

struct S
{
    char padding[0x18];
    RBX::Instance* object;
    void func_00619ff0(Argument* argument);
};

void S::func_00619ff0(Argument* argument)
{
    argument->object->func_00598c70();
    argument->func_005f1690();
    argument->func_005f13e0(3);
    argument->object->func_00598c90();
    func_005807b0(object)->func_005bd820(8);
}
