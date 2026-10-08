// from server: 100% by colin
// roc 2007-08 0057cca0  unit: RBX::Workspace  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057cca0
//
// 0057cca0  51                   push ecx
// 0057cca1  c6042400             mov byte ptr [esp], 0
// 0057cca5  8b0424               mov eax, dword ptr [esp]
// 0057cca8  50                   push eax
// 0057cca9  81c1ac000000         add ecx, 0xac
// 0057ccaf  e8acbefdff           call 0x558b60
// 0057ccb4  59                   pop ecx
// 0057ccb5  c3                   ret 

struct RBX_Workspace {
    char pad[0xac];
    void sub_00558b60(int);
    void sub_0057cca0();
};

void RBX_Workspace::sub_0057cca0()
{
    char flag = 0;
    ((RBX_Workspace*)((char*)this + 0xac))->sub_00558b60(*(int*)&flag);
}
