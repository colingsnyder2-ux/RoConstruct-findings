// from server: 100% by colin
// roc 2007-08 00632e00  unit: PAVCXTPToolBar::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632e00
//
// 00632e00  56                   push esi
// 00632e01  8bf1                 mov esi, ecx
// 00632e03  e832551000           call 0x73833a
// 00632e08  8d4e24               lea ecx, [esi + 0x24]
// 00632e0b  e870ffffff           call 0x632d80
// 00632e10  8b442408             mov eax, dword ptr [esp + 8]
// 00632e14  894620               mov dword ptr [esi + 0x20], eax
// 00632e17  c70664517c00         mov dword ptr [esi], 0x7c5164
// 00632e1d  8bc6                 mov eax, esi
// 00632e1f  5e                   pop esi
// 00632e20  c20400               ret 4

struct PAVCXTPToolBar_CArray {
    void construct_sub();
    void construct_base();
    PAVCXTPToolBar_CArray* init(int arg);
};

extern "C" void __fastcall sub_73833a(void* p);
extern "C" void __fastcall sub_632d80(void* p);

PAVCXTPToolBar_CArray* PAVCXTPToolBar_CArray::init(int arg) {
    sub_73833a(this);
    sub_632d80((char*)this + 0x24);
    *(int*)((char*)this + 0x20) = arg;
    *(int*)this = 0x7c5164;
    return this;
}
