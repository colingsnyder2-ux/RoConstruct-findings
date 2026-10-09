// from server: 57% by colin
// roc 2007-08 0061bd70  unit: RBX::ImageButton  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bd70
//
// 0061bd70  83ec10               sub esp, 0x10
// 0061bd73  56                   push esi
// 0061bd74  8bf1                 mov esi, ecx
// 0061bd76  8b06                 mov eax, dword ptr [esi]
// 0061bd78  8b5058               mov edx, dword ptr [eax + 0x58]
// 0061bd7b  ffd2                 call edx
// 0061bd7d  84c0                 test al, al
// 0061bd7f  742e                 je 0x61bdaf
// 0061bd81  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0061bd87  50                   push eax
// 0061bd88  8d4c2408             lea ecx, [esp + 8]
// 0061bd8c  51                   push ecx
// 0061bd8d  8bce                 mov ecx, esi
// 0061bd8f  e81c98f3ff           call 0x5555b0
// 0061bd94  8b16                 mov edx, dword ptr [esi]
// 0061bd96  50                   push eax
// 0061bd97  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0061bd9a  8bce                 mov ecx, esi
// 0061bd9c  ffd0                 call eax
// 0061bd9e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061bda2  50                   push eax
// 0061bda3  51                   push ecx
// 0061bda4  8d8e04010000         lea ecx, [esi + 0x104]
// 0061bdaa  e8b154feff           call 0x601260
// 0061bdaf  5e                   pop esi
// 0061bdb0  83c410               add esp, 0x10
// 0061bdb3  c20400               ret 4

struct ImageButton {
    char pad[0xfc];
    int field_fc;
    char pad2[0x104 - 0xfc - 4];
    int field_104;
    bool method_58();
    int method_7c(int);
    int method_5555b0(int);
    int method_601260(int, int);
    void func(int);
};

void ImageButton::func(int arg)
{
    if (method_58())
    {
        int v = method_5555b0(field_fc);
        int w = method_7c(v);
        method_601260(arg, w);
    }
}
