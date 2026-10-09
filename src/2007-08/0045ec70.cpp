// from server: 77% by colin
// roc 2007-08 0045ec70  unit: Scintilla::CScintillaView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ec70
//
// 0045ec70  8b442404             mov eax, dword ptr [esp + 4]
// 0045ec74  83ec10               sub esp, 0x10
// 0045ec77  56                   push esi
// 0045ec78  50                   push eax
// 0045ec79  8bf1                 mov esi, ecx
// 0045ec7b  e8c6191d00           call 0x630646
// 0045ec80  83f8ff               cmp eax, -1
// 0045ec83  7509                 jne 0x45ec8e
// 0045ec85  0bc0                 or eax, eax
// 0045ec87  5e                   pop esi
// 0045ec88  83c410               add esp, 0x10
// 0045ec8b  c20400               ret 4
// 0045ec8e  6a00                 push 0
// 0045ec90  6a00                 push 0
// 0045ec92  6a00                 push 0
// 0045ec94  56                   push esi
// 0045ec95  8d4c2414             lea ecx, [esp + 0x14]
// 0045ec99  51                   push ecx
// 0045ec9a  6800000150           push 0x50010000
// 0045ec9f  8d4e58               lea ecx, [esi + 0x58]
// 0045eca2  e8f9e4ffff           call 0x45d1a0
// 0045eca7  f7d8                 neg eax
// 0045eca9  1bc0                 sbb eax, eax
// 0045ecab  f7d8                 neg eax
// 0045ecad  83e801               sub eax, 1
// 0045ecb0  5e                   pop esi
// 0045ecb1  83c410               add esp, 0x10
// 0045ecb4  c20400               ret 4

extern "C" int __cdecl sub_630646(int);

struct Inner {
    int method(int, int, int, int, int, int);
};

struct ScintillaView {
    char pad[0x58];
    Inner inner;
    int func(int);
};

int ScintillaView::func(int a)
{
    int local;
    int result = sub_630646(a);
    if (result == -1)
        return 0;
    int r = inner.method(0x50010000, (int)&local, (int)this, 0, 0, 0);
    return (r != 0) ? 0 : -1;
}
