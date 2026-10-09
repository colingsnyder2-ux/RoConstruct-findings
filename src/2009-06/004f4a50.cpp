// roc 2009-06 004f4a50  unit: Exposer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4a50
//
// 004f4a50  8b442404             mov eax, dword ptr [esp + 4]
// 004f4a54  56                   push esi
// 004f4a55  8bf1                 mov esi, ecx
// 004f4a57  68ff000000           push 0xff
// 004f4a5c  50                   push eax
// 004f4a5d  8d4e0a               lea ecx, [esi + 0xa]
// 004f4a60  51                   push ecx
// 004f4a61  ff1590e88900         call dword ptr [0x89e890]
// 004f4a67  83c40c               add esp, 0xc
// 004f4a6a  c6860901000000       mov byte ptr [esi + 0x109], 0
// 004f4a71  5e                   pop esi
// 004f4a72  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX00000a@@QAEXPBD@Z)

namespace ns_ROCX00000a {
extern "C" char* (__cdecl *strncpy)(char* dest, const char* src, unsigned int count);

struct Exposer {
    char pad[0x0a];
    char buf[0xff];
    char flag;
    void set(const char* src);
};

void Exposer::set(const char* src) {
    strncpy(this->buf, src, 0xff);
    this->flag = 0;
}
}
