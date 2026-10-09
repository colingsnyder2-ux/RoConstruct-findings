// from server: 59% by colin
// roc 2007-08 005e1250  unit: RBX::VMotorFeature::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1250
//
// 005e1250  83ec18               sub esp, 0x18
// 005e1253  56                   push esi
// 005e1254  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e1258  8d442404             lea eax, [esp + 4]
// 005e125c  56                   push esi
// 005e125d  50                   push eax
// 005e125e  e87dffffff           call 0x5e11e0
// 005e1263  d90510cf7b00         fld dword ptr [0x7bcf10]
// 005e1269  d85c2410             fcomp dword ptr [esp + 0x10]
// 005e126d  83c408               add esp, 8
// 005e1270  dfe0                 fnstsw ax
// 005e1272  f6c441               test ah, 0x41
// 005e1275  741f                 je 0x5e1296
// 005e1277  d9057c837a00         fld dword ptr [0x7a837c]
// 005e127d  51                   push ecx
// 005e127e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e1282  d91c24               fstp dword ptr [esp]
// 005e1285  56                   push esi
// 005e1286  e825f00100           call 0x6002b0
// 005e128b  84c0                 test al, al
// 005e128d  7507                 jne 0x5e1296
// 005e128f  33c0                 xor eax, eax
// 005e1291  5e                   pop esi
// 005e1292  83c418               add esp, 0x18
// 005e1295  c3                   ret 
// 005e1296  b801000000           mov eax, 1
// 005e129b  5e                   pop esi
// 005e129c  83c418               add esp, 0x18
// 005e129f  c3                   ret 

struct S {
    char pad[0x18];
    bool f(int a);
};

extern float G1;
extern float G2;

extern "C" void __cdecl sub_5e11e0(float* out, int a);
extern "C" bool __cdecl sub_6002b0(int a, float b);

bool S::f(int a)
{
    float local;
    sub_5e11e0(&local, a);
    if (G1 > local)
        return true;
    if (sub_6002b0(a, G2))
        return true;
    return false;
}
