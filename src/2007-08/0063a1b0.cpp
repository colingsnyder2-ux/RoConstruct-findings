// from server: 100% by colin
// roc 2007-08 0063a1b0  unit: CRobloxControlColorSelector  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a1b0
//
// 0063a1b0  56                   push esi
// 0063a1b1  8bf1                 mov esi, ecx
// 0063a1b3  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0063a1ba  7519                 jne 0x63a1d5
// 0063a1bc  8d8edc000000         lea ecx, [esi + 0xdc]
// 0063a1c2  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0063a1c8  84c0                 test al, al
// 0063a1ca  7409                 je 0x63a1d5
// 0063a1cc  83be48010000ff       cmp dword ptr [esi + 0x148], -1
// 0063a1d3  7436                 je 0x63a20b
// 0063a1d5  6854597800           push 0x785954
// 0063a1da  8d8edc000000         lea ecx, [esi + 0xdc]
// 0063a1e0  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0063a1ea  ff156cdd7700         call dword ptr [0x77dd6c]
// 0063a1f0  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063a1f6  c78648010000ffffffff mov dword ptr [esi + 0x148], 0xffffffff
// 0063a200  8b01                 mov eax, dword ptr [ecx]
// 0063a202  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 0063a208  5e                   pop esi
// 0063a209  ffe2                 jmp edx
// 0063a20b  5e                   pop esi
// 0063a20c  c3                   ret 

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
