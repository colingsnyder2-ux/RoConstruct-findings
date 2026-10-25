// from server: 100% by tester
// roc 2008-06 00495e80  unit: RBX::VRunService::?$SignalDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495e80
//
// 00495e80  56                   push esi
// 00495e81  8b742408             mov esi, dword ptr [esp + 8]
// 00495e85  56                   push esi
// 00495e86  e8453affff           call 0x4898d0
// 00495e8b  83c404               add esp, 4
// 00495e8e  85c0                 test eax, eax
// 00495e90  7419                 je 0x495eab
// 00495e92  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00495e96  50                   push eax
// 00495e97  56                   push esi
// 00495e98  e833e20000           call 0x4a40d0
// 00495e9d  83c408               add esp, 8
// 00495ea0  84c0                 test al, al
// 00495ea2  7507                 jne 0x495eab
// 00495ea4  b801000000           mov eax, 1
// 00495ea9  5e                   pop esi
// 00495eaa  c3                   ret 
// 00495eab  33c0                 xor eax, eax
// 00495ead  5e                   pop esi
// 00495eae  c3                   ret 






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
