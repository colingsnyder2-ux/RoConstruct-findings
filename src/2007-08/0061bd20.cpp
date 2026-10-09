// from server: 65% by colin
// roc 2007-08 0061bd20  unit: RBX::ImageWidget  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bd20
//
// 0061bd20  83ec10               sub esp, 0x10
// 0061bd23  56                   push esi
// 0061bd24  8bf1                 mov esi, ecx
// 0061bd26  8b06                 mov eax, dword ptr [esi]
// 0061bd28  8b5058               mov edx, dword ptr [eax + 0x58]
// 0061bd2b  ffd2                 call edx
// 0061bd2d  84c0                 test al, al
// 0061bd2f  7429                 je 0x61bd5a
// 0061bd31  6a00                 push 0
// 0061bd33  8d442408             lea eax, [esp + 8]
// 0061bd37  50                   push eax
// 0061bd38  8bce                 mov ecx, esi
// 0061bd3a  e87198f3ff           call 0x5555b0
// 0061bd3f  8b16                 mov edx, dword ptr [esi]
// 0061bd41  50                   push eax
// 0061bd42  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0061bd45  8bce                 mov ecx, esi
// 0061bd47  ffd0                 call eax
// 0061bd49  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061bd4d  50                   push eax
// 0061bd4e  51                   push ecx
// 0061bd4f  8d8e00010000         lea ecx, [esi + 0x100]
// 0061bd55  e80655feff           call 0x601260
// 0061bd5a  5e                   pop esi
// 0061bd5b  83c410               add esp, 0x10
// 0061bd5e  c20400               ret 4

struct ImageWidget {
    virtual bool isEnabled();
    void updateWidget(int);
};

struct GuiItem {
    void render2d(int);
};

extern "C" void __stdcall sub_5555b0(int, int*);
extern "C" void __stdcall sub_601260(int, int, int);

void ImageWidget::updateWidget(int a)
{
    if (isEnabled()) {
        int local;
        sub_5555b0(0, &local);
        int v = ((int (__thiscall*)(ImageWidget*))*(int*)(*(int*)this + 0x7c))(this);
        sub_601260((int)((char*)this + 0x100), a, v);
    }
}
