// roc 2007-03 0062f700  unit: seg_00620000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f700
//
// 0062f700  56                   push esi
// 0062f701  8bf1                 mov esi, ecx
// 0062f703  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0062f70a  7519                 jne 0x62f725
// 0062f70c  8d8edc000000         lea ecx, [esi + 0xdc]
// 0062f712  ff1528db7700         call dword ptr [0x77db28]
// 0062f718  84c0                 test al, al
// 0062f71a  7409                 je 0x62f725
// 0062f71c  83be48010000ff       cmp dword ptr [esi + 0x148], -1
// 0062f723  7436                 je 0x62f75b
// 0062f725  68ac497800           push 0x7849ac
// 0062f72a  8d8edc000000         lea ecx, [esi + 0xdc]
// 0062f730  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0062f73a  ff1524dd7700         call dword ptr [0x77dd24]
// 0062f740  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0062f746  c78648010000ffffffff mov dword ptr [esi + 0x148], 0xffffffff
// 0062f750  8b01                 mov eax, dword ptr [ecx]
// 0062f752  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 0062f758  5e                   pop esi
// 0062f759  ffe2                 jmp edx
// 0062f75b  5e                   pop esi
// 0062f75c  c3                   ret 
// copied from an identical function in another client (function ?func@CRobloxControlColorSelector@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
struct CRobloxControlColorSelector {
    char pad[0x90];
    int field_90;
    char pad2[0xdc - 0x94];
    char field_dc[0xfc - 0xdc];
    void* field_fc;
    char pad3[0x148 - 0x100];
    int field_148;
    void func();
};

extern "C" char (__thiscall *sub_77dcd0)(void*);
extern "C" void (__thiscall *sub_77dd6c)(void*, const char*);
extern char sub_785954;

void CRobloxControlColorSelector::func()
{
    if (field_90 == 0) {
        if (sub_77dcd0(field_dc) != 0) {
            if (field_148 == -1) {
                return;
            }
        }
    }
    field_90 = 0;
    sub_77dd6c(field_dc, &sub_785954);
    field_148 = -1;
    void* p = field_fc;
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x17c / 4];
    fn(p);
}
}
