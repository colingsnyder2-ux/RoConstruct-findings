// from server: 100% by atomic.potato
// roc 2008-06 004cb170  unit: RBX::Network::RoundRobinPhysicsSender  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb170
//
// 004cb170  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cb174  83f803               cmp eax, 3
// 004cb177  741e                 je 0x4cb197
// 004cb179  8b542408             mov edx, dword ptr [esp + 8]
// 004cb17d  c644240c00           mov byte ptr [esp + 0xc], 0
// 004cb182  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cb186  51                   push ecx
// 004cb187  50                   push eax
// 004cb188  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cb18c  52                   push edx
// 004cb18d  50                   push eax
// 004cb18e  e8cdf1ffff           call 0x4ca360
// 004cb193  83c410               add esp, 0x10
// 004cb196  c3                   ret 
// 004cb197  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cb19b  c70110cd9300         mov dword ptr [ecx], 0x93cd10
// 004cb1a1  c3                   ret 

extern "C" void __cdecl sub_4CA360(int, int, int, int);

void __cdecl sub_4CB170(int a, int b, int c)
{
    if (c != 3)
    {
        char zero = 0;
        sub_4CA360(a, b, c, *(int*)&zero);
        return;
    }
    *(int*)b = 0x93cd10;
}
