// from server: 100% by king_originala
// roc 2008-06 0064f110  unit: RBX::ImageButton  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f110
//
// 0064f110  6aff                 push -1
// 0064f112  6888827d00           push 0x7d8288
// 0064f117  64a100000000         mov eax, dword ptr fs:[0]
// 0064f11d  50                   push eax
// 0064f11e  64892500000000       mov dword ptr fs:[0], esp
// 0064f125  51                   push ecx
// 0064f126  56                   push esi
// 0064f127  8bf1                 mov esi, ecx
// 0064f129  89742404             mov dword ptr [esp + 4], esi
// 0064f12d  e87e31ffff           call 0x6422b0
// 0064f132  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064f136  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064f13a  33c0                 xor eax, eax
// 0064f13c  898e48010000         mov dword ptr [esi + 0x148], ecx
// 0064f142  52                   push edx
// 0064f143  8bce                 mov ecx, esi
// 0064f145  89442414             mov dword ptr [esp + 0x14], eax
// 0064f149  c7060cb78400         mov dword ptr [esi], 0x84b70c
// 0064f14f  c74610fcb68400       mov dword ptr [esi + 0x10], 0x84b6fc
// 0064f156  c74614f4b68400       mov dword ptr [esi + 0x14], 0x84b6f4
// 0064f15d  c74620ecb68400       mov dword ptr [esi + 0x20], 0x84b6ec
// 0064f164  c74624dcb68400       mov dword ptr [esi + 0x24], 0x84b6dc
// 0064f16b  c74644ccb68400       mov dword ptr [esi + 0x44], 0x84b6cc
// 0064f172  c74664bcb68400       mov dword ptr [esi + 0x64], 0x84b6bc
// 0064f179  c78684000000acb68400 mov dword ptr [esi + 0x84], 0x84b6ac
// 0064f183  c786a40000009cb68400 mov dword ptr [esi + 0xa4], 0x84b69c
// 0064f18d  c786c40000008cb68400 mov dword ptr [esi + 0xc4], 0x84b68c
// 0064f197  c7863001000084b68400 mov dword ptr [esi + 0x130], 0x84b684
// 0064f1a1  88864c010000         mov byte ptr [esi + 0x14c], al
// 0064f1a7  e8e4bdf0ff           call 0x55af90
// 0064f1ac  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064f1b0  8bc6                 mov eax, esi
// 0064f1b2  5e                   pop esi
// 0064f1b3  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f1ba  83c410               add esp, 0x10
// 0064f1bd  c20800               ret 8

struct VerbWidget {
    unsigned long data[0x148 / 4];

    VerbWidget();
    ~VerbWidget();
    void setVerb(void *);
};

struct ImageButton : VerbWidget {
    void *owner;
    unsigned char active;

    ImageButton(void *, void *);
};

ImageButton::ImageButton(void *verb, void *context)
    : VerbWidget(), owner(context)
{
    data[0x00 / 4] = 0x84b70c;
    data[0x10 / 4] = 0x84b6fc;
    data[0x14 / 4] = 0x84b6f4;
    data[0x20 / 4] = 0x84b6ec;
    data[0x24 / 4] = 0x84b6dc;
    data[0x44 / 4] = 0x84b6cc;
    data[0x64 / 4] = 0x84b6bc;
    data[0x84 / 4] = 0x84b6ac;
    data[0xa4 / 4] = 0x84b69c;
    data[0xc4 / 4] = 0x84b68c;
    data[0x130 / 4] = 0x84b684;
    active = 0;
    setVerb(verb);
}
