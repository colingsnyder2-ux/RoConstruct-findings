// roc 2008-06 004bade0  unit: Exposer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bade0
//
// 004bade0  8b442404             mov eax, dword ptr [esp + 4]
// 004bade4  56                   push esi
// 004bade5  8bf1                 mov esi, ecx
// 004bade7  68ff000000           push 0xff
// 004badec  50                   push eax
// 004baded  8d4e0a               lea ecx, [esi + 0xa]
// 004badf0  51                   push ecx
// 004badf1  ff1548288000         call dword ptr [0x802848]
// 004badf7  83c40c               add esp, 0xc
// 004badfa  c6860901000000       mov byte ptr [esi + 0x109], 0
// 004bae01  5e                   pop esi
// 004bae02  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX000001@@QAEXPBD@Z)

namespace ns_ROCX000001 {
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
