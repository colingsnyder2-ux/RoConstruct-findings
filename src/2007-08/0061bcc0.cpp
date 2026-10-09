// from server: 64% by colin
// roc 2007-08 0061bcc0  unit: RBX::ImageKeyButton  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bcc0
//
// 0061bcc0  83ec10               sub esp, 0x10
// 0061bcc3  56                   push esi
// 0061bcc4  8bf1                 mov esi, ecx
// 0061bcc6  8b06                 mov eax, dword ptr [esi]
// 0061bcc8  8b5058               mov edx, dword ptr [eax + 0x58]
// 0061bccb  ffd2                 call edx
// 0061bccd  84c0                 test al, al
// 0061bccf  743c                 je 0x61bd0d
// 0061bcd1  80be0401000000       cmp byte ptr [esi + 0x104], 0
// 0061bcd8  b802000000           mov eax, 2
// 0061bcdd  7506                 jne 0x61bce5
// 0061bcdf  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0061bce5  50                   push eax
// 0061bce6  8d442408             lea eax, [esp + 8]
// 0061bcea  50                   push eax
// 0061bceb  8bce                 mov ecx, esi
// 0061bced  e8be98f3ff           call 0x5555b0
// 0061bcf2  8b16                 mov edx, dword ptr [esi]
// 0061bcf4  50                   push eax
// 0061bcf5  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0061bcf8  8bce                 mov ecx, esi
// 0061bcfa  ffd0                 call eax
// 0061bcfc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061bd00  50                   push eax
// 0061bd01  51                   push ecx
// 0061bd02  8d8e08010000         lea ecx, [esi + 0x108]
// 0061bd08  e85355feff           call 0x601260
// 0061bd0d  5e                   pop esi
// 0061bd0e  83c410               add esp, 0x10
// 0061bd11  c20400               ret 4

struct ImageKeyButton {
    void render3dAdorn(int);
};

extern "C" int __stdcall sub_5555B0(int, void*);
extern "C" int __stdcall sub_601260(void*, int, int);

void ImageKeyButton::render3dAdorn(int a)
{
    if (((unsigned char (__thiscall *)(void))*(void**)(*(int*)this + 0x58))()) {
        int v;
        if (*(unsigned char*)((char*)this + 0x104) != 0)
            v = 2;
        else
            v = *(int*)((char*)this + 0xfc);
        sub_5555B0(v, &v);
        int r = ((int (__thiscall *)(void))*(void**)(*(int*)this + 0x7c))();
        sub_601260((char*)this + 0x108, r, a);
    }
}
