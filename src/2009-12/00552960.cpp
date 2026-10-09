// roc 2009-12 00552960  unit: Exposer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552960
//
// 00552960  8b442404             mov eax, dword ptr [esp + 4]
// 00552964  56                   push esi
// 00552965  8bf1                 mov esi, ecx
// 00552967  68ff000000           push 0xff
// 0055296c  50                   push eax
// 0055296d  8d4e0a               lea ecx, [esi + 0xa]
// 00552970  51                   push ecx
// 00552971  ff1580b89800         call dword ptr [0x98b880]
// 00552977  83c40c               add esp, 0xc
// 0055297a  c6860901000000       mov byte ptr [esi + 0x109], 0
// 00552981  5e                   pop esi
// 00552982  c20400               ret 4
// copied from an identical function in another client (function ?set@Exposer@ns_ROCX000009@@QAEXPBD@Z)

namespace ns_ROCX000009 {
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
