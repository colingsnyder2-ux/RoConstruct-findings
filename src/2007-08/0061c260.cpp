// from server: 18% by colin
// roc 2007-08 0061c260  unit: RBX::ImageKeyButton  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c260
//
// 0061c260  6aff                 push -1
// 0061c262  6808c77500           push 0x75c708
// 0061c267  64a100000000         mov eax, dword ptr fs:[0]
// 0061c26d  50                   push eax
// 0061c26e  64892500000000       mov dword ptr fs:[0], esp
// 0061c275  51                   push ecx
// 0061c276  56                   push esi
// 0061c277  8bf1                 mov esi, ecx
// 0061c279  89742404             mov dword ptr [esp + 4], esi
// 0061c27d  8d8e08010000         lea ecx, [esi + 0x108]
// 0061c283  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061c28b  e81009f8ff           call 0x59cba0
// 0061c290  8bce                 mov ecx, esi
// 0061c292  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061c29a  e8c10cdfff           call 0x40cf60
// 0061c29f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061c2a3  5e                   pop esi
// 0061c2a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0061c2ab  83c410               add esp, 0x10
// 0061c2ae  c3                   ret 

struct ImageKeyButton
{
    char pad[0x108];
    int field_108;
    void sub_59cba0();
    void sub_40cf60();
    void destroy();
};

void ImageKeyButton::destroy()
{
    sub_59cba0();
    sub_40cf60();
}
