// from server: 100% by king_originala
// roc 2008-06 0064f500  unit: RBX::ImageButton  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f500
//
// 0064f500  6aff                 push -1
// 0064f502  6888827d00           push 0x7d8288
// 0064f507  64a100000000         mov eax, dword ptr fs:[0]
// 0064f50d  50                   push eax
// 0064f50e  64892500000000       mov dword ptr fs:[0], esp
// 0064f515  51                   push ecx
// 0064f516  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064f51a  56                   push esi
// 0064f51b  57                   push edi
// 0064f51c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064f520  50                   push eax
// 0064f521  8bf1                 mov esi, ecx
// 0064f523  57                   push edi
// 0064f524  89742410             mov dword ptr [esp + 0x10], esi
// 0064f528  e8e3fbffff           call 0x64f110
// 0064f52d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064f531  57                   push edi
// 0064f532  51                   push ecx
// 0064f533  8d8e50010000         lea ecx, [esi + 0x150]
// 0064f539  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0064f541  c70624ba8400         mov dword ptr [esi], 0x84ba24
// 0064f547  c7461014ba8400       mov dword ptr [esi + 0x10], 0x84ba14
// 0064f54e  c746140cba8400       mov dword ptr [esi + 0x14], 0x84ba0c
// 0064f555  c7462004ba8400       mov dword ptr [esi + 0x20], 0x84ba04
// 0064f55c  c74624f4b98400       mov dword ptr [esi + 0x24], 0x84b9f4
// 0064f563  c74644e4b98400       mov dword ptr [esi + 0x44], 0x84b9e4
// 0064f56a  c74664d4b98400       mov dword ptr [esi + 0x64], 0x84b9d4
// 0064f571  c78684000000c4b98400 mov dword ptr [esi + 0x84], 0x84b9c4
// 0064f57b  c786a4000000b4b98400 mov dword ptr [esi + 0xa4], 0x84b9b4
// 0064f585  c786c4000000a4b98400 mov dword ptr [esi + 0xc4], 0x84b9a4
// 0064f58f  c786300100009cb98400 mov dword ptr [esi + 0x130], 0x84b99c
// 0064f599  e8421bfbff           call 0x6010e0
// 0064f59e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064f5a2  5f                   pop edi
// 0064f5a3  8bc6                 mov eax, esi
// 0064f5a5  5e                   pop esi
// 0064f5a6  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f5ad  83c410               add esp, 0x10
// 0064f5b0  c20c00               ret 0xc

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
    ~ImageButton();
};

struct ImageState {
    unsigned long data;
    ImageState(void *, void *);
};

struct Button : ImageButton {
    ImageState state;
    Button(void *, void *, void *);
};

Button::Button(void *image, void *verb, void *context)
    : ImageButton(verb, context),
      state(
          (data[0x00 / 4] = 0x84ba24,
           data[0x10 / 4] = 0x84ba14,
           data[0x14 / 4] = 0x84ba0c,
           data[0x20 / 4] = 0x84ba04,
           data[0x24 / 4] = 0x84b9f4,
           data[0x44 / 4] = 0x84b9e4,
           data[0x64 / 4] = 0x84b9d4,
           data[0x84 / 4] = 0x84b9c4,
           data[0xa4 / 4] = 0x84b9b4,
           data[0xc4 / 4] = 0x84b9a4,
           data[0x130 / 4] = 0x84b99c,
           image),
          verb)
{
}
