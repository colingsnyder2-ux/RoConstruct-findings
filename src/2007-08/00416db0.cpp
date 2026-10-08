// from server: 63% by colin
// roc 2007-08 00416db0  unit: VCLuaFunction::?$CComObject  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416db0
//
// 00416db0  56                   push esi
// 00416db1  8d7104               lea esi, [ecx + 4]
// 00416db4  8bce                 mov ecx, esi
// 00416db6  e845f1ffff           call 0x415f00
// 00416dbb  8b4604               mov eax, dword ptr [esi + 4]
// 00416dbe  50                   push eax
// 00416dbf  e89e8e2100           call 0x62fc62
// 00416dc4  83c404               add esp, 4
// 00416dc7  c7460400000000       mov dword ptr [esi + 4], 0
// 00416dce  5e                   pop esi
// 00416dcf  c3                   ret 
// 00416dd0  e97bf7ffff           jmp 0x416550

struct VCLuaFunction
{
    int field0;
    int field4;
    int field8;
    void sub_415f00();
    void sub_62fc62(int);
    void destroy();
};

void VCLuaFunction::destroy()
{
    VCLuaFunction* p = (VCLuaFunction*)((char*)this + 4);
    p->sub_415f00();
    sub_62fc62(p->field4);
    p->field4 = 0;
}
