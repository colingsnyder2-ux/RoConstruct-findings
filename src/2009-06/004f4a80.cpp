// roc 2009-06 004f4a80  unit: Exposer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4a80
//
// 004f4a80  8b442404             mov eax, dword ptr [esp + 4]
// 004f4a84  56                   push esi
// 004f4a85  8bf1                 mov esi, ecx
// 004f4a87  68ff000000           push 0xff
// 004f4a8c  50                   push eax
// 004f4a8d  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004f4a93  51                   push ecx
// 004f4a94  ff1590e88900         call dword ptr [0x89e890]
// 004f4a9a  83c40c               add esp, 0xc
// 004f4a9d  c6860902000000       mov byte ptr [esi + 0x209], 0
// 004f4aa4  5e                   pop esi
// 004f4aa5  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX00000b@@QAEXPBD@Z)

namespace ns_ROCX00000b {
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
