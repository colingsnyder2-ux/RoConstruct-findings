// from server: 83% by colin
// roc 2007-08 0046bb90  unit: RBX::LDraw2Lua::LDrawCommand  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046bb90
//
// 0046bb90  c70110637900         mov dword ptr [ecx], 0x796310
// 0046bb96  83c104               add ecx, 4
// 0046bb99  ff25ace67700         jmp dword ptr [0x77e6ac]

struct LDrawCommand {
    void construct();
};

extern "C" void __stdcall sub_77e6ac(void*);

void LDrawCommand::construct()
{
    *(int*)this = 0x796310;
    char* p = (char*)this + 4;
    sub_77e6ac(p);
}
