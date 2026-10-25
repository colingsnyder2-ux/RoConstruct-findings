// from server: 100% by tester
// roc 2008-06 0058cab0  unit: RBX::ChangeHistoryService  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058cab0
//
// 0058cab0  56                   push esi
// 0058cab1  8bf1                 mov esi, ecx
// 0058cab3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058cab6  ff15fc248000         call dword ptr [0x8024fc]
// 0058cabc  0fbec0               movsx eax, al
// 0058cabf  80b8e094940000       cmp byte ptr [eax + 0x9494e0], 0
// 0058cac6  7426                 je 0x58caee
// 0058cac8  eb06                 jmp 0x58cad0
// 0058caca  8d9b00000000         lea ebx, [ebx]
// 0058cad0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058cad3  ff15f8248000         call dword ptr [0x8024f8]
// 0058cad9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058cadc  ff15fc248000         call dword ptr [0x8024fc]
// 0058cae2  0fbec8               movsx ecx, al
// 0058cae5  80b9e094940000       cmp byte ptr [ecx + 0x9494e0], 0
// 0058caec  75e2                 jne 0x58cad0
// 0058caee  5e                   pop esi
// 0058caef  c3                   ret 

struct StreamBuf {
    int sbumpc();
    int sgetc();
};

struct Verb {
    char pad[4];
    StreamBuf* stream;
    void skipWhitespace();
};

extern "C" int (__stdcall *sbumpc_ptr)();
extern "C" int (__stdcall *sgetc_ptr)();
extern char g_table[];

void Verb::skipWhitespace()
{
    int c = ((int (__thiscall*)(StreamBuf*))sbumpc_ptr)(stream);
    signed char idx = (signed char)c;
    if (g_table[idx] != 0) {
        do {
            ((int (__thiscall*)(StreamBuf*))sgetc_ptr)(stream);
            c = ((int (__thiscall*)(StreamBuf*))sbumpc_ptr)(stream);
            idx = (signed char)c;
        } while (g_table[idx] != 0);
    }
}
