// from server: 51% by colin
// roc 2007-08 0040a630  unit: VCApp::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a630
//
// 0040a630  83ec10               sub esp, 0x10
// 0040a633  8d0424               lea eax, [esp]
// 0040a636  50                   push eax
// 0040a637  b924be8b00           mov ecx, 0x8bbe24
// 0040a63c  e8bff70100           call 0x429e00
// 0040a641  8d0c24               lea ecx, [esp]
// 0040a644  e817fcffff           call 0x40a260
// 0040a649  33c0                 xor eax, eax
// 0040a64b  83c410               add esp, 0x10
// 0040a64e  c20400               ret 4

struct VCApp_CComObject {
    void sub_40A630(int);
};

extern "C" void __stdcall func_429E00(void*);
extern "C" void __fastcall func_40A260(void*);

void VCApp_CComObject::sub_40A630(int arg)
{
    char buf[16];
    func_429E00(buf);
    func_40A260(buf);
}
