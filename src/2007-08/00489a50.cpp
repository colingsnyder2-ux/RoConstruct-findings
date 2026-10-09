// from server: 49% by colin
// roc 2007-08 00489a50  unit: RBX::Network::VPlayer::?$Notifier  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489a50
//
// 00489a50  83ec08               sub esp, 8
// 00489a53  53                   push ebx
// 00489a54  55                   push ebp
// 00489a55  c744240800000000     mov dword ptr [esp + 8], 0
// 00489a5d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00489a61  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00489a64  8b28                 mov ebp, dword ptr [eax]
// 00489a66  56                   push esi
// 00489a67  8b742418             mov esi, dword ptr [esp + 0x18]
// 00489a6b  57                   push edi
// 00489a6c  8b7808               mov edi, dword ptr [eax + 8]
// 00489a6f  8b4004               mov eax, dword ptr [eax + 4]
// 00489a72  6a00                 push 0
// 00489a74  6a00                 push 0
// 00489a76  8bce                 mov ecx, esi
// 00489a78  8944241c             mov dword ptr [esp + 0x1c], eax
// 00489a7c  ff1554e57700         call dword ptr [0x77e554]
// 00489a82  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00489a86  8b542414             mov edx, dword ptr [esp + 0x14]
// 00489a8a  51                   push ecx
// 00489a8b  53                   push ebx
// 00489a8c  57                   push edi
// 00489a8d  52                   push edx
// 00489a8e  55                   push ebp
// 00489a8f  8bce                 mov ecx, esi
// 00489a91  e89af7ffff           call 0x489230
// 00489a96  5f                   pop edi
// 00489a97  8bc6                 mov eax, esi
// 00489a99  5e                   pop esi
// 00489a9a  5d                   pop ebp
// 00489a9b  5b                   pop ebx
// 00489a9c  83c408               add esp, 8
// 00489a9f  c3                   ret 

struct Notifier {
    Notifier* sub_489a50(void* arg);
};

extern "C" void __stdcall sub_77e554(int, int);
extern "C" void __cdecl sub_489230(int, int, int, int, int);

Notifier* Notifier::sub_489a50(void* arg) {
    int local = 0;
    int* p = (int*)arg;
    int ebx = p[3];
    int ebp = p[0];
    int edi = p[2];
    int eax = p[1];
    sub_77e554(0, 0);
    sub_489230(ebp, eax, edi, ebx, local);
    return this;
}
