// from server: 43% by colin
// roc 2007-08 00559820  unit: RBX::DataModel  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559820
//
// 00559820  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559824  83ec1c               sub esp, 0x1c
// 00559827  8d0424               lea eax, [esp]
// 0055982a  50                   push eax
// 0055982b  e840fdffff           call 0x559570
// 00559830  8d0c24               lea ecx, [esp]
// 00559833  ff15ace67700         call dword ptr [0x77e6ac]
// 00559839  83c41c               add esp, 0x1c
// 0055983c  c3                   ret 

struct RBX_DataModel;

struct RBX_DataModel
{
    void func_00559820();
};

extern "C" void __cdecl sub_00559570(void*);
extern "C" void __stdcall sub_0077e6ac(void*);

void RBX_DataModel::func_00559820()
{
    char buf[0x1c];
    sub_00559570(buf);
    sub_0077e6ac(buf);
}
