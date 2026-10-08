// from server: 85% by colin
// roc 2007-08 00587e60  unit: RBX::VSoundChannel::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587e60
//
// 00587e60  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00587e66  85c0                 test eax, eax
// 00587e68  7426                 je 0x587e90
// 00587e6a  d98108010000         fld dword ptr [ecx + 0x108]
// 00587e70  83ec0c               sub esp, 0xc
// 00587e73  d95c2408             fstp dword ptr [esp + 8]
// 00587e77  d98104010000         fld dword ptr [ecx + 0x104]
// 00587e7d  d95c2404             fstp dword ptr [esp + 4]
// 00587e81  d98100010000         fld dword ptr [ecx + 0x100]
// 00587e87  d91c24               fstp dword ptr [esp]
// 00587e8a  50                   push eax
// 00587e8b  e84e7d0a00           call 0x62fbde
// 00587e90  c20400               ret 4

struct SoundChannel {
    char pad[0xec];
    int fmod_channel;
    char pad2[0x100 - 0xf0];
    float x100;
    float x104;
    float x108;
    void setPosition(int);
};

extern "C" void __stdcall FMOD_Channel_SetPosition(int channel, int pos, float x, float y, float z);

void SoundChannel::setPosition(int pos)
{
    if (fmod_channel) {
        FMOD_Channel_SetPosition(fmod_channel, pos, x100, x104, x108);
    }
}
