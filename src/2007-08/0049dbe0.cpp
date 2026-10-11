// from server: 91% by atomic.potato
// roc 2007-08 0049dbe0  unit: RBX::Network::Server::ClientProxy  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049dbe0
//
// 0049dbe0  8b442408             mov eax, dword ptr [esp + 8]
// 0049dbe4  83f802               cmp eax, 2
// 0049dbe7  56                   push esi
// 0049dbe8  7518                 jne 0x49dc02
// 0049dbea  8b742408             mov esi, dword ptr [esp + 8]
// 0049dbee  56                   push esi
// 0049dbef  b9d8058900           mov ecx, 0x8905d8
// 0049dbf4  ff1508e77700         call dword ptr [0x77e708]
// 0049dbfa  f6d8                 neg al
// 0049dbfc  1bc0                 sbb eax, eax
// 0049dbfe  23c6                 and eax, esi
// 0049dc00  5e                   pop esi
// 0049dc01  c3                   ret 
// 0049dc02  85c0                 test eax, eax
// 0049dc04  751b                 jne 0x49dc21
// 0049dc06  6a48                 push 0x48
// 0049dc08  e8e9221900           call 0x62fef6
// 0049dc0d  8bf0                 mov esi, eax
// 0049dc0f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049dc13  50                   push eax
// 0049dc14  56                   push esi
// 0049dc15  e8f6f8ffff           call 0x49d510
// 0049dc1a  83c40c               add esp, 0xc
// 0049dc1d  8bc6                 mov eax, esi
// 0049dc1f  5e                   pop esi
// 0049dc20  c3                   ret 
// 0049dc21  8b742408             mov esi, dword ptr [esp + 8]
// 0049dc25  8d4e04               lea ecx, [esi + 4]
// 0049dc28  e853e9ffff           call 0x49c580
// 0049dc2d  56                   push esi
// 0049dc2e  e82f201900           call 0x62fc62
// 0049dc33  83c404               add esp, 4
// 0049dc36  33c0                 xor eax, eax
// 0049dc38  5e                   pop esi
// 0049dc39  c3                   ret 

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_49D510(void*, void*);
extern "C" void __cdecl sub_49C580(void*);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_8905D8;
extern bool (__thiscall *pfn_77E708)(const type_info&, const type_info&);

struct ClientProxy {
    void* f0;
    void* f4;
};

void* __cdecl ClientProxy_alloc();

void* __cdecl func(unsigned int a, void* b)
{
    if (a == 2) {
        void* p = b;
        bool r = pfn_77E708(type_info_8905D8, *(type_info*)p);
        return r ? p : 0;
    }
    if (a == 0) {
        void* p = sub_62FEF6(0x48);
        sub_49D510(p, b);
        return p;
    }
    ClientProxy* p = (ClientProxy*)b;
    sub_49C580((char*)p + 4);
    sub_62FC62(p);
    return 0;
}
