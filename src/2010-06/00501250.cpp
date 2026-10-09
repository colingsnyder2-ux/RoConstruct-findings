// roc 2010-06 00501250  unit: Exposer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501250
//
// 00501250  8b442404             mov eax, dword ptr [esp + 4]
// 00501254  56                   push esi
// 00501255  8bf1                 mov esi, ecx
// 00501257  68ff000000           push 0xff
// 0050125c  50                   push eax
// 0050125d  8d4e0a               lea ecx, [esi + 0xa]
// 00501260  51                   push ecx
// 00501261  ff157ca79e00         call dword ptr [0x9ea77c]
// 00501267  83c40c               add esp, 0xc
// 0050126a  c6860901000000       mov byte ptr [esi + 0x109], 0
// 00501271  5e                   pop esi
// 00501272  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX000005@@QAEXPBD@Z)

namespace ns_ROCX000005 {
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
