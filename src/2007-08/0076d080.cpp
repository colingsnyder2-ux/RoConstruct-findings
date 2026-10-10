// from server: 99% by colin
// roc 2007-08 0076d080  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d080
//
// 0076d080  56                   push esi
// 0076d081  6a05                 push 5
// 0076d083  33c9                 xor ecx, ecx
// 0076d085  51                   push ecx
// 0076d086  b8e0724400           mov eax, 0x4472e0
// 0076d08b  50                   push eax
// 0076d08c  33f6                 xor esi, esi
// 0076d08e  56                   push esi
// 0076d08f  bac04d4400           mov edx, 0x444dc0
// 0076d094  52                   push edx
// 0076d095  684c017900           push 0x79014c
// 0076d09a  6854017900           push 0x790154
// 0076d09f  b934bc8b00           mov ecx, 0x8bbc34
// 0076d0a4  e8f797cdff           call 0x4468a0
// 0076d0a9  68007c7700           push 0x777c00
// 0076d0ae  e8703cecff           call 0x630d23
// 0076d0b3  83c404               add esp, 4
// 0076d0b6  5e                   pop esi
// 0076d0b7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EpropFullscreenSize@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

extern "C" int __cdecl sub_4468A0(int, int, int, int, int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int __cdecl sub_76D080()
{
    sub_4468A0(0x8bbc34, 0x790154, 0x79014c, 0x444dc0, 0, 0x4472e0, 0, 5);
    sub_630D23(0x777c00);
    return 0;
}
