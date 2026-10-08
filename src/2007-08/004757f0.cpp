// from server: 90% by colin
// roc 2007-08 004757f0  unit: CInstanceRecord::CNameItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004757f0
//
// 004757f0  56                   push esi
// 004757f1  8bf1                 mov esi, ecx
// 004757f3  8b4634               mov eax, dword ptr [esi + 0x34]
// 004757f6  014678               add dword ptr [esi + 0x78], eax
// 004757f9  014670               add dword ptr [esi + 0x70], eax
// 004757fc  50                   push eax
// 004757fd  8b4630               mov eax, dword ptr [esi + 0x30]
// 00475800  50                   push eax
// 00475801  e82af4ffff           call 0x474c30
// 00475806  ff1584eb7700         call dword ptr [0x77eb84]
// 0047580c  c6861001000000       mov byte ptr [esi + 0x110], 0
// 00475813  8bce                 mov ecx, esi
// 00475815  5e                   pop esi
// 00475816  e955fcffff           jmp 0x475470

struct CNameItem {
    char pad[0x30];
    int field30;
    int field34;
    char pad2[0x38];
    int field70;
    int field74;
    int field78;
    char pad3[0x94];
    unsigned char field110;
    void method();
};

extern "C" void __cdecl sub_474C30(int, int);
extern "C" void __stdcall glEnd(void);
extern "C" void __cdecl sub_475470(void);

void CNameItem::method() {
    int v = field34;
    field78 += v;
    field70 += v;
    sub_474C30(field30, v);
    glEnd();
    field110 = 0;
    sub_475470();
}
