// roc 2010-06 00501280  unit: Exposer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501280
//
// 00501280  8b442404             mov eax, dword ptr [esp + 4]
// 00501284  56                   push esi
// 00501285  8bf1                 mov esi, ecx
// 00501287  68ff000000           push 0xff
// 0050128c  50                   push eax
// 0050128d  8d8e0a010000         lea ecx, [esi + 0x10a]
// 00501293  51                   push ecx
// 00501294  ff157ca79e00         call dword ptr [0x9ea77c]
// 0050129a  83c40c               add esp, 0xc
// 0050129d  c6860902000000       mov byte ptr [esi + 0x209], 0
// 005012a4  5e                   pop esi
// 005012a5  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX000006@@QAEXPBD@Z)

namespace ns_ROCX000006 {
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
