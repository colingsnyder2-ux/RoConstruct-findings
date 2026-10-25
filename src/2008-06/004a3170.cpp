// from server: 100% by tester
// roc 2008-06 004a3170  unit: RBX::Network::Server::ClientProxy  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3170
//
// 004a3170  56                   push esi
// 004a3171  8d442408             lea eax, [esp + 8]
// 004a3175  8bf1                 mov esi, ecx
// 004a3177  50                   push eax
// 004a3178  c70600000000         mov dword ptr [esi], 0
// 004a317e  e86d711600           call 0x60a2f0
// 004a3183  83c404               add esp, 4
// 004a3186  84c0                 test al, al
// 004a3188  752e                 jne 0x4a31b8
// 004a318a  8d4608               lea eax, [esi + 8]
// 004a318d  85c0                 test eax, eax
// 004a318f  741b                 je 0x4a31ac
// 004a3191  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a3195  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a3199  8908                 mov dword ptr [eax], ecx
// 004a319b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a319f  895004               mov dword ptr [eax + 4], edx
// 004a31a2  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a31a6  894808               mov dword ptr [eax + 8], ecx
// 004a31a9  89500c               mov dword ptr [eax + 0xc], edx
// 004a31ac  c7061c358200         mov dword ptr [esi], 0x82351c
// 004a31b2  8bc6                 mov eax, esi
// 004a31b4  5e                   pop esi
// 004a31b5  c21400               ret 0x14
// 004a31b8  c70600000000         mov dword ptr [esi], 0
// 004a31be  8bc6                 mov eax, esi
// 004a31c0  5e                   pop esi
// 004a31c1  c21400               ret 0x14

struct Data {
    unsigned long a, b, c, d;
};

struct Argument {
    Data data;
    unsigned long extra;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char tag;

struct S {
    const void *type;
    unsigned long unused;
    Data data;

    S(Argument value);
};

S::S(Argument value)
{
    type = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument *)>(
            &func_0060a2f0)(&value)) {
        Data *destination = &data;
        if (destination)
            *destination = value.data;
        type = &tag;
    } else {
        type = 0;
    }
}
