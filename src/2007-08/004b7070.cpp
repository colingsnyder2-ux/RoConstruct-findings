// from server: 100% by colin
// roc 2007-08 004b7070  unit: Exposer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7070
//
// 004b7070  8b442404             mov eax, dword ptr [esp + 4]
// 004b7074  56                   push esi
// 004b7075  8bf1                 mov esi, ecx
// 004b7077  68ff000000           push 0xff
// 004b707c  50                   push eax
// 004b707d  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004b7083  51                   push ecx
// 004b7084  ff1578e97700         call dword ptr [0x77e978]
// 004b708a  83c40c               add esp, 0xc
// 004b708d  c6860902000000       mov byte ptr [esi + 0x209], 0
// 004b7094  5e                   pop esi
// 004b7095  c20400               ret 4

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
