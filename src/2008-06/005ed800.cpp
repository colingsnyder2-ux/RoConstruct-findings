// from server: 100% by king_originala
// roc 2008-06 005ed800  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed800
//
// 005ed800  8b442408             mov eax, dword ptr [esp + 8]
// 005ed804  56                   push esi
// 005ed805  8bf1                 mov esi, ecx
// 005ed807  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ed80b  50                   push eax
// 005ed80c  51                   push ecx
// 005ed80d  e87e6af6ff           call 0x554290
// 005ed812  83c404               add esp, 4
// 005ed815  50                   push eax
// 005ed816  8bce                 mov ecx, esi
// 005ed818  e8e3faffff           call 0x5ed300
// 005ed81d  5e                   pop esi
// 005ed81e  c20800               ret 8

extern int __cdecl func_00554290(int);

struct S
{
    void func_005ed300(int, int);
    void func_005ed800(int, int);
};

void S::func_005ed800(int a, int b)
{
    func_005ed300(func_00554290(a), b);
}
