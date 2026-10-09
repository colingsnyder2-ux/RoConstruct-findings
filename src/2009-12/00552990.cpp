// roc 2009-12 00552990  unit: Exposer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552990
//
// 00552990  8b442404             mov eax, dword ptr [esp + 4]
// 00552994  56                   push esi
// 00552995  8bf1                 mov esi, ecx
// 00552997  68ff000000           push 0xff
// 0055299c  50                   push eax
// 0055299d  8d8e0a010000         lea ecx, [esi + 0x10a]
// 005529a3  51                   push ecx
// 005529a4  ff1580b89800         call dword ptr [0x98b880]
// 005529aa  83c40c               add esp, 0xc
// 005529ad  c6860902000000       mov byte ptr [esi + 0x209], 0
// 005529b4  5e                   pop esi
// 005529b5  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX00000a@@QAEXPBD@Z)

namespace ns_ROCX00000a {
extern "C" char* (__cdecl *strncpy)(char* dest, const char* src, unsigned int count);

struct Exposer {
    char pad[0x10a];
    char buf[0xff];
    char flag;
    void set(const char* src);
};

void Exposer::set(const char* src) {
    strncpy(this->buf, src, 0xff);
    this->flag = 0;
}
}
