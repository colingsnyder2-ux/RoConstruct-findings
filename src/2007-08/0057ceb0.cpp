// from server: 100% by colin
// roc 2007-08 0057ceb0  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ceb0
//
// 0057ceb0  8d442404             lea eax, [esp + 4]
// 0057ceb4  50                   push eax
// 0057ceb5  83c16c               add ecx, 0x6c
// 0057ceb8  e8738c0800           call 0x605b30
// 0057cebd  c20400               ret 4

struct Workspace {
    char pad[0x6c];
    void sub_00605b30(void*);
    void func_0057ceb0(int);
};

void Workspace::func_0057ceb0(int a)
{
    ((Workspace*)((char*)this + 0x6c))->sub_00605b30(&a);
}
