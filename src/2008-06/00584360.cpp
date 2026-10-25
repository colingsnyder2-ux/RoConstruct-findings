// from server: 100% by king_originala
// roc 2008-06 00584360  unit: RBX::ModelInstance  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584360
//
// 00584360  8b8164ffffff         mov eax, dword ptr [ecx - 0x9c]
// 00584366  56                   push esi
// 00584367  6a00                 push 0
// 00584369  681c7f9400           push 0x947f1c
// 0058436e  8db160feffff         lea esi, [ecx - 0x1a0]
// 00584374  687c909200           push 0x92907c
// 00584379  6a00                 push 0
// 0058437b  50                   push eax
// 0058437c  e845d41100           call 0x6a17c6
// 00584381  83c414               add esp, 0x14
// 00584384  85c0                 test eax, eax
// 00584386  7413                 je 0x58439b
// 00584388  57                   push edi
// 00584389  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 0058438f  8bce                 mov ecx, esi
// 00584391  e83af3ffff           call 0x5836d0
// 00584396  3bc7                 cmp eax, edi
// 00584398  5f                   pop edi
// 00584399  7515                 jne 0x5843b0
// 0058439b  803dd953970000       cmp byte ptr [0x9753d9], 0
// 005843a2  740c                 je 0x5843b0
// 005843a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005843a8  51                   push ecx
// 005843a9  8bce                 mov ecx, esi
// 005843ab  e8f0460800           call 0x608aa0
// 005843b0  5e                   pop esi
// 005843b1  c20400               ret 4

extern "C" void* __cdecl sub_6a17c6(void*, int, const void*, const void*, int);

struct Model {
    char pad[0x104];
    void* field_104;
    void* sub_5836d0();
    void sub_608aa0(int);
};

struct S {
    void method(int);
};

void S::method(int a) {
    Model* model = (Model*)((char*)this - 0x1a0);
    if (sub_6a17c6(model->field_104, 0,
                  (const void*)0x92907c, (const void*)0x947f1c, 0)) {
        void* previous = model->field_104;
        if (model->sub_5836d0() != previous)
            return;
    }
    if (*(unsigned char*)0x9753d9)
        model->sub_608aa0(a);
}
