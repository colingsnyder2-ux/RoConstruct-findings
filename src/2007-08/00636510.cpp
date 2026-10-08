// from server: 84% by colin
// roc 2007-08 00636510  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636510
//
// 00636510  6a00                 push 0
// 00636512  6a00                 push 0
// 00636514  6888010000           push 0x188
// 00636519  e8728b0600           call 0x69f090
// 0063651e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00636521  50                   push eax
// 00636522  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00636528  c3                   ret 

extern "C" void* __cdecl sub_0069F090(int, int, int);
extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct S_func_00636510
{
    void f();
};

void S_func_00636510::f()
{
    void* p = sub_0069F090(0x188, 0, 0);
    SendMessageA(*(void**)((char*)p + 0x20), 0, 0, 0);
}
