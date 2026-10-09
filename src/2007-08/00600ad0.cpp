// from server: 86% by colin
// roc 2007-08 00600ad0  unit: RBX::VWidget::?$NonFactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00600ad0
//
// 00600ad0  d9ee                 fldz 
// 00600ad2  83ec08               sub esp, 8
// 00600ad5  56                   push esi
// 00600ad6  8bf1                 mov esi, ecx
// 00600ad8  d85630               fcom dword ptr [esi + 0x30]
// 00600adb  dfe0                 fnstsw ax
// 00600add  f6c444               test ah, 0x44
// 00600ae0  7a2d                 jp 0x600b0f
// 00600ae2  d85e34               fcomp dword ptr [esi + 0x34]
// 00600ae5  dfe0                 fnstsw ax
// 00600ae7  f6c444               test ah, 0x44
// 00600aea  7a25                 jp 0x600b11
// 00600aec  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00600aef  85c9                 test ecx, ecx
// 00600af1  741e                 je 0x600b11
// 00600af3  8b01                 mov eax, dword ptr [ecx]
// 00600af5  8b4004               mov eax, dword ptr [eax + 4]
// 00600af8  8d542404             lea edx, [esp + 4]
// 00600afc  52                   push edx
// 00600afd  ffd0                 call eax
// 00600aff  d9442404             fld dword ptr [esp + 4]
// 00600b03  d95e30               fstp dword ptr [esi + 0x30]
// 00600b06  d9442408             fld dword ptr [esp + 8]
// 00600b0a  d95e34               fstp dword ptr [esi + 0x34]
// 00600b0d  eb02                 jmp 0x600b11
// 00600b0f  ddd8                 fstp st(0)
// 00600b11  d94630               fld dword ptr [esi + 0x30]
// 00600b14  8b442410             mov eax, dword ptr [esp + 0x10]
// 00600b18  d918                 fstp dword ptr [eax]
// 00600b1a  d94634               fld dword ptr [esi + 0x34]
// 00600b1d  5e                   pop esi
// 00600b1e  d95804               fstp dword ptr [eax + 4]
// 00600b21  83c408               add esp, 8
// 00600b24  c20400               ret 4

struct VWidget {
    char pad0[0x20];
    void* ptr20;
    char pad24[0xC];
    float f30;
    float f34;
    void getSize(float* out);
};

void VWidget::getSize(float* out)
{
    if (f30 == 0.0f && f34 == 0.0f && ptr20 != 0) {
        void** vtbl = *(void***)ptr20;
        void (*fn)(void*, float*) = (void (*)(void*, float*))vtbl[1];
        float tmp[2];
        fn(ptr20, tmp);
        f30 = tmp[0];
        f34 = tmp[1];
    }
    out[0] = f30;
    out[1] = f34;
}
