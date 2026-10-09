// from server: 56% by colin
// roc 2007-08 0054b030  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b030
//
// 0054b030  6aff                 push -1
// 0054b032  6808247500           push 0x752408
// 0054b037  64a100000000         mov eax, dword ptr fs:[0]
// 0054b03d  50                   push eax
// 0054b03e  64892500000000       mov dword ptr fs:[0], esp
// 0054b045  51                   push ecx
// 0054b046  56                   push esi
// 0054b047  8bf1                 mov esi, ecx
// 0054b049  89742404             mov dword ptr [esp + 4], esi
// 0054b04d  e81e190800           call 0x5cc970
// 0054b052  85f6                 test esi, esi
// 0054b054  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054b05c  7405                 je 0x54b063
// 0054b05e  8d4614               lea eax, [esi + 0x14]
// 0054b061  eb02                 jmp 0x54b065
// 0054b063  33c0                 xor eax, eax
// 0054b065  50                   push eax
// 0054b066  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054b06a  6a00                 push 0
// 0054b06c  6a00                 push 0
// 0054b06e  6a00                 push 0
// 0054b070  50                   push eax
// 0054b071  8bce                 mov ecx, esi
// 0054b073  e8081a0800           call 0x5cca80
// 0054b078  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b07c  8bc6                 mov eax, esi
// 0054b07e  5e                   pop esi
// 0054b07f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b086  83c410               add esp, 0x10
// 0054b089  c20400               ret 4

extern "C" void __stdcall sub_005cc970(int);
extern "C" void __stdcall sub_005cca80(int, int, int, int, int, int);

struct S_func_0054b030
{
    char pad[0x14];
    int field_14;
    void func(int);
};

void S_func_0054b030::func(int a)
{
    sub_005cc970(0);
    int* p = (this != 0) ? &field_14 : 0;
    sub_005cca80((int)this, a, 0, 0, 0, (int)p);
}
