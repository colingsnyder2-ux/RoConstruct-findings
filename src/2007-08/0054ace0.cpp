// from server: 24% by colin
// roc 2007-08 0054ace0  unit: RBX::ServiceProvider  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ace0
//
// 0054ace0  6aff                 push -1
// 0054ace2  6808247500           push 0x752408
// 0054ace7  64a100000000         mov eax, dword ptr fs:[0]
// 0054aced  50                   push eax
// 0054acee  64892500000000       mov dword ptr fs:[0], esp
// 0054acf5  51                   push ecx
// 0054acf6  56                   push esi
// 0054acf7  8bf1                 mov esi, ecx
// 0054acf9  89742404             mov dword ptr [esp + 4], esi
// 0054acfd  6a00                 push 0
// 0054acff  6a00                 push 0
// 0054ad01  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054ad09  e8321d0800           call 0x5cca40
// 0054ad0e  8bce                 mov ecx, esi
// 0054ad10  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054ad18  e823c41d00           call 0x727140
// 0054ad1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054ad21  5e                   pop esi
// 0054ad22  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ad29  83c410               add esp, 0x10
// 0054ad2c  c3                   ret 

struct ServiceProvider {
    void construct();
};

extern "C" void __stdcall sub_5CCA40(int, int);
extern "C" void __stdcall sub_727140();

void ServiceProvider::construct()
{
    sub_5CCA40(0, 0);
    sub_727140();
}
