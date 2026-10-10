// from server: 87% by colin
// roc 2007-08 00776ac0  unit: seg_00770000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776ac0
//
// 00776ac0  6854597800           push 0x785954
// 00776ac5  b944938c00           mov ecx, 0x8c9344
// 00776aca  ff15b8dd7700         call dword ptr [0x77ddb8]
// 00776ad0  68e0cc7700           push 0x77cce0
// 00776ad5  e849a2ebff           call 0x630d23
// 00776ada  59                   pop ecx
// 00776adb  c3                   ret

struct S {
    void f();
};

extern "C" void __fastcall sub_77DDB8(int ecx, int edx);
extern "C" void __cdecl sub_630D23(void* p);

void S::f()
{
    sub_77DDB8(0x8C9344, 0x785954);
    sub_630D23((void*)0x77CCE0);
}
