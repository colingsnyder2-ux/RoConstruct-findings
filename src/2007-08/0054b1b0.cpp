// from server: 57% by colin
// roc 2007-08 0054b1b0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b1b0
//
// 0054b1b0  6aff                 push -1
// 0054b1b2  6808247500           push 0x752408
// 0054b1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0054b1bd  50                   push eax
// 0054b1be  64892500000000       mov dword ptr fs:[0], esp
// 0054b1c5  51                   push ecx
// 0054b1c6  56                   push esi
// 0054b1c7  8bf1                 mov esi, ecx
// 0054b1c9  89742404             mov dword ptr [esp + 4], esi
// 0054b1cd  e89e170800           call 0x5cc970
// 0054b1d2  85f6                 test esi, esi
// 0054b1d4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054b1dc  7405                 je 0x54b1e3
// 0054b1de  8d4614               lea eax, [esi + 0x14]
// 0054b1e1  eb02                 jmp 0x54b1e5
// 0054b1e3  33c0                 xor eax, eax
// 0054b1e5  50                   push eax
// 0054b1e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054b1ea  6a00                 push 0
// 0054b1ec  6a00                 push 0
// 0054b1ee  6a01                 push 1
// 0054b1f0  50                   push eax
// 0054b1f1  8bce                 mov ecx, esi
// 0054b1f3  e888180800           call 0x5cca80
// 0054b1f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b1fc  8bc6                 mov eax, esi
// 0054b1fe  5e                   pop esi
// 0054b1ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b206  83c410               add esp, 0x10
// 0054b209  c20400               ret 4

struct S_0054b1b0
{
    char pad0[0x14];
    int field14;
    void method_0054b1b0(int arg);
};

extern "C" void __stdcall func_005cc970(int);
extern "C" void __stdcall func_005cca80(int, int, int, int, int, int);

void S_0054b1b0::method_0054b1b0(int arg)
{
    func_005cc970(0);
    int* p = (this != 0) ? &field14 : 0;
    func_005cca80(arg, 1, 0, 0, (int)p, 0);
}
