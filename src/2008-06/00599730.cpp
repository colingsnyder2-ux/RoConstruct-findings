// from server: 100% by king_originala
// roc 2008-06 00599730  unit: RBX::PartInstance  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599730
//
// 00599730  83ec30               sub esp, 0x30
// 00599733  56                   push esi
// 00599734  8bf1                 mov esi, ecx
// 00599736  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0059973c  50                   push eax
// 0059973d  8d4c2408             lea ecx, [esp + 8]
// 00599741  51                   push ecx
// 00599742  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00599746  e8b5cfedff           call 0x476700
// 0059974b  8d542404             lea edx, [esp + 4]
// 0059974f  52                   push edx
// 00599750  8d8e28020000         lea ecx, [esi + 0x228]
// 00599756  e8a5ed0400           call 0x5e8500
// 0059975b  5e                   pop esi
// 0059975c  83c430               add esp, 0x30
// 0059975f  c20400               ret 4

struct Frame {
    float data[12];
};

struct Device {
    Frame getFrame(int);
};

struct FrameHolder {
    void setFrame(const Frame&);
};

struct S {
    char pad0[0x19c];
    int value;
    char pad1[0x88];
    FrameHolder holder;
    void f(Device*);
};

void S::f(Device* device)
{
    Frame frame = device->getFrame(value);
    holder.setFrame(frame);
}
