// from server: 100% by Espeon
// roc 2008-06 00629ac0  unit: RBX::ClickDetector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629ac0
//
// 00629ac0  56                   push esi
// 00629ac1  8bf1                 mov esi, ecx
// 00629ac3  d98644010000         fld dword ptr [esi + 0x144]
// 00629ac9  d85c240c             fcomp dword ptr [esp + 0xc]
// 00629acd  dfe0                 fnstsw ax
// 00629acf  f6c441               test ah, 0x41
// 00629ad2  7548                 jne 0x629b1c
// 00629ad4  80be4801000000       cmp byte ptr [esi + 0x148], 0
// 00629adb  6864bf9700           push 0x97bf64
// 00629ae0  0f94c0               sete al
// 00629ae3  888648010000         mov byte ptr [esi + 0x148], al
// 00629ae9  e81240deff           call 0x40db00
// 00629aee  6a01                 push 1
// 00629af0  56                   push esi
// 00629af1  e8bac3e6ff           call 0x495eb0
// 00629af6  83c408               add esp, 8
// 00629af9  84c0                 test al, al
// 00629afb  741f                 je 0x629b1c
// 00629afd  8d4614               lea eax, [esi + 0x14]
// 00629b00  50                   push eax
// 00629b01  b980bf9700           mov ecx, 0x97bf80
// 00629b06  e8151bf4ff           call 0x56b620
// 00629b0b  85c0                 test eax, eax
// 00629b0d  740d                 je 0x629b1c
// 00629b0f  8d4c240c             lea ecx, [esp + 0xc]
// 00629b13  51                   push ecx
// 00629b14  8d4810               lea ecx, [eax + 0x10]
// 00629b17  e834bee8ff           call 0x4b5950
// 00629b1c  5e                   pop esi
// 00629b1d  c20800               ret 8

// from server: 88% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Signal {
    void emit(float*);
};

struct Connection {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Connection* find(void*);
};

struct Primary {char data[0x14];};
struct Instance {char data[0x130];volatile float threshold;bool flag;};
struct S : Primary, Instance {

    void notify(void*);
    void f(int, float);
};

extern "C" bool __cdecl check(S*, int);

void S::f(int, float value)
{
    if (threshold > value) {
        flag = !flag;
        notify(reinterpret_cast<void*>(0x97bf64));
        if (check(this, 1)) {
            Connection* connection =
                reinterpret_cast<Registry*>(0x97bf80)->find(static_cast<Instance*>(this));
            if (connection)
                connection->signal.emit(&value);
        }
    }
}
