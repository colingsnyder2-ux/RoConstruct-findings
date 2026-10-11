// from server: 100% by colin
// roc 2008-06 005d5d60  unit: RBX::Teams  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5d60
//
// 005d5d60  8b442404             mov eax, dword ptr [esp + 4]
// 005d5d64  6a00                 push 0
// 005d5d66  68ec579400           push 0x9457ec
// 005d5d6b  687c909200           push 0x92907c
// 005d5d70  6a00                 push 0
// 005d5d72  50                   push eax
// 005d5d73  e84eba0c00           call 0x6a17c6
// 005d5d78  83c414               add esp, 0x14
// 005d5d7b  f7d8                 neg eax
// 005d5d7d  1bc0                 sbb eax, eax
// 005d5d7f  f7d8                 neg eax
// 005d5d81  c20400               ret 4

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);

struct RBX_Teams {
    bool teamExists(int color);
};

bool RBX_Teams::teamExists(int color) {
    int result = sub_6A17C6(color, 0, 0x92907c, 0x9457ec, 0);
    return result != 0;
}
