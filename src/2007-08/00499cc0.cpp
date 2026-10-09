// from server: 46% by colin
// roc 2007-08 00499cc0  unit: RBX::Network::Client  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00499cc0
//
// 00499cc0  56                   push esi
// 00499cc1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00499cc5  83c610               add esi, 0x10
// 00499cc8  57                   push edi
// 00499cc9  8bf9                 mov edi, ecx
// 00499ccb  742c                 je 0x499cf9
// 00499ccd  8b0e                 mov ecx, dword ptr [esi]
// 00499ccf  85c9                 test ecx, ecx
// 00499cd1  7409                 je 0x499cdc
// 00499cd3  8b01                 mov eax, dword ptr [ecx]
// 00499cd5  8b5004               mov edx, dword ptr [eax + 4]
// 00499cd8  ffd2                 call edx
// 00499cda  eb05                 jmp 0x499ce1
// 00499cdc  b8c8278800           mov eax, 0x8827c8
// 00499ce1  68f0f88800           push 0x88f8f0
// 00499ce6  8bc8                 mov ecx, eax
// 00499ce8  ff1508e77700         call dword ptr [0x77e708]
// 00499cee  84c0                 test al, al
// 00499cf0  7407                 je 0x499cf9
// 00499cf2  8b36                 mov esi, dword ptr [esi]
// 00499cf4  83c604               add esi, 4
// 00499cf7  eb02                 jmp 0x499cfb
// 00499cf9  33f6                 xor esi, esi
// 00499cfb  8b07                 mov eax, dword ptr [edi]
// 00499cfd  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00499d00  51                   push ecx
// 00499d01  83ec1c               sub esp, 0x1c
// 00499d04  8bcc                 mov ecx, esp
// 00499d06  89642430             mov dword ptr [esp + 0x30], esp
// 00499d0a  50                   push eax
// 00499d0b  ff159ce67700         call dword ptr [0x77e69c]
// 00499d11  8bce                 mov ecx, esi
// 00499d13  e8f8d80000           call 0x4a7610
// 00499d18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499d1c  5f                   pop edi
// 00499d1d  5e                   pop esi
// 00499d1e  c20800               ret 8

struct Client {
    void func_00499cc0(int, int);
};

extern "C" int __stdcall func_004a7610(int, int);
extern "C" int __cdecl func_0077e708();
extern "C" int __cdecl func_0077e69c();

extern int G_func_008827c8;
extern int G_func_0088f8f0;

void Client::func_00499cc0(int a, int b)
{
    int* p = (int*)((char*)&a + 0x10);
    int v;
    if (p != 0) {
        int c = *p;
        if (c != 0) {
            v = (*(int (__thiscall**)(int))(*(int*)c + 4))(c);
        } else {
            v = (int)&G_func_008827c8;
        }
    } else {
        v = 0;
    }
    if (func_0077e708() != 0) {
        v = *p + 4;
    } else {
        v = 0;
    }
    int* q = (int*)((char*)&a + 0x0c);
    int r = *q;
    int s = *(int*)(r + 0x1c);
    func_0077e69c();
    func_004a7610(v, s);
}
