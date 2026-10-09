// from server: 80% by colin
// roc 2007-08 00494e20  unit: RBX::Network::VPlayers::?$SignalDesc  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00494e20
//
// 00494e20  56                   push esi
// 00494e21  8bf1                 mov esi, ecx
// 00494e23  8b4610               mov eax, dword ptr [esi + 0x10]
// 00494e26  83c001               add eax, 1
// 00494e29  394608               cmp dword ptr [esi + 8], eax
// 00494e2c  57                   push edi
// 00494e2d  7707                 ja 0x494e36
// 00494e2f  6a01                 push 1
// 00494e31  e8bae7ffff           call 0x4935f0
// 00494e36  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00494e39  037e10               add edi, dword ptr [esi + 0x10]
// 00494e3c  8b4608               mov eax, dword ptr [esi + 8]
// 00494e3f  3bc7                 cmp eax, edi
// 00494e41  7702                 ja 0x494e45
// 00494e43  2bf8                 sub edi, eax
// 00494e45  8b4e04               mov ecx, dword ptr [esi + 4]
// 00494e48  833cb900             cmp dword ptr [ecx + edi*4], 0
// 00494e4c  7510                 jne 0x494e5e
// 00494e4e  6a30                 push 0x30
// 00494e50  e8a1b01900           call 0x62fef6
// 00494e55  8b5604               mov edx, dword ptr [esi + 4]
// 00494e58  83c404               add esp, 4
// 00494e5b  8904ba               mov dword ptr [edx + edi*4], eax
// 00494e5e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00494e62  8b4e04               mov ecx, dword ptr [esi + 4]
// 00494e65  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 00494e68  50                   push eax
// 00494e69  52                   push edx
// 00494e6a  e881f2ffff           call 0x4940f0
// 00494e6f  83461001             add dword ptr [esi + 0x10], 1
// 00494e73  83c408               add esp, 8
// 00494e76  5f                   pop edi
// 00494e77  5e                   pop esi
// 00494e78  c20400               ret 4

struct VPlayers {
    int f(int);
};

extern "C" void __stdcall sub_4935F0(int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_4940F0(void*, int);

int VPlayers::f(int a) {
    if (*(int*)((char*)this + 8) <= *(int*)((char*)this + 0x10) + 1) {
        sub_4935F0(1);
    }
    int edi = *(int*)((char*)this + 0xc) + *(int*)((char*)this + 0x10);
    int eax = *(int*)((char*)this + 8);
    if (eax <= edi) {
        edi -= eax;
    }
    int* ecx = *(int**)((char*)this + 4);
    if (ecx[edi] == 0) {
        void* p = sub_62FEF6(0x30);
        int* edx = *(int**)((char*)this + 4);
        edx[edi] = (int)p;
    }
    int* ecx2 = *(int**)((char*)this + 4);
    int edx2 = ecx2[edi];
    sub_4940F0((void*)edx2, a);
    *(int*)((char*)this + 0x10) += 1;
    return a;
}
