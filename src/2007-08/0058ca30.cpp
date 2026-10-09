// from server: 74% by colin
// roc 2007-08 0058ca30  unit: RBX::SoundChannel  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ca30
//
// 0058ca30  56                   push esi
// 0058ca31  57                   push edi
// 0058ca32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0058ca36  83ffff               cmp edi, -1
// 0058ca39  8bf1                 mov esi, ecx
// 0058ca3b  750a                 jne 0x58ca47
// 0058ca3d  e82ef0ffff           call 0x58ba70
// 0058ca42  5f                   pop edi
// 0058ca43  5e                   pop esi
// 0058ca44  c20400               ret 4
// 0058ca47  85ff                 test edi, edi
// 0058ca49  750a                 jne 0x58ca55
// 0058ca4b  e8e0efffff           call 0x58ba30
// 0058ca50  5f                   pop edi
// 0058ca51  5e                   pop esi
// 0058ca52  c20400               ret 4
// 0058ca55  3bbe20010000         cmp edi, dword ptr [esi + 0x120]
// 0058ca5b  7e18                 jle 0x58ca75
// 0058ca5d  56                   push esi
// 0058ca5e  e84df7ffff           call 0x58c1b0
// 0058ca63  68e8338c00           push 0x8c33e8
// 0058ca68  8bce                 mov ecx, esi
// 0058ca6a  89be20010000         mov dword ptr [esi + 0x120], edi
// 0058ca70  e89b7cebff           call 0x444710
// 0058ca75  5f                   pop edi
// 0058ca76  5e                   pop esi
// 0058ca77  c20400               ret 4

struct SoundChannel {
    char pad[0x120];
    int maxVolume;
    void setVolume(int value);
};

extern "C" void __stdcall sub_58BA70();
extern "C" void __stdcall sub_58BA30();
extern "C" void __stdcall sub_58C1B0();
extern "C" void __stdcall sub_444710();

void SoundChannel::setVolume(int value) {
    if (value == -1) {
        sub_58BA70();
        return;
    }
    if (value == 0) {
        sub_58BA30();
        return;
    }
    if (value > maxVolume) {
        sub_58C1B0();
        sub_444710();
        maxVolume = value;
    }
}
