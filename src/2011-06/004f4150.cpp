// from server: 82% by atomic.potato
// roc 2011-06 004f4150  unit: RBX::Network::IdSerializer  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4150
//
// 004f4150  8b542408             mov edx, dword ptr [esp + 8]
// 004f4154  83ec08               sub esp, 8
// 004f4157  8d0424               lea eax, [esp]
// 004f415a  50                   push eax
// 004f415b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f415f  52                   push edx
// 004f4160  50                   push eax
// 004f4161  e8fae6ffff           call 0x4f2860
// 004f4166  83c408               add esp, 8
// 004f4169  c20800               ret 8

extern "C" void __stdcall sub_4f2860(int, int, int*);

struct S {
    void f(int, int);
};

void S::f(int a, int b) {
    int tmp[2];
    sub_4f2860(b, a, tmp);
}
