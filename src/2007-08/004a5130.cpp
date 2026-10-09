// from server: 23% by colin
// roc 2007-08 004a5130  unit: RBX::Network::Server::ClientProxy  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5130
//
// 004a5130  6aff                 push -1
// 004a5132  6899407400           push 0x744099
// 004a5137  64a100000000         mov eax, dword ptr fs:[0]
// 004a513d  50                   push eax
// 004a513e  83ec44               sub esp, 0x44
// 004a5141  a188518b00           mov eax, dword ptr [0x8b5188]
// 004a5146  33c4                 xor eax, esp
// 004a5148  50                   push eax
// 004a5149  8d442448             lea eax, [esp + 0x48]
// 004a514d  64a300000000         mov dword ptr fs:[0], eax
// 004a5153  68e8717800           push 0x7871e8
// 004a5158  8d4c2408             lea ecx, [esp + 8]
// 004a515c  ff1598e67700         call dword ptr [0x77e698]
// 004a5162  8d442404             lea eax, [esp + 4]
// 004a5166  50                   push eax
// 004a5167  8d4c2424             lea ecx, [esp + 0x24]
// 004a516b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004a5173  e848d3f5ff           call 0x4024c0
// 004a5178  6878f78300           push 0x83f778
// 004a517d  8d4c2424             lea ecx, [esp + 0x24]
// 004a5181  51                   push ecx
// 004a5182  c74424286c4e7800     mov dword ptr [esp + 0x28], 0x784e6c
// 004a518a  e80fba1800           call 0x630b9e

struct ClientProxy {
    void f();
};

extern "C" void __stdcall sub_4024c0();
extern "C" void __stdcall sub_630b9e();
extern "C" void __stdcall sub_77e698();

void ClientProxy::f() {
    char buf[0x44];
    void* p;
    sub_77e698();
    sub_4024c0();
    sub_630b9e();
}
