// from server: 100% by colin
// roc 2007-08 0068de50  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068de50
//
// 0068de50  56                   push esi
// 0068de51  8bf1                 mov esi, ecx
// 0068de53  e828a70a00           call 0x738580
// 0068de58  8bce                 mov ecx, esi
// 0068de5a  e8e1b8ffff           call 0x689740
// 0068de5f  8b10                 mov edx, dword ptr [eax]
// 0068de61  8bc8                 mov ecx, eax
// 0068de63  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0068de66  ffd0                 call eax
// 0068de68  6a01                 push 1
// 0068de6a  8bce                 mov ecx, esi
// 0068de6c  e8dff8ffff           call 0x68d750
// 0068de71  5e                   pop esi
// 0068de72  c3                   ret 

struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void func_0068de50();
};

void CXTPTabClientWnd::func_0068de50()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
