// from server: 100% by colin
// roc 2007-08 004b7040  unit: Exposer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7040
//
// 004b7040  8b442404             mov eax, dword ptr [esp + 4]
// 004b7044  56                   push esi
// 004b7045  8bf1                 mov esi, ecx
// 004b7047  68ff000000           push 0xff
// 004b704c  50                   push eax
// 004b704d  8d4e0a               lea ecx, [esi + 0xa]
// 004b7050  51                   push ecx
// 004b7051  ff1578e97700         call dword ptr [0x77e978]
// 004b7057  83c40c               add esp, 0xc
// 004b705a  c6860901000000       mov byte ptr [esi + 0x109], 0
// 004b7061  5e                   pop esi
// 004b7062  c20400               ret 4

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
