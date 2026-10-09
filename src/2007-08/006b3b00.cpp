// from server: 79% by colin
// roc 2007-08 006b3b00  unit: CXTPControlComboBoxGalleryPopupBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3b00
//
// 006b3b00  56                   push esi
// 006b3b01  8bf1                 mov esi, ecx
// 006b3b03  57                   push edi
// 006b3b04  8d4e20               lea ecx, [esi + 0x20]
// 006b3b07  c70604607d00         mov dword ptr [esi], 0x7d6004
// 006b3b0d  e88eacfeff           call 0x69e7a0
// 006b3b12  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b3b16  8b3db8ed7700         mov edi, dword ptr [0x77edb8]
// 006b3b1c  6a15                 push 0x15
// 006b3b1e  894628               mov dword ptr [esi + 0x28], eax
// 006b3b21  ffd7                 call edi
// 006b3b23  6a03                 push 3
// 006b3b25  894604               mov dword ptr [esi + 4], eax
// 006b3b28  ffd7                 call edi
// 006b3b2a  6a02                 push 2
// 006b3b2c  894608               mov dword ptr [esi + 8], eax
// 006b3b2f  ffd7                 call edi
// 006b3b31  6a14                 push 0x14
// 006b3b33  894610               mov dword ptr [esi + 0x10], eax
// 006b3b36  ffd7                 call edi
// 006b3b38  89460c               mov dword ptr [esi + 0xc], eax
// 006b3b3b  b813000000           mov eax, 0x13
// 006b3b40  894618               mov dword ptr [esi + 0x18], eax
// 006b3b43  894614               mov dword ptr [esi + 0x14], eax
// 006b3b46  5f                   pop edi
// 006b3b47  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 006b3b4e  8bc6                 mov eax, esi
// 006b3b50  5e                   pop esi
// 006b3b51  c20400               ret 4

struct CXTPControlComboBoxGalleryPopupBar
{
    void* vtbl;
    int field_04;
    int field_08;
    int field_0c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    char pad_20[0x28 - 0x20];
    int field_28;

    CXTPControlComboBoxGalleryPopupBar* construct(int);
};

extern "C" int __stdcall func_0069e7a0(int);
extern "C" int __stdcall func_0077edb8(int);

extern int dword_007D6004;

CXTPControlComboBoxGalleryPopupBar* CXTPControlComboBoxGalleryPopupBar::construct(int arg)
{
    *(int*)this = (int)&dword_007D6004;
    func_0069e7a0((int)((char*)this + 0x20));
    field_28 = arg;
    field_04 = func_0077edb8(0x15);
    field_08 = func_0077edb8(3);
    field_10 = func_0077edb8(2);
    field_0c = func_0077edb8(0x14);
    field_18 = 0x13;
    field_14 = 0x13;
    field_1c = 0x10;
    return this;
}
