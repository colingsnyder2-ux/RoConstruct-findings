// from server: 59% by colin
// roc 2007-08 004b1360  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1360
//
// 004b1360  8b442404             mov eax, dword ptr [esp + 4]
// 004b1364  83ec0c               sub esp, 0xc
// 004b1367  56                   push esi
// 004b1368  6a00                 push 0
// 004b136a  684cf88800           push 0x88f84c
// 004b136f  689c208800           push 0x88209c
// 004b1374  6a00                 push 0
// 004b1376  50                   push eax
// 004b1377  8bf1                 mov esi, ecx
// 004b1379  e8b8f91700           call 0x630d36
// 004b137e  83c414               add esp, 0x14
// 004b1381  85c0                 test eax, eax
// 004b1383  751e                 jne 0x4b13a3
// 004b1385  68046e7800           push 0x786e04
// 004b138a  8d4c2408             lea ecx, [esp + 8]
// 004b138e  ff1510e77700         call dword ptr [0x77e710]
// 004b1394  680c1e8400           push 0x841e0c
// 004b1399  8d4c2408             lea ecx, [esp + 8]
// 004b139d  51                   push ecx
// 004b139e  e8fbf71700           call 0x630b9e
// 004b13a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b13a7  83c204               add edx, 4
// 004b13aa  52                   push edx
// 004b13ab  50                   push eax
// 004b13ac  8bce                 mov ecx, esi
// 004b13ae  e8fdfeffff           call 0x4b12b0
// 004b13b3  5e                   pop esi
// 004b13b4  83c40c               add esp, 0xc
// 004b13b7  c20800               ret 8

struct S_004b1360 {
    void f(int a, int b);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" void __cdecl func_00630b9e(void*, void*);
extern "C" void __cdecl func_004b12b0(int, int);

struct BadCast {
    void ctor(const char*);
};

extern "C" void __stdcall func_0077e710();

void S_004b1360::f(int a, int b)
{
    int result = func_00630d36(a, 0, 0x88209c, 0x88f84c, 0);
    if (result == 0) {
        char buf[4];
        func_0077e710();
        func_00630b9e(buf, (void*)0x841e0c);
    }
    func_004b12b0(result, b + 4);
}
