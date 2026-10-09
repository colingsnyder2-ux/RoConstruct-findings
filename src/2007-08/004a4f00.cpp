// from server: 79% by colin
// roc 2007-08 004a4f00  unit: RBX::Network::Server::ClientProxy  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4f00
//
// 004a4f00  53                   push ebx
// 004a4f01  56                   push esi
// 004a4f02  57                   push edi
// 004a4f03  8bf1                 mov esi, ecx
// 004a4f05  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a4f08  6a00                 push 0
// 004a4f0a  8d7e14               lea edi, [esi + 0x14]
// 004a4f0d  57                   push edi
// 004a4f0e  81c1ec000000         add ecx, 0xec
// 004a4f14  e8d7beffff           call 0x4a0df0
// 004a4f19  8b4608               mov eax, dword ptr [esi + 8]
// 004a4f1c  8b981c1e0000         mov ebx, dword ptr [eax + 0x1e1c]
// 004a4f22  8b80181e0000         mov eax, dword ptr [eax + 0x1e18]
// 004a4f28  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a4f2b  8b11                 mov edx, dword ptr [ecx]
// 004a4f2d  8b5234               mov edx, dword ptr [edx + 0x34]
// 004a4f30  6a00                 push 0
// 004a4f32  53                   push ebx
// 004a4f33  50                   push eax
// 004a4f34  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 004a4f3a  6a00                 push 0
// 004a4f3c  6a00                 push 0
// 004a4f3e  50                   push eax
// 004a4f3f  57                   push edi
// 004a4f40  ffd2                 call edx
// 004a4f42  5f                   pop edi
// 004a4f43  c6461000             mov byte ptr [esi + 0x10], 0
// 004a4f47  5e                   pop esi
// 004a4f48  5b                   pop ebx
// 004a4f49  c3                   ret 

struct ClientProxy {
    char pad0[8];
    int field8;
    int fieldC;
    char field10;
    char pad11[3];
    int field14;
    char pad18[0x110];
    int field128;
    void method();
};

extern "C" void __stdcall sub_4A0DF0(int, int*, int);

void ClientProxy::method() {
    int ecx = field8;
    sub_4A0DF0(ecx + 0xec, &field14, 0);
    int eax = field8;
    int ebx = *(int*)(eax + 0x1e1c);
    eax = *(int*)(eax + 0x1e18);
    int* edx = *(int**)fieldC;
    edx = (int*)((char*)edx + 0x34);
    int* fn = *(int**)edx;
    int arg = field128;
    ((void (__stdcall *)(int*, int, int, int, int, int, int))fn)(&field14, arg, 0, 0, eax, ebx, 0);
    field10 = 0;
}
