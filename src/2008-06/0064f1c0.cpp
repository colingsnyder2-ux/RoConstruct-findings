// from server: 100% by king_originala
// roc 2008-06 0064f1c0  unit: RBX::ImageButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f1c0
//
// 0064f1c0  6aff                 push -1
// 0064f1c2  6806567d00           push 0x7d5606
// 0064f1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0064f1cd  50                   push eax
// 0064f1ce  64892500000000       mov dword ptr fs:[0], esp
// 0064f1d5  51                   push ecx
// 0064f1d6  56                   push esi
// 0064f1d7  8bf1                 mov esi, ecx
// 0064f1d9  57                   push edi
// 0064f1da  89742408             mov dword ptr [esp + 8], esi
// 0064f1de  e8cd30ffff           call 0x6422b0
// 0064f1e3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064f1e7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064f1eb  57                   push edi
// 0064f1ec  50                   push eax
// 0064f1ed  8d8e48010000         lea ecx, [esi + 0x148]
// 0064f1f3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0064f1fb  c70614b88400         mov dword ptr [esi], 0x84b814
// 0064f201  c7461004b88400       mov dword ptr [esi + 0x10], 0x84b804
// 0064f208  c74614fcb78400       mov dword ptr [esi + 0x14], 0x84b7fc
// 0064f20f  c74620f4b78400       mov dword ptr [esi + 0x20], 0x84b7f4
// 0064f216  c74624e4b78400       mov dword ptr [esi + 0x24], 0x84b7e4
// 0064f21d  c74644d4b78400       mov dword ptr [esi + 0x44], 0x84b7d4
// 0064f224  c74664c4b78400       mov dword ptr [esi + 0x64], 0x84b7c4
// 0064f22b  c78684000000b4b78400 mov dword ptr [esi + 0x84], 0x84b7b4
// 0064f235  c786a4000000a4b78400 mov dword ptr [esi + 0xa4], 0x84b7a4
// 0064f23f  c786c400000094b78400 mov dword ptr [esi + 0xc4], 0x84b794
// 0064f249  c786300100008cb78400 mov dword ptr [esi + 0x130], 0x84b78c
// 0064f253  e8881efbff           call 0x6010e0
// 0064f258  57                   push edi
// 0064f259  8bce                 mov ecx, esi
// 0064f25b  c644241801           mov byte ptr [esp + 0x18], 1
// 0064f260  e82bbdf0ff           call 0x55af90
// 0064f265  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064f269  5f                   pop edi
// 0064f26a  8bc6                 mov eax, esi
// 0064f26c  5e                   pop esi
// 0064f26d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f274  83c410               add esp, 0x10
// 0064f277  c20800               ret 8

struct VerbWidget {
    unsigned long data[0x148 / 4];

    VerbWidget();
    ~VerbWidget();
    void setVerb(void *);
};

struct ImageState {
    ImageState(void *, void *);
    ~ImageState();
};

struct ImageButton : VerbWidget {
    ImageState image;

    ImageButton(void *, void *);
};

ImageButton::ImageButton(void *verb, void *context)
    : VerbWidget(),
      image((
          data[0x00 / 4] = 0x84b814,
          data[0x10 / 4] = 0x84b804,
          data[0x14 / 4] = 0x84b7fc,
          data[0x20 / 4] = 0x84b7f4,
          data[0x24 / 4] = 0x84b7e4,
          data[0x44 / 4] = 0x84b7d4,
          data[0x64 / 4] = 0x84b7c4,
          data[0x84 / 4] = 0x84b7b4,
          data[0xa4 / 4] = 0x84b7a4,
          data[0xc4 / 4] = 0x84b794,
          data[0x130 / 4] = 0x84b78c,
          verb), context)
{
    setVerb(context);
}
