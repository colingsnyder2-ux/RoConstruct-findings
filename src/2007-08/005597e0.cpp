// from server: 44% by colin
// roc 2007-08 005597e0  unit: RBX::DataModel  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005597e0
//
// 005597e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005597e4  83ec1c               sub esp, 0x1c
// 005597e7  8d0424               lea eax, [esp]
// 005597ea  50                   push eax
// 005597eb  e850fdffff           call 0x559540
// 005597f0  8d0c24               lea ecx, [esp]
// 005597f3  ff15ace67700         call dword ptr [0x77e6ac]
// 005597f9  83c41c               add esp, 0x1c
// 005597fc  c3                   ret 

struct std_string
{
    void destroy();
};

extern "C" void __stdcall sub_00559540(void*);
extern "C" void (__stdcall *g_77e6ac)(void*);

struct DataModel
{
    void func_005597e0();
};

void DataModel::func_005597e0()
{
    char buf[0x1c];
    sub_00559540(buf);
    g_77e6ac(buf);
}
