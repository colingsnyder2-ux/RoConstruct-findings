// from server: 75% by colin
// roc 2007-08 0046b760  unit: RBX::LDraw2Lua::LDrawCommand  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046b760
//
// 0046b760  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0046b763  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046b766  56                   push esi
// 0046b767  68b0627900           push 0x7962b0
// 0046b76c  50                   push eax
// 0046b76d  e8aee0ffff           call 0x469820
// 0046b772  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046b776  50                   push eax
// 0046b777  688c627900           push 0x79628c
// 0046b77c  56                   push esi
// 0046b77d  e81efcffff           call 0x46b3a0
// 0046b782  83c408               add esp, 8
// 0046b785  8bc8                 mov ecx, eax
// 0046b787  ff15a4e57700         call dword ptr [0x77e5a4]
// 0046b78d  50                   push eax
// 0046b78e  e80dfcffff           call 0x46b3a0
// 0046b793  6868637900           push 0x796368
// 0046b798  56                   push esi
// 0046b799  e802fcffff           call 0x46b3a0
// 0046b79e  83c410               add esp, 0x10
// 0046b7a1  b001                 mov al, 1
// 0046b7a3  5e                   pop esi
// 0046b7a4  c20400               ret 4

struct LDrawCommand {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    bool emit(int arg);
};

extern "C" int __cdecl sub_469820(int, const char*);
extern "C" int __cdecl sub_46B3A0(int, const char*);
extern "C" int __stdcall sub_77E5A4(int);

bool LDrawCommand::emit(int arg)
{
    int a = fieldC;
    int b = field4;
    int r1 = sub_469820(a, (const char*)0x7962b0);
    int r2 = sub_46B3A0(arg, (const char*)0x79628c);
    int r3 = sub_77E5A4(r2);
    int r4 = sub_46B3A0(r3, (const char*)0x79628c);
    sub_46B3A0(arg, (const char*)0x796368);
    return true;
}
