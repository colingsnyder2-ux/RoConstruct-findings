// from server: 100% by king_originala
// roc 2008-06 0048ad90  unit: RBX::Network::P8Player::?$GetSetImpl  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ad90
//
// 0048ad90  64a100000000         mov eax, dword ptr fs:[0]
// 0048ad96  6aff                 push -1
// 0048ad98  68d8f47b00           push 0x7bf4d8
// 0048ad9d  50                   push eax
// 0048ad9e  64892500000000       mov dword ptr fs:[0], esp
// 0048ada5  8b01                 mov eax, dword ptr [ecx]
// 0048ada7  83ec3c               sub esp, 0x3c
// 0048adaa  85c0                 test eax, eax
// 0048adac  7517                 jne 0x48adc5
// 0048adae  8d4c2414             lea ecx, [esp + 0x14]
// 0048adb2  e839f1f7ff           call 0x409ef0
// 0048adb7  50                   push eax
// 0048adb8  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0048adc0  e83bf7f7ff           call 0x40a500
// 0048adc5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0048adc9  52                   push edx
// 0048adca  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0048adce  52                   push edx
// 0048adcf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0048add3  52                   push edx
// 0048add4  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0048add8  52                   push edx
// 0048add9  8b5004               mov edx, dword ptr [eax + 4]
// 0048addc  83c108               add ecx, 8
// 0048addf  51                   push ecx
// 0048ade0  8d4c2414             lea ecx, [esp + 0x14]
// 0048ade4  51                   push ecx
// 0048ade5  ffd2                 call edx
// 0048ade7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0048adeb  8b10                 mov edx, dword ptr [eax]
// 0048aded  8911                 mov dword ptr [ecx], edx
// 0048adef  8b5004               mov edx, dword ptr [eax + 4]
// 0048adf2  895104               mov dword ptr [ecx + 4], edx
// 0048adf5  8b5008               mov edx, dword ptr [eax + 8]
// 0048adf8  895108               mov dword ptr [ecx + 8], edx
// 0048adfb  8b500c               mov edx, dword ptr [eax + 0xc]
// 0048adfe  8b4010               mov eax, dword ptr [eax + 0x10]
// 0048ae01  89510c               mov dword ptr [ecx + 0xc], edx
// 0048ae04  894110               mov dword ptr [ecx + 0x10], eax
// 0048ae07  8bc1                 mov eax, ecx
// 0048ae09  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0048ae0d  83c418               add esp, 0x18
// 0048ae10  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ae17  83c448               add esp, 0x48
// 0048ae1a  c21400               ret 0x14

struct Result
{
    unsigned int a, b, c, d, e;
};

struct Exception
{
    unsigned char data[40];
    Exception();
    ~Exception();
};

__declspec(noreturn) void __cdecl throw_helper(const Exception&);

struct Dispatch
{
    void* manager;
    Result (__cdecl *invoke)(void*, int, int, int, int);
};

struct S
{
    Dispatch* dispatch;
    unsigned int reserved;
    unsigned char storage[1];

    Result f(int a, int b, int c, int d);
};

Result S::f(int a, int b, int c, int d)
{
    if (!dispatch)
        throw_helper(Exception());

    return dispatch->invoke(storage, a, b, c, d);
}
