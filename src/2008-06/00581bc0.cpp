// from server: 64% by colin
// roc 2008-06 00581bc0  unit: RBX::CameraModelViewCommand  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581bc0
//
// 00581bc0  56                   push esi
// 00581bc1  8bf1                 mov esi, ecx
// 00581bc3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00581bc6  8d81d4020000         lea eax, [ecx + 0x2d4]
// 00581bcc  50                   push eax
// 00581bcd  e8be3c0200           call 0x5a5890
// 00581bd2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00581bd5  6a0b                 push 0xb
// 00581bd7  51                   push ecx
// 00581bd8  e8d3ebffff           call 0x5807b0
// 00581bdd  83c404               add esp, 4
// 00581be0  8bc8                 mov ecx, eax
// 00581be2  e839bc0300           call 0x5bd820
// 00581be7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581beb  8b11                 mov edx, dword ptr [ecx]
// 00581bed  5e                   pop esi
// 00581bee  c744240401000000     mov dword ptr [esp + 4], 1
// 00581bf6  8b02                 mov eax, dword ptr [edx]
// 00581bf8  ffe0                 jmp eax

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_005807b0(RBX::Instance* p);

extern "C" void func_005a5890(void*);
extern "C" void func_005bd820(void*);

struct CameraModelViewCommand {
    char pad[0xc];
    RBX::Instance* instance;
    void execute();
};

void CameraModelViewCommand::execute()
{
    func_005a5890((char*)instance + 0x2d4);
    RBX::ServiceProvider* sp = func_005807b0(instance);
    func_005bd820(sp);
    void** vtbl = *(void***)this;
    *(int*)((char*)this + 4) = 1;
    ((void (*)(void*))vtbl[0])(this);
}
