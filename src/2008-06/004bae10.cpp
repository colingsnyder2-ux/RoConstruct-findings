// roc 2008-06 004bae10  unit: Exposer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bae10
//
// 004bae10  8b442404             mov eax, dword ptr [esp + 4]
// 004bae14  56                   push esi
// 004bae15  8bf1                 mov esi, ecx
// 004bae17  68ff000000           push 0xff
// 004bae1c  50                   push eax
// 004bae1d  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004bae23  51                   push ecx
// 004bae24  ff1548288000         call dword ptr [0x802848]
// 004bae2a  83c40c               add esp, 0xc
// 004bae2d  c6860902000000       mov byte ptr [esi + 0x209], 0
// 004bae34  5e                   pop esi
// 004bae35  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX000002@@QAEXPBD@Z)

namespace ns_ROCX000002 {
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
