// from server: 100% by tester
// roc 2008-06 00495eb0  unit: RBX::VRunService::?$SignalDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495eb0
//
// 00495eb0  56                   push esi
// 00495eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00495eb5  56                   push esi
// 00495eb6  e8153affff           call 0x4898d0
// 00495ebb  83c404               add esp, 4
// 00495ebe  85c0                 test eax, eax
// 00495ec0  7419                 je 0x495edb
// 00495ec2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00495ec6  50                   push eax
// 00495ec7  56                   push esi
// 00495ec8  e8539f0000           call 0x49fe20
// 00495ecd  83c408               add esp, 8
// 00495ed0  84c0                 test al, al
// 00495ed2  7507                 jne 0x495edb
// 00495ed4  b801000000           mov eax, 1
// 00495ed9  5e                   pop esi
// 00495eda  c3                   ret 
// 00495edb  33c0                 xor eax, eax
// 00495edd  5e                   pop esi
// 00495ede  c3                   ret 

extern "C" int __cdecl sub_4898d0(int);
extern "C" bool __cdecl sub_4a40d0(int, int);

int sub_495e80(int a, int b)
{
    if (sub_4898d0(a))
    {
        if (!sub_4a40d0(a, b))
            return 1;
    }
    return 0;
}
